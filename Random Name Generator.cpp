#include <iostream>
#include <vector>
#include <iomanip>
#include <stdlib.h>
#include <ctime>

using namespace std;


string randomName(int length) {

  char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
  char vowels[] = {'a','e','i','o','u','y'};

  string name = "";
  int random = rand() % 2;
  int count = 0;

  for(int i = 0; i < length; i++) {

    if(random < 2 && count < 2) {
      name = name + consonents[rand() % 19];
      count++;
    }
    else {
      name = name + vowels[rand() % 5];
      count = 0;
    }

    random = rand() % 2;

  }

  return name;

}


int main() {

  cout << "Enter a name length: " << endl;

  int length;
  srand(time(NULL));
  cin >> length;

    for(int i=0; i<5; i++){
        cout <<"Nama ke-"<<i+1<<" : "<< randomName(length) << endl;
    } 
  return 0;

}