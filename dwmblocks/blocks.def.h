//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "date '+ %b %d (%a) %I:%M'",					1,		0},
	{"", "cat /sys/class/power_supply/BAT0/status",				20,		0},
	{"%", "cat /sys/class/power_supply/BAT0/capacity",			10, 		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
