#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>

int RANGE_HIGH = 100;
int answer;
int attempts = 0;
using namespace std;

void generate(){
    answer = rand()%RANGE_HIGH;
    return;
}

static bool guess(int num){
    if (num < answer){printf("too low\n");}
    else if (num > answer){printf("too high\n");}
    else{return true;}
    return false;
}

static int game(){
    int num = 0;
    answer = 0;
    generate();
    do
    {
        cout << "pick a number: ";
        cin >> num;
        cout << endl;
    } while (guess(num) == false);
    
    return 0;
}