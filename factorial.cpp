#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) {

  if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return(num * FirstFactorial(num - 1));
    }
}

int main() {

  // keep this function call here
  cout << FirstFactorial(gets(stdin));
  return 0;

}
