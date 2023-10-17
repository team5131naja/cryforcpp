#include <iostream>
#include <player/player.h>

using namespace std;

Player::Player(string name)
{
    this->name = name;
    this->health = 20;
    this->speed = 10;
}
string Player::getName()
{
    return this->name;
}
float Player::getSpeed()
{
    return this->speed;
}
float Player::getHealth()
{
    return this->health;
}