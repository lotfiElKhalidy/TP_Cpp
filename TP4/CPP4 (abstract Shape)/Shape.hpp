#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

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
        int order;
        COLORS color;

    public:
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

        virtual void displayCoordinates();
        virtual std::string toString();
};

#endif
