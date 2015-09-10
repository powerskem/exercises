#include <stdio.h>

int main(void) {

    int origArray[5];
    int tmp,i;
    int arr[5];
    int swaps = 0;
    
    for(i=0;i<5;i++) {
        printf("integer:");
        scanf("%i",&origArray[i]);
    }

    // make a copy
    for(i=0;i<5;i++)
        arr[i]=origArray[i];

    do {
        // initialize swap counter
        swaps =0;

        // print current array
        for(i=0;i<5;i++) 
            printf("%i \t",arr[i]);
        printf("\n");

        for(i=0;i<5-1;i++) 
            // compare this and next number
            if (arr[i]>arr[i+1]) {
                // swap
                tmp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=tmp;
                // counts swaps
                ++swaps;
            }
        printf("Made %i swaps\n",swaps);
    } while (swaps>0);

    return 0;
}
