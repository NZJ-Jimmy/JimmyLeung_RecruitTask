#include <iostream>
#include <ctime>
#include <random>
#include <climits>
using namespace std;
int robot_1 = 200, robot_2 = 200;
int random()
{
    // random_device seed;                                   //硬件生成随机数种子
    // ranlux48 engine(seed());                              //利用种子生成随机数引擎
    // uniform_int_distribution<> distrib(INT_MIN, INT_MAX); //设置随机数范围，并为均匀分布
    // return distrib(engine);
    srand(time(0));
    return rand();
}

bool end() { return (robot_1 <= 0) || (robot_2 <= 0); }

string status(int &health_1, int &health_2)
{
    int r=random();
    cout<<r<<' ';
    if (!end())
        if (r%6!=0 || r%2!=0) return "No shooting";
        else if (r%3==0) 
        {
            health_2-=10;
            return "The bullet shot!";
        }
    health_1-=40;
    return "The gun blew up!";
}

int main()
{
    while (!end())
    {
        cout<<"Robot 1's round:"<<status(robot_1,robot_2)<<endl;
        cout<</*"Robot 1:"<<*/robot_1<<' '<</*"Robot 2:"<<*/robot_2<<endl;
        getchar();
        if (!end())
            {
                cout<<"Robot 2's round:"<<status(robot_2,robot_1)<<endl;
                cout<</*"Robot 1:"<<*/robot_1<<' '<</*"Robot 2:"<<*/robot_2<<endl;
            }
        getchar();
    }
}