const int LENGTH = 100;

class Circle;
class Rectangle;

class List {
    public:
        Circle circles[LENGTH];
        int NumberOfCircles;
        Rectangle rectangles[LENGTH];
        int NumberOfRectangles;
        static int counter;


    public:
        List();
        static int getCounter();
};
