#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QColor>

class renderArea : public QWidget
{
    Q_OBJECT
public:
    explicit renderArea(QWidget *parent = 0);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    enum Shapes {
        Astroid,
        Cicloid,
        HuygensCicloid,
        HypoCicloid
    };

    void setBackgroundColor (QColor color);
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    QColor mBackgroundColor;
    QColor mShapeColor;
signals:

public slots:
};

#endif // RENDERAREA_H
