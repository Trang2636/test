#include<stdio.h>
int main (){
	int n ,i,check ,j, choice , position ,temp,value ,max; 
	int arr[100]; 
	do{
	
	printf ("===MENU===");
	printf("\n1.Nhap so phan tu can nhap va gia tri cac phan tu ");
	printf ("\n2.In ra cac gia tri phan tu dang quan li\n3.In ra GTLN cua mang  ");
	printf ("\n4.In ra cac phan tu so nguyen to trong mang ");
	printf("\n5.Them 1 phan tu vao trong mang ");
	printf("\n6.Xoa 1 phan tu trong mang ");
	printf("\n7.Sap xep mang theo thu tu tang dan ");
	printf("\n8.Tim kiem phan tu va in ra vi tri index cua phan tu do\n ");
	printf("Moi nhap vao lua chon cua ban ") ;
	scanf("%d",&choice ); 
	switch(choice ){
		case 1 :  //Nhap so phan tu can nhap va gia tri cac phan tu
		printf("\nMoi nhap vao so phan tu ");
		scanf("%d",&n); 
		for(i=0 ; i<n ;i++){
			printf ("Moi ban nhap vao gia tri cua phan tu thu %d ",i+1 );
			scanf("%d",&arr[i]); 
		}
		break;	 
		
		case 2 : //.In ra cac gia tri phan tu dang quan li
		for(i=0 ; i<n ;i++){
			printf ("%2d\n",arr[i]);
	}
	break;
	  case 3 : //In ra GTLN cua mang
	  for(i=0 ; i<n ;i++){
	  max = arr[0]; 
	   if (arr[0]<arr[i]){
	   	max = arr[i] ;
	   } 
	  }
	printf ("\nGTLN cua mang la : %d\n ",max) ;
	break;
	case 4 : //In ra cac phan tu so nguyen to trong mang
	for(i=0 ; i<n ;i++){
		if(arr[i]==3 || arr[i]==7 || arr[i]==5 || arr[i]==2 || arr[i]>1 && arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%4!=0 && arr[i]%5!=0 && arr[i]%6!=0 && arr[i]%7!=0 && arr[i]%9!=0 && arr[i]%8!=0){
					printf("arr[%d]=%d la so nguyen to\n",i,arr[i]);}}
	break; 
	case 5 :// Them 1 phan tu vao trong mang
	printf ("Moi nhap vao vi tri ban muon them ");
	 scanf("%d",&position);
	 if(position<0 || position >n) {
	 		printf ("Khong hop le roi "); 
	 }else{
	 	printf("Moi nhap vao phan tu muon them");
	 scanf("%d",&value);
	 	for (int i = n; i > position; i--) {
       				arr[i] = arr[i - 1];
    			}
    			arr[position]=value;
    			n++;
    				for(int i =0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
	 }
	 break ;
	 case 6 : //Xoa 1 phan tu trong mang
	 printf ("Moi nhap vao vi tri muon xoa ");
	 scanf("%d",&position); 
	 if (position <0 || position >n ){
	 	printf ("Khong hop le \n");
		  
	 } else{
	 	for (int i = n; i <n-1; i++) {
       				arr[i] = arr[i + 1];
    			}
    			n--;	
    			//in lai mang sau khi xoa  
    			for(int i =0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");	
	
	 }
	 break ;
	 
	 case 7: // Sap xep mang theo thu tu tang dan 
	
	
	 		 for (int i=0; i<n-1; i++)
			 {
			 	for (int j=0; j<n-1-i; j++)
			 	{
			 		if (arr[j+1]<arr[j])
			 		{
			 			temp=arr[j];
			 			arr[j]=arr[j+1];
			 			arr[j+1]=temp;
					 }
				 }
					  } 
					 for (int i=0; i<n; i++)
			       {
			    	printf ("%d ",arr[i]);
			       } 
			 printf ("\n");
			  
		 
	  
	 case 8 :
	 printf ("Moi nhap vao phan tu ban muon tim ");
	 scanf("d",&value); 
	 for (i=0;i<n;i++){
	 	if(arr[i]==value){
	 		check++; 
	 		printf ("Gia tri ban muon tim nam o vi tri %d\n ",i) ;
	 		
		 }
		  
		 }
		 if ( check ==0){
		 		printf("Khong ton tai trongmang\n");
		 }
		
		 
		 
		  
		  break ; 
		   case 9 : 
		 
		  break; 
	
}

}while(choice!=10) ;
		
	return 0; 
}
