// #include <stdio.h>

// #include "my_mat.h"
// #include "my_mat.c"
// #define v 10

// int mat[v][v];


// int main(){
	
//     directory();
   
// return 0;	
// }	
#include <stdio.h>
#include "my_mat.h"
int main()
{
char a;
scanf("%c",  &a);
while (a!='D')
{
    if(a=='A'){
      matrixA();
    }
    if(a=='B'){
        matrixB();
    }
    if(a=='C'){
        matrixC();
        printf("\n");
    }

    scanf("%c",  &a);

}
return 0;
}
