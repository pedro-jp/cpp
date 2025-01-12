/* --- Aviao.h --- */

/* ------------------------------------------
Author: Pedro-jp
Date: 11/01/2025
------------------------------------------ */
#include <string>
#ifndef AVIAO_H
#define AVIAO_H

class Aviao
{

public:
    std::string name;
    int vel = 0;
    int vel_max;
    std::string type;

    Aviao(std::string name, int v_max);

    std::string increment_vel(int v);

private:
};

Aviao::Aviao(std::string name, int v_max)
{
    this->name = name;
    this->vel_max = v_max;
}

std::string Aviao::increment_vel(int v)
{
    if (this->vel + v < this->vel_max)
        this->vel += v;
    else
        this->vel = this->vel_max;

    return "A aeronave " + this->name + " está a: " + std::to_string(this->vel) + " km/h" + "\n";
}

#endif // AVIAO_H
