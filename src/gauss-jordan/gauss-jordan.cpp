#include "jonathan2.h"

int main(){
	int n;
	double mh;
	system ("color 03");
	cout<<"Solucion de Sistema de ecuaciones hasta 7 variables por Gauss"<<endl;
	cout<<"Introduzca el numero de variables del sistema: ";
	cin>>n;
	if(n<=7){
		double A[n][n+1];
		double cambia[n];	
		bool lCero;
	marcomatriz(5,6,n, n+1);
	for (int x=0; x<n; x++){
		posxy(2,7+x*2);cout<<"X"<<x+1;
		posxy(9+x*10, 5);cout<<"X"<<x+1;
			
	}
	posxy(10+n*10,5);cout<<"R";
	
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n+1;j++){
				posxy(8+j*10,7+i*2);cin>>A[i][j];
				if ((i==0) & (j==0) & (A[i][j]==0)){ lCero=1;
				}
				cout<<endl;
			}
		}
		if (lCero==1){
			for (int ren=1;ren<n;ren++){
		    	if (A[ren][0]!=0){
		  
					for(int i=0;i<n;i++){
						cambia[i]=A[0][i];
						A[0][i]=A[ren][i];
						A[ren][i]=cambia[i];
					}
				}
			}
		}
		
		for(int i=0;i<n;i++){
					if(A[i][i]==0){
					cout<<"No tiene solucion";
					exit(0);
				}
			for(int j=0;j<n;j++){
				if(j!=i){
					mh=A[j][i]/A[i][i];
					for(int k=i;k<n+1;k++){
						A[j][k]=A[j][k]-mh*A[i][k];
					}		
				}else{
					mh=A[i][i];
					for(int k=0;k<n+1;k++){
						A[i][k]=A[i][k]/mh;
					}
				}

					
			}
			
		}
		
		
		system("cls");
	

//imprimir resultados

	for(int i=0;i<n;i++){
		for(int j=0;j<n+1;j++){
				posxy(8+j*10,7+i*2);cout<<A[i][j];
				cout<<endl;
			}
		}
	marcomatriz(5,6,n, n+1);
	for (int x=0; x<n; x++){
		posxy(2,7+x*2);cout<<"X"<<x+1;
		posxy(9+x*10, 5);cout<<"X"<<x+1;
			
	}
	posxy(10+n*10,5);cout<<"R";
		
		for(int i=0;i<n;i++){
				posxy(60,4+i*2);cout<<"x"<<i+1<<"="<<A[i][n];
				cout<<endl;
			
		}


	}else{
		cout<<"Ingresa un numero valido";
	}
	
	
	getch();
}
