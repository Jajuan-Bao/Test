//
// Created by 516370910112
//
#include <cstdlib>
#include <ctime>
#include "Random.h"
void RandomInit(){
    srand(time(NULL));
}
int RandomInterger(int low, int high){
    return(low+(high-low+1)*rand()/(RAND_MAX+1));
}
double RandomDouble(double low, double high){
    double d=(double)rand()/(RAND_MAX+1);
    return (low+(high-low+1)*d);
}
