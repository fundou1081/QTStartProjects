#ifndef SHAPEWIDGET_H
#define SHAPEWIDGET_H

#include <QWidget>

//namespace Ui {
//class ShapeWidget;
//}

class ShapeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ShapeWidget(QWidget *parent = 0);
    ~ShapeWidget();
protected:
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void paintEvent(QPaintEvent *);

private:
//    Ui::ShapeWidget *ui;
    QPoint dragPosition;
};

#endif // SHAPEWIDGET_H
