#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  char filename[] = "test.txt";
  int result = remove(filename);


  cout << result;

  return 0;
}
