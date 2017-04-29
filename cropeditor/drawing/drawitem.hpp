#ifndef DRAWITEM_HPP
#define DRAWITEM_HPP

#include <QString>
#include <cropeditor/cropscene.hpp>

class DrawItem
{
    public:
    virtual ~DrawItem()
    {
    }
    virtual QString name() = 0;
    virtual void mouseDragEvent(QGraphicsSceneMouseEvent *e, CropScene *scene) = 0;
    virtual void mouseDragEndEvent(QGraphicsSceneMouseEvent *e, CropScene *scene) = 0;
};

#endif // DRAWITEM_HPP
