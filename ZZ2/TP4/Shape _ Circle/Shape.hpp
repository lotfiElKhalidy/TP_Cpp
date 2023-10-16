#ifndef SHAPE_HPP
#define SHAPE_HPP

class Point;

class Shape {
    protected:
        Point * point;
        int w;
        int h;

    public:
        int order;
        
        Shape();
        Shape(int, int, int, int);
        
        int getW();
        void setW(int);
        int getH();
        void setH(int);

        int getOrder();
        void setOrder(int);

        virtual void displayCoordinates();
        std::string toString(Shape);
};

#endif
