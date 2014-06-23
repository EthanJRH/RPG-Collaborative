#include <iostream>
#include "melee.h"
#include "staff.h"
#include "hero.h"
#include "monster"

using namespace std;
int main()
{
    string entry;
    cout << "welcome to the game\n1: Start\t2: Help\t\t3: Quit" << endl;
    cin >> entry;
    if (entry == "1") 
    {
        game.start();
    } else if (entry = "2") 
    {
        cout << "someone make a help screen thanks guys\n\n";
        main();
    } else 
    {
        return 0;
    }
    return 0;
}
