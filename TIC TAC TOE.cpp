#include <bits/stdc++.h>
using namespace std;// O = 79, X = 88
#define go cout<<'\n'
typedef char matrix[3][3];
void displayMatrix(matrix m){
    for(int i = 1; i <=3;++i){
        for(int j = 1; j <=3;++j){
            printf("[%c] ", m[i][j]);
        }
        go;
    }
}
void hasil(int num){
    cout << "PLAYER " << num << " WIN\n";
}
int main(){
    matrix mt;
    char k = 'A';
    for(int i = 1; i<=3;++i){
        for(int j = 1; j <=3;++j){
            mt[i][j] = ' ';
            k++;
        }
    }
    displayMatrix(mt);
    cout << "Player 1 : X \t Player 2 : O\n\n";
    int baris1,kolom1,baris2,kolom2;
    char tanda1 = 'X',tanda2 = 'O';
    int turn = 0;
    while(true){
        cout << "Player 1 : "; cin >> baris1 >> kolom1;
        mt[baris1][kolom1] = tanda1;
        displayMatrix(mt);
        char sn = 'X';
        if(mt[1][1] == sn && mt[2][2] == sn && mt[3][3]==sn){
            hasil(1);
            break;
        }else if(mt[3][1] == sn && mt[2][2] == sn && mt[1][3]==sn){
            hasil(1);
            break;
        }else if(mt[1][1]==sn && mt[1][2]==sn&&mt[1][3]==sn){
            hasil(1);
            break;
        }else if(mt[2][1] ==sn && mt[2][2]==sn&&mt[2][3]==sn){
            hasil(1);
            break;
        }else if(mt[3][1]==sn&&mt[3][2]==sn&&mt[3][3]==sn){
            hasil(1);
            break;
        }
        turn+=1;
        if(turn==5) break;
        cout << "Player 2 : "; cin >> baris2 >> kolom2;
        mt[baris2][kolom2] = tanda2;
        displayMatrix(mt);
        sn = 'O';
        if(mt[1][1] == sn && mt[2][2] == sn && mt[3][3]==sn){
            hasil(2);
            break;
        }else if(mt[3][1] == sn && mt[2][2] == sn && mt[1][3]==sn){
            hasil(2);
            break;
        }else if(mt[1][1]==sn && mt[1][2]==sn&&mt[1][3]==sn){
            hasil(2);
            break;
        }else if(mt[2][1] ==sn&&mt[2][2]==sn&&mt[2][3]==sn){
            hasil(2);
            break;
        }else if(mt[3][1]==sn&&mt[3][2]==sn&&mt[3][3]==sn){
            hasil(2);
            break;
        }
    }
    return 0;
}
