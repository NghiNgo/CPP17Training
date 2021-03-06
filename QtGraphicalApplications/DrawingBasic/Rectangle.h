#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <FStream>
using namespace std;

#include "Figure.h"

class RectangleX : public Figure {
public:
  RectangleX();
  virtual FigureId getId() const {return RectangleId;}

  virtual void initializePoints(QPoint point);
  virtual void setLastPoint(QPoint point);

  virtual bool isClick(QPoint mousePoint);
  virtual void move(QSize distance);
  virtual void draw(QPainter& painter) const;

  virtual bool write(ofstream& outStream) const;
  virtual bool read(ifstream& inStream);

protected:
  QPoint m_topLeft, m_bottomRight;
};

#endif
