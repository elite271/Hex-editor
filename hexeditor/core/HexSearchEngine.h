#ifndef HEXSEARCHENGINE_H
#define HEXSEARCHENGINE_H

#include <QByteArray>
#include <QString>
#include <QVector>

class HexSearchEngine
{
public:
    HexSearchEngine();

    void setPattern(const QByteArray& pattern);

    qint64 findHex(const QByteArray& bytes, qint64 startPos = 0) const;
    qint64 findText(const QString& text, qint64 startPos = 0) const;
    QVector<qint64> findAll(const QByteArray& pattern) const;

private:
    QByteArray searchPattern;
};

#endif // HEXSEARCHENGINE_H
