// Change this #include to FarOut.h eventually
// #include "FarOut.h"

#ifndef SHIP
#define SHIP
#include "GameObject.h"
#include <math.h>

class Ship : public GameObject {
public:
	Ship();
    void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	void update(sf::Time dt);
    void move(sf::Time dt);

private:
    void setMercuryPoints(sf::ConvexShape * shape);
    void setBlueShipPoints(sf::ConvexShape * shape);
    sf::ConvexShape body;
    float movementSpeed;
    sf::Vector2f movement;
    sf::ConvexShape hitbox;
    
    // if two gameObjects are within thier radii it should trigger hitbox checking
    // minimizes hitbox checking
    float radius = 100.0;
    sf::CircleShape hitradius;

    //Anchor point of the object
    // used in tandum with hitradius
    int origin[2] = { 0, 16 };
};
#endif