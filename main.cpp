#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;
#define dbg(x) cout<<#x<<" = "<<x<<'\n'

//--------declaration---------------
void baseline();
void middle(int);
void side(int);
//----------------------------------
int line_start,time_delay,mid_val,base_point,lef,righ;
void control()
{
    line_start=380;
    mid_val=315;
    time_delay=1;
    lef=265;
    righ=365;
}
int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

    control();
    baseline();
    middle(30);
    side(90);

    getchar();
    return 0;
}
//--------------------------------middle------------------------
void middle(int line_end)
{
    int i=line_start,j1=righ,j2=lef;
    while(i>line_end)
    {
        delay(time_delay);
        line(j1,i-1,j1,i);
        line(j2,i+1,j2,i);
        i--;
        if(i%7==0)
            j1--,j2++;
    }
    for(i=line_end; i>line_end-8; i--)
    {
        line(mid_val,i-1,mid_val,i);
        delay(time_delay);
    }
    for(i=line_end; i<line_end+180; i++)
    {
        line(mid_val,i-1,mid_val,i);
        delay(time_delay);
    }
    while(i<line_start-100)
    {
        delay(time_delay);
        line(j1,i-1,j1,i);
        line(j2,i+1,j2,i);
        i++;
        if(i%2==0)
            j1--,j2++;
    }
    int t=j1-2;
    while(true)
    {
        delay(time_delay);
        line(j1,i-1,j1,i);
        line(j2,i-1,j2,i);
        j1++,j2--;
        if(j1>j2)
            break;
    }
    i+=7;
    while(true)
    {
        delay(time_delay);
        line(j1,i-1,j1,i);
        line(j2,i-1,j2,i);
        j1--,j2++;
        if(j1==t)
            break;
    }
    while(true)
    {
        delay(time_delay);
        line(j1,i-1,j1,i);
        line(j2,i+1,j2,i);
        i++;
        if(i%2==0)
            j1++,j2--;
        if(j1>j2)
            break;
    }
    base_point=i;
    while(true)
    {
        delay(time_delay);
        line(j1,i-1,j1,i);
        line(j2,i+1,j2,i);
        j1++,j2--;
        if(j1%3==0)
            i++;
        if(i>line_start||j1>righ)
            break;
    }
}
//--------------------------------middle end------------------------
void side(int line_end)
{
    int j1=righ,j2=lef,diff=25,dit=48,tt=10;
    time_delay*=500;

    delay(time_delay);
    line(j1+diff,line_start,mid_val+tt,line_end);
    line(j2-diff,line_start,mid_val-tt,line_end);
    line(j1+diff,line_start,mid_val+dit,base_point);
    line(j2-diff,line_start,mid_val-dit,base_point);

    diff+=25,dit+=24,line_end+=50,tt=22;
    delay(time_delay);
    line(j1+diff,line_start,mid_val+tt,line_end);
    line(j2-diff,line_start,mid_val-tt,line_end);
    line(j1+diff,line_start,mid_val+dit,base_point);
    line(j2-diff,line_start,mid_val-dit,base_point);

    diff+=26,dit+=24,line_end+=40,tt=35;
    delay(time_delay);
    line(j1+diff,line_start,mid_val+tt,line_end);
    line(j2-diff,line_start,mid_val-tt,line_end);
    line(j1+diff,line_start,mid_val+dit,base_point);
    line(j2-diff,line_start,mid_val-dit,base_point);

    diff+=28,dit+=24,line_end+=50,tt=58;
    delay(time_delay);
    line(j1+diff,line_start,mid_val+tt,line_end);
    line(j2-diff,line_start,mid_val-tt,line_end);
    line(j1+diff,line_start,mid_val+dit,base_point);
    line(j2-diff,line_start,mid_val-dit,base_point);

    diff+=30,dit+=24,line_end+=40,tt=83;
    delay(time_delay);
    line(j1+diff,line_start,mid_val+tt,line_end);
    line(j2-diff,line_start,mid_val-tt,line_end);
    line(j1+diff,line_start,mid_val+dit,base_point);
    line(j2-diff,line_start,mid_val-dit,base_point);

    diff+=30,dit+=24,line_end+=30,tt=110;
    delay(time_delay);
    line(j1+diff,line_start,mid_val+tt,line_end);
    line(j2-diff,line_start,mid_val-tt,line_end);
    line(j1+diff,line_start,mid_val+dit,base_point);
    line(j2-diff,line_start,mid_val-dit,base_point);
}
void baseline()
{
    setcolor(YELLOW);
    line(100,line_start+15,530,line_start+15);
}
