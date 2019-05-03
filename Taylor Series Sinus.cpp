/**
 * Enes Elma
 * 1306120054
 * Taylor Serisi Sinus
 */
#include <iostream>
#include <math.h>
using namespace std;

double permutasyon(double n){
    double x=1;
    for(double i=n;i>1;i--){
        x*=i;
    }
    return x;
}

double radyan(double derece){
    double pi=3.141592654;
    return pi*derece/180;           //dereceyi radyana dönüştürme
}

int main(){
    double x,sonuc=0,y=1;

    cout<<"Derece giriniz: ";
    cin>>x;
    double xRadyan=radyan(x);

    for(double n=0;n<1000;n++){
        sonuc+=y*(powl(xRadyan,2*n+1)/permutasyon(2*n+1));    //Taylor Serisi
        y=-1*y;
    }

    cout<<"sin("<<x<<") = "<<sonuc;

    return 0;
}