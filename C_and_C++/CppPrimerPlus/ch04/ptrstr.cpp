// ptrstr.cpp -- using pointers to strings

#include <iostream>
#include <cstring>

int main()
{
  using namespace std;
  char animal[20] = "bear";
  const char* bird = "wren";
  char* ps;

  cout << animal << " and "; // display bear
  cout << bird << "\n";

  cout << "Enter a kind of animal: ";
  cin >> animal;
  // cin >> ps; Too horrible a blunder to try; ps doesn't
  // point to allocated space.

  ps = animal; // set ps to point to string
  cout << ps << "!\n";
   cout << "Before using strcpu():\n";
   cout << animal << " at " << (int*) animal << endl;
   cout << ps << " at " << (int*) ps << endl;

   ps = new char[strlen(animal) + 1]; // get new storage
   strcpy(ps, animal); // copy string to new storage
   cout << "After using strcpy():\n";
   cout << animal << " at " << (int*) animal << endl;
   cout << ps << " at " << (int*) ps << endl;
   delete[] ps;

   return 0;
}
