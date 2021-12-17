// modulus.cpp -- uses %s operator to convert lbs to stone

#include <iostream>

int main()
{
  using namespace std;
  const int LBS_PER_STN = 14;
  int lbs;

  cout << "Enter your weight in pounds: ";
  cin >> lbs;
  int stone = lbs / LBS_PER_STN; // whole stone.
  int pounds = lbs % LBS_PER_STN; // remainder in pounds
  cout << lbs << " pounds are " << stone
       << " stone, " << pounds << " pound(s).\n";

  return 0;
}
