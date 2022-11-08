
#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5

#include <stdio.h>

#ifdef c_plusplus
#ifndef __cplusplus
#define __cplusplus
#endif
#endif


#ifdef __cplusplus

#include <stdlib.h>
#include <unistd.h>

#define YY_USE_PROTOS

#define YY_USE_CONST

#else

#if __STDC__

#define YY_USE_PROTOS
#define YY_USE_CONST

#endif	
#endif	

#ifdef __TURBOC__
 #pragma warn -rch
 #pragma warn -use
#include <io.h>
#include <stdlib.h>
#define YY_USE_CONST
#define YY_USE_PROTOS
#endif

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif


#ifdef YY_USE_PROTOS
#define YY_PROTO(proto) proto
#else
#define YY_PROTO(proto) ()
#endif

#define YY_NULL 0

#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)


#define BEGIN yy_start = 1 + 2 *


#define YY_START ((yy_start - 1) / 2)
#define YYSTATE YY_START


#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)

#define YY_NEW_FILE yyrestart( yyin )

#define YY_END_OF_BUFFER_CHAR 0

#define YY_BUF_SIZE 16384

typedef struct yy_buffer_state *YY_BUFFER_STATE;

extern int yyleng;
extern FILE *yyin, *yyout;

#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2

#define yyless(n) \
	do \
		{ \
		/* Undo effects of setting up yytext. */ \
		*yy_cp = yy_hold_char; \
		YY_RESTORE_YY_MORE_OFFSET \
		yy_c_buf_p = yy_cp = yy_bp + n - YY_MORE_ADJ; \
		YY_DO_BEFORE_ACTION; /* set up yytext again */ \
		} \
	while ( 0 )

#define unput(c) yyunput( c, yytext_ptr )


typedef unsigned int yy_size_t;


struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		
	char *yy_buf_pos;		

	
	yy_size_t yy_buf_size;

	
	int yy_n_chars;


	int yy_is_our_buffer;


	int yy_is_interactive;


	int yy_at_bol;


	int yy_fill_buffer;

	int yy_buffer_status;
#define YY_BUFFER_NEW 0
#define YY_BUFFER_NORMAL 1

#define YY_BUFFER_EOF_PENDING 2
	};

static YY_BUFFER_STATE yy_current_buffer = 0;


#define YY_CURRENT_BUFFER yy_current_buffer


static char yy_hold_char;

static int yy_n_chars;	

int yyleng;

static char *yy_c_buf_p = (char *) 0;
static int yy_init = 1;		
static int yy_start = 0;	


static int yy_did_buffer_switch_on_eof;

void yyrestart YY_PROTO(( FILE *input_file ));

void yy_switch_to_buffer YY_PROTO(( YY_BUFFER_STATE new_buffer ));
void yy_load_buffer_state YY_PROTO(( void ));
YY_BUFFER_STATE yy_create_buffer YY_PROTO(( FILE *file, int size ));
void yy_delete_buffer YY_PROTO(( YY_BUFFER_STATE b ));
void yy_init_buffer YY_PROTO(( YY_BUFFER_STATE b, FILE *file ));
void yy_flush_buffer YY_PROTO(( YY_BUFFER_STATE b ));
#define YY_FLUSH_BUFFER yy_flush_buffer( yy_current_buffer )

YY_BUFFER_STATE yy_scan_buffer YY_PROTO(( char *base, yy_size_t size ));
YY_BUFFER_STATE yy_scan_string YY_PROTO(( yyconst char *yy_str ));
YY_BUFFER_STATE yy_scan_bytes YY_PROTO(( yyconst char *bytes, int len ));

static void *yy_flex_alloc YY_PROTO(( yy_size_t ));
static void *yy_flex_realloc YY_PROTO(( void *, yy_size_t ));
static void yy_flex_free YY_PROTO(( void * ));

#define yy_new_buffer yy_create_buffer

#define yy_set_interactive(is_interactive) \
	{ \
	if ( ! yy_current_buffer ) \
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \
	yy_current_buffer->yy_is_interactive = is_interactive; \
	}

#define yy_set_bol(at_bol) \
	{ \
	if ( ! yy_current_buffer ) \
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE ); \
	yy_current_buffer->yy_at_bol = at_bol; \
	}

#define YY_AT_BOL() (yy_current_buffer->yy_at_bol)

typedef unsigned char YY_CHAR;
FILE *yyin = (FILE *) 0, *yyout = (FILE *) 0;
typedef int yy_state_type;
extern char *yytext;
#define yytext_ptr yytext

static yy_state_type yy_get_previous_state YY_PROTO(( void ));
static yy_state_type yy_try_NUL_trans YY_PROTO(( yy_state_type current_state ));
static int yy_get_next_buffer YY_PROTO(( void ));
static void yy_fatal_error YY_PROTO(( yyconst char msg[] ));

#define YY_DO_BEFORE_ACTION \
	yytext_ptr = yy_bp; \
	yyleng = (int) (yy_cp - yy_bp); \
	yy_hold_char = *yy_cp; \
	*yy_cp = '\0'; \
	yy_c_buf_p = yy_cp;

#define YY_NUM_RULES 77
#define YY_END_OF_BUFFER 78
static yyconst short int yy_accept[207] =
    {   0,
        0,    0,   78,   76,   75,   75,   59,   76,   48,   60,
       76,   66,   67,   46,   44,   72,   45,   47,   37,   73,
       74,   54,   43,   53,   42,   42,   70,   71,   62,   42,
       42,   42,   42,   42,   42,   42,   42,   42,   42,   42,
       42,   42,   42,   42,   42,   68,   61,   69,   63,    3,
       52,    0,   41,   57,    0,    0,   49,   37,   50,    0,
        2,    0,   64,   56,   51,   55,   65,   42,   42,   42,
       42,   42,   42,   42,   42,   31,   42,   42,   42,   42,
       42,   32,   42,   42,   42,   42,   42,   42,   42,   42,
       42,   42,   42,   42,   42,   58,    3,   40,    0,    0,

        2,   39,   38,   42,   42,   42,   42,   42,   42,   42,
       42,   42,   42,   25,   42,    6,   42,   42,   42,   42,
       42,   42,   42,   42,   42,   42,   42,   42,   42,   42,
       42,   42,    1,    4,   42,   13,   17,   42,   42,   42,
       42,   10,   14,   42,   29,   11,   42,   42,   42,   42,
       42,   42,   42,   42,   42,   42,   42,   42,   42,   42,
       27,   42,    8,   20,   42,   42,   42,   21,   42,   42,
       42,   36,   22,   42,   42,   42,   42,   42,   42,   42,
       19,   42,   34,   42,   42,    5,   35,   42,   18,   26,
       30,   33,    7,    9,   12,   42,   42,   42,   28,   42,

       16,   42,   24,   15,   23,    0
    } ;

