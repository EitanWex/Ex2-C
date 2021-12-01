#include <stdio.h>
#define v 10

int arr[v][v];
void make_mat(int arr[v][v]){ 

    for (int i = 0; i < v; i++){ 
        for (int j = 0; j < v; j++){ 
         
                    scanf("%d", &arr[j][i]);
             
        }
    }

void yon_path(int arr[v][v]){

    int first;
    int second;
    //while (first < 0 || first > v){
        scanf("%d", &first);
  //  }
    //while (second < 0 || second > v){
        scanf("%d", &second);
   // }

    int mat[v][v];
		for (int i=0;i<v;i++) {
			for (int j=0;j<v;j++) {
				mat[i][j]=arr[i][j];				
			}
		}
		for (int i = 0; i < v; i++){
			for ( int j = 0; j < v; j++){ 
				for (int k = 0; k < v; k++){
					if (mat[j][i] != 0 && mat[i][k] != 0){
						if (mat[j][k] > mat[j][i] + mat[i][k] || mat[j][k]==0){
							mat[j][k] =  mat[j][i] + mat[i][k] ;
							mat[k][j] =  mat[j][i] + mat[i][k] ;
							mat[k][k]=0;
						}
					}
				}
			}
		}
		
 
    
    if (mat[first][second] == 0){
        printf("False\n");
    }
    else{
        printf("True\n");
    }
}

void what_path(int arr[v][v]){
    int first;
    int second;
    //while (first < 0 || first > v){
        scanf("%d", &first);
   // }
    //while (second < 0 || second > v){
        scanf("%d", &second);
   // }
    
    int mat[v][v];
		for (int i=0;i<v;i++) {
			for (int j=0;j<v;j++) {
				mat[i][j]=arr[i][j];				
			}
		}
		for (int i = 0; i < v; i++){
			for ( int j = 0; j < v; j++){ 
				for (int k = 0; k < v; k++){
					if (mat[j][i] > 0 && mat[i][k] > 0){
						if (mat[j][k] > mat[j][i] + mat[i][k] || mat[j][k] == 0){
							mat[j][k] =  mat[j][i] + mat[i][k] ;
							mat[k][k] =  mat[j][i] + mat[i][k] ;
							mat[k][k]=0;
						}
					}
				}
			}
		}
		
    



    if (mat[first][second] == 0){
        printf("-1\n");
    }
    else{
        printf("%d\n",mat[first][second]);
    }
}


}

// void directory(){
// 	char act='c';
// 	while (act!='D'){
// 		scanf("%c",&act);
// 		if (act=='A'){
// 			make_mat(arr);
         
// 		}
// 		else if (act=='B'){
// 			yon_path(arr);
          
// 		else if(act=='C'){
// 			what_path(arr);
          
// 		}
// 	}		
}	