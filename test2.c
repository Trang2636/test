#include <stdio.h>
    int main(){
	int rows,cols,i,j,choice,key , value ,check;
	int multi =1; 
	int arr[50][50];
	do{
		printf ("==MENU==");
	printf ("\n1.Nhap kich co va gia tri phan tu ");
		printf("\n2.In ra gia tri cac phan tu theo ma tran ");
	printf("\n3.In ra phan tu nam tren duong bien va tinh tich");
	printf("\n4.In ra cac phan tu nam tren duong cheo chinh ");
	printf ("\n5.In ra cac phan tu nam tren duong cheo phu");
	printf("\n6.Sap xep duong cheo chinh theo thu tu tang dan  ");
	printf("\n7.Tim kiem phan tu va in ra vi tri index cua phan tu do ");
	printf("\n8.Thoat ");
		
		printf("\nLua chon cua ban la: ");
		scanf ("%d",&choice); 
		switch (choice ){
			case 1 : // Nhap kich co va gia tri phan tu
			printf ("Moi ban nhap vao so hang  ");
			scanf ("%d",&rows) ;
			printf ("Moi ban nhap vao so cot ");
			scanf ("%d",&cols) ;
			for (i=0;i<rows ; i++){
				for (j=0;j<cols; j++){
					printf("Moi ban nhap vao phan tu o vi tri %d hang %d: ",j+1,i+1 );
					scanf("%d",&arr[i][j]) ;
				}
			} 
			break; 
			case 2 : //In ra gia tri cac phan tu theo ma tran
			for (i=0;i<rows ; i++){
				for (j=0;j<cols; j++){
					printf ("%2d ",arr[i][j]); 
				}
				printf("\n"); 
			} 
			break ; 
			case 3 : // In ra phan tu nam tren duong bien va tinh tich
				for(i=0;i<rows ;i++){
					for (j=0 ; j< cols ; j++){
						if (i==0 || j==0 ||i==rows -1 || j== cols - 1){
							printf ("%2d",arr[i][j]); 
							multi*= arr[i][j]; 
						} 
						printf ("\n"); 
					} 
				}  
				printf ("\n Tich cua cac phan tu tren duong bien la %d\n ",multi ); 
				break ; 
				case 4: //In ra cac phan tu nam tren duong cheo chinh
				
				 if (rows != cols ){
				 	printf ("khong hop le , so hang phai bang so cot\n  ");
					 
				 }else if (rows == cols ){	 
				 for (i=0;i<rows ; i++){
				for (j=0;j<cols; j++){
					if (i==j ){
						printf ("%2d\n",arr[i][i]); 
					}
				}
					}
				 	
				 }
				 break ; 
				 case 5 :  //In ra cac phan tu nam tren duong cheo phu
				 	//1 2 3 
					//2 3 4 
					//2 4 5 
					  if (rows != cols ){
				 	printf ("khong hop le , so hang phai bang so cot\n  ");
					
				 }else if (rows == cols ){	 
				 for (i=0; i < rows ; i++){ 
				
				     printf ("%2d\n",arr[i][rows -i-1]); 
			}
				}
			
			break ; 
			case 6 ://Sap xep duong cheo chinh theo thu tu tang dan 
			 if (rows != cols ){
				 	printf ("khong hop le , so hang phai bang so cot \n ");
					 return 1 ; 
				 }else if (rows == cols ){	 
				 for (i=0;i<rows ; i++){
				for (j=0;j<cols; j++){
						key == arr[0][0];
						if (arr [i][i]>key ){
							key = arr[i][i]; 
							printf ("\n%2d",arr[i][i]); 
						} 
						 
					}
				}
					}
				 	break ;
					 case 7 : //Tim kiem phan tu va in ra vi tri index cua phan tu do
					 printf ("Moi ban nhap vao phan tu muon tim: ");
					 scanf ("%d ",&value);
					 int position_row=-1;
					 int position_col =-1; 
					 for(i=0;i<rows; i++){
					 	for (j=0;j<cols;j++){
					 		if (value == arr[i][j]){
					 			check++; 
					 			position_row = i;
								 position_col = j; 
							 } 
						 } 
					 }
					 if (check != 0){
					 	printf ("\nPhan tu co ton tai trong mang ");
						 printf ("\nPhan tu nam o vi tri hang %d cot %d ",position_row ,position_col);
					 }else{
					 	printf ("Phan tu khong co trong mang "); 
					 } 
					 break;
					
			   

					  
					  
				 }
			 
		
			
			
			
		
	 }while (choice !=8 ); 
	return 0; 
} 
