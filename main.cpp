#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;
#define dbg(x) cout<<#x<<" = "<<x<<'\n'
//--------declaration---------------
void baseline();
void middle(int);
void side(int);
void flag();
//----------------------------------
int line_start,time_delay,mid_val,base_point,lef,righ;
void control()
{
    line_start=365;
    mid_val=300;
    lef=mid_val-50;
    righ=mid_val+50;
    setcolor(YELLOW);
    time_delay=1;
}
int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

    control();
    middle(line_start-350);
    side(line_start-290);
    baseline();
    flag();

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
    int mul=20;
    while(i<line_start-100)
    {
        delay(time_delay*mul);
        line(j1,i-1,j1,i);
        line(j2,i+1,j2,i);
        i++;
        if(i%2==0)
            j1--,j2++;
    }
    int t=j1-2;
    while(true)
    {
        delay(time_delay*mul);
        line(j1,i-1,j1,i);
        line(j2,i-1,j2,i);
        j1++,j2--;
        if(j1>j2)
            break;
    }
    i+=7;
    while(true)
    {
        delay(time_delay*mul);
        line(j1,i-1,j1,i);
        line(j2,i-1,j2,i);
        j1--,j2++;
        if(j1==t)
            break;
    }
    while(true)
    {
        delay(time_delay*mul);
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
        delay(time_delay*mul);
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

    time_delay/=500;
}
void baseline()
{
    int len=250,l=120,dis=7;
    for(int i=0; i<len; i++)
    {
        delay(time_delay);
        if(i<len-dis)
            line(mid_val-i,line_start+25,mid_val+i+1,line_start+25);
        line(mid_val-i,line_start+30,mid_val+i+1,line_start+30);
    }
    int t=0;
    for(int i=0; i<l; i++)
    {
        delay(time_delay);
        line(mid_val-len-t+dis,line_start+25-i-1, mid_val-len-t+dis,line_start+25-i);
        line(mid_val+len+t-dis,line_start+25-i-1, mid_val+len+t-dis,line_start+25-i);
        line(mid_val-len-t,line_start+30-i-1, mid_val-len-t,line_start+30-i);
        line(mid_val+len+t,line_start+30-i-1, mid_val+len+t,line_start+30-i);
        if(i%4==0)
            t--;
    }
}
//--------------------------------------------------------------------------------
void flag()
{
    setcolor(WHITE);
    int len=315,l=120,dis=63,t=0;
    for(int i=line_start+15; i>line_start-len; i--)
    {
        delay(time_delay);
        line(mid_val+dis-t,i,mid_val+dis-t,i+1);
        line(mid_val+dis+1-t,i,mid_val+dis+1-t,i+1);
        line(mid_val+dis+2-t,i,mid_val+dis+2-t,i+1);
        if((i-5)%15==0)
            t++;
    }
    for(int i=5; i>0; i--)
    {
        delay(time_delay*10);
        circle(mid_val+dis+1-t,line_start-len,i);
    }
    t=5,dis=45;
    int ht=60,wt=100;
    setcolor(LIGHTGREEN);
    for(int i=mid_val+dis-1; i<mid_val+dis+wt; i++)
    {
        delay(time_delay);
        line(i-1,line_start-len+ht+t,i,line_start-len+t);
    }
    setcolor(RED);
    for(int i=0; i<=25; i++)
    {
        delay(time_delay*20);
        circle(mid_val+dis+(wt/2),line_start-len+(ht/2)+t,i);
    }
    setcolor(LIGHTRED);
    circle(mid_val+dis+(wt/2),line_start-len+(ht/2)+t,25);
    setfillstyle(SOLID_FILL,RED);
    floodfill(mid_val+dis+(wt/2)+1,line_start-len+(ht/2)+t,LIGHTRED);
    setcolor(RED);
    circle(mid_val+dis+(wt/2),line_start-len+(ht/2)+t,25);
}
