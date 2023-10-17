#include <iostream>
#include <vector>
#include <tuple>
#include <server.h>

using namespace std;

void Server::setName(string name)
{
    this->name = name;
}

void Server::addPlayer(string name)
{
    Player player(name);
    this->players.push_back(player);
    cout << this->players.size() << endl;
}

tuple<Player, int> Server::getPlayer(string name)
{
    for (Player player : this->players)
    {
        if (player.getName() == name)
        {
            return {player, 0};
        }
    }
    Player nullPlayer("null");
    return {nullPlayer, -1};
}

Server::Server(string name, int version)
{
    this->name = name;
    this->version = version;
}