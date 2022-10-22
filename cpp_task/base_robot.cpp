#include <iostream>
#include <ctime>
#include <random>
#include <climits>
using namespace std;
struct robot
{
    string name;
    int health;
} contestant[2] = {{"Robot A", 200}, {"Robot B", 200}};     // basic info of robots.

int current_robot = -1;                                     // record the active robot.

int rnd()                                                   // generate the random num.
{
    random_device seed;                                   //硬件生成随机数种子
    ranlux48 engine(seed());                              //利用种子生成随机数引擎
    uniform_int_distribution<> distrib(INT_MIN, INT_MAX); //设置随机数范围，并为均匀分布
    return distrib(engine);
}

bool end()                                                  // to judge if the game is end.
{
    return (contestant[0].health <= 0) || (contestant[1].health <= 0); 
}

void status()                                               // to output the current health status.
{
    cout<<contestant[0].name<<": \t"<<contestant[0].health<<endl;
    cout<<contestant[1].name<<": \t"<<contestant[1].health<<endl;
}

void play(robot &robot_1, robot &robot_2)                   // game rule
{
    if (!end())
    {
        cout << robot_1.name << "'s round:";
        int r = rnd();
        cout << r << endl;
        if (r % 6 == 0 || r % 2 == 0)
            cout << "No shooting" << endl;
        else if (r % 3 == 0)
        {
            robot_2.health -= 10;
            cout << "The bullet shot!" << endl;
        }
        else
        {
            robot_1.health -= 40;
            cout << "The gun blew up! " << endl;
            status();
            return play(robot_1, robot_2);                  // blow up, to play again.
        }
        status();
    }
}

int main()
{
    do
    {
        current_robot++;
        play(contestant[current_robot % 2], contestant[(current_robot + 1) % 2]);   // round between 2.
        getchar();                                          // wait for the next round.
    } while (!end());
    cout<<contestant[current_robot % 2].name<<" won the game!";
    return 0;
}