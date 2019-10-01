#include <iostream>
#include <string>
#include "time.hpp"

std::string mil_to_reg(unsigned short int militaryTime) {
bool itsDay;
std::string stringMilTime = std::to_string(militaryTime);
int milHour = 0;

if (stringMilTime.length() == 3) {
  stringMilTime = "0" + stringMilTime;
}

milHour = stoi(stringMilTime.substr(0,2));

int regularHour = 0;
std::string regularTime;

  if (milHour > 12) {
    regularHour = milHour - 12;
    itsDay = false;
  }
  else {
    regularHour = milHour;
    itsDay = true;
  }

  if (itsDay) {
    regularTime = stringMilTime.substr(0,2)  + ":" + stringMilTime.substr(2,4) + " am";

  }
  else {
    regularTime = std::to_string(regularHour) + ":" + stringMilTime.substr(2,4) + " pm";

  }

  return regularTime;

}
