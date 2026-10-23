#include <stdio.h>
void main()
{
int T,H,E,M,S;
float total,average;
//T=telugu,H=hindi,E=english,M=maths,S=science
printf("\n Enter the T,H,E,M,S marks:");
scanf("\n%d%d%d%d%d",&T,&H,&E,&M,&S);
total=T+H+E+M+S;
printf("\n The total of all five subjects is %f",total);
average=(total)/5;
printf("\n The average of all five subjects is %f",average);

}