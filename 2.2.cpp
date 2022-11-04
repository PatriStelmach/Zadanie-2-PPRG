#include <iostream>

using namespace std;

int main() 
{
  int a = 0;
  int b = 0;
  
  
  cout << "podaj liczbe a: ";
  cin >> a;
  cout << "podaj liczbe b: ";
  cin >> b;

	cout << "kolumna gwiazdek o dlugosci b: \n" << endl;
	
  for (int d =0; d<b; d++ )
    {
      cout << "* " << endl;
    
    }
	
	cout << "wiersz gwiazdek o dlugosci a: \n" << endl;
	
  for (int c =0; c<a; c++ )
    {
      cout << "  *";
     
    }

	
	if (a>1 && b>1)
	{
		
  cout << endl; 
  
	cout << "Prostokat gwiazdek o wymiarach 'a' na 'b' : \n" << endl;
	
    for (int e =0; e<b; e++)
    {
		for( int f = 0; f<a; f++)
		{
			cout << "*" ;
		}
      cout << "\n";
		}
	
    
	

	cout << "Obwod prostokata o wymiarach 'a' na 'b' : \n" << endl;

	for (int j =0; j<a; j++ )
    {
      cout << "*";

		if(b<=1)break;
     
    }
	cout << endl;
	
	  for (int k =0; k<b-2; k++ )
    {
      cout << "*";
    

	for (int i =0; i<a-2; i++ )
    {
      cout << " ";
     
    }cout << "*\n";
		}

	
	 for (int k =0; k<a; k++ )
    {
	if(b<=1)break;
      cout << "*";
    
    }

	
	}

	else
		cout << "Nie da sie narysowac prostokata o bokach mniejszych lub równych 0" << endl;
}
