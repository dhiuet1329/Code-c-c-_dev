#include <stdio.h>
#include <math.h>

int main(){

	 int luachon;
	printf("_____MENU CHUONG TRINH_____");
	printf("\n B1:Xay dung chuong trinh tinh tu hoc.");
	printf("\n B2:Xay dung chuong trinh giai phuong trinh.");
	printf("\n B3:Xay dung chuong trinh tinh tien dien.");
	do{
	
	printf("\n Hay nhap lua chon: ");
	scanf("%d", &luachon);
	switch(luachon){
	   case 1:
		 printf("Xay dung chuong trinh tinh tu hoc");
		 float diem;
 	printf("\nXin moi nhap diem: ");
	scanf("%f", &diem);
 	  if(diem < 3.5 && diem >=0){
	  	 printf("Hoc luc kem");	   
       }else if(diem >= 3.5 && diem < 5){
	   	 printf("Hoc luc yeu");
	   }else if(diem < 6.5 && diem >= 5){
	   	 printf("Hoc luc TB");
	   }else if(diem < 8 && diem >= 6.5){
	   	 printf("Hoc luc kha");
	   }else if(diem < 9 && diem >= 8){
	   	 printf("Hoc luc gioi");
	   }else if(diem >= 9 && diem <=10){
	   	 printf("Hoc luc suat xac");
	   }
     	 break;
	   case 2:
		 printf("Xay dung chuong trinh giai phuong trinh");
		 printf("\nPhuong trinh co dang ax + b = 0\n");
	   float a;
	   float b;
	   printf("nhap a = ");
	   scanf("%f", &a);
	   printf("nhap b = ");
	   scanf("%f", &b);
	   if(a == 0){
	   	 if(b == 0){
	   	 	   printf("phuong trinh co vo so nghiem");
			}else if(b != 0){
				printf("phuong trinh vo nghiem");	
			} 
	   }else{
	   	  printf("phuong trinh co nghiem x = -b/a" );
	   	  printf("= %g", -b/a);
	   }
	   
	//bai2.2
	printf("\nPhuong trinh co dang ax^2 +bx +c = 0 \n");
	float a1, b1, c1, delta, X1, X2;
	
	printf("nhap a =");
	scanf("%f",&a1);
	printf("nhap b =");
	scanf("%f",&b1);
	printf("nhap c =");
	scanf("%f",&c1);
	 if(a1 == 0){
	 	printf("phuong trinh thanh bx + c = 0\n");
	 	printf("x=%g", -c1/b1);
	 }else{
	 	printf(" delta = %g" , b1*b1 - 4*a1*c1);	
	  if(delta > 0){ //
	 	 X1 = (-b1+sqrt(delta)/(2*a1));
	 	 X2 = (-b1-sqrt(delta)/(2-a1));
	 	 printf("\n nghiem thu nhat X1 = %g",X1);
	 	 printf("\n nghiem thu hai X2 = %g",X2);
	 }else if(delta == 0){
	 	printf("\n phuong trinh co nghiem kep: X1 = X2 = %g", -b1/2*a1);//1 2 1
	 }else{
	 	 printf("\n phuong trinh vo nghiem");
	 }	
	 }
		 break;
	   case 3:
		 printf("Xay dung chuong trinh tinh tien dien");
		 
		 break;
	   default:
		 printf("Lua chon ko hop le");
		 break;
	}
}while(luachon=4);
return 0;
}

  

