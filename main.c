#include <stdio.h>

void identify_identical(int value[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(value[i] == value[j]) {
                printf("Twin integers found.\n");
                return;
            }
        }
    }
    printf("No two integers are alike.\n");
}

int main(void) {
   int a[5] = {1,2,0,5,4};
    identify_identical(a,5);
    return 0;
}
