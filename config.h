//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* { "", "separator", 0, 0 }, */
	{ "", "music", 0, 11 },
	{ "", "news", 0, 6},
	{ "", "mailbox", 15, 12},
	{ "", "kdeconnect", 15, 0 },
	{ "", "wifistatus", 5, 0 },
	{ "", "ethernet", 5, 0 },
	{ "", "battery BAT0", 5, 0 },
	{ "", "volume", 0, 10 },
	{ "", "clock", 1, 0 }
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "  ";
