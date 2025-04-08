#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1); 
    int counts[7]= {0};
    int sum =0;

    for (int i =0; i<100; i++){
        int roll = (rand() % 6) +1; // Generate a random number between 1 and 6
        counts[roll]++;
        sum+=roll;
    }
    for (int i = 1; i <=6; i++){
        printf("%d\n", counts[i]) 
    }
   printf("%d\n", sum);
   float average = (float)sum / 100;
   printf("%.1f", average);

    // Your code goes here

    return 0;
}
