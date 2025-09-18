#ifndef HEXUNDOSTACK_H
#define HEXUNDOSTACK_H

#include <QUndoStack>

class HexUndoStack : public QUndoStack
{
    Q_OBJECT

public:
    explicit HexUndoStack(QObject* parent = nullptr)
        : QUndoStack(parent) {}
};

#endif // HEXUNDOSTACK_H