static yyconst int yy_ec[256] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    2,    3,
        1,    1,    4,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    2,    5,    6,    7,    1,    8,    9,   10,   11,
       12,   13,   14,   15,   16,   17,   18,   19,   20,   20,
       20,   20,   20,   20,   20,   20,   20,   21,   22,   23,
       24,   25,    1,    1,   26,   26,   26,   26,   26,   26,
       26,   26,   26,   26,   26,   26,   26,   26,   27,   26,
       26,   26,   26,   26,   26,   26,   26,   28,   26,   26,
       29,   30,   31,   32,   26,    1,   33,   34,   35,   36,

       37,   38,   39,   40,   41,   26,   42,   43,   44,   45,
       46,   47,   26,   48,   49,   50,   51,   52,   53,   26,
       54,   55,   56,   57,   58,   59,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,

        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1
    } ;

static yyconst int yy_meta[60] =
    {   0,
        1,    1,    2,    3,    1,    1,    1,    1,    1,    3,
        1,    1,    1,    1,    1,    1,    1,    1,    4,    4,
        1,    1,    1,    1,    1,    4,    4,    4,    1,    1,
        1,    3,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
        4,    4,    4,    4,    4,    1,    1,    1,    1
    } ;

static yyconst short int yy_base[213] =
    {   0,
        0,  242,  248,  250,  250,  250,  223,  240,  250,  236,
      214,  250,  250,  250,   46,  250,   48,   56,   53,  250,
      250,   38,  219,   51,    0,  214,  250,  250,  250,  190,
      192,   38,   40,   36,   37,  193,   44,  192,  189,  199,
       50,  181,  189,  187,  192,  250,  174,  250,  250,    0,
      250,  224,  250,  250,  219,   77,  250,   75,  250,  215,
        0,   78,  250,  250,  250,  250,  250,    0,   82,  177,
      189,  176,  191,  178,  184,  170,  171,  168,  172,  169,
      166,    0,  165,  169,  172,   49,  179,  165,   54,   73,
      169,  162,   63,  167,  166,  250,    0,  250,  193,  187,

        0,   88,    0,  158,  170,  165,  153,   61,  167,  165,
      161,  153,  163,    0,  149,    0,  155,  148,  151,  140,
      145,  141,  143,  150,  136,   72,  135,  147,  137,  141,
      145,  137,  250,    0,  137,    0,    0,  128,  136,  125,
      132,    0,    0,  124,    0,    0,  123,  123,  123,  132,
      119,  131,  121,  125,  120,  129,  128,  126,  116,  121,
        0,  122,    0,    0,  113,  114,  119,    0,  117,  104,
      108,    0,    0,  116,  113,  115,  110,   98,  107,  109,
        0,  100,    0,   93,   91,    0,    0,   96,    0,    0,
        0,    0,    0,    0,    0,   92,   92,   85,    0,   66,

        0,   69,    0,    0,    0,  250,  123,  127,   59,  131,
      135,  139
    } ;

static yyconst short int yy_def[213] =
    {   0,
      206,    1,  206,  206,  206,  206,  206,  207,  206,  206,
      208,  206,  206,  206,  206,  206,  206,  206,  206,  206,
      206,  206,  206,  206,  209,  209,  206,  206,  206,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  206,  206,  206,  206,  210,
      206,  207,  206,  206,  206,  206,  206,  206,  206,  211,
      212,  206,  206,  206,  206,  206,  206,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  206,  210,  206,  211,  211,

      212,  206,   69,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  206,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,
      209,  209,  209,  209,  209,  209,  209,  209,  209,  209,

      209,  209,  209,  209,  209,    0,  206,  206,  206,  206,
      206,  206
    } ;

static yyconst short int yy_nxt[310] =
    {   0,
        4,    5,    6,    4,    7,    8,    4,    9,   10,   11,
       12,   13,   14,   15,   16,   17,    4,   18,   19,   19,
       20,   21,   22,   23,   24,   25,   26,   25,   27,    4,
       28,   29,   30,   31,   32,   33,   34,   35,   36,   25,
       37,   25,   38,   25,   25,   25,   39,   40,   41,   42,
       43,   44,   45,   25,   25,   46,   47,   48,   49,   57,
       63,   64,   68,   59,   58,   58,   58,   58,   60,   62,
       72,   58,   58,   61,   66,   67,   75,   73,   77,   79,
       78,   82,   80,   74,   87,   76,   98,  119,   83,   88,
       89,   62,  123,   58,   58,   55,  102,  102,  120,   90,

      103,  103,   91,  129,  205,  125,  102,  102,  124,  138,
      139,  130,  155,  204,  103,  103,  103,  103,  103,  103,
      126,  203,  156,   52,   52,   52,   52,   55,  202,  201,
       55,   97,  200,   97,   97,   99,   99,   99,   99,  101,
      199,  101,  101,  198,  197,  196,  195,  194,  193,  192,
      191,  190,  189,  188,  187,  186,  185,  184,  183,  182,
      181,  180,  179,  178,  177,  176,  175,  174,  173,  172,
      171,  170,  169,  168,  167,  166,  165,  164,  163,  162,
      161,  160,  159,  158,  157,  154,  153,  152,  151,  150,
      149,  148,  147,  146,  145,  144,  143,  142,  141,  140,

      137,  136,  135,  134,  133,  100,  132,  131,  128,  127,
      122,  121,  118,  117,  116,  115,  114,  113,  112,  111,
      110,  109,  108,  107,  106,  105,  104,  100,   98,   53,
       96,   95,   94,   93,   92,   86,   85,   84,   81,   71,
       70,   69,   65,   56,   54,   53,   51,  206,   50,    3,
      206,  206,  206,  206,  206,  206,  206,  206,  206,  206,
      206,  206,  206,  206,  206,  206,  206,  206,  206,  206,
      206,  206,  206,  206,  206,  206,  206,  206,  206,  206,
      206,  206,  206,  206,  206,  206,  206,  206,  206,  206,
      206,  206,  206,  206,  206,  206,  206,  206,  206,  206,

      206,  206,  206,  206,  206,  206,  206,  206,  206
    } ;

