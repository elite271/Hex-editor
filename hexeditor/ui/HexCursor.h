#ifndef HEXCURSOR_H
#define HEXCURSOR_H

#include <QtGlobal>

class HexCursor
{
public:
    enum class Mode { Hex, Ascii };

    HexCursor();

    qint64 positionByte() const;
    int positionNibble() const;
    qint64 anchor() const;
    Mode mode() const;

    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();

    bool hasSelection() const;

private:
    qint64 m_positionByte;
    int m_positionNibble;
    qint64 m_anchor;
    Mode m_mode;
};

#endif // HEXCURSOR_H
