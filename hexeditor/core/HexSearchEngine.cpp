#include "HexSearchEngine.h"



HexSearchEngine::HexSearchEngine()
{

}


void HexSearchEngine::setPattern(const QByteArray& pattern)
{
    searchPattern = pattern;
}


qint64 HexSearchEngine::findHex(const QByteArray& bytes, qint64 startPos = 0) const
{
    if (searchPattern.isEmpty() || startPos < 0 || startPos >= bytes.size())
    {
        return -1;
    }

    int pos = bytes.indexOf(searchPattern, static_cast<int>(startPos)); // TODO: Later use HexBuffer to support larger files because well be loading too much into memory.

    return (pos == -1) ? -1 : static_cast<qint64>(pos); // Returns index of first match relative to the starting position.
}


qint64 HexSearchEngine::findText(const QString& text, qint64 startPos = 0) const
{
    QByteArray utf8 = text.toUtf8(); // Could add the option to switch between ascii and utf.

    return findHex(utf8, startPos);
}


QVector<qint64> HexSearchEngine::findAll(const QByteArray& pattern) const
{
    QVector<qint64> results;

    int pos = 0;

    while ((pos = pattern.indexOf(searchPattern, pos)) != -1) {
        results.append(pos);
        pos += searchPattern.size(); // Move past this match
    }

    return results;
}
