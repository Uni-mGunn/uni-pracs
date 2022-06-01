#include <iostream>
#include <stdlib.h>

#include "AirCrafts.h"
#include "Helicopter.h"

using namespace std;

int AirCrafts::checkSort(Helicopter **craft, int n) 
{
   while ( --n >= 1 ) 
   {
      if ( craft[n]->get_craftID() < craft[n-1]->get_craftID() ) 
      {
         return 0;
      }
   }
   return 1;
}

void AirCrafts::mixing(Helicopter **craft, int n) {
   Helicopter *tmp;
   int r;
   for(int i=0; i < n; i++) {
      tmp = craft[i];
      r = rand() % n;
      craft[i] = craft[r];
      craft[r] = tmp;
   }
}

void AirCrafts::sort(Helicopter **craft, int n){
    while ( !checkSort(craft, n) ) {
      mixing(craft, n);
   }
}