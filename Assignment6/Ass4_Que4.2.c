#include <stdio.h>
void strong(int n){


    for(int i = 1; i <= n; i++) {
        int temp = i, sum = 0;

        while(temp > 0) {
            int rem = temp % 10;

            int fact = 1;
            for(int j = 1; j <= rem; j++) 
			{   
                fact *= j;
            }

            sum += fact;
            temp /= 10;
        }

        if(sum == i) {
            printf("%d is Strong Number\n", i);
        }
    }

   

}
int main() {
    strong(500);
}