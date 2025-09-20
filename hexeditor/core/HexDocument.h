#ifndef HEXDOCUMENT_H
#define HEXDOCUMENT_H

#include <QObject>
#include <QByteArray>

class HexDocument : public QObject
{
    Q_OBJECT

public:
    explicit HexDocument(QObject* parent = nullptr);
    ~HexDocument() override = default;

    bool load(const QString& path);
    bool save(const QString& path);

    char readByte(qint64 pos) const;
    void writeByte(qint64 pos, char value);

    qint64 size() const;

    void insert(qint64 pos, const QByteArray& data);
    void erase(qint64 pos, qint64 length);

    bool isDirty() const;

private:
    QString filePath;
    QByteArray buffer; // implement HexBuffer to do this later for larger files.
    bool dirty;

    QFile* currentFile;
};

#endif // HEXDOCUMENT_H
