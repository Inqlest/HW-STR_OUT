#include <iostream>
using namespace std;
struct adress
{
    string country;
    string town;
    string street;
    int house;
    int num;
    int index;
};


void out(adress* ad){
    cout << ad->country<< endl;
    cout << ad->town << endl;
    cout << ad->street << endl;
    cout << ad->house << endl;
    cout << ad->num << endl;
    cout << ad->index << endl;
};

int main(){
    adress ad;
    ad.country = "Australia";
    ad.town = "Canberra";
    ad.street = "Collins";
    ad.house = 105;
    ad.num = 15;
    ad.index = 123321;
    out(&ad);
}