#include "renderarea.h"

renderArea::renderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor (0, 0, 255),
    mShapeColor (0, 255, 0)
{

}

QSize renderArea::minimumSizeHint() const
{
    return QSize (100, 100);
}

QSize renderArea::sizeHint() const
{
    return QSize(400, 200);
}

void renderArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setBrush(mBackgroundColor);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(mShapeColor);

    // --- DRAWING AREA
    painter.drawRect(this->rect());
    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());

}
