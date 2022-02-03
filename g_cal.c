#include <stdio.h>
int main (){   //PASSWORD AREA START...
                int p;
                int a[5];
    printf("Code By Shady\nIt's a grade calculator\nEnter Password here\n");
        scanf("%d",&p);
        if(p==112){ 

                goto label;
        }
        else{

            printf("Get lost...");
            goto end;
        }
                    //PASSWORD AREA END...
    
    //CALCULATION START HERE...
    label://EXICUTE AFTER CORRECT PASSWORD...
     
    
    
    printf("Enter the marks \n");
        printf("IT and Tools:\n");
            scanf("%d",&a[0]);
        printf("C\n");
            scanf("%d",&a[1]);
        printf("Mathematics\n");
            scanf("%d",&a[2]);
        printf("English\n");
            scanf("%d",&a[3]);

                                a[4]=a[0]+a[1]+a[2]+a[3];           //ADDING ALL MARKS HERE...
        printf("Your marks are as follows \n IT and tools \n %d \n C \n %d \n Mathmatics \n %d English \n %d \n Total:%d/400\n",a[0],a[1],a[2],a[3],a[4]);
             a[5]=a[4]/4;
    
        printf("The percent you obtained is %f\n",(float)a[5]);           /*PERCENTAGE  CALCULATED HERE*/
    //GRADE ARRANGMENT START HERE...
        if (a[5]<=40)
        {
            printf("YOUR GRADE IS D\nYOU NEED TO WORK HARD...\n");

        }
        else if (a[5]<=60){
            printf("YOUR GRADE IS C\nYOU CAN DO BETTER...\n");

        }
        else if (a[5]<=80){
            printf("YOUR GRADE IS B \nGOOD :)\n");
        }
        else if (a[5]<=100){
            printf("YOUR GRADE IS A\nEXCELLENT *****\n");
        }
        
        //THE GRADE CALCULATOR IS COMPLETE HERE...
    end://WRONG PASSWORD END POINT OF GOTO...
    
    return 0;
}