static yyconst short int yy_chk[310] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,   15,
       22,   22,  209,   17,   15,   15,   17,   17,   18,   19,
       32,   19,   19,   18,   24,   24,   33,   32,   34,   35,
       34,   37,   35,   32,   41,   33,   56,   86,   37,   41,
       41,   58,   89,   58,   58,   56,   62,   62,   86,   41,

       69,   69,   41,   93,  202,   90,  102,  102,   89,  108,
      108,   93,  126,  200,   69,   69,   69,   69,   69,   69,
       90,  198,  126,  207,  207,  207,  207,  208,  197,  196,
      208,  210,  188,  210,  210,  211,  211,  211,  211,  212,
      185,  212,  212,  184,  182,  180,  179,  178,  177,  176,
      175,  174,  171,  170,  169,  167,  166,  165,  162,  160,
      159,  158,  157,  156,  155,  154,  153,  152,  151,  150,
      149,  148,  147,  144,  141,  140,  139,  138,  135,  132,
      131,  130,  129,  128,  127,  125,  124,  123,  122,  121,
      120,  119,  118,  117,  115,  113,  112,  111,  110,  109,

      107,  106,  105,  104,  100,   99,   95,   94,   92,   91,
       88,   87,   85,   84,   83,   81,   80,   79,   78,   77,
       76,   75,   74,   73,   72,   71,   70,   60,   55,   52,
       47,   45,   44,   43,   42,   40,   39,   38,   36,   31,
       30,   26,   23,   11,   10,    8,    7,    3,    2,  206,
      206,  206,  206,  206,  206,  206,  206,  206,  206,  206,
      206,  206,  206,  206,  206,  206,  206,  206,  206,  206,
      206,  206,  206,  206,  206,  206,  206,  206,  206,  206,
      206,  206,  206,  206,  206,  206,  206,  206,  206,  206,
      206,  206,  206,  206,  206,  206,  206,  206,  206,  206,

      206,  206,  206,  206,  206,  206,  206,  206,  206
    } ;

static yy_state_type yy_last_accepting_state;
static char *yy_last_accepting_cpos;


#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET
char *yytext;
#line 1 "Scanner.l"
#define INITIAL 0
#line 502 "lex.yy.c"


#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int yywrap YY_PROTO(( void ));
#else
extern int yywrap YY_PROTO(( void ));
#endif
#endif

#ifndef YY_NO_UNPUT
static void yyunput YY_PROTO(( int c, char *buf_ptr ));
#endif

#ifndef yytext_ptr
static void yy_flex_strncpy YY_PROTO(( char *, yyconst char *, int ));
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen YY_PROTO(( yyconst char * ));
#endif

#ifndef YY_NO_INPUT
#ifdef __cplusplus
static int yyinput YY_PROTO(( void ));
#else
static int input YY_PROTO(( void ));
#endif
#endif

#if YY_STACK_USED
static int yy_start_stack_ptr = 0;
static int yy_start_stack_depth = 0;
static int *yy_start_stack = 0;
#ifndef YY_NO_PUSH_STATE
static void yy_push_state YY_PROTO(( int new_state ));
#endif
#ifndef YY_NO_POP_STATE
static void yy_pop_state YY_PROTO(( void ));
#endif
#ifndef YY_NO_TOP_STATE
static int yy_top_state YY_PROTO(( void ));
#endif

#else
#define YY_NO_PUSH_STATE 1
#define YY_NO_POP_STATE 1
#define YY_NO_TOP_STATE 1
#endif

#ifdef YY_MALLOC_DECL
YY_MALLOC_DECL
#else
#if __STDC__
#ifndef __cplusplus
#include <stdlib.h>
#endif
#else

#endif
#endif


#ifndef YY_READ_BUF_SIZE
#define YY_READ_BUF_SIZE 8192
#endif



#ifndef ECHO

#define ECHO (void) fwrite( yytext, yyleng, 1, yyout )
#endif


#ifndef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	if ( yy_current_buffer->yy_is_interactive ) \
		{ \
		int c = '*', n; \
		for ( n = 0; n < max_size && \
			     (c = getc( yyin )) != EOF && c != '\n'; ++n ) \
			buf[n] = (char) c; \
		if ( c == '\n' ) \
			buf[n++] = (char) c; \
		if ( c == EOF && ferror( yyin ) ) \
			YY_FATAL_ERROR( "input in flex scanner failed" ); \
		result = n; \
		} \
	else if ( ((result = fread( buf, 1, max_size, yyin )) == 0) \
		  && ferror( yyin ) ) \
		YY_FATAL_ERROR( "input in flex scanner failed" );
#endif


#ifndef yyterminate
#define yyterminate() return YY_NULL
#endif


#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

#ifndef YY_FATAL_ERROR
#define YY_FATAL_ERROR(msg) yy_fatal_error( msg )
#endif

#ifndef YY_DECL
#define YY_DECL int yylex YY_PROTO(( void ))
#endif

#ifndef YY_USER_ACTION
#define YY_USER_ACTION
#endif

#ifndef YY_BREAK
#define YY_BREAK break;
#endif

#define YY_RULE_SETUP \
	if ( yyleng > 0 ) \
		yy_current_buffer->yy_at_bol = \
				(yytext[yyleng - 1] == '\n'); \
	YY_USER_ACTION

