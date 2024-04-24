#include<iostream>
using namespace std;

int main(){
    
    int savings;
    
    cin>>savings;
    
    if(savings>50000){
        cout<<"Resturent Safa \n";
        if(savings>60000){
            cout<<"I will eat Pizza and Burger";
        } else{
            cout<<"I will eat Burger";
        }
        
    } else if(savings>25000) {
        cout<<"Resturent KFC \n";
        if(savings>30000){
            cout<<"I will eat Zinger and Burger";
        } else{
            cout<<"I will eat Zinger";
        }
        
    }
    else {
        cout<<"Resturent Quetta \n";
        if(savings>20000){
            cout<<"I will eat namkeen";
        } else{
            cout<<"I will eat Dall Mash";
        }
    }
}
