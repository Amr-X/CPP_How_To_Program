#include<iostream>
#include<string>
#include<stdexcept>
#include "time.h"

using namespace std;



int main (){

    Time time1;
    time1.setHour(2).setMinute(3).setSecond(1);
    cout << time1.toUniversalString();


}