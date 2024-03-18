#include <iostream>
#include <stdio.h>
#include <math.h>
#include <windows.h>

using namespace std;

//operasi
double f(double x){
	return (pow(x,2)-exp(x)+3);
}

//utama
int main(){
	system("color F");
	double a,b,x,te,fa,fb,fx;
	int i,n;
	
	cout<<" ______________________________________________________\n";
	cout<<"|               MATA KULIAH METODE NUMERIK             |\n";
	cout<<"|                   METODE REGULA FALSI                |\n";
	cout<<"| ==================================================== |\n";
	cout<<"|                DEVAN CAKRA MUDRA WIJAYA              |\n";
	cout<<"|______________________________________________________|\n\n";	
	
	cout<<"\n Masukkan batas bawah (a)	= ";cin>>a;
	cout<<" Masukkan batas atas (b)	= ";cin>>b;
	cout<<" Masukkan toleransi error (te)	= ";cin>>te;
	cout<<" Masukkan banyaknya iterasi (n)	= ";cin>>n;	
	
	fa=f(a);
	fb=f(b);
	
	if(fa*fb>0){
	cout<<"\n Ket : [tidak ditemukan akar]\n";
	}
	else{
		printf(" __________________________________________________________________________________________________________________________________________________________________________");
		printf("\n|   i   |             a		|	b	|           f(a)	|           f(b)	|           x		|                         f(x)	|\n");
		printf("|_______|_______________________|_______________|_______________________|_______________________|______________________|___________________________________________________|\n");
		//perulangan
		for(i=1;i<=n;i++){
			//x
			x=((fb*a)-(fa*b))/(fb-fa);
			//fx
			fx=f(x);
			//output keseluruhan
			printf("|   %d	|	%.9lf	|	%.0lf	|      %.9g	|	%.9g	|      %.9lf	|                    %.9g	|\n",i,a,b,fa,fb,x,fx);
	
			if(fa<0){
				//b
				b=x;
				//f(b)
				fb = f(b);
				}
				else{
					//a
					a=x;
					//f(a)
					fa = f(a);
					}
				}
					printf("|_______|_______________________|_______________|_______________________|_______________________|______________________|___________________________________________________|\n");
					
					//output x
					printf("\n\n Akar persamaan adalah %.9lf\n",x);
					
					//logic2 & Output f(x)
					if (f(x)<0){
						fx=(fabs(fb*-1)); //negatif => positif
						printf(" Nilai error = %.9g\n",fx);
					}
					else
						printf(" Nilai error = %.9g\n",fx); //positif			
		}
		return 0;
}
//Copyright (C) Regula Falsi by Devan All Rights Reserved
