%{
 
#define _GNU_SOURCE
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


void yyerror(char const *S);
extern int yylineno;
extern char* yytext;
extern FILE *yyin;
extern FILE *yyout;
int yylex(void);
%}
%define parse.error verbose

%define api.value.type { char* }
%token COLON 
%token COMMA 
%token OBRACKETS 
%token CBRACKETS 
%token OBRACES 
%token CBRACES 
%token LAST 
%token GAMEID 
%token DRAWID 
%token DRAWTIME 
%token STATUS 
%token STATUS_STRING 
%token DRAWBREAK 
%token VISUALDRAW 
%token PRICEPOINTS 
%token AMOUNT 
%token WINNINGNUMBERS 
%token LIST 
%token BONUS 
%token PRIZECATEGORIES 
%token ID 
%token DIVIDENT 
%token WINNERS 
%token DISTRIBUTED 
%token JACKPOT 
%token FIXED 
%token CATEGORYTYPE 
%token GAMETYPE 
%token MINIMUMDISTRIBUTED 
%token WAGERSTATISTICS 
%token COLUMNS 
%token WAGERS 
%token ADDON 
%token ACTIVE 
%token STRING 
%token SIGN 
%token EARL 
%token true 
%token false 
%token UNSIGN 
%token null 
%token FLOAT
%token INT
%token DOUBLE
%token CONTENT
%token TOTALPAGES
%token TOTALELEMENTS
%token NUMBEROFELEMENTS
%token DIRECTION
%token PROPERTY
%token IGNORECASE
%token NULLHANDLING
%token DESCENDING
%token ASCENDING
%token SORT
%token FIRST
%token SIZE
%token NUMBER
%token BOOLEAN
%type <string> STRING
%type <num> INT
%type <num> FLOAT
%type <num> DOUBLE


%start jsonfile
%%

jsonfile:		OBRACKETS {printf("{\n");}  LAST{printf("\t\"last\"");} COLON {printf(":");} OBRACKETS{printf("{\n");} ruleSTART  CBRACKETS{printf("}\n");} ;
				|OBRACKETS {printf("{\n");}  CONTENT{printf("\t\"content\"");} COLON {printf(":");} OBRACES{printf("[\n");} ruleSTART  CBRACES{printf("]\n");} COMMA{printf(",\n");} ruleTotal CBRACKETS{printf("}\n");};

//GRAMMAR for 2.0
ruleSTART:	ruleLast
			|ruleContent
			;


ruleLast:		ruleLast COMMA{printf(",\n");} ruleLast
				|ruleGameId
				| ruleDrawId
				| ruleDrawTime
				| ruleStatus
				| ruleDrawBreak
				| ruleVisualDraw
				| rulePricePoints
				| ruleWinningNumbers
				| rulePrizeCategories
				| ruleWagerStatistics
				;

