#include<bits/stdc++.h>
using namespace std;

int main(){
    int month,date;
    cin>>month>>date;
    if((month==1&&date>=21)||(month==2&&date<=18))cout<<"Aquarius\n";
    else if((month==2&&date>=19)||(month==3&&date<=20))cout<<"Pisces\n";
    else if((month==3&&date>=21)||(month==4&&date<=20))cout<<"Aries\n";
    else if((month==4&&date>=21)||(month==5&&date<=21))cout<<"Taurus\n";
    else if((month==5&&date>=22)||(month==6&&date<=21))cout<<"Gemini\n";
    else if((month==6&&date>=22)||(month==7&&date<=22))cout<<"Cancer\n";
    else if((month==7&&date>=23)||(month==8&&date<=23))cout<<"Leo\n";
    else if((month==8&&date>=24)||(month==9&&date<=23))cout<<"Virgo\n";
    else if((month==9&&date>=24)||(month==10&&date<=23))cout<<"Libra\n";
    else if((month==10&&date>=24)||(month==11&&date<=22))cout<<"Scorpio\n";
    else if((month==11&&date>=23)||(month==12&&date<=21))cout<<"Sagittarius\n";
    else if((month==12&&date>=22)||(month==1&&date<=20))cout<<"Capricorn\n";
}
