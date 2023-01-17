#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class List;


class Rectangle {
    private:
        int x;
        int y;
        int w;
        int h;

        List * order;
        static int counter;

    public:
        Rectangle();
        Rectangle(int, int, int, int);

        int getX();
        void setX(int);
        int getY();
        void setY(int);
        int getW();
        void setW(int);
        int getH();
        void setH(int);

        List * getOrder();
        void setOrder(List *);
        
        //static int getCounter();

        void displayCoordinates();
        std::string toString(Rectangle);
};

#endif
