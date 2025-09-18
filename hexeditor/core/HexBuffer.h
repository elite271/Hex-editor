#ifndef HEXBUFFER_H
#define HEXBUFFER_H

#include <QtGlobal>

class HexBuffer
{
public:
    HexBuffer();
    ~HexBuffer();

    bool loadChunk(qint64 offset, qint64 size);
    void flush();

    char getByte(qint64 offset) const;
    void setByte(qint64 offset, char value);

private:
    qint64 chunkSize;
    // platform-specific mmap or page cache
};

#endif // HEXBUFFER_H
