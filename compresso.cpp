#include "compresso.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

Compresso::Compresso() {

}

int main(int argc, char *argv[]) {

  std::ifstream file(argv[1], std::ios::binary | std::ios::ate);
  if (file.good()) {
    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<char> buffer(size);
    if (file.read(buffer.data(), size))
    {
        cout << buffer[0];
    }
  } else {
    cout << "\"" << argv[1] << "\" is not a valid file name" << endl;
  }


  return 0;
}
