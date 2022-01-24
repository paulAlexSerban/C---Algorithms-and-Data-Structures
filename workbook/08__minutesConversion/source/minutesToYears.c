#include <stdio.h>
#include <stdlib.h>

int main() {
  int minutesEntered = 0;
  double years = 0.0;
  double days = 0.0;
  double minutesInYear = (60.0 * 24.0 * 365.0);

  printf("Please enter the number of minutes: ");

  // get input from the user
  scanf("%d", &minutesEntered);

  years = (minutesEntered / minutesInYear);
  days = (int)((minutesEntered / 60.0) / 24.0);

  printf("%d minutes is approximantely %f years and %f days\n", minutesEntered, years, days);

  return 0;
}