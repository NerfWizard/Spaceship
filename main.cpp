#include <iostream>
#include "spaceship.hpp"

int main()
{
    spaceship Proton(5000, -2, -20); // Равнозамедленное врезание в планету
    /*Proton.Model(10.3966, 55);
    spaceship Neutron(1000, -10, -30); // Разгоняется в планету, но время меньше, чем время полёта до планеты
    Neutron.Model(-5, 5);
    spaceship FlyingAway(1500, - 10, -20); // Корабль не долетает и разворачивается
    FlyingAway.Model(11, 360);
    spaceship a(500, -10, -20); // Разворачивается на отрицательном значении осии X
    a.Model(10.1, 360);
    spaceship b(1000, -10, -40); // Влетает в планету
    b.Model(-20, 300);
    spaceship c(500, -10, -20); // Время моделирования меньше, чем время полёта до планеты (Замедление)
    c.Model(10.1, 5);
    std::cout << "Равнозамедленное движение к планете (Время моделирования больше или равно времени полёта до планеты). \n";
    std::cout << "Расстояние: " << Proton.distance() << '\n';
    std::cout << "Скорость: " << Proton.velocity() << '\n';
    std::cout << "Время: " << Proton.time() << '\n' << '\n';

    std::cout << "Равноускоренное движение к планете (Время моделирования меньше времени полёта до планеты). \n";
    std::cout << "Расстояние: " << Neutron.distance() << '\n';
    std::cout << "Скорость: " << Neutron.velocity() << '\n';
    std::cout << "Время: " << Neutron.time() << '\n' << '\n';

    std::cout << "Равнозамедленное движение к планете, при котором корабль разворачивается, не долетая до планеты. \n";
    std::cout << "Расстояние: " << FlyingAway.distance() << '\n';
    std::cout << "Скорость: " << FlyingAway.velocity() << '\n';
    std::cout << "Время: " << FlyingAway.time() << '\n' << '\n';

    std::cout << "Особый случай равнозамедленного движения к планете (При заданном времени моделирования корабль может развернуться на отрицательных значениях X, но мы коректно отрабатываем эту ситуацию, и корабль врезается). \n";
    std::cout << "Расстояние: " << a.distance() << '\n';
    std::cout << "Скорость: " << a.velocity() << '\n';
    std::cout << "Время: " << a.time() << '\n' << '\n';

    std::cout << "Равноускоренное движение к планете (Корабль с нарастающей скоростью врезается в планету). \n";
    std::cout << "Расстояние: " << b.distance() << '\n';
    std::cout << "Скорость: " << b.velocity() << '\n';
    std::cout << "Время: " << b.time() << '\n' << '\n';

    std::cout << "Равнозамедленное движение к планете, при котором корабль просто не долетает до планеты. \n";
    std::cout << "Расстояние: " << c.distance() << '\n';
    std::cout << "Скорость: " << c.velocity() << '\n';
    std::cout << "Время: " << c.time() << '\n' << '\n';

    double UserD, UserG, UserV, UserA, UserT;
    std::cout << "Введите расстояние до планеты: \n";
    std::cin >> UserD;
    std::cout << "Введите ускорение свободного падения на планете: \n";
    std::cin >> UserG;
    std::cout << "Введите скорость корабля: \n";
    std::cin >> UserV;
    std::cout << "Введите ускорение корабля: \n";
    std::cin >> UserA;
    std::cout << "Введите время моделирования: \n";
    std::cin >> UserT;

    spaceship UserShip(UserD, UserG, UserV);
    UserShip.Model(UserA, UserT);

    std::cout << "Расстояние: " << UserShip.distance() << '\n';
    std::cout << "Скорость: " << UserShip.velocity() << '\n';
    std::cout << "Время: " << UserShip.time() << '\n' << '\n';*/

//    for (int i = 0; i < 10; i++){
//        Proton.Model (10.4, i);
//        std::cout << Proton.distance()/50 << '\n';
//    };
    for (int i = 0; i < 30; i++){
        Proton.Model (2.0298, i);
        std::cout << Proton.distance() << '\n';
    }


}
