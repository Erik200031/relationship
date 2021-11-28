#ifndef POLAR_H
#define POLAR_H
#include <cmath>
class Polar{
    public:
        Polar(){}
        Polar(float , float );
        void set_radius(float );
        void set_angle(float );
        float get_x();
        float get_y();
        float get_radius();
        float get_angle();
        Polar operator+(Polar &);
    private:
        float x;
        float y;
        float m_radius;
        float m_angle;
};








#endif //POLAR_H