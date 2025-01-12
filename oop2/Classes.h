/* --- Classes.h --- */

/* ------------------------------------------
Author: Pedro-jp
Date: 11/01/2025
------------------------------------------ */
#include <string>
#include <iostream>
#ifndef CLASSES_H
#define CLASSES_H

class Veiculo
{
public:
    Veiculo(std::string name, int v_max);
    int vel;

    void increment_vel(int v);
    void turn_on_off();

private:
    std::string name;
    bool on_off = 0;
    int vel_max;
};

Veiculo::Veiculo(std::string name, int v_max)
{
    this->name = name;
    this->vel_max = v_max;
}

void Veiculo::increment_vel(int v)
{
    if (!on_off)
        std::cout << "O veículo está desligado.\n";
    else
    {
        if (vel + v < vel_max)
            vel += v;
        else
            vel = vel_max;
    }

    std::cout
        << "Veículo " << name << " está a " << vel << " km/h\n";
}

void Veiculo::turn_on_off()
{
    std::cout << "Ligando veículo\n";
    on_off = !on_off;
    std::cout << "veículo ligado\n";
};

#endif // CLASSES_H
