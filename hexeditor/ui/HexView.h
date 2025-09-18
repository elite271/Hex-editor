#ifndef HEXVIEW_H
#define HEXVIEW_H

#include <QAbstractScrollArea>

class HexCursor;

class HexView : public QAbstractScrollArea
{
    Q_OBJECT

public:
    explicit HexView(QWidget* parent = nullptr);
    ~HexView() override = default;

protected:
    void paintEvent(QPaintEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;

private:
    HexCursor* cursor;
    QTimer* caretBlinkTimer;

    void updateCursor();
    void renderSelection(QPainter& painter);
};

#endif // HEXVIEW_H
