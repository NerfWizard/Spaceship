#ifndef SPACESHIP_HPP
#define SPACESHIP_HPP
#include <cassert>

class spaceship
{
private:
    double V, D, G, T;
public:
    spaceship(double D, double G, double V):V(V), D(D), G(G){assert(D>0 && V<0 && G<0);}
    double velocity() const
    {
        return V;
    }
    double distance() const
    {
        return D;
    }
    double time() const
    {
        return T;
    }
    double Model(double a, double t);
};

#endif // SPACESHIP_HPP
