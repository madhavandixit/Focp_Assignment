#include <stdio.h>
#include <math.h>

    void Add();
    void Sub();
    void Log();
    void Div();
    void Mult();
    void Sqrt();

    int main(void){
        int decide;

        printf("press 1 for addition");
        printf("press 2 for subtraction");
        printf("press 3 for logarithm");
        printf("press 4 for sqrt");
        printf("press 5 for divison");
        printf("press 6 for multiplication");
        printf("enter your choice of operation : ");
        scanf("%d", &decide);


        switch(decide){
            case 1: Add();
            break;
            case 2: Sub();
            break;
            case 3: Log();
            break;
            case 4: Sqrt();
            break;
            case 5: Div();
            break;
            case 6: Mult();
            break;

            default: printf("enter valid number");
        }

        return 0;
    }


void Add(){
    int a,b;
    printf("enter value of a : ");
    scanf("%d", &a);

    printf("enter value of b : ");
    scanf("%d", &b);

    printf("the sum is %d", a + b);
}

void Sub(){
    int a,b;
    printf("enter value of a : ");
    scanf("%d", &a);

    printf("enter value of b : ");
    scanf("%d", &b);

    printf("the minus is %d", a - b);
}
//check for log
void Log(){
    double a,b;
    printf("enter value of a : ");
    scanf("%lf", &a);


    printf("%lf", log(a));
}

void Div(){
    int a,b;
    printf("enter value of a : ");
    scanf("%d", &a);

    printf("enter value of b : ");
    scanf("%d", &b);

    printf("the div is %d", a / b);
}

void Mult(){
    int a,b;
    printf("enter value of a : ");
    scanf("%d", &a);

    printf("enter value of b : ");
    scanf("%d", &b);

    printf("the multiplication is %d", a * b);
}

void Sqrt(){
    double a,b;
    printf("enter value of a : ");
    scanf("%lf", &a);


    printf("%lf", sqrt(a));
}



    


