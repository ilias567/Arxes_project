%{
#include "bison.tab.h" 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//#define YYSTYPE char *
%}
%option noyywrap
%option yylineno



boolean_true	true
boolean_false	false
null_string	null
letter	[a-zA-Z]
int [1-9][0-9]*|0
string	\"([^\\\"]|\\.)*\" 
digit	[0-9]
float [0-9]+"."[0-9]+
sign	[+|-]{digit}+	
unsign  {digit}+
real	({sign}|{unsign})"."{digit}+	
boolean		("true"|"false")
ws 			[ \t\n\r]
%%

:					{return COLON;}
,					{return COMMA;}
\{					{return OBRACKETS;}
\}					{return CBRACKETS;}
\[					{return OBRACES;}
\]					{return CBRACES;}
[ \t\n] //ignore whitespace, tab, newline

\"last\"    {return LAST;}
\"content\"    {return CONTENT;}
\"gameId\"  {return GAMEID;}
\"drawId\"  {return DRAWID;}
\"drawTime\"  {return DRAWTIME;}
\"status\"  {return STATUS;}
\"{string}\"  {return STATUS_STRING;}
\"drawBreak\"  {return DRAWBREAK;}
\"visualDraw\"  {return VISUALDRAW;}
\"pricePoints\"  {return PRICEPOINTS;}
\"amount\"  {return AMOUNT;}
\"winningNumbers\"  {return WINNINGNUMBERS;}
\"list\"  {return LIST;}
\"bonus\"  {return BONUS;}
\"prizeCategories\"  {return PRIZECATEGORIES;}
\"id\"  {return ID;}
\"divident\"  {return DIVIDENT;}
\"winners\"  {return WINNERS;}
\"distributed\"  {return DISTRIBUTED;}
\"jackpot\"  {return JACKPOT;}
\"fixed\"  {return FIXED;}
\"categoryType\"  {return CATEGORYTYPE;}
\"gameType\"  {return GAMETYPE;}
\"minimumDistributed\"  {return MINIMUMDISTRIBUTED;}
\"wagerStatistics\"  {return WAGERSTATISTICS;}
\"columns\"  {return COLUMNS;}
\"wagers\"  {return WAGERS;}
\"addOn\"  {return ADDON;}
\"active\"  {return ACTIVE;}
\"totalPages\"  {return TOTALPAGES;}
\"totalElements\"  {return TOTALELEMENTS;}
\"numberOfElements\"  {return NUMBEROFELEMENTS;}
\"sort\"  {return SORT;}
\"direction\"  {return DIRECTION;}
\"property\"  {return PROPERTY;}
\"ignoreCase\"  {return IGNORECASE;}
\"nullHandling\"  {return NULLHANDLING;}
\"descending\"  {return DESCENDING;}
\"ascending\"  {return ASCENDING;}
\"first\"  {return FIRST;}
\"size\"  {return SIZE;}
\"number\"  {return NUMBER;}

{int} {return INT;}
{float} {return FLOAT;}
{string} {return STRING;}
{boolean} {return BOOLEAN;}
{ws}   {;}

%%
