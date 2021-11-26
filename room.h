#include "course.h"
#ifndef ROOM_H
#define ROOM_H
class Room{
    public:
    void set_time(int time){
        this->time=time;
    }

    int get_time()const{
        return time;
    }

    bool check(Course& crs)const{
        if(time == 2){
            return true;
        }
        else
        return false;
    }
    private:
    int time;
};


#endif //ROOM_H