#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class List;

class Circle {
    private:
        int x;
        int y;
        int w;
        int h;

        List * order;
        static int counter;

    public:
        Circle();
        Circle(int, int, int, int);

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
        std::string toString(Circle);
};

#endif