YY_DECL
	{
	register yy_state_type yy_current_state;
	register char *yy_cp, *yy_bp;
	register int yy_act;

#line 5 "Scanner.l"

#line 660 "lex.yy.c"

	if ( yy_init )
		{
		yy_init = 0;

#ifdef YY_USER_INIT
		YY_USER_INIT;
#endif

		if ( ! yy_start )
			yy_start = 1;

		if ( ! yyin )
			yyin = stdin;

		if ( ! yyout )
			yyout = stdout;

		if ( ! yy_current_buffer )
			yy_current_buffer =
				yy_create_buffer( yyin, YY_BUF_SIZE );

		yy_load_buffer_state();
		}

	while ( 1 )		
		{
		yy_cp = yy_c_buf_p;

		
		*yy_cp = yy_hold_char;

	
		yy_bp = yy_cp;

		yy_current_state = yy_start;
		yy_current_state += YY_AT_BOL();
yy_match:
		do
			{
			register YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
			if ( yy_accept[yy_current_state] )
				{
				yy_last_accepting_state = yy_current_state;
				yy_last_accepting_cpos = yy_cp;
				}
			while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
				{
				yy_current_state = (int) yy_def[yy_current_state];
				if ( yy_current_state >= 207 )
					yy_c = yy_meta[(unsigned int) yy_c];
				}
			yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
			++yy_cp;
			}
		while ( yy_base[yy_current_state] != 250 );

yy_find_action:
		yy_act = yy_accept[yy_current_state];
		if ( yy_act == 0 )
			{ 
			yy_cp = yy_last_accepting_cpos;
			yy_current_state = yy_last_accepting_state;
			yy_act = yy_accept[yy_current_state];
			}

		YY_DO_BEFORE_ACTION;


do_action:	

		switch ( yy_act )
	{ 
			case 0: 
			*yy_cp = yy_hold_char;
			yy_cp = yy_last_accepting_cpos;
			yy_current_state = yy_last_accepting_state;
			goto yy_find_action;

case 1:
YY_RULE_SETUP
#line 8 "Scanner.l"
printf ("Multi Comment\n");
	YY_BREAK

case 2:
YY_RULE_SETUP
#line 10 "Scanner.l"
printf ("Single Comment\n");
	YY_BREAK

case 3:
YY_RULE_SETUP
#line 12 "Scanner.l"
printf ("Preprocessor\n");
	YY_BREAK

case 4:
YY_RULE_SETUP
#line 14 "Scanner.l"
printf ("keyword - âuto\n");
	YY_BREAK
case 5:
YY_RULE_SETUP
#line 15 "Scanner.l"
printf ("keyword - double\n");
	YY_BREAK
case 6:
YY_RULE_SETUP
#line 16 "Scanner.l"
printf ("keyword - int\n");
	YY_BREAK
case 7:
YY_RULE_SETUP
#line 17 "Scanner.l"
printf ("Keyword - string\n");
	YY_BREAK
case 8:
YY_RULE_SETUP
#line 18 "Scanner.l"
printf ("keyword - break\n");
	YY_BREAK
case 9:
YY_RULE_SETUP
#line 19 "Scanner.l"
printf ("keyword - struct\n");
	YY_BREAK
case 10:
YY_RULE_SETUP
#line 20 "Scanner.l"
printf ("keyword - else\n");
	YY_BREAK
case 11:
YY_RULE_SETUP
#line 21 "Scanner.l"
printf ("keyword - long\n");
	YY_BREAK
case 12:
YY_RULE_SETUP
#line 22 "Scanner.l"
printf ("keyword - switch\n");
	YY_BREAK
case 13:
YY_RULE_SETUP
#line 23 "Scanner.l"
printf ("keyword - case\n");
	YY_BREAK
case 14:
YY_RULE_SETUP
#line 24 "Scanner.l"
printf ("keyword - enum\n");
	YY_BREAK
case 15:
YY_RULE_SETUP
#line 25 "Scanner.l"
printf ("keyword - register\n");
	YY_BREAK
case 16:
YY_RULE_SETUP
#line 26 "Scanner.l"
printf ("keyword - typeof\n");
	YY_BREAK
case 17:
YY_RULE_SETUP
#line 27 "Scanner.l"
printf ("keyword - char\n");
	YY_BREAK
case 18:
YY_RULE_SETUP
#line 28 "Scanner.l"
printf ("keyword - return\n");
	YY_BREAK
case 19:
YY_RULE_SETUP
#line 29 "Scanner.l"
printf ("keyword - union\n");
	YY_BREAK
case 20:
YY_RULE_SETUP
#line 30 "Scanner.l"
printf ("keyword - const\n");
	YY_BREAK
case 21:
YY_RULE_SETUP
#line 31 "Scanner.l"
printf ("keyword - float\n");
	YY_BREAK
case 22:
YY_RULE_SETUP
#line 32 "Scanner.l"
printf ("keyword - short\n");
	YY_BREAK
case 23:
YY_RULE_SETUP
#line 33 "Scanner.l"
printf ("keyword - unsigned\n");
	YY_BREAK
case 24:
YY_RULE_SETUP
#line 34 "Scanner.l"
printf ("keyword - continue\n");
	YY_BREAK
case 25:
YY_RULE_SETUP
#line 35 "Scanner.l"
printf ("keyword - for\n");
	YY_BREAK
case 26:
YY_RULE_SETUP
#line 36 "Scanner.l"
printf ("keyword - signed\n");
	YY_BREAK
case 27:
YY_RULE_SETUP
#line 37 "Scanner.l"
printf ("keyword - void\n");
	YY_BREAK
case 28:
YY_RULE_SETUP
#line 38 "Scanner.l"
printf ("keyword - default\n");
	YY_BREAK
case 29:
YY_RULE_SETUP
#line 39 "Scanner.l"
printf ("keyword - goto\n");
	YY_BREAK
case 30:
YY_RULE_SETUP
#line 40 "Scanner.l"
printf ("keyword - sizeof\n");
	YY_BREAK
case 31:
YY_RULE_SETUP
#line 41 "Scanner.l"
printf ("keyword - do\n");
	YY_BREAK
case 32:
YY_RULE_SETUP
#line 42 "Scanner.l"
printf ("keyword - if\n");
	YY_BREAK
case 33:
YY_RULE_SETUP
#line 43 "Scanner.l"
printf ("keyword - static\n");
	YY_BREAK
case 34:
YY_RULE_SETUP
#line 44 "Scanner.l"
printf ("keyword - while\n");
	YY_BREAK
case 35:
YY_RULE_SETUP
#line 45 "Scanner.l"
printf ("keyword - printf\n");
	YY_BREAK
case 36:
YY_RULE_SETUP
#line 46 "Scanner.l"
printf ("keyword - scanf\n");
	YY_BREAK

case 37:
YY_RULE_SETUP
#line 49 "Scanner.l"
printf ("INT NUMBER\n");
	YY_BREAK
case 38:
YY_RULE_SETUP
#line 51 "Scanner.l"
printf ("HEX NUMBER\n");
	YY_BREAK

case 39:
YY_RULE_SETUP
#line 53 "Scanner.l"
printf ("Fractional NUMBER\n");
	YY_BREAK

case 40:
YY_RULE_SETUP
#line 55 "Scanner.l"
printf ("char\n");;
	YY_BREAK

case 41:
YY_RULE_SETUP
#line 57 "Scanner.l"
printf ("String\n");
	YY_BREAK

case 42:
YY_RULE_SETUP
#line 59 "Scanner.l"
printf ("Identefier\n");
	YY_BREAK

case 43:
YY_RULE_SETUP
#line 63 "Scanner.l"
printf ("Assignment\n");
	YY_BREAK
case 44:
YY_RULE_SETUP
#line 64 "Scanner.l"
printf ("Operator\n");
	YY_BREAK
case 45:
YY_RULE_SETUP
#line 65 "Scanner.l"
printf ("Operator\n");
	YY_BREAK
case 46:
YY_RULE_SETUP
#line 66 "Scanner.l"
printf ("Operator\n");
	YY_BREAK
case 47:
YY_RULE_SETUP
#line 67 "Scanner.l"
printf ("Operator\n");
	YY_BREAK
case 48:
YY_RULE_SETUP
#line 68 "Scanner.l"
printf ("Operator\n");
	YY_BREAK
case 49:
YY_RULE_SETUP
#line 69 "Scanner.l"
printf ("INC Operator\n");
	YY_BREAK
case 50:
YY_RULE_SETUP
#line 70 "Scanner.l"
printf ("DIC Operator\n");
	YY_BREAK
						
case 51:
YY_RULE_SETUP
#line 73 "Scanner.l"
printf ("Comparison Operator\n");
	YY_BREAK
case 52:
YY_RULE_SETUP
#line 74 "Scanner.l"
printf ("Comparison Operator\n");
	YY_BREAK
case 53:
YY_RULE_SETUP
#line 75 "Scanner.l"
printf ("Comparison Operator\n");
	YY_BREAK
case 54:
YY_RULE_SETUP
#line 76 "Scanner.l"
printf ("Comparison Operator\n");
	YY_BREAK
case 55:
YY_RULE_SETUP
#line 77 "Scanner.l"
printf ("Comparison Operator\n");
	YY_BREAK
case 56:
YY_RULE_SETUP
#line 78 "Scanner.l"
printf ("Comparison Operator\n");
	YY_BREAK
						
case 57:
YY_RULE_SETUP
#line 80 "Scanner.l"
printf ("Logical Operator\n");
	YY_BREAK
case 58:
YY_RULE_SETUP
#line 81 "Scanner.l"
printf ("Logical Operator\n");
	YY_BREAK
case 59:
YY_RULE_SETUP
#line 82 "Scanner.l"
printf ("Logical Operator\n");
	YY_BREAK
					
case 60:
YY_RULE_SETUP
#line 84 "Scanner.l"
printf ("Bitwise Operator\n");
	YY_BREAK
case 61:
YY_RULE_SETUP
#line 85 "Scanner.l"
printf ("Bitwise Operator\n");
	YY_BREAK
case 62:
YY_RULE_SETUP
#line 86 "Scanner.l"
printf ("Bitwise Operator\n");
	YY_BREAK
case 63:
YY_RULE_SETUP
#line 87 "Scanner.l"
printf ("Bitwise Operator\n");
	YY_BREAK
case 64:
YY_RULE_SETUP
#line 88 "Scanner.l"
printf ("Bitwise Operator\n");
	YY_BREAK
case 65:
YY_RULE_SETUP
#line 89 "Scanner.l"
printf ("Bitwise Operator\n");
	YY_BREAK

case 66:
YY_RULE_SETUP
#line 91 "Scanner.l"
printf ("PUNCTUATOR\n");
	YY_BREAK
case 67:
YY_RULE_SETUP
#line 92 "Scanner.l"
printf ("PUNCTUATOR\n");
	YY_BREAK
case 68:
YY_RULE_SETUP
#line 93 "Scanner.l"
printf ("PUNCTUATOR\n");
	YY_BREAK
case 69:
YY_RULE_SETUP
#line 94 "Scanner.l"
printf ("PUNCTUATOR\n");
	YY_BREAK
case 70:
YY_RULE_SETUP
#line 95 "Scanner.l"
printf ("PUNCTUATOR\n");
	YY_BREAK
case 71:
YY_RULE_SETUP
#line 96 "Scanner.l"
printf ("PUNCTUATOR\n");
	YY_BREAK
case 72:
YY_RULE_SETUP
#line 97 "Scanner.l"
printf ("COMA\n");
	YY_BREAK
case 73:
YY_RULE_SETUP
#line 98 "Scanner.l"
printf ("COLON\n");
	YY_BREAK
case 74:
YY_RULE_SETUP
#line 99 "Scanner.l"
printf ("SEMICOLON\n");
	YY_BREAK

case 75:
YY_RULE_SETUP
#line 102 "Scanner.l"
printf ("Blank\n");
	YY_BREAK
case 76:
YY_RULE_SETUP
#line 104 "Scanner.l"
printf ("ERROR\n");	
	YY_BREAK
case 77:
YY_RULE_SETUP
#line 106 "Scanner.l"
ECHO;
	YY_BREAK
#line 1147 "lex.yy.c"
case YY_STATE_EOF(INITIAL):
	yyterminate();

	case YY_END_OF_BUFFER:
		{
	
		int yy_amount_of_matched_text = (int) (yy_cp - yytext_ptr) - 1;

		*yy_cp = yy_hold_char;
		YY_RESTORE_YY_MORE_OFFSET

		if ( yy_current_buffer->yy_buffer_status == YY_BUFFER_NEW )
			{
		
			yy_n_chars = yy_current_buffer->yy_n_chars;
			yy_current_buffer->yy_input_file = yyin;
			yy_current_buffer->yy_buffer_status = YY_BUFFER_NORMAL;
			}


		if ( yy_c_buf_p <= &yy_current_buffer->yy_ch_buf[yy_n_chars] )
			{
			yy_state_type yy_next_state;

			yy_c_buf_p = yytext_ptr + yy_amount_of_matched_text;

			yy_current_state = yy_get_previous_state();

		
			yy_next_state = yy_try_NUL_trans( yy_current_state );

			yy_bp = yytext_ptr + YY_MORE_ADJ;

			if ( yy_next_state )
				{
			
				yy_cp = ++yy_c_buf_p;
				yy_current_state = yy_next_state;
				goto yy_match;
				}

			else
				{
				yy_cp = yy_c_buf_p;
				goto yy_find_action;
				}
			}

		else switch ( yy_get_next_buffer() )
			{
			case EOB_ACT_END_OF_FILE:
				{
				yy_did_buffer_switch_on_eof = 0;

				if ( yywrap() )
					{
				
					yy_c_buf_p = yytext_ptr + YY_MORE_ADJ;

					yy_act = YY_STATE_EOF(YY_START);
					goto do_action;
					}

				else
					{
					if ( ! yy_did_buffer_switch_on_eof )
						YY_NEW_FILE;
					}
				break;
				}

			case EOB_ACT_CONTINUE_SCAN:
				yy_c_buf_p =
					yytext_ptr + yy_amount_of_matched_text;

				yy_current_state = yy_get_previous_state();

				yy_cp = yy_c_buf_p;
				yy_bp = yytext_ptr + YY_MORE_ADJ;
				goto yy_match;

			case EOB_ACT_LAST_MATCH:
				yy_c_buf_p =
				&yy_current_buffer->yy_ch_buf[yy_n_chars];

				yy_current_state = yy_get_previous_state();

				yy_cp = yy_c_buf_p;
				yy_bp = yytext_ptr + YY_MORE_ADJ;
				goto yy_find_action;
			}
		break;
		}

	default:
		YY_FATAL_ERROR(
			"fatal flex scanner internal error--no action found" );
	} 
		} 
	} 



