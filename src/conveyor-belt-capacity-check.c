#include <stdio.h>

int main(){
int motorCount, totalPackageWeight, MOTOR_CAPACITY = 12;

printf("How many motors are carrying the packages? \n");
scanf("%d", &motorCount);

if (motorCount > 0){
    printf("Amount of motors %d\n\n" ,motorCount);
}


printf("How many kg of packages do we expect? \n");
scanf("%d", &totalPackageWeight);
if (totalPackageWeight <= MOTOR_CAPACITY*motorCount){
    printf("Yes! The conveyor belt can carry the packages.");
}
else(printf("No. The conveyor belt cannot carry the packages."));

}

