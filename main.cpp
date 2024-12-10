#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;
#define dbg(x) cout<<#x<<" = "<<x<<'\n'

//--------declaration---------------
void baseline();
void middle(int);
void side();
//----------------------------------
int line_start,time_delay;
void control();
int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

    control();
    baseline();
    middle(40);
    side();

    getchar();
    return 0;
}
//--------------------------------middle------------------------
void middle(int line_end)
{
    int i=line_start,j1=365,j2=265;
    while(i>line_end)
    {
        delay(time_delay);
        line(j1,i-1,j1,i);
        line(j2,i-1,j2,i);
        i--;
        if(i%7==0)
            j1--,j2++;
    }
    for(i=line_end;i>line_end-15;i--)
    {
        line(315,i-1,315,i);
        delay(time_delay);
    }
    for(i=line_end;i<line_end+180;i++)
    {
        line(315,i-1,315,i);
        delay(time_delay);
    }
    while(i<line_start-100)
    {
        delay(time_delay);
        line(j1,i-1,j1,i);
        line(j2,i-1,j2,i);
        i++;
        if(i%2==0)
            j1--,j2++;
    }
    j1--,j2++;
    i+=14;
    while(i<line_start-13)
    {
        delay(time_delay);
        line(j1,i-1,j1,i);
        line(j2,i-1,j2,i);
        i++;
        if(i%2==0)
            j1++,j2--;
    }
    cout<<i;
}
void control()
{
    line_start=390;
    time_delay=0;
}
//--------------------------------middle end------------------------
void side()
{
    /*line(325,100,395,330);
    line(305,120,235,330);

    /*line(335,160,410,330);
    line(295,160,220,330);

    line(345,190,430,330);
    line(285,190,200,330);

    line(355,210,450,330);
    line(275,210,180,330);

    line(368,230,480,330);
    line(262,230,150,330);

    line(394,260,460,330);
    line(236,260,130,330);*/
}
void baseline()
{
    setcolor(YELLOW);
    line(100,line_start+15,530,line_start+15);
}
