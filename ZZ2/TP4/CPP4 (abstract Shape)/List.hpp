#ifndef LIST_HPP
#define LIST_HPP

const int NBR_C = 4, NBR_R = 4, NBR_S = 4;

class Circle;
class Rectangle;
class Shape;

class List {
    public:
        Circle * circles;
        int NumberOfCircles;
        
        Rectangle * rectangles;
        int NumberOfRectangles;

        Shape * shapes;
        int NumberOfShapes;
        
        static int counter;


    public:
        List();
        List(Circle *, int, Rectangle *, int, Shape *, int);
        int getNumberOfCircles();
        void setNumberOfCircles(int);
        int getNumberOfRectangles();
        void setNumberOfRectangles(int);
        int getNumberOfShapes();
        void setNumberOfShapes(int);

        void addCircleToList(Circle);
        void addRectangleToList(Rectangle);
        void addShapeToList(Shape);

        void sortLists();
        
        std::string toString();

        //static int getCounter();
        //List * initializeList();
};

#endif
