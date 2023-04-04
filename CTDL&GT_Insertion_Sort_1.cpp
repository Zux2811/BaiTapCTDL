#include<stdio.h>
#include<math.h>
void ChenTrucTiep(int a[], int n){
	int zux, i; 
	int x;
	for (i=1; i<n; i++){
		x = a[i]; 
		zux = -1;
		while((zux>=0)&&(a[zux]>x)){
			a[zux+1]=a[zux];
			zux--;
		}
		a[zux+1]= x;
	}
}
void main()
{
	int a[7] = {18, 34, 21, 66, 45, 51, 7};
	ChenTrucTiep(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}

