#ifndef PERSON_H
#define PERSON_H


class Person
{
    private:
        std::string name;
    public:
        //constructor
        Person(std::string n);

        //setter
        void setName(std::string n);

        //print
        void printName();
};

#endif // PERSON_H
