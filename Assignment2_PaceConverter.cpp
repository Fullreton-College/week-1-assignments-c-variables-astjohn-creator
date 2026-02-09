#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mph;
    mph = 6.5
    // PACE calculation
    /* write your code */
    double totalMinutes = 60.0/mph;

    //express pace in minutes and seconds
  /* write your code here */
  int minutes = static_cast<int>(totalMinutes);
  double seconds;
  seconds = (totalMinutes - minutes) * 60.0;

  //express your output in 1 decimal points
  cout<< fixed << setprecision(1);
  cout << "Pace: " << minutes << "  minutes and " << seconds << " seconds" << endl;

  return 0;


}
