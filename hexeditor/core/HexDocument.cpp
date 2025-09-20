#include "HexDocument.h"
#include <QFile>


HexDocument::HexDocument(QObject* parent) 
  : QObject(parent)
{
    currentFile = new QFile(this);
}

HexDocument::~HexDocument()
{

}


bool HexDocument::load(const QString& path)
{
    currentFile->setFileName(path);

    if (!currentFile->open(QIODevice::ReadOnly))
        return false;


    buffer = currentFile->readAll(); // Will use HexBuffer later to support larger files.

    return true;
}


bool HexDocument::save(const QString& path)
{
    currentFile->setFileName(path);

    if (!currentFile->open(QIODevice::WriteOnly))
        return false;

    qint64 bytesWritten = currentFile->write(buffer);

    return bytesWritten == buffer.size();
}



char HexDocument::readByte(qint64 pos) const
{
    if ((pos >= 0 && pos < buffer.size()))
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
        buffer[pos] = value;
        dirty = true;
        return;
    }
    
    QMessageBox::warning(nullptr, "Buffer Error", "Cannot write, buffer out of range.");
}


qint64 HexDocument::size() const
{
    return buffer.size();
}


void HexDocument::insert(qint64 pos, const QByteArray& data)
{
    if (pos < 0 || pos > buffer.size()) 
    {
        QMessageBox::warning(nullptr, "Buffer Error", "Cannot insert, position out of range.");
        return;
    }
    
    buffer.insert(pos, data);
    dirty = true;
}


void HexDocument::erase(qint64 pos, qint64 length)
{
    
    if (pos < 0 || pos + length > buffer.size()) 
    {
        QMessageBox::warning(nullptr, "Buffer Error", "Cannot erase, range out of bounds.");
        return;
    }
    
    buffer.erase(pos, length);
    dirty = true;
}


bool HexDocument::isDirty() const
{
    return dirty;
}