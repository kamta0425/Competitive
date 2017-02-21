#include<graphics.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
   int gd = DETECT, gm;
   const char c[]="c:\\TC\\BGI";
   initgraph(&gd, &gm, c );
   cout<<"Please Enter to continue..."<<endl;
   getch();
   closegraph();
   return 0;
}























/*
#include<graphics.h>
#include<conio.h>
#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include<math.h>
#include<dos.h>
#include<string.h>
#include<ctime>

using namespace std;

int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "c:\\TC\\BGI" );    ///problem here
   /// initwindow(1024,768);              ///initwindow(width,height);
   ///line(50,100,100,100);
   ///circle(150,150,40);
   cout<<"Please Enter to continue..."<<endl;
   ///cin.get();
   ///delay(5000);
   ///cleardevice();
   ///setcolor(color);
   ///setbkcolor(color);

   getch();
   ///closegraph();
   return 0;
}

*/


//using namespace std;


/*
int main( void)

{

    int gdriver = DETECT, gmode, errorcode;

    initgraph(&gdriver,&gmode,NULL);



    setfillstyle(SOLID_FILL,GREEN);

    setcolor(GREEN);

    rectangle(50,50,50+400,50+300);

    floodfill(51,51,GREEN);



    setfillstyle(SOLID_FILL,RED);

    setcolor(RED);

    circle(250,200,100);

    floodfill(250,200,RED);

    getch();

    closegraph();



return 0;

}
*/
