#include <stdio.h>
#include <stdlib.h>
float diameter (float r){
    float d;
d=r*2;
return d;}
float surface (float r){
return 3.14*r*r;}
float perimeter(float r){
return 2*r*3.14;}
int main()
{float r;
    printf("enter the amound of r");
    scanf("%f",&r);
    printf("the value of diameter is %.2f\n",diameter(r));
    printf("the value of surface is %.2f\n",surface(r));
    printf("the value of perimeter is %.2f\n",perimeter(r));
    return 0;
}                                                   // a=3.14*r*r
                                                    //d=r*r
                                                     //p=2*3.14*r
