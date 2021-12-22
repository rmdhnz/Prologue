/*This source code is written by FADHLY RAMADHAN
*DEPARTEMEN TEKNIK ELEKTRO
*INSTITUT TEKNOLOGI SEPULUH NOPEMBER
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define go printf("\n")
#define ll long long
void triangle(int n){
	for(int i = n; i>=1; --i){
		// if(i%2==0) continue;
		if(i%2==0) continue;
		for(int j = n-i; j>=1; --j) printf(" ");
		for(int j = 1; j <=i; ++j){
			if(j==1) printf("*");
			else printf(" ");
		}
		for(int j = 2; j<=i; ++j){
			if(j==i) printf("*");
			else printf(" ");
		}
		go;
	}
}
void pyramid(int n){
    int m = 4, p = 4;
    for(int i = n-4; i <=n; ++i){
        for(int j = n-i; j>=1; --j) printf(" ");
        for(int j = 1; j <=i; ++j){
            if(j <= i - m){
                printf("0");
            }else printf(" ");
        }
        for(int j = 2; j <=i; ++j){
            if(j <=p) printf(" ");
            else printf("o");
        }
        go;
        m-=1;
        p-=1;
    }
}
void rectangle(int n){
	for(int i = 1; i <3; ++i){
		for(int j = 1; j <=n; ++j) printf("*");
		go;
	}
}
int main(){
	printf("Masukkan range 20 - 30 agar lebih terbentuk\n");
	int n; scanf("%d", &n);
	pyramid(n);
	rectangle(2*n);
	triangle(n);
}
