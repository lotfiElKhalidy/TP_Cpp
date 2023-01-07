class Rectangle {
    private:
        int x;
        int y;
        int w;
        int h;
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
        
        static int getCounter();

        void displayCoordinates();
        std::string toString(Rectangle);
};
