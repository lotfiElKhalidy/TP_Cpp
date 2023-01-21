#ifndef SHAPE_HPP
#define SHAPE_HPP

class Point;

class Shape {
    private:
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

        void displayCoordinates();
        std::string toString(Shape);
};

#endif
