// #include <stdio.h>
// int fib(int n);
// int main(){
// int n=5;
// int i=fib(n);
// printf("%d",i);
// }

// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else{
//         return fib(n-2)+ fib(n-1);
//     }
// }
// #include <stdio.h>
// int main (void) {
//     int num[] = { 1, 2, 3, 4, 5, 99, 1, 2, 3, 4, 5};
//     unsigned int i;
//     int accum;

//     for (accum = 0, i = 0; i < sizeof(num)/sizeof(*num); i++)
//         accum ^= num[i];

//     printf ("%d\n", accum);

//     return 0;
// }

#include <stdio.h>
int main(){
    int n;
    int i;
    for(i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            printf("FIzzBuzz\n");
        }
        
    }
}