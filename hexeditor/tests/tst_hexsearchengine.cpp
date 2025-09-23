#include <QtTest>
#include "HexSearchEngine.h"




class TestHexSearchEngine : public QObject
{
    Q_OBJECT

private slots:
    void testSetPattern();
    void testFindHex();
    void testFindText();
    void testFindAll();
};



void TestHexSearchEngine::testSetPattern()
{
    HexSearchEngine engine;
    engine.setPattern(QByteArray::fromHex("DEADBEEF"));
    QCOMPARE(engine.findHex(QByteArray::fromHex("00DEADBEEF11")), qint64(2));
}

void TestHexSearchEngine::testFindHex()
{
    HexSearchEngine engine;
    engine.setPattern(QByteArray::fromHex("AA"));
    QByteArray data = QByteArray::fromHex("00AAFFAA");
    QCOMPARE(engine.findHex(data, 0), qint64(1));
    QCOMPARE(engine.findHex(data, 2), qint64(5));
    QCOMPARE(engine.findHex(data, 6), qint64(-1)); // not found
}

void TestHexSearchEngine::testFindText()
{
    HexSearchEngine engine;
    engine.setPattern("World");
    QByteArray data = "Hello World!";
    QCOMPARE(engine.findText("World"), qint64(6));
}

void TestHexSearchEngine::testFindAll()
{
    HexSearchEngine engine;
    engine.setPattern(QByteArray::fromHex("AA"));
    QByteArray data = QByteArray::fromHex("00AA11AA22");
    QVector<qint64> matches = engine.findAll(data);
    QCOMPARE(matches.size(), 2);
    QCOMPARE(matches[0], qint64(1));
    QCOMPARE(matches[1], qint64(4));
}

QTEST_MAIN(TestHexSearchEngine)
#include "tst_hexsearchengine.moc"