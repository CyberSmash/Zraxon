#!/bin/bash

# Builds our parser.
yacc -d ./commands.y
lex ./commands.l

gcc lex.yy.c y.tab.c -o commands -lfl
