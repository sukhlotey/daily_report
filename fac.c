#include <stdio.h>

int main(){
    int number, fac =1;
    
    printf("Enter a factorial number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++){
          fac *= i;
}
    printf("Factorial of %d is %d\n" ,number, fac);
    return 0;

}
