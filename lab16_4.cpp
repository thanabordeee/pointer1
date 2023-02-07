#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b, int &c, int &d)
{
	int x = rand()%4+1;
	int g,h,j,k;
	g = a;
	h = b;
	j = c;
	k = d;
	switch (x)
	{
	case 1:  
		 a=h; b=k; c=g; d=j;
		break;
	case 2: 
		 a=j; b=g; c=k; d=h;
		break;
	case 3: 
		 a=j; b=k; c=h; d=g;
		break;
	case 4: 
		   b=j; c=k; d=h;
		break;
	
	
	default:
		break;
	}
	
}