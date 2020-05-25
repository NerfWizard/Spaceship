#include "spacheship.hpp"
#include <cmath>
#include <iostream>
double spaceship::Model(double a, double t)
{
    const double timeToPlanet = (-V-std::sqrt(V*V-2*(a+G)*D))/(a+G);
    const double X = D + V*t + ((a+G)*t*t/2);
    if (X>0)
    {
        D = X;
        T = t;
        V = V+(a+G)*t;
//        std::cout << "Первый if" <<'\n';
    }
    if ((X<=0) || ((a+G>0 && timeToPlanet>0) && t>=timeToPlanet))
    {
        D = 0;
        T = timeToPlanet;
        V = V+(a+G)*timeToPlanet;
//        std::cout << "Второй if" <<'\n';
    }
    return T;
}
