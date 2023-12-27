//1-amaliy vazifa//

//1-masala//

// #include <stdio.h>

// int main(){
// int x[5];
// x[0]=0; x[1]=1; x[2]=2; x[3]=3; x[4]=4;
// printf("%d %d %d %d %d\n", x[0], x[1], x[2], x[3], x[4]);

// return 0;
// }

//2-masala//

// #include <stdio.h>

//     int main(){
//     int x[5];
//     x[0]=0; x[1]=1; x[2]=2;
//     x[3]=3; x[4]=4;

//     for(int i = 0; i < 5; i++) {
//         printf("%d ", x[i]);
//     }

//     return 0;
// }


//3-masala//

// #include <stdio.h>

// int main() {
    
//     int son[] = {80, 71, 91, 95, 77, 79, 88};

//     for(int i = 0; i < 7; i++) {

//         if(son[i] > 80){
//             printf("%d ", son[i]);
//         }
//     }

//     return 0;
// }

//4-masala//

// #include <stdio.h>
// int main(){
// int i=0, x[5];
// for(i=0;i<5;i++) {
// printf("%d %#x \n", x[i], x[i]);
// }
// return 0;
// }

//5-masala//

// #include <stdio.h>
// int main(){
// int i=0, x[5] = {0, 1, 2} ;
// for(i=0;i<5;i++) {
// printf("%d ", x[i]);
// }
// return 0;
// }

//6-masala//

// #include <stdio.h>
// int main(){
// int i=0, x[5] = {0} ;
// for(i=0;i<5;i++) {
// printf("%d ", x[i]);
// }
// return 0;
// }

//7-masala//


// #include <stdio.h>
// int main(){
// int i=0, x[ ] = {0, 1, 2, 3, 4} ;
// for(i=0;i<5;i++) {
// printf("%d ", x[i]);
// }
// printf("\nSize of an array = %ld \n", sizeof(x)/sizeof(int));
// return 0;
// }

//8-masala//

// #include <stdio.h>
// int main(){
// int x[]={10, 5, 4, 3, 20};
// printf("%d %d\n", x[2], x[4]);
// return 0;
// }

//9-masala//

// #include <stdio.h>

// int main() {

//     int n;
//     printf("Massiv uzunligini kiriting: ");
//     scanf("%d", &n);
//     int son[n];

//     for(int i = 0; i < n; i++){
//         printf("%d-sonni kiriting: ", i+1);
//         scanf("%d", &son[i]);
//     }
//     puts("Natija: ");
//     for(int j = 0; j < n; j++){
//         printf("%d ", son[j]);
       
//     }

//     return 0;
// }

//10-masala//


// #include <stdio.h>


// int main() {

//     int i=0, sum=0, x[5]={3, 4, 5, 1, 3};
//     for(i=0; i<5; i++) 
//         sum = sum + x[i];

//     printf("%d %d \n", sum, x[0]+x[1]+x[2]+x[3]+x[4]/5);
//     printf("%d %d \n", sum, (x[0]+x[1]+x[2]+x[3]+x[4])/5);
//     printf("%d %d \n", sum, sum/5);
//     printf("%d %d \n", sum, sum/5.0);
//     printf("%d %f \n", sum, sum/5.0);



//     return 0;
// }



