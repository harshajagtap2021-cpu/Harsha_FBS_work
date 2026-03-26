

#include <stdio.h>

int main() {
    int no = 5;
    int fact=1;

    for(int i = 1; i <= no; i++)
	 {
      fact=fact*i;
    }

    
        printf("factorial:-%d",fact);

    return 0;
}