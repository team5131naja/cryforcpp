#include <iostream>

using namespace::std;

class Player {
    public:
        string name;
        float health;
        float speed;
    Player(string);
    string getName();
    float getSpeed();
    float getHealth();
};

struct PlayerErr {
    Player player;
    int error;
};