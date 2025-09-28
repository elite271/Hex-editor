#include "HexView.h"



HexView::HexView(QWidget* parent)
  : QObject(parent)
{
    cursor = new HexCursor();
    caretBlinkTimer = new QTimer(this);
}

HexView::~HexView()
{
    delete cursor;
}

void HexView::paintEvent(QPaintEvent* event)
{

}


void HexView::keyPressEvent(QKeyEvent* event)
{

}


void HexView::mousePressEvent(QMouseEvent* event)
{

}


void HexView::mouseMoveEvent(QMouseEvent* event)
{

}



void HexView::updateCursor()
{

}


void HexView::renderSelection(QPainter& painter)
{

}