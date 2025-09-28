#include "HexBuffer.h"


HexBuffer()
{

}

~HexBuffer()
{

}


bool loadChunk(qint64 offset, qint64 size)
{

}


void flush()
{

}


char getByte(qint64 offset) const
{
    return currentChunk[offset];
}


void setByte(qint64 offset, char value)
{
    currentChunk.insert(offset, value);
}