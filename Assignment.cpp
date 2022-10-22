#include <iostream>
using namespace std;
int main()
{
	
	cout<<"Mostafa Mohamed Ahmed Zayed\n\n";

	int number;
	int size,tot=size,i,elem,j,found=0;
	cout <<"Enter the array size : ";
	cin>>size;
	
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
		cout << "the number is not found";
	}
	
	cout<<"\nEnter element to Delete:";cin>>elem;
       for(i=0;i<tot;i++)
       {
           if (arrays[i]==elem)
           {
              
               for(j=i;j<(tot-1);j++)
                arrays[j]=arrays[j+1];
                found++;
                i--;
                tot++;
           
           }
       }
       if(found==0)
       {cout<<"\nElement doesnot found in the Array!";}
       else
       {
           cout<<"\nElement Deleted successfully! \n";
           for(i=0;i<tot;i++)
           cout<<arrays[i]<<"   ";
       }
	

	return 0;
}