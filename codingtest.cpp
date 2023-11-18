#include<iostream>
#include<string.h>
using namespace std;
int main(){

    string product[4]={"leather_wallet","umbrella","cigaratte","honey"};
    int price[4]={1100,900,200,100};
    int gst[4]={18,12,28,0};
    int quantity[4]={1,4,3,2};
    int total_amount;
    int size=sizeof(price)/sizeof(int);
    int max=0;
    int j=0;
    int initial_amount;
    int final_amount;
    int amount;
    for(int i=0;i<size;i++){
        if(price[i]>=500){
         initial_amount=(price[i]*quantity[i])+(price[i]*quantity[i]*(gst[i]/100));
         final_amount=initial_amount-(0.05*initial_amount);
        total_amount=total_amount+final_amount;
        }
        else
        {
            amount=(price[i]*quantity[i])+(price[i]*quantity[i]*(gst[i]/100));
            total_amount=amount+total_amount;

        }
        
    }
    cout<<"the total amount had to be paid:"<<total_amount<<endl;
  
////code for maximun gst::
    for(int i=0;i<size;i++){
        int maxium=price[i]*quantity[i]*(gst[i]/100);
        if(maxium>max){
           j=i; 
        }
    }
    
    cout<<"the maximmum gst paid product is:"<<product[j]<<endl;
    
}