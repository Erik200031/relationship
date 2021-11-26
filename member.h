#ifndef MEMBER_H
#define MEMBER_H

class Member{
    public:
    void set_name(std::string name){
        this->name=name;
    }
    void set_age(int age){
        this->age=age;
    }
    std::string get_name()const{
        return name;
    }
    int get_age()const{
        return age;
    }
    private:
    int age;
    std::string name;
};




#endif //MEMBER_H