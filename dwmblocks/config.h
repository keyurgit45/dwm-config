//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "nettraf",  1,  16},
  {"", "cpu", 5, 12},
  {"", "notifications", 3, 15},
  {"", "kde-connect", 5, 13},
  {"", "microphone", 1, 11}, 
  {"",  "volume", 1,  10},
  {"", "battery", 5, 9},
  {"",  "internet", 5,  4},
  {"", "clock", 60, 1}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
