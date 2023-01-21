#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class List;

class Circle {
    private:
        int x;
        int y;
        int w;
        int h;

        static int counter;

    public:
        int order;
        
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

        int getOrder();
        void setOrder(int);

        //static int getCounter();

        void displayCoordinates();
        std::string toString(Circle);
};

#endif
