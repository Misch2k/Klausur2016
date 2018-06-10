#include <iostream>
#include <list>
#include <math.h>

using namespace std;

class Planet {
private:
    string name;
    int x,y,z;

public:
    Planet();
    Planet(string name, int x, int y, int z);
    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);
    int getZ() const;
    void setZ(int value);
    string getName() const;
    void setName(const string &value);
};


Planet::Planet()
{

}

Planet::Planet(string name, int x, int y, int z) :
    name(name), x(x), y(y), z(z)
{
}

string Planet::getName() const
{
    return name;
}

void Planet::setName(const string &value)
{
    name = value;
}

int Planet::getY() const
{
return y;
}

void Planet::setY(int value)
{
    y = value;
}

int Planet::getZ() const
{
return z;
}

void Planet::setZ(int value)
{
    z = value;
}


int Planet::getX() const
{
return x;
}

void Planet::setX(int value)
{
    x = value;
}

class PlanetUtil {
public:
    static string findNextPlanet(Planet planet,list<Planet>planets);
};

string PlanetUtil::findNextPlanet(Planet planet, list<Planet> planets){
    double distance(0), tmp(0);
    bool first(true);
    string planetName;
    //Formel : d = √ [(x2-x1)2 + (y2-y1)2 + (z2-z1)2];
    for(Planet &obj : planets){
        tmp = sqrt(pow(planet.getX() - obj.getX(), 2) + pow(planet.getY() - obj.getY(), 2) + pow(planet.getZ() - obj.getZ(), 2));
        if(first){
            distance = tmp;
            planetName = obj.getName();
            first = false;
        }else{
            if(tmp < distance){
                distance = tmp;
                planetName = obj.getName();
            }
        }
    }
    return planetName;
}


int main()
{
    Planet p1("Pluto", 5, 10, 23);
    Planet p2("Mars",4,9,22);
    Planet p3("Erde", 0, 0, 0);
    Planet p4("Jupiter", 6,11,24);
    list<Planet> planets;
    //planets.push_back(p1);
    planets.push_back(p2);
    planets.push_back(p3);
    planets.push_back(p4);

    cout << PlanetUtil::findNextPlanet(p1, planets) << endl;

    return 0;
}

