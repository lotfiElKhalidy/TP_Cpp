class Rectangle {
    private:
        int x;
        int y;
        int w;
        int h;
        static int counter;

    public:
        Point();
        Point(int, int, int, int);

        int getX();
        void setX(int);
        int getY();
        void setY(int);
        int getW();
        void setW(int);
        int getH();
        void setH(int);
        //int getCounter();

        void displayCoordinates();
};
