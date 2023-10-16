class Mother {
    protected:
        std::string name;
        int age;
        static int counter;

    public:
        Mother();
        Mother(std::string, int);
        ~Mother();

        std::string getName();
        void setName(std::string);
        int getAge();
        void setAge(int);
        static int getCounter();

        void displayInfo();
};
