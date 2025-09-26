#include "HexEditorWidget.h"


HexEditorWidget::HexEditorWidget(QWidget* parent)
{
    view = new HexView(this);
    document = new HexDocument(this);
    undoStack = new HexUndoStack(this);
    searcher = new HexSearchEngine(this);
}

HexEditorWidget::~HexEditorWidget()
{
    
}


bool HexEditorWidget::loadFile(const QString& path)
{
    document->load(path);
}
    

bool HexEditorWidget::saveFile(const QString& path)
{
    document->save(path);
}


void HexEditorWidget::setDocument(HexDocument* doc)
{
    document = doc;
}


void HexEditorWidget::copySelection()
{

}


void HexEditorWidget::pasteBytes()
{
    
}