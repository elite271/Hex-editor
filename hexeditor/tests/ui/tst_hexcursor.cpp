#include <QtTest>
#include "HexCursor.h"



class TestHexCursor : public QObject
{
    Q_OBJECT

private slots:
  
  void testpositionByte();
  void testpositionNibble();
  void testanchor();
  void testmode();
  void testmoveLeft();
  void testmoveRight();
  void testmoveUp();
  void testmoveDown();
  void testhasSelection();
};



void TestHexCursor::testpositionByte()
{
  HexCursor hexcursor;

}


void TestHexCursor::testpositionNibble()
{
  HexCursor hexcursor;
}


void TestHexCursor::testanchor()
{
  HexCursor hexcursor;
}


void TestHexCursor::testmode()
{
  HexCursor hexcursor;
}

  
void TestHexCursor::testmoveLeft()
{
  HexCursor hexcursor;
}


void TestHexCursor::testmoveRight()
{
  HexCursor hexcursor;
}


void TestHexCursor::testmoveUp()
{
  HexCursor hexcursor;
}


void TestHexCursor::testmoveDown()
{
  HexCursor hexcursor;
}


void TestHexCursor::testhasSelection()
{
  HexCursor hexcursor;
}


QTEST_MAIN(TestHexCursor)
#include "tst_hexcursor.moc"