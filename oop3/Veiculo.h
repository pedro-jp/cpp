/* --- Veiculo.h --- */

/* ------------------------------------------
Author: Pedro-jp
Date: 11/01/2025
------------------------------------------ */
#include <iostream>
#include <string>
#ifndef VEICULO_H
#define VEICULO_H

class Veiculo
{
public:
    int vel;
    int rodas;
    bool get_all_unlocked();

private:
    bool all_unlocked = false;
};

bool Veiculo::get_all_unlocked()
{
    return all_unlocked;
}

class Moto : public Veiculo
{
public:
    Moto();
};

Moto::Moto()
{
    vel = 0;
    rodas = 2;
}

#endif // VEICULO_H
