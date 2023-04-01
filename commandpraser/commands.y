%{
#include <stdio.h>

int yylex(void);
int yyparse();
int yyerror(char* s);

%}

%token NORTH SOUTH EAST WEST FOOD CAT GO USE
%union 
{
    int number;
    char* string;
}

%token <number> DIRECTION
%token <string> ITEM

%%

action:     move
        |   usage
        ;

move: GO DIRECTION {
    printf("Going %d\n", $2);
};


usage: USE ITEM {
     printf("Using %s\n", $2);
};


%%


extern FILE *yyin;

main()
{
    do
    {
        printf("Enter next command > ");
        yyparse();
    } while(!feof(yyin));
}
yyerror(s)
char *s;
{
    fprintf(stderr, "Error: %s\n", s);
}
