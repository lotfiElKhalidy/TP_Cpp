#ifndef __CPP4__SHAPE_HPP__
#define __CPP4__SHAPE_HPP__

#include "Point.hpp"

enum class COLORS {
    BLACK, WHITE, RED, BLUE, GREEN, YELLOW
};

class Shape {
    protected:
        int id;
        Point * point;
        int w;
        int h;
        COLORS color;

    public:
        int order;
        static int nbShapes;
        Shape();
        Shape(Point, COLORS);
        Shape(int, int);
        Shape(int, int, int, int);

        int getId();
        static int nextId();

        Point * getPoint();
        void setPoint(Point *);
        
        int getW();
        void setW(int);
        int getH();
        void setH(int);

        int getOrder();
        void setOrder(int);

        COLORS getColor();
        void setColor(COLORS color);

        virtual void displayCoordinates() = 0;
        virtual std::string toString() = 0;
};

#endif
