#ifndef SYMBOL_DEF_H
#define SYMBOL_DEF_H

#ifdef __cplusplus
extern "C" {
#endif


/*Use ISO8859-1 encoding in the IDE*/
#if  USE_FONT_SYMBOL_30 != 0 || USE_FONT_SYMBOL_60 != 0

#define SYMBOL_PLAY     "Z"
#define SYMBOL_STOP     "["
#define SYMBOL_PAUSE    "|"
#define SYMBOL_PREV     "]"
#define SYMBOL_NEXT     "^"
#define SYMBOL_SPMUTE   "_"
#define SYMBOL_SPUNMUTE "`"
#define SYMBOL_DRIVE	"a"
#define SYMBOL_FILE	    "b"
#define SYMBOL_FOLDER	"c"
#define SYMBOL_DELETE	"d"
#define SYMBOL_SAVE	    "e"
#define SYMBOL_EDIT	    "f"
#define SYMBOL_OK		"g"
#define SYMBOL_CLOSE	"h"
#define SYMBOL_DOWN	    "i"
#define SYMBOL_LEFT	    "j"
#define SYMBOL_RIGHT	"k"
#define SYMBOL_UP		"l"
#define SYMBOL_BT		"m"
#define SYMBOL_THERM	"n"
#define SYMBOL_GPS	    "o"
#define SYMBOL_WARN	    "p"
#define SYMBOL_INFO	    "q"
#define SYMBOL_BATT1	"r"
#define SYMBOL_BATT2	"s"
#define SYMBOL_BATT3	"t"
#define SYMBOL_BATT4	"u"
#define SYMBOL_BATTCH	"v"
#define SYMBOL_HELP	    "w"
#define SYMBOL_POWER	"x"
#define SYMBOL_SETUP	"y"
#define SYMBOL_WIFI	    "z"

#endif

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif /*SYMBOL_DEF_H*/
