#ifndef HEXEDITORWIDGET_H
#define HEXEDITORWIDGET_H

#include <QWidget>

class HexView;
class HexDocument;
class QUndoStack;
class HexSearchEngine;

class HexEditorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HexEditorWidget(QWidget* parent = nullptr);
    ~HexEditorWidget() override = default;

    bool loadFile(const QString& path);
    bool saveFile(const QString& path);
    void setDocument(HexDocument* doc);

    void copySelection();
    void pasteBytes();

private:
    HexView* view;
    HexDocument* document;
    QUndoStack* undoStack;
    HexSearchEngine* searcher;
};

#endif // HEXEDITORWIDGET_H
