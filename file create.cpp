#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream ofs("asdf.txt");
  ofs << "Writing this to a file.\n";
  ofs.close();
  return 0;
}
