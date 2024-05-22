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

int identical_right(int snow1[], int snow2[], int start) {
    for(int offset=0; offset<6; offset++) {
        if(snow1[offset] != snow2[(start + offset)%6]) {
            return 0;
        }
    }
    return 1;
}
int identical_left(int snow1[], int snow2[], int start) {
    int snow2_index;
    for(int offset=0; offset<6; offset++) {
        snow2_index=start-offset;
        if(snow2_index<0) {
            snow2_index=snow2_index+6;
        }
        if(snow1[offset] != snow2[snow2_index]) {
            return 0;
        }
    }
    return 1;
}
int main(void) {
   int a[5] = {1,2,0,5,4};
    identify_identical(a,5);
    return 0;
}
