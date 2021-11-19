#include <iostream>

#include <string>


using namespace std;

int main() {
  cout << "Is your pool round? ~ Answer by inputing either 'yes' (if yes) or 'no' (if no)" << endl;
  string x;
  cin >> x;

  if (x == "yes") {

    string how;
    int heightround;
    int fradius;
    int radius;
    int volumeround;
    int arearound;
    int massround;

    cout << "Do you know the radius of your pool in inches or feet? ~Enter 'inches' (if inches), 'feet' (if feet) or 'neither' (if you have no idea what radius is)." << endl;
    cin >> how;

    if (how == "inches") {
      cout << "What is the radius of your pool in inches?" << endl;
      cin >> radius;

      cout << "Enter the height of your pool in inches..." << endl;
      cin >> heightround;

      radius = fradius * 12;
      volumeround = 3.14 * radius * radius * heightround;
      arearound = 3.14 * radius * 2;
      massround = volumeround * 0.004329;

      cout << "The area of your pool is " << arearound << " square inches." << endl;
      cout << "The volume of your pool is " << volumeround << " cubic inches." << endl;
      cout << "The amount of water you can fit in your pool is approximately " << massround << " gallons." << endl;
    }

    if (how == "feet") {
      cout << "What is the radius of your pool in feet?" << endl;
      cin >> fradius;

      cout << "Enter the height of your pool in inches..." << endl;
      cin >> heightround;

      radius = fradius * 12;
      volumeround = 3.14 * radius * radius * heightround;
      arearound = 3.14 * radius * 2;
      massround = volumeround * 0.004329;

      cout << "The area of your pool is " << arearound << " square inches." << endl;
      cout << "The volume of your pool is " << volumeround << " cubic inches." << endl;
      cout << "The amount of water you can fit in your pool is approximately " << massround << " gallons." << endl;

      return 0;
    }

    if (how == "neither") {
      cout << "Sorry, then there is no hope for you.";
    }
  }
  if (x == "no") {
    cout << "Is your pool rectangular? ~ Answer by inputing either 'yes' (if yes) or 'no' (if no)" << endl;
    string y;
    cin >> y;

    if (y == "yes") {

      int length;
      int heightrect;
      int width;

      cout << "What is the length of your pool in inches?" << endl;
      cin >> length;

      cout << "What is the width of your pool in inches?" << endl;
      cin >> width;

      cout << "What is the height of your pool in inches?" << endl;
      cin >> heightrect;

      int arearect = length * width;
      int volumerect = length * width * heightrect;
      int massrect = volumerect * 0.004329;

      cout << "The area of your pool is " << arearect << " square inches" << endl;
      cout << "The volume of your pool is " << volumerect << " cubic inches" << endl;
      cout << "The amount of water you will need to fill up your pool is approximately " << massrect << " gallons" << endl;
    }
    if (y == "no") {
      cout << "Sorry, then I cannot help you.";
    }
  }
  std::cin.get();
  return 0;
}
