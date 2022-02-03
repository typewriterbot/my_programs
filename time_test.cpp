#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

void pause (int a){
  time_t timer;
  time_t time1;
  time(&timer);
  time(&time1);
  
  while ( timer < time1 + a) {
    time(&timer);
    }
}
int main() {
  cout << "starting" << endl;
  pause(1);
  cout << "done" << endl;
  pause(2);
  cout << "done again" << endl;

}
