#include   <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     printf("%08d",a);
//     return 0;
// }
int main() {
    int N;
    
    // Reading the input integer
    scanf("%d", &N);
    
    // Check if N is zero or non-zero
    if (N == 0) {
        printf("Zero\n");
    } else {
        printf("Non Zero\n");
    }
    
    return 0;
}