#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int a,i,j,guess,flag=0,again,range,num,oddoreven,random2;
	srand((unsigned int)time(NULL));
	int random=1+(rand()%100);
	start:
	cout<<"Pick the number corresponding to the progrem that you want to try :\n\n1. Guessing Game\n\n2. Generate Random Number within a Range\n\n";
	cout<<"3. Generate a string of random numbers in a range\n\n4. Odd or Even Random Number Generator\n\n";
	cin>>a;
	if(a==1)
		{
			cout<<"\nWelcome to Guessing Game\n\n***********************************\n\nRules: A guessing game where the user has to guess a secret number. After every guess the program tells the user whether their number was too large or too small. At the end, the number of tries would be printed. It counts only as one try if they input the same number multiple times consecutively.\n";
			for(i=0;i<50;i++)
			{
				cout<<"\nEnter guess "<<i+1<<"\n";
				cin>>guess;
				if(random==guess)
				{
					if(i==0)
					{
						cout<<"Congrats! You found the number in 1st try. You deserve a treat!\n";
						flag=-1;
						goto again;
					}
					else
					{
						cout<<"Congrats! You found the number in "<<i+1<<" tries\n";
						flag=-1;
						goto again;
					}
				}
				else if(guess>random)
						{
							cout<<"\nDesired number is smaller than this guess\n";
						}
				else if(guess<random)
						{
							cout<<"\nDesired number is larger than this guess\n";
						}
			}
		}
	else if(a==2)
		{
				cout<<"\nEnter the range of the random number : ";
				cin>>range;
				cout<<1+(rand()%range)<<"\n";
				flag=-1;
		}
	else if(a==3)
		{
				cout<<"\nEnter the range of the strings of random numbers : ";
				cin>>range;
				cout<<"Enter the number of elements in the string : ";
				cin>>num;
				for(j=1;j<=num;j++)
					{
							cout<<1+(rand()%range)<<", ";
					}
				cout<<"\n";
				flag=-1;
		}
	else if(a==4)
		{
				cout<<"Press 1 for odd random number\nPress 2 for even random number\n";
				cin>>oddoreven;
				if(oddoreven==2)
					{
							for(i=0;i<100;i++)
								{
									random2=1+(rand()%100);
									if(random2%2==0)
									{
										cout<<"\nEven Random Number is "<<random2<<"\n";
										flag=-1;
										goto again;
									}
									continue;
								}
					}
				else if(oddoreven==1)
					{
						for(i=0;i<100;i++)
							{
								random2=1+(rand()%100);
								if(random2%2==1)
								{
									cout<<"\nOdd Random Number is "<<random2<<"\n";
									flag=-1;
									goto again;
								}
								continue;
							}
					}
				else
					{
						cout<<"Invalid Response! Please Try Again.";
						goto start;	
					}
		}
	else{
			cout<<"Invalid Response! Please Try Again!\n";
		}
	again:
			cout<<"\nPress 1 for going back to the main menu\nPress 2 for exiting the program\n";
			cin>>again;
			if(again==1)
			{
				goto start;
			}
			if(again==2)
			{
			
			}
			else
			{
				cout<<"Invalid Response! Exiting the program.....";
			}
	if(flag!=-1)
	{
		cout<<"Something Went Wrong! Please Try Again";
	}
	return 0;
}