static int yy_get_next_buffer()
	{
	register char *dest = yy_current_buffer->yy_ch_buf;
	register char *source = yytext_ptr;
	register int number_to_move, i;
	int ret_val;

	if ( yy_c_buf_p > &yy_current_buffer->yy_ch_buf[yy_n_chars + 1] )
		YY_FATAL_ERROR(
		"fatal flex scanner internal error--end of buffer missed" );

	if ( yy_current_buffer->yy_fill_buffer == 0 )
		{ /* Don't try to fill the buffer, so this is an EOF. */
		if ( yy_c_buf_p - yytext_ptr - YY_MORE_ADJ == 1 )
			{
			
			return EOB_ACT_END_OF_FILE;
			}

		else
			{
			
			return EOB_ACT_LAST_MATCH;
			}
		}

	number_to_move = (int) (yy_c_buf_p - yytext_ptr) - 1;

	for ( i = 0; i < number_to_move; ++i )
		*(dest++) = *(source++);

	if ( yy_current_buffer->yy_buffer_status == YY_BUFFER_EOF_PENDING )
	urrent_buffer->yy_n_chars = yy_n_chars = 0;

	else
		{
		int num_to_read =
			yy_current_buffer->yy_buf_size - number_to_move - 1;

		while ( num_to_read <= 0 )
			{ 
#ifdef YY_USES_REJECT
			YY_FATAL_ERROR(
"input buffer overflow, can't enlarge buffer because scanner uses REJECT" );
#else

			YY_BUFFER_STATE b = yy_current_buffer;

			int yy_c_buf_p_offset =
				(int) (yy_c_buf_p - b->yy_ch_buf);

			if ( b->yy_is_our_buffer )
				{
				int new_size = b->yy_buf_size * 2;

				if ( new_size <= 0 )
					b->yy_buf_size += b->yy_buf_size / 8;
				else
					b->yy_buf_size *= 2;

				b->yy_ch_buf = (char *)
					
					yy_flex_realloc( (void *) b->yy_ch_buf,
							 b->yy_buf_size + 2 );
				}
			else
			
				b->yy_ch_buf = 0;

			if ( ! b->yy_ch_buf )
				YY_FATAL_ERROR(
				"fatal error - scanner input buffer overflow" );

			yy_c_buf_p = &b->yy_ch_buf[yy_c_buf_p_offset];

			num_to_read = yy_current_buffer->yy_buf_size -
						number_to_move - 1;
#endif
			}

		if ( num_to_read > YY_READ_BUF_SIZE )
			num_to_read = YY_READ_BUF_SIZE;

		YY_INPUT( (&yy_current_buffer->yy_ch_buf[number_to_move]),
			yy_n_chars, num_to_read );

		yy_current_buffer->yy_n_chars = yy_n_chars;
		}

	if ( yy_n_chars == 0 )
		{
		if ( number_to_move == YY_MORE_ADJ )
			{
			ret_val = EOB_ACT_END_OF_FILE;
			yyrestart( yyin );
			}

		else
			{
			ret_val = EOB_ACT_LAST_MATCH;
			yy_current_buffer->yy_buffer_status =
				YY_BUFFER_EOF_PENDING;
			}
		}

	else
		ret_val = EOB_ACT_CONTINUE_SCAN;

	yy_n_chars += number_to_move;
	yy_current_buffer->yy_ch_buf[yy_n_chars] = YY_END_OF_BUFFER_CHAR;
	yy_current_buffer->yy_ch_buf[yy_n_chars + 1] = YY_END_OF_BUFFER_CHAR;

	yytext_ptr = &yy_current_buffer->yy_ch_buf[0];

	return ret_val;
	}

