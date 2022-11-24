#include<iostream>
using namespace std;

int main()
{
	int l,b,h,r,choice;
	cout<<"enter the value of l";
	cin>> l;
		cout<<"enter the value of b";
	cin>> b;
		cout<<"enter the value of h";
	cin>> h;
		cout<<"enter the value of r";
	cin>> r;
	cout<<"1. area \n 2. perimeter \n 3. volume \n 4.volumec \n 5.perimeterR \n enter choice";
    cin>>choice;
    switch(choice)
    {
    	case 1:
    		cout<<"area="<<3.14*r*r;
    		break;
    		case 2:
    			cout<<"perimeter="<<2*3.14*r;
    			break;
    			case 3:
    				cout<<"volume="<<l*b*h;
    				break;
    					case  4:
    						cout<<"volumec="<<3.14*r*r*h;
    						break;
    						case  5:
    						cout<<"perimeterR="<<2*(l+b);
    						break;
    						default :
    							cout<<("Invalid Input");
	}
	return 0;
}
	
