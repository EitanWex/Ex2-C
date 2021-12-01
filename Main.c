#include <stdio.h>
#include "my_mat.h"
int main()
{
char c;
scanf("%c",  &c);
while (c!='D')
{
    if(c=='A'){
         make_mat(); }

    if(c=='B'){
         yon_path(); }

    if(c=='C'){
         what_path();
         printf("\n"); }

    scanf("%c",  &c);

}
return 0;
}
