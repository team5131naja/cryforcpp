#include <iostream>
#include <test.h>
#include <server.h>

using namespace std;

int main() {
    Test a;
    cout << a.getA() << endl;
    Server server("test", 0);
    server.addPlayer("team");
    server.addPlayer("ohm");
    server.addPlayer("mean");
    auto [player, err] = server.getPlayer("team");
    if (err == -1) {
        return 0;
    }
    cout << player.getName() << endl;
    return 0;
}