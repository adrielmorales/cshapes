#include <stdio.h>


int main(){
    char board[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            board[i][j] = ' ';
        }
    }


    for(int i=0; i<=2; i++){
        board[2+i][i] = '#';  //(2,0), (3, 1), (4, 2).
        board[i][2+i] = '#';  //()
        i++;
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%c", board[i][j]);
        }
        printf("\n");
    }



    return 0;
}

/*
                        #                     (0,2)
                       ###             (1,1), (1,2), (1,3)
                      #####     (2,0), (2,1), (2,2), (2,3), (2,4)  
                       ###             (3,1), (3,2), (3,3)
                        #                     (4,2)
*/