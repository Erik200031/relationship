#ifndef COURSE_H
#define COURSE_H
#include "member.h"
#include "room.h"
#include <iostream>
class Course{

    public:
    void check(int time){
        Room rm;
        rm.set_time(time);
        if(rm.get_time() == 2){
            std::cout<<"Go to classroom";
        }
        else
        std::cout<<"Classroom is close now";
    }
    void add(int count){
        crs = new Member[count];
        this->count=count;
    }
    void remove(){
        delete[]crs;
        crs=nullptr;
        count=0;
    }
    int get_count()const{
        return count;
    }
    ~Course(){
        delete[]crs;
        crs=nullptr;
    }
    private:
    Member* crs;
    int count;
};







#endif //COURSE_H