//GRAMMAR for GameId
ruleGameId:		GAMEID{printf("\t\"gameId\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

//GRAMMAR for DrawId
ruleDrawId:		DRAWID{printf("\t\"drawId\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

//GRAMMAR for DrawTime
ruleDrawTime:		DRAWTIME{printf("\t\"drawtime\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

//GRAMMAR for Status
ruleStatus:		STATUS{printf("\t\"Status\"");} COLON{printf(":");} STRING{printf("\%s",yytext);};

//GRAMMAR for DrawBreak
ruleDrawBreak:		DRAWBREAK{printf("\t\"Drawbreak\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

//GRAMMAR for VisualDraw
ruleVisualDraw:		VISUALDRAW{printf("\t\"visualdraw\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

//GRAMMAR for PricePoints
rulePricePoints:		PRICEPOINTS{printf("\t\"pricepoints\"");} COLON{printf(":");} OBRACKETS{printf("{");}  ruleAmount CBRACKETS{printf("}\n");};

//GRAMMAR for Amount
ruleAmount:		AMOUNT{printf("\t\"amount\"");} COLON{printf(":");} FLOAT{printf("\%s",yytext);};

//GRAMMAR for WinningNumbers
ruleWinningNumbers:		WINNINGNUMBERS{printf("\t\"winningnumbers\"");} COLON{printf(":");} OBRACKETS{printf("{\n");}  ruleWinningNum CBRACKETS{printf("}\n");};

//GRAMMAR for WinningNum
ruleWinningNum: 	ruleWinningNum COMMA{printf(",\n");} ruleWinningNum
					|ruleList
					|ruleBonus
					;

//GRAMMAR for List
ruleList:		LIST{printf("\t\"list\"");} COLON{printf(":");} OBRACES{printf("[");} ruleArray CBRACES{printf("]\n");};

ruleArray:       ruleArray   COMMA{printf(",");}  ruleArray
				|INT{printf("\%s",yytext);}
				;
		

//GRAMMAR for Bonus

ruleBonus:		BONUS{printf("\t\"bonus\"");} COLON{printf(":");} OBRACES{printf("[");} ruleArray CBRACES{printf("]\n");};

//GRAMMAR for PrizeCategories
rulePrizeCategories: 	PRIZECATEGORIES{printf("\t\"prizecategories\"");} COLON {printf(":");} OBRACES{printf("[\n");} rulePrizeCtgrs CBRACES{printf("]\n");};

//GRAMMAR for PrizeCtgrs
rulePrizeCtgrs:	rulePrizeCtgrs COMMA{printf(",\n");} rulePrizeCtgrs
				| OBRACKETS{printf("{\n");}  rule CBRACKETS{printf("}\n");}
				;

rule: rule1 | rule2; 
rule1: ID{printf("\t\"id\"");} COLON{printf(":");} INT{printf("\%s",yytext);} COMMA{printf(",");} DIVIDENT{printf("\t\"divident\"");} COLON{printf(":");} FLOAT{printf("\%s",yytext);} COMMA{printf(",");} WINNERS{printf("\t\"winners\"");} COLON{printf(":");} INT{printf("\%s",yytext);} COMMA{printf(",");} DISTRIBUTED{printf("\t\"distributed\"");} COLON{printf(":");} FLOAT{printf("\%s",yytext);} COMMA{printf(",");} JACKPOT{printf("\t\"jackpot\"");} COLON{printf(":");} FLOAT{printf("\%s",yytext);} COMMA{printf(",");} FIXED{printf("\t\"fixed\"");} COLON{printf(":");} FLOAT{printf("\%s",yytext);} COMMA{printf(",");} CATEGORYTYPE{printf("\t\"categorytype\"");} COLON{printf(":");} INT{printf("\%s",yytext);} COMMA{printf(",");} GAMETYPE{printf("\t\"gametype\"");} COLON{printf(":");} STRING{printf("\%s",yytext);} rule2;

rule2: COMMA{printf(",");} MINIMUMDISTRIBUTED{printf("\t\"minimundistributed\"");} COLON{printf(":");} FLOAT{printf("\%s",yytext);} 
		|
		;


//GRAMMAR for WagerStatistics
ruleWagerStatistics:	WAGERSTATISTICS{printf("\t\"wagerstatistics\"");} COLON{printf(":");} OBRACKETS{printf("{\n");} ruleWagerst CBRACKETS{printf("}\n");} CBRACKETS{printf("}\n");} COMMA{printf(",");} ACTIVE{printf("\t\"active\"");} COLON{printf(":");} OBRACKETS{printf("{\n");} ruleActive CBRACKETS{printf("}\n");}
						;

ruleWagerStatisticss:WAGERSTATISTICS{printf("\t\"wagerstatistics\"");} COLON{printf(":");} OBRACKETS{printf("{\n");} ruleWagerst CBRACKETS{printf("}\n");}

ruleWagerst:	ruleWagerst COMMA{printf(",");} ruleWagerst
				| ruleColumns
				| ruleWagers
				| ruleAddOn
				;

//GRAMMAR for Columns
ruleColumns:	COLUMNS{printf("\t\"columns\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

//GRAMMAR for Wagers
ruleWagers:	WAGERS{printf("\t\"wagers\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

//GRAMMAR for AddOn
ruleAddOn:	ADDON{printf("\t\"addon\"");} COLON{printf(":");} OBRACES{printf("[");} CBRACES{printf("]\n");};


ruleActive:      ruleActive COMMA{printf(",");}  ruleActive
				| ruleGameId
				| ruleDrawId
				| ruleDrawTime
				| ruleAcStatus
				| ruleDrawBreak
				| ruleVisualDraw
				| rulePricePoints
				| ruleWinningNumbers
				| rulePrizeCategories
				| ruleWagerStatisticss
				;		

ruleAcStatus:		STATUS{printf("\t\"Status\"");} COLON{printf(":");} ACTIVE{printf("\t\"active\"");};

ruleContent: ruleContent1 COMMA{printf(",\n");} ruleContent1 COMMA{printf(",\n");} ruleContent1 COMMA{printf(",\n");} ruleContent1;


ruleContent1: OBRACKETS{printf("{\n");} ruleLastContent  CBRACKETS{printf("}\n");} ;

ruleLastContent:	ruleLastContent COMMA{printf(",\n");} ruleLastContent
					| ruleGameId
					| ruleDrawId
					| ruleDrawTime
					| ruleStatus
					| ruleDrawBreak
					| ruleVisualDraw
					| rulePricePoints
					| ruleWinningNumbers
					| rulePrizeCategories
					| ruleWagerStatisticsContent
					;



ruleWagerStatisticsContent:	WAGERSTATISTICS{printf("\t\"wagerstatistics\"");} COLON{printf(":");} OBRACKETS{printf("{\n");} ruleWagerst CBRACKETS{printf("}\n");} ;

ruleTotal:ruleTotal COMMA{printf(",\n");}ruleTotal
		|ruleTotalPages
		|ruleTotalElements
		|ruleLaast
		|ruleNumberOfElements
		|ruleSort
		|ruleFirst
		|ruleSize
		|ruleNumber
		;

ruleTotalPages: TOTALPAGES {printf("\t\"totalpages\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

ruleTotalElements:TOTALELEMENTS {printf("\t\"totalElements\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

ruleLaast:LAST{printf("\t\"last\"");} COLON{printf(":");}  BOOLEAN {printf("\%s",yytext);};

ruleNumberOfElements:NUMBEROFELEMENTS {printf("\t\"numberOfElements\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

ruleSort: SORT {printf("\t\"sort\"");} COLON{printf(":");} OBRACES{printf("[\n");} OBRACKETS{printf("{\n");} ruleSort1 CBRACKETS{printf("}\n");} CBRACES{printf("]\n");};

ruleSort1: ruleSort1 COMMA{printf(",\n");} ruleSort1
		|ruleDirection
		|ruleProperty
		|ruleIgnoreCase
		|ruleNullHandling
		|ruleDescending
		|ruleAscending
		;

ruleDirection: DIRECTION {printf("\t\"direction\"");} COLON{printf(":");}  STRING{printf("\%s",yytext);};

ruleProperty:  PROPERTY {printf("\t\"property\"");} COLON{printf(":");}  STRING{printf("\%s",yytext);};

ruleIgnoreCase: IGNORECASE {printf("\t\"ignoreCase\"");} COLON{printf(":");}  BOOLEAN {printf("\%s",yytext);};

ruleNullHandling: NULLHANDLING {printf("\t\"nullHandling\"");} COLON{printf(":");}  STRING{printf("\%s",yytext);};

ruleDescending: DESCENDING {printf("\t\"descending\"");} COLON{printf(":");}  BOOLEAN {printf("\%s",yytext);};

ruleAscending: ASCENDING {printf("\t\"ascending\"");} COLON{printf(":");}  BOOLEAN {printf("\%s",yytext);};

ruleFirst:FIRST{printf("\t\"first\"");} COLON{printf(":");}  BOOLEAN {printf("\%s",yytext);};

ruleSize: SIZE {printf("\t\"size\"");} COLON{printf(":");} INT{printf("\%s",yytext);};

ruleNumber: NUMBER {printf("\t\"number\"");} COLON{printf(":");} INT{printf("\%s",yytext);};


%%
void yyerror(char const *s) 
{
    fprintf(stderr,"\nError: %s\nLine: %d\nToken: %s\n", s, yylineno, yytext);
	exit(1);
}



int main(int argc,char *argv[]){

int token;
if(argc >1){

    yyin=fopen(argv[1],"r");
        if(yyin == NULL){

            perror ("ËRROR");
            return -1;
        }
}
yyparse();
fclose (yyin);
return 0;



}
