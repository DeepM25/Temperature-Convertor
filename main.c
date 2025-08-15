#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    char choice;
    float F = 0.0;
    float C = 0.0;
    printf("Temperature Conversion Program\n");
    printf("C.Fahrenheit to Celsius\n");
    printf("F.Celsius to Fahrenheit\n");
    printf("Enter your choice (C or F): ");
    scanf(" %c",&choice);

    if(choice == 'C' || choice == 'c'){
        printf("Enter value in Fahrenheit: ");
        scanf("%f",&F);
        C = (F-32)*(5.0/9.0);
        printf("%.1f Fahrenheit is equal to %.1f celsius",F,C);

    }
    else if(choice == 'F' || choice == 'f'){
        printf("Enter value in celsius: ");
        scanf("%f",&C);
        F = (C*(9.0/5.0))+32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit",C,F);

    }

    
    return 0;
}
