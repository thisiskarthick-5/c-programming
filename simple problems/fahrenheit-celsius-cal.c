// fahrenheit to celsius
#include <stdio.h>
int main(){
    int fahrenheit , celsius , f_cal , c_cal;
    fahrenheit = 45;
    celsius = 56;
    f_cal = (celsius*1.8) + 32;
    c_cal = (fahrenheit-32) / 1.8;
    
    printf("fahrenheit : %dc  when celsius = %dc ",f_cal,celsius);
    printf("\ncelsius : %dc when fahrenheit = %dc",c_cal,fahrenheit );
    return 0;
    
    
}
