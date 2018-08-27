#include <iostream>
using namespace std;
int main()
{
	int drinks,dessert,rice,viand,total,pay,change;
cout<<"Welcome to Gonzaga's eatery\n\n";
	cout<<"prize of drinks: ";
	cin>>drinks;
	cout<<"prize of dessert: ";
	cin>>dessert;
	cout<<"prize of rice: ";
	cin>>rice;
	cout<<"prize of viand: ";
	cin>>viand;
	total=drinks+dessert+rice+viand;
	cout<<"Total price is: "<< total <<endl;
	cout<<"given amount of customer:";
    cin>>pay;
  change=pay-total;
    cout<<"change:"<< change <<endl;
	 
    
	return 0;
}