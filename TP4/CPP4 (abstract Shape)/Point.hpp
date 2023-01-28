#ifndef __CPP4__POINT_HPP__
#define __CPP4__POINT_HPP__

class Point {
    private:
        int x;
        int y;
        //static int counter;

    public:
        Point();
        Point(int, int);

        int getX() const;
        void setX(int);
        int getY() const;
        void setY(int);
        //static int getCounter();

        void moveWith(int, int);
        void moveTo(int, int);
        void displayCoordinates();
};

const Point ORIGIN{0,0};

#endif
