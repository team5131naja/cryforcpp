#include <iostream>
#include <vector>
#include <server/player.h>
#include <tuple>

using namespace ::std;

class Server
{
private:
    string name;
    int version;

    vector<Player> players;

public:
    void setName(string);

    void addPlayer(string);

    tuple<Player, int> getPlayer(string);
    
    Server(string, int);
};