static yy_state_type yy_get_previous_state()
	{
	register yy_state_type yy_current_state;
	register char *yy_cp;

	yy_current_state = yy_start;
	yy_current_state += YY_AT_BOL();

	for ( yy_cp = yytext_ptr + YY_MORE_ADJ; yy_cp < yy_c_buf_p; ++yy_cp )
		{
		register YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
		if ( yy_accept[yy_current_state] )
			{
			yy_last_accepting_state = yy_current_state;
			yy_last_accepting_cpos = yy_cp;
			}
		while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
			{
			yy_current_state = (int) yy_def[yy_current_state];
			if ( yy_current_state >= 207 )
				yy_c = yy_meta[(unsigned int) yy_c];
			}
		yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
		}

	return yy_current_state;
	}

#ifdef YY_USE_PROTOS
static yy_state_type yy_try_NUL_trans( yy_state_type yy_current_state )
#else
static yy_state_type yy_try_NUL_trans( yy_current_state )
yy_state_type yy_current_state;
#endif
	{
	register int yy_is_jam;
	register char *yy_cp = yy_c_buf_p;

	register YY_CHAR yy_c = 1;
	if ( yy_accept[yy_current_state] )
		{
		yy_last_accepting_state = yy_current_state;
		yy_last_accepting_cpos = yy_cp;
		}
	while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
		{
		yy_current_state = (int) yy_def[yy_current_state];
		if ( yy_current_state >= 207 )
			yy_c = yy_meta[(unsigned int) yy_c];
		}
	yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
	yy_is_jam = (yy_current_state == 206);

	return yy_is_jam ? 0 : yy_current_state;
	}


