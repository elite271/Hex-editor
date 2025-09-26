#include "HexEditorWidget.h"


HexEditorWidget::HexEditorWidget(QWidget* parent)
{

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

}


void HexEditorWidget::copySelection()
{

}


void HexEditorWidget::pasteBytes()
{
    
}