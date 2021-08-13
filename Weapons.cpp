// Weapons implementations


#include "Weapons.h"



Projectile::Projectile() {
	moveSpeed = 1;
	alive = true;
	lifetime = sf::Time(sf::seconds(1));
}

Projectile::Projectile(unsigned int newMoveSpeed, sf::Time newLifetime) :
	moveSpeed(newMoveSpeed), lifetime(newLifetime)
{
	alive = true;
}

bool Projectile::isAlive() {
	return alive;
}





Weapon::Weapon(unsigned int newFireRate, std::shared_ptr<Projectile> newProjectileType) :
	fireRate(newFireRate), projectileType(newProjectileType) { }
