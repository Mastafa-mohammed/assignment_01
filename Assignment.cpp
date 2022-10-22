#include <iostream>
using namespace std;
int main()
{
	
	cout<<"\n\n[-] Mostafa Mohamed Ahmed Zayed\n\n";

	int number;
	int size,i,elem,j,found=0;
	cout <<"Enter the array size : ";
	cin>>size;
	cout<<endl;
	int arrays[size] = {};
	for (int i = 0;i < size;i++) {
		cout << "Enter the array element [" << i << "]:";
		cin >> arrays[i];
	}
	cout << endl << "Enter a Number to be Searched : ";
	cin >> number;
	
	for (int i = 0; i < size;i++)
	{

		if (number == arrays[i])

		{
			cout << "The number "<<number<<" is found " << "at position "<<i+1 << endl;
			break;
		}
		else if (i==size-1)
		cout << "\nthe number not found\n";
	}
	int pos;
	cout<<"\nEnter Element to be added : ";
	cin>>elem;
	cout<<"\nAt What Position : ";
    cin>>pos;
	 	for ( i = size ; i >= pos; i--)                      
            arrays[i] = arrays[i-1]; 
            arrays[i] = elem;
            size++;
                           
		cout<<"\nThe New Array is : \n\n";
        for ( i = 0; i < size; i++)
            cout<<arrays[i]<<" ";
			cout<<"\n";

	cout<<"\nEnter element to Delete : ";
	cin>>elem;
       for(i=0;i<size;i++)
       {
           if (arrays[i]==elem)
           {
              
               for(j=i;j<(size-1);j++)
                arrays[j]=arrays[j+1];
                found++;
                i--;
                size--;
           }
       }
       if(found==0)
       {cout<<"\nElement wasn't found in the Array!";}
       else
       {
           cout<<"\nElement Deleted successfully! \n";
		   cout<<"\nThe New Array is : \n\n";
           for(i=0;i<size;i++)
           cout<<arrays[i]<<"   ";
       }
	

	return 0;
}