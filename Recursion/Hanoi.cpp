#include<iostream>
using namespace std;


void hanoi(int n, char beg, char aux, char end1)
{
	if(n==1)
	{
	cout<<"Move Disk [no. "<<n<<"] from peg "<<beg<<" to peg "<<end1<<endl;
		return;
	}

	hanoi(n-1,beg,end1,aux);
//	hanoi(1,beg,aux,end1);
	cout<<"Move Disk [no. "<<n<<"] from peg "<<beg<<" to peg "<<end1<<endl;
	hanoi(n-1,aux,beg,end1);
}


int main()
{
	int n;
	cout<<"How many Disks are there..! : ";
	cin>>n;
	hanoi(n,'A','B','C');
	return 0;
}
