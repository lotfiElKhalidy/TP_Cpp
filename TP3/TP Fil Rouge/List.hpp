#ifndef LIST_HPP
#define LIST_HPP

class Circle;
class Rectangle;

class List {
    public:
        Circle * circles;
        int NumberOfCircles;
        Rectangle * rectangles;
        int NumberOfRectangles;
        
        static int counter;


    public:
        List();
        //static int getCounter();

        List * initializeList();
};

#endif
