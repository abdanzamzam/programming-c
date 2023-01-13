#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // initialize the variables first.
    int amount_buy, pay, discount, sum[100], price[100],total[50];
    float total_all;
    string name_item[100];

    cout<<"==============================================\n";
    cout<<"Simple Cashier C++ Program\n";
    cout<<"==============================================\n\n";

    cout<<"Enter Purchase Amount : ";
    cin>> amount_buy; // buyers and the number of items purchased.

    for (int i=0;i<amount_buy;i++){
        cout<<"\nEnter Items to - "<<i+1<<"\n\n";
        cout<<"Name Item : ";
        cin>>name_item[i]; // enter the name of the item purchased

        cout<<"Number of Items : ";
        cin>>sum[i]; // enter the number of items purchased

        cout<<"Item Price : ";
        cin>>price[i]; // input price per item

        total[i] = sum[i]*price[i]; // total price of goods
        total_all += total[i]; // add up all the total items

    }
    cout<<"\n==============================================";
    cout<<"\nShopping Note Receipt";
    cout<<"\n==============================================";

    cout<<"\nNo | Item | Amount | Price | Total\n";
    for (int i=0; i<amount_buy; i++ ){
        cout<<i+1<<setw(8)<<name_item[i]<<setw(10)<<sum[i]<<setw(12)<<price[i]<<setw(12)<<total[i]<<endl;
    }

    // discount condition branching
    if(total_all>=100000){
        discount=0.06*total_all;
    }else if(total_all>= 50000){
        discount=0.04;
    }else if(total_all>= 25000){
        discount=0.02;
    }else{
        discount=0;
    }

    cout<<"----------------------------------------------\n";
    cout<<"Pay Amount : Rp."<<total_all<<endl;
    cout<<"Discount : Rp."<<discount<<endl;
    cout<<"Total Pay : Rp."<<total_all - discount<<endl;
    cout<<"Pay : Rp.";
    cin>>pay;
    cout<<"Money Ahanges : Rp."<<(pay-(total_all-discount))<<endl;
    return 0;
}