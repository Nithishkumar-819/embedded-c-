#include<AT89S52.h>
#define ULED P2_0
void delay(int);
void main()
{
while(1)
 {
 ULED=!ULED;
 delay(10);
 }
}

void delay(int time)
{
int i,j;
for(i=0;i<time;i++)
{
for(j=0;j<1275;j++)
{}
}}
