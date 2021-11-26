#ifndef CLUB_H
#define CLUB_H
#include "member.h"
class Club{
    public:
    void add(int count){
        ptr = new Member[count];
        this->count=count;
    }
    void remove(){
        delete[]ptr;
        ptr=nullptr;
        count=0;
    }
    int get_count()const{
        return count;
    }
    ~Club(){
        delete[]ptr;
        ptr=nullptr;
    }
    private:
    Member *ptr;
    int count;
};



#endif //CLUB_H