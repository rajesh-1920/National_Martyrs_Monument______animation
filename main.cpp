#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;

//--------declaration---------------
void baseline();
//----------------------------------

int main()
{
    cout << "Hello world!" << endl;
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

    baseline();

    getchar();
    return 0;
}

void baseline()
{
    setcolor(YELLOW);
    line(320,10,320,300);
}
