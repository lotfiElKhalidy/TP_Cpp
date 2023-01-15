class Point {
    private:
        int x;
        int y;
        static int counter;

    public:
        Point();
        Point(int, int);

        int getX();
        void setX(int);
        int getY();
        void setY(int);
        static int getCounter();

        void moveWith(int, int);
        void moveTo(int, int);
        void displayCoordinates();
};