#ifndef YY_NO_UNPUT
#ifdef YY_USE_PROTOS
static void yyunput( int c, register char *yy_bp )
#else
static void yyunput( c, yy_bp )
int c;
register char *yy_bp;
#endif
	{
	register char *yy_cp = yy_c_buf_p;

	
	*yy_cp = yy_hold_char;

	if ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )
		{ 
		register int number_to_move = yy_n_chars + 2;
		register char *dest = &yy_current_buffer->yy_ch_buf[
					yy_current_buffer->yy_buf_size + 2];
		register char *source =
				&yy_current_buffer->yy_ch_buf[number_to_move];

		while ( source > yy_current_buffer->yy_ch_buf )
			*--dest = *--source;

		yy_cp += (int) (dest - source);
		yy_bp += (int) (dest - source);
		yy_current_buffer->yy_n_chars =
			yy_n_chars = yy_current_buffer->yy_buf_size;

		if ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )
			YY_FATAL_ERROR( "flex scanner push-back overflow" );
		}

	*--yy_cp = (char) c;


	yytext_ptr = yy_bp;
	yy_hold_char = *yy_cp;
	yy_c_buf_p = yy_cp;
	}
#endif	
#ifdef __cplusplus
static int yyinput()
#else
static int input()
#endif
	{
	int c;

	*yy_c_buf_p = yy_hold_char;

	if ( *yy_c_buf_p == YY_END_OF_BUFFER_CHAR )
		{
	
		if ( yy_c_buf_p < &yy_current_buffer->yy_ch_buf[yy_n_chars] )
			
			*yy_c_buf_p = '\0';

		else
			{ 
			int offset = yy_c_buf_p - yytext_ptr;
			++yy_c_buf_p;

			switch ( yy_get_next_buffer() )
				{
				case EOB_ACT_LAST_MATCH:
					yyrestart( yyin );

			

				case EOB_ACT_END_OF_FILE:
					{
					if ( yywrap() )
						return EOF;

					if ( ! yy_did_buffer_switch_on_eof )
						YY_NEW_FILE;
#ifdef __cplusplus
					return yyinput();
#else
					return input();
#endif
					}

				case EOB_ACT_CONTINUE_SCAN:
					yy_c_buf_p = yytext_ptr + offset;
					break;
				}
			}
		}

	c = *(unsigned char *) yy_c_buf_p;	
	*yy_c_buf_p = '\0';	
	yy_hold_char = *++yy_c_buf_p;

	yy_current_buffer->yy_at_bol = (c == '\n');

	return c;
	}


#ifdef YY_USE_PROTOS
void yyrestart( FILE *input_file )
#else
void yyrestart( input_file )
FILE *input_file;
#endif
	{
	if ( ! yy_current_buffer )
		yy_current_buffer = yy_create_buffer( yyin, YY_BUF_SIZE );

	yy_init_buffer( yy_current_buffer, input_file );
	yy_load_buffer_state();
	}


#ifdef YY_USE_PROTOS
void yy_switch_to_buffer( YY_BUFFER_STATE new_buffer )
#else
void yy_switch_to_buffer( new_buffer )
YY_BUFFER_STATE new_buffer;
#endif
	{
	if ( yy_current_buffer == new_buffer )
		return;

	if ( yy_current_buffer )
		{
		
		*yy_c_buf_p = yy_hold_char;
		yy_current_buffer->yy_buf_pos = yy_c_buf_p;
		yy_current_buffer->yy_n_chars = yy_n_chars;
		}

	yy_current_buffer = new_buffer;
	yy_load_buffer_state();

	yy_did_buffer_switch_on_eof = 1;
	}


#ifdef YY_USE_PROTOS
void yy_load_buffer_state( void )
#else
void yy_load_buffer_state()
#endif
	{
	yy_n_chars = yy_current_buffer->yy_n_chars;
	yytext_ptr = yy_c_buf_p = yy_current_buffer->yy_buf_pos;
	yyin = yy_current_buffer->yy_input_file;
	yy_hold_char = *yy_c_buf_p;
	}


