#include <iostream>
#include <ctime>
#include <random>
#include <climits>
using namespace std;
int robot_1 = 200, robot_2 = 200;
int random()
{
    random_device seed;                                   //硬件生成随机数种子
    ranlux48 engine(seed());                              //利用种子生成随机数引擎
    uniform_int_distribution<> distrib(INT_MIN, INT_MAX); //设置随机数范围，并为均匀分布
    return distrib(engine);
}

bool end() { return (robot_1 <= 0) || (robot_2 <= 0); }

void boom(int* health_1, int* health_2)
{
    if (!end())
        if (random()%6!=0);
        else if (random()%3==0) health_2-=10;
        else health_1-=40;
}

int main()
{
    while (!end())
    {
        boom(robot_1,robot_2);


    }
}