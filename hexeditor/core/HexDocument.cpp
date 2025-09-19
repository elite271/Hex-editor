#include "HexDocument.h"



HexDocument::HexDocument(){}

HexDocument::~HexDocument(){}


bool HexDocument::load(const QString& path)
{
    
}


bool HexDocument::save(const QString& path)
{

}


char HexDocument::readByte(qint64 pos) const
{
    if (pos < buffer.size())
    {
        return buffer[pos];
    }

    QMessageBox::warning(nullptr, "Buffer Error", "Cannot read, buffer out of range.");
    return '\0';
}


void HexDocument::writeByte(qint64 pos, char value)
{
    if (pos < buffer.size())
    {
        buffer.insert(pos, value);
    }
    
    QMessageBox::warning(nullptr, "Buffer Error", "Cannot write, buffer out of range.");
    return '\0';
}


qint64 HexDocument::size() const
{
    return buffer.size();
}


void HexDocument::insert(qint64 pos, const QByteArray& data)
{
    buffer.insert(pos, data); //TODO: errpr checking for both.
}


void HexDocument::erase(qint64 pos, qint64 length)
{
    buffer.erase(pos, length);
}


bool HexDocument::isDirty() const
{
    return dirty;
}