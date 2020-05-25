#include <iostream>
#include "spacheship.hpp"
#include <fstream>

int main()
{

    std::cout << "MOON\n";
    std::cout << '\n';
    std::fstream out;
    out.open("Users/igor/Spaceship/Spaceship/Spaceship/Moon.txt");
    spaceship Moon(500, -2, -174.2);  // скорость для мягкой посадки: -186.2
    for (int i = 0; i < 30; i++){
        Moon.Model (15, 0.1);
        std::cout << Moon.distance() << ",\n";
        out << Moon.distance() << '\n';
        if(Moon.distance() == 0)
            break;
    };
    out.close();
    std::cout << '\n';


    std::cout << "EARTH\n";
    std::cout << '\n';
    
    out.open("Users/igor/Spaceship/Spaceship/Spaceship/Earth.txt");
    spaceship Earth(500, -10, -100); // скорость для мягкой посадки: -174.2
    for (int i = 0; i < 32; i++){
        Earth.Model(20, 0.3);
        std::cout << Earth.distance()<< ",\n";
        out << Earth.distance() << '\n';
        if(Earth.distance() == 0)
            break;
    };
    out.close();
    std::cout << '\n';


    std::cout << "MARS\n";
    std::cout << '\n';

    out.open("Users/igor/Spaceship/Spaceship/Spaceship/Mars.txt");
    spaceship Mars(500, -4, -174.2); // скорость для мягкой посадки: -183.2
    for (int i = 0; i < 30; i++){
        Mars.Model (15, 0.1);
        std::cout << Mars.distance() << ",\n";
        out << Mars.distance() << '\n';
        if(Mars.distance() == 0)
            break;
    };
    out.close();
    std::cout << '\n';

    for (int i = 0; i < 50; i++){
     std::cout << "=";
    }
    std::cout << "JUPITER\n";
    std::cout << '\n';
    
    out.open("Users/igor/Spaceship/Spaceship/Spaceship/Jupiter.txt");
    spaceship Jupiter(500, -26, -174.2); // скорость для мягкой посадки: -150.2
    for (int i = 0; i < 30; i++){
        Jupiter.Model (15, 0.1);
        std::cout << Jupiter.distance() << ",\n";
        out << Jupiter.distance() << '\n';
        if(Jupiter.distance() == 0)
            break;
    };
    out.close();
    std::cout << '\n';
}
