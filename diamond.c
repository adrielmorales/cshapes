#include <stdio.h>

int main(){
	for(int i=0; i<5; i++){
		for(int j=0; j<6; j++){
			if(i >= 3){
				if(j >= i-1 && j <= i+1){
					printf("#");
				}
				else{
					printf(" #");
				}
			}
			else{
				if(j >= 3-i && j <= 3+i){
					printf("#");
				}
				else{
					printf(" ");
				}
			}

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