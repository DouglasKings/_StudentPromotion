#include <stdio.h>

void promotionAssessment(double Attendance);

int main(){

    double Maths, Biology, Statistics, Physics, foodNutrition, Average, Attendance = 100;

    printf("Enter the Maths score: ");
    scanf("%lf", &Maths);
    printf("Enter the biology score: ");
    scanf("%lf", &Biology);
    printf("Enter the Statistics score: ");
    scanf("%lf", &Statistics);
    printf("Enter the Physics score: ");
    scanf("%lf", &Physics);
    printf("Enter the food nutrition score: ");
    scanf("%lf", &foodNutrition);

    Average = (Maths + Biology + Statistics + Physics + foodNutrition) / 5.0;
    promotionAssessment(Attendance);

    printf("The Maths score is: %.2lf \n", Maths);
    printf("The biology score is: %.2lf \n", Biology);
    printf("The Statistics score is: %.2lf \n", Statistics);
    printf("The Physics score is: %.2lf \n", Physics);
    printf("The food nutrition score is: %.2lf \n", foodNutrition);
    printf("The Average score is: %.2lf%% \n", Average);

    return 0;
}

void promotionAssessment(double Attendance){
    if(Attendance > 85){
        printf("The student is promoted. \n");
    }else{
        printf("The student is not promoted. \n");
    }
}