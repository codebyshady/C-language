#include <stdio.h>
#include <math.h>
int main (){
    int a , b , c , s , s_pera ,s1 ,s2 ,s3 , root , area;
        printf("This is a Area calculator for triangle...\nEnter the First side of thriangle in cm.: \n");
            scanf("%d",&a);
        printf("Enter the second side of the triangle in cm.\n");
            scanf("%d",&b);
        printf("Enter the third side of the triangle in cm.\n");
            scanf("%d",&c);
        //formula work start here
    s = a+b+c;
    s_pera = s/2;
                  s1 = s_pera - a;
                  s2 = s_pera - b;
                  s3 = s_pera - c;
       root = s_pera*s1*s2*s3;
       area = sqrt(root);
       printf("Area of the triangle is %d cmsq.", area);
    return 0;
}