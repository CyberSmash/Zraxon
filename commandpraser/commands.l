%{
#include <stdio.h>
#include "y.tab.h"
int state;

#define LOOKUP 0

%}

%% 
\n  { state = LOOKUP; return 0;};
\.\n { state = LOOKUP; return 0;};
^go { state = GO; return GO; };
^use { state = USE; return USE; };

north { yylval.number = NORTH; return DIRECTION; };
south { yylval.number = SOUTH; return DIRECTION; };
east  { yylval.number = EAST; return DIRECTION; };
west { yylval.number = WEST; return DIRECTION; };

[a-zA-Z]+ {
    printf("Got: %s\n", yytext); 
    yylval.string = strdup(yytext);
    return ITEM;
};

. ;

%%
