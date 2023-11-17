#include <iostream>

using namespace std;

int fibonaci2(int n){
	if(n==1 || n==2){	
		return 1;
	}else{
		return fibonaci2(n-1) + fibonaci2(n-2);                   
	}
	return 0;
	
}

int fibonaci1(int n){
	
	int result;
	return result = (n==1 || n==2) ?  1 :fibonaci1(n-1)+fibonaci1(n-2);
}


int main(){		
	
	cout<<"---Fibonacci---"<<endl;		               
	int n;                          
	cout<<"Masukkan n : ";
	cin>>n;
	                                      
	int hasil = fibonaci1(n);
	cout<<"Fibonacci ke-"<<n<<" = "<<hasil;
	
	return 0;
}