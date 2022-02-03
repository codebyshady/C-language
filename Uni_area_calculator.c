#include <stdio.h>
#include <math.h>
int main()
{

    // this is a calculator for all shape area .
    // Area of rectrangle

   int uni;
    printf("This is a area calculator *Enter the value in cm only*");
    printf("Chose the shape of which you want to calculate the area:\n1. Square\n2.Rectrangle\n3.Triangle\n4.Cone (with radius and height)\n5.Cone (with radius and length) \n ");

    scanf("%d", &uni);
    // Square

    if (uni == 1)
    {
        double s, area;
        printf("Calculating thr area of square...\nEnter the side of the square\nHere>>");
        scanf("%lf", &s);
        area = s * s;
        printf("The area of the given sqaure id %lf cmsq.", area);
    }
    // Rectrangle...
    if (uni == 2)
    {
        double l, b, area;
        printf("Calculating the area of rectrangle...\nEnter the length\n Here >> ");
        scanf("%lf", &l);
        printf("Enter the bredth\nHere >> ");
        scanf("%lf", &b);
        area = l * b;
        printf("The area of given rectrangle is %lf cmsq.", area);
    }
    // Triangle
    if (uni == 3)
    {
        double s1, s2, s3,area2, s_para, p1, p2, p3, root, area;
        printf("Calculating the area of triangle...\nEnter the first side of triangle\n Here>>");
        scanf("%lf", &s1);
        printf("Enter the second side\nHere >>");
        scanf("%lf", &s2);
        printf("Enter the third side\nHere >>");
        scanf("%lf", &s3);
        s_para = (s1 + s2 + s3) / 2;
        p1 = s_para - s1;
        p2 = s_para - s2;
        p3 = s_para - s3;
        root =  p1 * p2 * p3;
        area2 = sqrt(root);
        area = s_para*area2;
        printf("The area of the given triangle is %lfcmsq.", area);
    }
    //  Area of cone with height and redius...
    if (uni == 4)
    {
        double r, h, root, a1, a2, area;

        printf("Calculating the area of cone (with redius and height)\nEnter the redius\nhere>>");
        scanf("%lf", &r);
        printf("Enter the height \nhere>>");
        scanf("%lf", &h);
        a1 = (22 / 7) * r;
        root = sqrt((h * h) + (r * r));
        a2 = r + root;
        area = a1 * a2;
        printf("Area of your cone is %lf cmsq.", area);
    }

    // else{

    //     printf("Sorry Wrong Input");
    // }

    return 0;
}