#ifdef YY_USE_PROTOS
YY_BUFFER_STATE yy_create_buffer( FILE *file, int size )
#else
YY_BUFFER_STATE yy_create_buffer( file, size )
FILE *file;
int size;
#endif
	{
	YY_BUFFER_STATE b;

	b = (YY_BUFFER_STATE) yy_flex_alloc( sizeof( struct yy_buffer_state ) );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_buf_size = size;

	b->yy_ch_buf = (char *) yy_flex_alloc( b->yy_buf_size + 2 );
	if ( ! b->yy_ch_buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_create_buffer()" );

	b->yy_is_our_buffer = 1;

	yy_init_buffer( b, file );

	return b;
	}


#ifdef YY_USE_PROTOS
void yy_delete_buffer( YY_BUFFER_STATE b )
#else
void yy_delete_buffer( b )
YY_BUFFER_STATE b;
#endif
	{
	if ( ! b )
		return;

	if ( b == yy_current_buffer )
		yy_current_buffer = (YY_BUFFER_STATE) 0;

	if ( b->yy_is_our_buffer )
		yy_flex_free( (void *) b->yy_ch_buf );

	yy_flex_free( (void *) b );
	}


#ifndef YY_ALWAYS_INTERACTIVE
#ifndef YY_NEVER_INTERACTIVE
extern int isatty YY_PROTO(( int ));
#endif
#endif

#ifdef YY_USE_PROTOS
void yy_init_buffer( YY_BUFFER_STATE b, FILE *file )
#else
void yy_init_buffer( b, file )
YY_BUFFER_STATE b;
FILE *file;
#endif


	{
	yy_flush_buffer( b );

	b->yy_input_file = file;
	b->yy_fill_buffer = 1;

#if YY_ALWAYS_INTERACTIVE
	b->yy_is_interactive = 1;
#else
#if YY_NEVER_INTERACTIVE
	b->yy_is_interactive = 0;
#else
	b->yy_is_interactive = file ? (isatty( fileno(file) ) > 0) : 0;
#endif
#endif
	}


#ifdef YY_USE_PROTOS
void yy_flush_buffer( YY_BUFFER_STATE b )
#else
void yy_flush_buffer( b )
YY_BUFFER_STATE b;
#endif

	{
	if ( ! b )
		return;

	b->yy_n_chars = 0;
/
	b->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;
	b->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;

	b->yy_buf_pos = &b->yy_ch_buf[0];

	b->yy_at_bol = 1;
	b->yy_buffer_status = YY_BUFFER_NEW;

	if ( b == yy_current_buffer )
		yy_load_buffer_state();
	}


#ifndef YY_NO_SCAN_BUFFER
#ifdef YY_USE_PROTOS
YY_BUFFER_STATE yy_scan_buffer( char *base, yy_size_t size )
#else
YY_BUFFER_STATE yy_scan_buffer( base, size )
char *base;
yy_size_t size;
#endif
	{
	YY_BUFFER_STATE b;

	if ( size < 2 ||
	     base[size-2] != YY_END_OF_BUFFER_CHAR ||
	     base[size-1] != YY_END_OF_BUFFER_CHAR )
		return 0;

	b = (YY_BUFFER_STATE) yy_flex_alloc( sizeof( struct yy_buffer_state ) );
	if ( ! b )
		YY_FATAL_ERROR( "out of dynamic memory in yy_scan_buffer()" );

	b->yy_buf_size = size - 2;	
	b->yy_buf_pos = b->yy_ch_buf = base;
	b->yy_is_our_buffer = 0;
	b->yy_input_file = 0;
	b->yy_n_chars = b->yy_buf_size;
	b->yy_is_interactive = 0;
	b->yy_at_bol = 1;
	b->yy_fill_buffer = 0;
	b->yy_buffer_status = YY_BUFFER_NEW;

	yy_switch_to_buffer( b );

	return b;
	}
#endif


#ifndef YY_NO_SCAN_STRING
#ifdef YY_USE_PROTOS
YY_BUFFER_STATE yy_scan_string( yyconst char *yy_str )
#else
YY_BUFFER_STATE yy_scan_string( yy_str )
yyconst char *yy_str;
#endif
	{
	int len;
	for ( len = 0; yy_str[len]; ++len )
		;

	return yy_scan_bytes( yy_str, len );
	}
#endif


#ifndef YY_NO_SCAN_BYTES
#ifdef YY_USE_PROTOS
YY_BUFFER_STATE yy_scan_bytes( yyconst char *bytes, int len )
#else
YY_BUFFER_STATE yy_scan_bytes( bytes, len )
yyconst char *bytes;
int len;
#endif
	{
	YY_BUFFER_STATE b;
	char *buf;
	yy_size_t n;
	int i;

	n = len + 2;
	buf = (char *) yy_flex_alloc( n );
	if ( ! buf )
		YY_FATAL_ERROR( "out of dynamic memory in yy_scan_bytes()" );

	for ( i = 0; i < len; ++i )
		buf[i] = bytes[i];

	buf[len] = buf[len+1] = YY_END_OF_BUFFER_CHAR;

	b = yy_scan_buffer( buf, n );
	if ( ! b )
		YY_FATAL_ERROR( "bad buffer in yy_scan_bytes()" );

	b->yy_is_our_buffer = 1;

	return b;
	}
#endif


#ifndef YY_NO_PUSH_STATE
#ifdef YY_USE_PROTOS
static void yy_push_state( int new_state )
#else
static void yy_push_state( new_state )
int new_state;
#endif
	{
	if ( yy_start_stack_ptr >= yy_start_stack_depth )
		{
		yy_size_t new_size;

		yy_start_stack_depth += YY_START_STACK_INCR;
		new_size = yy_start_stack_depth * sizeof( int );

		if ( ! yy_start_stack )
			yy_start_stack = (int *) yy_flex_alloc( new_size );

		else
			yy_start_stack = (int *) yy_flex_realloc(
					(void *) yy_start_stack, new_size );

		if ( ! yy_start_stack )
			YY_FATAL_ERROR(
			"out of memory expanding start-condition stack" );
		}

	yy_start_stack[yy_start_stack_ptr++] = YY_START;

	BEGIN(new_state);
	}
#endif


#ifndef YY_NO_POP_STATE
static void yy_pop_state()
	{
	if ( --yy_start_stack_ptr < 0 )
		YY_FATAL_ERROR( "start-condition stack underflow" );

	BEGIN(yy_start_stack[yy_start_stack_ptr]);
	}
#endif


#ifndef YY_NO_TOP_STATE
static int yy_top_state()
	{
	return yy_start_stack[yy_start_stack_ptr - 1];
	}
#endif

#ifndef YY_EXIT_FAILURE
#define YY_EXIT_FAILURE 2
#endif

#ifdef YY_USE_PROTOS
static void yy_fatal_error( yyconst char msg[] )
#else
static void yy_fatal_error( msg )
char msg[];
#endif
	{
	(void) fprintf( stderr, "%s\n", msg );
	exit( YY_EXIT_FAILURE );
	}
#undef yyless
#define yyless(n) \
	do \
		{ \
	       \
		yytext[yyleng] = yy_hold_char; \
		yy_c_buf_p = yytext + n; \
		yy_hold_char = *yy_c_buf_p; \
		*yy_c_buf_p = '\0'; \
		yyleng = n; \
		} \
	while ( 0 )

#ifndef yytext_ptr
#ifdef YY_USE_PROTOS
static void yy_flex_strncpy( char *s1, yyconst char *s2, int n )
#else
static void yy_flex_strncpy( s1, s2, n )
char *s1;
yyconst char *s2;
int n;
#endif
	{
	register int i;
	for ( i = 0; i < n; ++i )
		s1[i] = s2[i];
	}
#endif

#ifdef YY_NEED_STRLEN
#ifdef YY_USE_PROTOS
static int yy_flex_strlen( yyconst char *s )
#else
static int yy_flex_strlen( s )
yyconst char *s;
#endif
	{
	register int n;
	for ( n = 0; s[n]; ++n )
		;

	return n;
	}
#endif


#ifdef YY_USE_PROTOS
static void *yy_flex_alloc( yy_size_t size )
#else
static void *yy_flex_alloc( size )
yy_size_t size;
#endif
	{
	return (void *) malloc( size );
	}

#ifdef YY_USE_PROTOS
static void *yy_flex_realloc( void *ptr, yy_size_t size )
#else
static void *yy_flex_realloc( ptr, size )
void *ptr;
yy_size_t size;
#endif
	{
	return (void *) realloc( (char *) ptr, size );
	}

#ifdef YY_USE_PROTOS
static void yy_flex_free( void *ptr )
#else
static void yy_flex_free( ptr )
void *ptr;
#endif
	{
	free( ptr );
	}

#if YY_MAIN
int main()
	{
	yylex();
	return 0;
	}
#endif
#line 106 "Scanner.l"


main ()
{ yylex(); }
yywrap()
{ }
