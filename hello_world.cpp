#include <iostream>
#include <string>
<<<<<<< HEAD

// change comment (part 3, point 4)

int
main() {
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Hello, world from " << name << "!";
  return 0;
=======
 
<<<<<<< HEAD
using namespace std;

// change comment (part 3, point 4)
=======
>>>>>>> 9bdc626 (Remove 'using namespace std' and qualify all std members explicitly)
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, world from " << name << "!";
    return 0;
>>>>>>> 9e30779 ('Remove 'using namespace std' and qualify all std members explicitly)
}
