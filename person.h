#ifndef PERSON_H
#define PERSON_H
#include "name.h"
class Person{
    public:

    void set_age(int age)
    {
        this->age=age;
    }

    void set_name(Name str){
        name.set_name(str.get());
    }

    std::string get_name()const
    {

        return name.get();
    }

    int get_age()const
    {
        return age;
    }

    private:
    int age;
    Name name;
};
#endif //PERSON_H