////////////////////////////////////////////////////////////////////////////////
// THE SCOTCH-WARE LICENSE (Revision 0):
// <aaronryool/gmail.com> wrote this file. As long as you retain this notice you
// can do whatever you want with this stuff. If we meet some day, and you think
// this stuff is worth it, you can buy me a shot of scotch in return
////////////////////////////////////////////////////////////////////////////////

#ifndef __COLORS_H
#define __COLORS_H

// Hide cursor
#define HIDE_CURSOR     "\e[?25l"

//Show cursor
#define SHOW_CURSOR     "\e[?25h"

// Cursor position
#define CURSOR(x, y) printf("\033[%i;%iH\n", y, x)

// Clear
#define CLEAR           "\033[2J"

// Reset
#define RESET		"\033[0m"

// Regular Colors
#define BLACK		"\033[030m"
#define RED	    	"\033[031m"
#define GREEN		"\033[032m"
#define YELLOW		"\033[033m"
#define BLUE		"\033[034m"
#define PURPLE		"\033[035m"
#define CYAN		"\033[036m"
#define WHITE		"\033[037m"

// Bold
#define BBLACK		"\033[130m"
#define BRED		"\033[131m"
#define BGREEN		"\033[132m"
#define BYELLOW		"\033[133m"
#define BBLUE		"\033[134m"
#define BPURPLE		"\033[135m"
#define BCYAN		"\033[136m"
#define BWHITE		"\033[137m"

// Underline
#define UBLACK		"\033[430m"
#define URED		"\033[431m"
#define UGREEN		"\033[432m"
#define UYELLOW		"\033[433m"
#define UBLUE		"\033[434m"
#define UPURPLE		"\033[435m"
#define UCYAN		"\033[436m"
#define UWHITE		"\033[437m"

///////////////////////////////////

// Background
#define BGBLACK		"\033[40m"
#define BGRED		"\033[41m"
#define BGGREEN		"\033[42m"
#define BGYELLOW	"\033[43m"
#define BGBLUE		"\033[44m"
#define BGPURPLE	"\033[45m"
#define BGCYAN		"\033[46m"
#define BGWHITE		"\033[47m"

// High Intensity
#define IBLACK		"\033[090m"
#define IRED		"\033[091m"
#define IGREEN		"\033[092m"
#define IYELLOW		"\033[093m"
#define IBLUE		"\033[094m"
#define IPURPLE		"\033[095m"
#define ICYAN		"\033[096m"
#define IWHITE		"\033[097m"

// Bold High Intensity
#define BIBLACK		"\033[190m"
#define BIRED		"\033[191m"
#define BIGREEN		"\033[192m"
#define BIYELLOW	"\033[193m"
#define BIBLUE		"\033[194m"
#define BIPURPLE	"\033[195m"
#define BICYAN		"\033[196m"
#define BIWHITE		"\033[197m"

// High Intensity backgrounds
#define BGIBLACK	"\033[0100m"
#define BGIRED		"\033[0101m"
#define BGIGREEN	"\033[0102m"
#define BGIYELLOW	"\033[0103m"
#define BGIBLUE		"\033[0104m"
#define BGIPURPLE	"\033[0105m"
#define BGICYAN		"\033[0106m"
#define BGIWHITE	"\033[0107m"

#endif //


