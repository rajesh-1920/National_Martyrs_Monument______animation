#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;

//--------declaration---------------
void baseline();
void middle();
void side();
//----------------------------------

int main()
{
    cout << "Hello world!" << endl;
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

    baseline();
    middle();
    side();

    getchar();
    return 0;
}
void middle()
{
    line(315,35,315,50);

    line(315,50,350,330);
    line(315,50,280,330);
}
void side()
{
    line(325,120,370,330);
    line(305,120,260,330);

    line(335,160,390,330);
    line(295,160,240,330);

    line(345,190,410,330);
    line(285,190,220,330);

    line(355,210,430,330);
    line(275,210,200,330);

    line(368,230,450,330);
    line(262,230,180,330);

    line(394,260,480,330);
    line(236,260,150,330);
}
void baseline()
{
    setcolor(YELLOW);
    line(100,330,530,330);
}
