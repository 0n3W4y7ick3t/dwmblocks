//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/  /*Update Interval*/  /*Update Signal*/
  {"",  "cat /tmp/recordingicon 2>/dev/null",  0,  9},
  {"",  "sb-music",         0,  11 },
  /* {"",  "sb-torrent",      20,   7 }, */
  {"",  "sb-forecast",  18000,   5 },
  {"",  "sb-moonphase", 86400,  17 },
  /* {"",  "sb-mailbox",     180,  12 }, */
  {"",  "sb-nettraf",       1,  16 },
  {"",  "sb-volume",        0,  10 },
  {"",  "sb-battery",       5,   3 },
  {"",  "sb-memory",        2,  14 },
  {"",  "sb-cpubars",       2,  18 },
  {"",  "sb-clock",         1,   1 },
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

