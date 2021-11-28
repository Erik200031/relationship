#include "polar.h"

Polar::Polar(float radius, float angle):m_radius(radius),m_angle(angle){}

void Polar::set_radius(float radius){
    m_radius=radius;
}

void Polar::set_angle(float angle){
    m_angle=angle;
}

float Polar::get_x(){
    x = m_radius *cos( m_angle / 57.3);
    return x;
}

float Polar::get_y(){
    y = m_radius * sin(m_angle / 57.3);
    return y;
}

float Polar::get_radius(){
    return m_radius;
}

float Polar::get_angle(){
    return m_angle;
}

Polar Polar::operator+(Polar & rhs){
    Polar tmp;
    tmp.x = this->x+rhs.x;
    tmp.y = this->y+rhs.y;
    return tmp; 
}