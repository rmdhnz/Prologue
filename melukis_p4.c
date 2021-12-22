/*This source code is written by FADHLY RAMADHAN
*DEPARTEMEN TEKNIK ELEKTRO
*INSTITUT TEKNOLOGI SEPULUH NOPEMBER
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define go printf("\n")
typedef enum{false,true}bool;
void rec(){
    puts("\\");
    puts("/");
    puts("\\");
    puts(" \\");
    puts(" /");
    puts("/");
    puts("\\");
    puts("/");
}
int main(){
    int n; scanf("%d", &n);
    if(n==1){
        printf("\\"); printf("\n");
        printf("/");
    }
    else if(n == 2) rec();
    else{
        rec();
        for(int x = 3; x<=n; ++x){
            for(int i = 1; i<=x; ++i){
                for(int j = 1; j<=i; ++j){
                    if(j==i) printf("\\");
                    else printf(" ");
                }go;
            }
            for(int i = x; i>=1; --i){
                for(int j = 1; j<=i;++j){
                    if(j==i) printf("/");
                    else printf(" ");
                }go;
            }
            rec();
        }
        for(int x = n-1; x>=3; --x){
            for(int i = 1; i<=x; ++i){
                for(int j = 1; j<=i; ++j){
                    if(j==i) printf("\\");
                    else printf(" ");
                }go;
            }
            for(int i = x; i>=1; --i){
                for(int j = 1; j<=i;++j){
                    if(j==i) printf("/");
                    else printf(" ");
                }go;
            }
            rec();
        }
    }
}
