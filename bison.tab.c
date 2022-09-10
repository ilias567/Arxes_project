/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison.y"

 
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

#line 88 "bison.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_COLON = 3,                      /* COLON  */
  YYSYMBOL_COMMA = 4,                      /* COMMA  */
  YYSYMBOL_OBRACKETS = 5,                  /* OBRACKETS  */
  YYSYMBOL_CBRACKETS = 6,                  /* CBRACKETS  */
  YYSYMBOL_OBRACES = 7,                    /* OBRACES  */
  YYSYMBOL_CBRACES = 8,                    /* CBRACES  */
  YYSYMBOL_LAST = 9,                       /* LAST  */
  YYSYMBOL_GAMEID = 10,                    /* GAMEID  */
  YYSYMBOL_DRAWID = 11,                    /* DRAWID  */
  YYSYMBOL_DRAWTIME = 12,                  /* DRAWTIME  */
  YYSYMBOL_STATUS = 13,                    /* STATUS  */
  YYSYMBOL_STATUS_STRING = 14,             /* STATUS_STRING  */
  YYSYMBOL_DRAWBREAK = 15,                 /* DRAWBREAK  */
  YYSYMBOL_VISUALDRAW = 16,                /* VISUALDRAW  */
  YYSYMBOL_PRICEPOINTS = 17,               /* PRICEPOINTS  */
  YYSYMBOL_AMOUNT = 18,                    /* AMOUNT  */
  YYSYMBOL_WINNINGNUMBERS = 19,            /* WINNINGNUMBERS  */
  YYSYMBOL_LIST = 20,                      /* LIST  */
  YYSYMBOL_BONUS = 21,                     /* BONUS  */
  YYSYMBOL_PRIZECATEGORIES = 22,           /* PRIZECATEGORIES  */
  YYSYMBOL_ID = 23,                        /* ID  */
  YYSYMBOL_DIVIDENT = 24,                  /* DIVIDENT  */
  YYSYMBOL_WINNERS = 25,                   /* WINNERS  */
  YYSYMBOL_DISTRIBUTED = 26,               /* DISTRIBUTED  */
  YYSYMBOL_JACKPOT = 27,                   /* JACKPOT  */
  YYSYMBOL_FIXED = 28,                     /* FIXED  */
  YYSYMBOL_CATEGORYTYPE = 29,              /* CATEGORYTYPE  */
  YYSYMBOL_GAMETYPE = 30,                  /* GAMETYPE  */
  YYSYMBOL_MINIMUMDISTRIBUTED = 31,        /* MINIMUMDISTRIBUTED  */
  YYSYMBOL_WAGERSTATISTICS = 32,           /* WAGERSTATISTICS  */
  YYSYMBOL_COLUMNS = 33,                   /* COLUMNS  */
  YYSYMBOL_WAGERS = 34,                    /* WAGERS  */
  YYSYMBOL_ADDON = 35,                     /* ADDON  */
  YYSYMBOL_ACTIVE = 36,                    /* ACTIVE  */
  YYSYMBOL_STRING = 37,                    /* STRING  */
  YYSYMBOL_SIGN = 38,                      /* SIGN  */
  YYSYMBOL_EARL = 39,                      /* EARL  */
  YYSYMBOL_true = 40,                      /* true  */
  YYSYMBOL_false = 41,                     /* false  */
  YYSYMBOL_UNSIGN = 42,                    /* UNSIGN  */
  YYSYMBOL_null = 43,                      /* null  */
  YYSYMBOL_FLOAT = 44,                     /* FLOAT  */
  YYSYMBOL_INT = 45,                       /* INT  */
  YYSYMBOL_DOUBLE = 46,                    /* DOUBLE  */
  YYSYMBOL_CONTENT = 47,                   /* CONTENT  */
  YYSYMBOL_TOTALPAGES = 48,                /* TOTALPAGES  */
  YYSYMBOL_TOTALELEMENTS = 49,             /* TOTALELEMENTS  */
  YYSYMBOL_NUMBEROFELEMENTS = 50,          /* NUMBEROFELEMENTS  */
  YYSYMBOL_DIRECTION = 51,                 /* DIRECTION  */
  YYSYMBOL_PROPERTY = 52,                  /* PROPERTY  */
  YYSYMBOL_IGNORECASE = 53,                /* IGNORECASE  */
  YYSYMBOL_NULLHANDLING = 54,              /* NULLHANDLING  */
  YYSYMBOL_DESCENDING = 55,                /* DESCENDING  */
  YYSYMBOL_ASCENDING = 56,                 /* ASCENDING  */
  YYSYMBOL_SORT = 57,                      /* SORT  */
  YYSYMBOL_FIRST = 58,                     /* FIRST  */
  YYSYMBOL_SIZE = 59,                      /* SIZE  */
  YYSYMBOL_NUMBER = 60,                    /* NUMBER  */
  YYSYMBOL_BOOLEAN = 61,                   /* BOOLEAN  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_jsonfile = 63,                  /* jsonfile  */
  YYSYMBOL_64_1 = 64,                      /* $@1  */
  YYSYMBOL_65_2 = 65,                      /* $@2  */
  YYSYMBOL_66_3 = 66,                      /* $@3  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_68_5 = 68,                      /* $@5  */
  YYSYMBOL_69_6 = 69,                      /* $@6  */
  YYSYMBOL_70_7 = 70,                      /* $@7  */
  YYSYMBOL_71_8 = 71,                      /* $@8  */
  YYSYMBOL_72_9 = 72,                      /* $@9  */
  YYSYMBOL_73_10 = 73,                     /* $@10  */
  YYSYMBOL_ruleSTART = 74,                 /* ruleSTART  */
  YYSYMBOL_ruleLast = 75,                  /* ruleLast  */
  YYSYMBOL_76_11 = 76,                     /* $@11  */
  YYSYMBOL_ruleGameId = 77,                /* ruleGameId  */
  YYSYMBOL_78_12 = 78,                     /* $@12  */
  YYSYMBOL_79_13 = 79,                     /* $@13  */
  YYSYMBOL_ruleDrawId = 80,                /* ruleDrawId  */
  YYSYMBOL_81_14 = 81,                     /* $@14  */
  YYSYMBOL_82_15 = 82,                     /* $@15  */
  YYSYMBOL_ruleDrawTime = 83,              /* ruleDrawTime  */
  YYSYMBOL_84_16 = 84,                     /* $@16  */
  YYSYMBOL_85_17 = 85,                     /* $@17  */
  YYSYMBOL_ruleStatus = 86,                /* ruleStatus  */
  YYSYMBOL_87_18 = 87,                     /* $@18  */
  YYSYMBOL_88_19 = 88,                     /* $@19  */
  YYSYMBOL_ruleDrawBreak = 89,             /* ruleDrawBreak  */
  YYSYMBOL_90_20 = 90,                     /* $@20  */
  YYSYMBOL_91_21 = 91,                     /* $@21  */
  YYSYMBOL_ruleVisualDraw = 92,            /* ruleVisualDraw  */
  YYSYMBOL_93_22 = 93,                     /* $@22  */
  YYSYMBOL_94_23 = 94,                     /* $@23  */
  YYSYMBOL_rulePricePoints = 95,           /* rulePricePoints  */
  YYSYMBOL_96_24 = 96,                     /* $@24  */
  YYSYMBOL_97_25 = 97,                     /* $@25  */
  YYSYMBOL_98_26 = 98,                     /* $@26  */
  YYSYMBOL_ruleAmount = 99,                /* ruleAmount  */
  YYSYMBOL_100_27 = 100,                   /* $@27  */
  YYSYMBOL_101_28 = 101,                   /* $@28  */
  YYSYMBOL_ruleWinningNumbers = 102,       /* ruleWinningNumbers  */
  YYSYMBOL_103_29 = 103,                   /* $@29  */
  YYSYMBOL_104_30 = 104,                   /* $@30  */
  YYSYMBOL_105_31 = 105,                   /* $@31  */
  YYSYMBOL_ruleWinningNum = 106,           /* ruleWinningNum  */
  YYSYMBOL_107_32 = 107,                   /* $@32  */
  YYSYMBOL_ruleList = 108,                 /* ruleList  */
  YYSYMBOL_109_33 = 109,                   /* $@33  */
  YYSYMBOL_110_34 = 110,                   /* $@34  */
  YYSYMBOL_111_35 = 111,                   /* $@35  */
  YYSYMBOL_ruleArray = 112,                /* ruleArray  */
  YYSYMBOL_113_36 = 113,                   /* $@36  */
  YYSYMBOL_ruleBonus = 114,                /* ruleBonus  */
  YYSYMBOL_115_37 = 115,                   /* $@37  */
  YYSYMBOL_116_38 = 116,                   /* $@38  */
  YYSYMBOL_117_39 = 117,                   /* $@39  */
  YYSYMBOL_rulePrizeCategories = 118,      /* rulePrizeCategories  */
  YYSYMBOL_119_40 = 119,                   /* $@40  */
  YYSYMBOL_120_41 = 120,                   /* $@41  */
  YYSYMBOL_121_42 = 121,                   /* $@42  */
  YYSYMBOL_rulePrizeCtgrs = 122,           /* rulePrizeCtgrs  */
  YYSYMBOL_123_43 = 123,                   /* $@43  */
  YYSYMBOL_124_44 = 124,                   /* $@44  */
  YYSYMBOL_rule = 125,                     /* rule  */
  YYSYMBOL_rule1 = 126,                    /* rule1  */
  YYSYMBOL_127_45 = 127,                   /* $@45  */
  YYSYMBOL_128_46 = 128,                   /* $@46  */
  YYSYMBOL_129_47 = 129,                   /* $@47  */
  YYSYMBOL_130_48 = 130,                   /* $@48  */
  YYSYMBOL_131_49 = 131,                   /* $@49  */
  YYSYMBOL_132_50 = 132,                   /* $@50  */
  YYSYMBOL_133_51 = 133,                   /* $@51  */
  YYSYMBOL_134_52 = 134,                   /* $@52  */
  YYSYMBOL_135_53 = 135,                   /* $@53  */
  YYSYMBOL_136_54 = 136,                   /* $@54  */
  YYSYMBOL_137_55 = 137,                   /* $@55  */
  YYSYMBOL_138_56 = 138,                   /* $@56  */
  YYSYMBOL_139_57 = 139,                   /* $@57  */
  YYSYMBOL_140_58 = 140,                   /* $@58  */
  YYSYMBOL_141_59 = 141,                   /* $@59  */
  YYSYMBOL_142_60 = 142,                   /* $@60  */
  YYSYMBOL_143_61 = 143,                   /* $@61  */
  YYSYMBOL_144_62 = 144,                   /* $@62  */
  YYSYMBOL_145_63 = 145,                   /* $@63  */
  YYSYMBOL_146_64 = 146,                   /* $@64  */
  YYSYMBOL_147_65 = 147,                   /* $@65  */
  YYSYMBOL_148_66 = 148,                   /* $@66  */
  YYSYMBOL_149_67 = 149,                   /* $@67  */
  YYSYMBOL_150_68 = 150,                   /* $@68  */
  YYSYMBOL_151_69 = 151,                   /* $@69  */
  YYSYMBOL_152_70 = 152,                   /* $@70  */
  YYSYMBOL_153_71 = 153,                   /* $@71  */
  YYSYMBOL_154_72 = 154,                   /* $@72  */
  YYSYMBOL_155_73 = 155,                   /* $@73  */
  YYSYMBOL_156_74 = 156,                   /* $@74  */
  YYSYMBOL_157_75 = 157,                   /* $@75  */
  YYSYMBOL_rule2 = 158,                    /* rule2  */
  YYSYMBOL_159_76 = 159,                   /* $@76  */
  YYSYMBOL_160_77 = 160,                   /* $@77  */
  YYSYMBOL_161_78 = 161,                   /* $@78  */
  YYSYMBOL_ruleWagerStatistics = 162,      /* ruleWagerStatistics  */
  YYSYMBOL_163_79 = 163,                   /* $@79  */
  YYSYMBOL_164_80 = 164,                   /* $@80  */
  YYSYMBOL_165_81 = 165,                   /* $@81  */
  YYSYMBOL_166_82 = 166,                   /* $@82  */
  YYSYMBOL_167_83 = 167,                   /* $@83  */
  YYSYMBOL_168_84 = 168,                   /* $@84  */
  YYSYMBOL_169_85 = 169,                   /* $@85  */
  YYSYMBOL_170_86 = 170,                   /* $@86  */
  YYSYMBOL_171_87 = 171,                   /* $@87  */
  YYSYMBOL_ruleWagerStatisticss = 172,     /* ruleWagerStatisticss  */
  YYSYMBOL_173_88 = 173,                   /* $@88  */
  YYSYMBOL_174_89 = 174,                   /* $@89  */
  YYSYMBOL_175_90 = 175,                   /* $@90  */
  YYSYMBOL_ruleWagerst = 176,              /* ruleWagerst  */
  YYSYMBOL_177_91 = 177,                   /* $@91  */
  YYSYMBOL_ruleColumns = 178,              /* ruleColumns  */
  YYSYMBOL_179_92 = 179,                   /* $@92  */
  YYSYMBOL_180_93 = 180,                   /* $@93  */
  YYSYMBOL_ruleWagers = 181,               /* ruleWagers  */
  YYSYMBOL_182_94 = 182,                   /* $@94  */
  YYSYMBOL_183_95 = 183,                   /* $@95  */
  YYSYMBOL_ruleAddOn = 184,                /* ruleAddOn  */
  YYSYMBOL_185_96 = 185,                   /* $@96  */
  YYSYMBOL_186_97 = 186,                   /* $@97  */
  YYSYMBOL_187_98 = 187,                   /* $@98  */
  YYSYMBOL_ruleActive = 188,               /* ruleActive  */
  YYSYMBOL_189_99 = 189,                   /* $@99  */
  YYSYMBOL_ruleAcStatus = 190,             /* ruleAcStatus  */
  YYSYMBOL_191_100 = 191,                  /* $@100  */
  YYSYMBOL_192_101 = 192,                  /* $@101  */
  YYSYMBOL_ruleContent = 193,              /* ruleContent  */
  YYSYMBOL_194_102 = 194,                  /* $@102  */
  YYSYMBOL_195_103 = 195,                  /* $@103  */
  YYSYMBOL_196_104 = 196,                  /* $@104  */
  YYSYMBOL_ruleContent1 = 197,             /* ruleContent1  */
  YYSYMBOL_198_105 = 198,                  /* $@105  */
  YYSYMBOL_ruleLastContent = 199,          /* ruleLastContent  */
  YYSYMBOL_200_106 = 200,                  /* $@106  */
  YYSYMBOL_ruleWagerStatisticsContent = 201, /* ruleWagerStatisticsContent  */
  YYSYMBOL_202_107 = 202,                  /* $@107  */
  YYSYMBOL_203_108 = 203,                  /* $@108  */
  YYSYMBOL_204_109 = 204,                  /* $@109  */
  YYSYMBOL_ruleTotal = 205,                /* ruleTotal  */
  YYSYMBOL_206_110 = 206,                  /* $@110  */
  YYSYMBOL_ruleTotalPages = 207,           /* ruleTotalPages  */
  YYSYMBOL_208_111 = 208,                  /* $@111  */
  YYSYMBOL_209_112 = 209,                  /* $@112  */
  YYSYMBOL_ruleTotalElements = 210,        /* ruleTotalElements  */
  YYSYMBOL_211_113 = 211,                  /* $@113  */
  YYSYMBOL_212_114 = 212,                  /* $@114  */
  YYSYMBOL_ruleLaast = 213,                /* ruleLaast  */
  YYSYMBOL_214_115 = 214,                  /* $@115  */
  YYSYMBOL_215_116 = 215,                  /* $@116  */
  YYSYMBOL_ruleNumberOfElements = 216,     /* ruleNumberOfElements  */
  YYSYMBOL_217_117 = 217,                  /* $@117  */
  YYSYMBOL_218_118 = 218,                  /* $@118  */
  YYSYMBOL_ruleSort = 219,                 /* ruleSort  */
  YYSYMBOL_220_119 = 220,                  /* $@119  */
  YYSYMBOL_221_120 = 221,                  /* $@120  */
  YYSYMBOL_222_121 = 222,                  /* $@121  */
  YYSYMBOL_223_122 = 223,                  /* $@122  */
  YYSYMBOL_224_123 = 224,                  /* $@123  */
  YYSYMBOL_ruleSort1 = 225,                /* ruleSort1  */
  YYSYMBOL_226_124 = 226,                  /* $@124  */
  YYSYMBOL_ruleDirection = 227,            /* ruleDirection  */
  YYSYMBOL_228_125 = 228,                  /* $@125  */
  YYSYMBOL_229_126 = 229,                  /* $@126  */
  YYSYMBOL_ruleProperty = 230,             /* ruleProperty  */
  YYSYMBOL_231_127 = 231,                  /* $@127  */
  YYSYMBOL_232_128 = 232,                  /* $@128  */
  YYSYMBOL_ruleIgnoreCase = 233,           /* ruleIgnoreCase  */
  YYSYMBOL_234_129 = 234,                  /* $@129  */
  YYSYMBOL_235_130 = 235,                  /* $@130  */
  YYSYMBOL_ruleNullHandling = 236,         /* ruleNullHandling  */
  YYSYMBOL_237_131 = 237,                  /* $@131  */
  YYSYMBOL_238_132 = 238,                  /* $@132  */
  YYSYMBOL_ruleDescending = 239,           /* ruleDescending  */
  YYSYMBOL_240_133 = 240,                  /* $@133  */
  YYSYMBOL_241_134 = 241,                  /* $@134  */
  YYSYMBOL_ruleAscending = 242,            /* ruleAscending  */
  YYSYMBOL_243_135 = 243,                  /* $@135  */
  YYSYMBOL_244_136 = 244,                  /* $@136  */
  YYSYMBOL_ruleFirst = 245,                /* ruleFirst  */
  YYSYMBOL_246_137 = 246,                  /* $@137  */
  YYSYMBOL_247_138 = 247,                  /* $@138  */
  YYSYMBOL_ruleSize = 248,                 /* ruleSize  */
  YYSYMBOL_249_139 = 249,                  /* $@139  */
  YYSYMBOL_250_140 = 250,                  /* $@140  */
  YYSYMBOL_ruleNumber = 251,               /* ruleNumber  */
  YYSYMBOL_252_141 = 252,                  /* $@141  */
  YYSYMBOL_253_142 = 253                   /* $@142  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   337

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  247
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  407

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    92,    93,    97,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   111,   111,
     111,   114,   114,   114,   117,   117,   117,   120,   120,   120,
     123,   123,   123,   126,   126,   126,   129,   129,   129,   129,
     132,   132,   132,   135,   135,   135,   135,   138,   138,   139,
     140,   144,   144,   144,   144,   146,   146,   147,   153,   153,
     153,   153,   156,   156,   156,   156,   159,   159,   160,   160,
     163,   163,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   166,   166,   166,   166,   167,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   175,
     175,   175,   175,   177,   177,   178,   179,   180,   184,   184,
     184,   187,   187,   187,   190,   190,   190,   190,   193,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     206,   206,   206,   208,   208,   208,   208,   211,   211,   213,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   228,   228,   228,   228,   230,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   241,   241,   241,   243,   243,
     243,   245,   245,   245,   247,   247,   247,   249,   249,   249,
     249,   249,   249,   251,   251,   252,   253,   254,   255,   256,
     257,   260,   260,   260,   262,   262,   262,   264,   264,   264,
     266,   266,   266,   268,   268,   268,   270,   270,   270,   272,
     272,   272,   274,   274,   274,   276,   276,   276
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "COLON", "COMMA",
  "OBRACKETS", "CBRACKETS", "OBRACES", "CBRACES", "LAST", "GAMEID",
  "DRAWID", "DRAWTIME", "STATUS", "STATUS_STRING", "DRAWBREAK",
  "VISUALDRAW", "PRICEPOINTS", "AMOUNT", "WINNINGNUMBERS", "LIST", "BONUS",
  "PRIZECATEGORIES", "ID", "DIVIDENT", "WINNERS", "DISTRIBUTED", "JACKPOT",
  "FIXED", "CATEGORYTYPE", "GAMETYPE", "MINIMUMDISTRIBUTED",
  "WAGERSTATISTICS", "COLUMNS", "WAGERS", "ADDON", "ACTIVE", "STRING",
  "SIGN", "EARL", "true", "false", "UNSIGN", "null", "FLOAT", "INT",
  "DOUBLE", "CONTENT", "TOTALPAGES", "TOTALELEMENTS", "NUMBEROFELEMENTS",
  "DIRECTION", "PROPERTY", "IGNORECASE", "NULLHANDLING", "DESCENDING",
  "ASCENDING", "SORT", "FIRST", "SIZE", "NUMBER", "BOOLEAN", "$accept",
  "jsonfile", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "$@9", "$@10", "ruleSTART", "ruleLast", "$@11", "ruleGameId", "$@12",
  "$@13", "ruleDrawId", "$@14", "$@15", "ruleDrawTime", "$@16", "$@17",
  "ruleStatus", "$@18", "$@19", "ruleDrawBreak", "$@20", "$@21",
  "ruleVisualDraw", "$@22", "$@23", "rulePricePoints", "$@24", "$@25",
  "$@26", "ruleAmount", "$@27", "$@28", "ruleWinningNumbers", "$@29",
  "$@30", "$@31", "ruleWinningNum", "$@32", "ruleList", "$@33", "$@34",
  "$@35", "ruleArray", "$@36", "ruleBonus", "$@37", "$@38", "$@39",
  "rulePrizeCategories", "$@40", "$@41", "$@42", "rulePrizeCtgrs", "$@43",
  "$@44", "rule", "rule1", "$@45", "$@46", "$@47", "$@48", "$@49", "$@50",
  "$@51", "$@52", "$@53", "$@54", "$@55", "$@56", "$@57", "$@58", "$@59",
  "$@60", "$@61", "$@62", "$@63", "$@64", "$@65", "$@66", "$@67", "$@68",
  "$@69", "$@70", "$@71", "$@72", "$@73", "$@74", "$@75", "rule2", "$@76",
  "$@77", "$@78", "ruleWagerStatistics", "$@79", "$@80", "$@81", "$@82",
  "$@83", "$@84", "$@85", "$@86", "$@87", "ruleWagerStatisticss", "$@88",
  "$@89", "$@90", "ruleWagerst", "$@91", "ruleColumns", "$@92", "$@93",
  "ruleWagers", "$@94", "$@95", "ruleAddOn", "$@96", "$@97", "$@98",
  "ruleActive", "$@99", "ruleAcStatus", "$@100", "$@101", "ruleContent",
  "$@102", "$@103", "$@104", "ruleContent1", "$@105", "ruleLastContent",
  "$@106", "ruleWagerStatisticsContent", "$@107", "$@108", "$@109",
  "ruleTotal", "$@110", "ruleTotalPages", "$@111", "$@112",
  "ruleTotalElements", "$@113", "$@114", "ruleLaast", "$@115", "$@116",
  "ruleNumberOfElements", "$@117", "$@118", "ruleSort", "$@119", "$@120",
  "$@121", "$@122", "$@123", "ruleSort1", "$@124", "ruleDirection",
  "$@125", "$@126", "ruleProperty", "$@127", "$@128", "ruleIgnoreCase",
  "$@129", "$@130", "ruleNullHandling", "$@131", "$@132", "ruleDescending",
  "$@133", "$@134", "ruleAscending", "$@135", "$@136", "ruleFirst",
  "$@137", "$@138", "ruleSize", "$@139", "$@140", "ruleNumber", "$@141",
  "$@142", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-241)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,   -17,    55,    75,    18,  -241,  -241,  -241,    85,    95,
    -241,  -241,    99,    83,  -241,  -241,     7,     7,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,   108,
     101,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,   114,   112,    21,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,    45,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,    70,   128,   130,   129,  -241,  -241,    86,    91,    92,
     102,    93,    96,   135,   137,   136,   139,   101,   141,  -241,
    -241,    21,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,    19,   142,   144,   131,    54,   145,   -20,
     128,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,    46,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
     140,  -241,  -241,    50,  -241,  -241,  -241,    17,  -241,  -241,
    -241,    66,  -241,  -241,  -241,   147,   149,   150,   151,   152,
     153,   154,   155,   156,  -241,  -241,   -20,   157,  -241,   158,
     159,  -241,  -241,    12,  -241,  -241,   160,   161,   162,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
      19,    67,  -241,  -241,  -241,    54,  -241,  -241,   163,  -241,
    -241,   145,  -241,  -241,  -241,   -20,   164,   128,   105,   132,
     133,   134,   165,   106,   138,   143,   167,  -241,   146,   166,
     168,   170,   171,   173,  -241,   176,   148,   169,   174,   178,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,   180,   181,
     172,   172,   182,   175,   179,  -241,  -241,  -241,    37,    38,
    -241,  -241,  -241,   177,    56,  -241,  -241,  -241,   183,   185,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,    87,  -241,  -241,
    -241,  -241,  -241,  -241,   172,  -241,  -241,   188,   189,   191,
     192,   193,   194,   195,  -241,  -241,   197,   184,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,    56,   196,  -241,   198,   186,
     187,   107,   199,   190,   200,   201,  -241,   203,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,    84,   202,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,   109,
    -241,  -241,   204,   206,  -241,  -241,   207,  -241,  -241,    84,
    -241,   205,   210,   208,   209,  -241,  -241,  -241,   -20,   213,
     113,  -241,  -241,   211,  -241,   214,  -241,   212,  -241,   216,
    -241,   215,  -241,   217,  -241,   218,  -241,   219,  -241,   220,
    -241,   221,  -241,   222,  -241,   223,  -241,   224,  -241,   225,
    -241,   226,  -241,   227,  -241,   228,  -241,   229,  -241,   230,
    -241,   232,  -241,   233,  -241,   235,  -241
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     0,     1,     3,     8,     0,     0,
       4,     9,     0,     0,     5,    10,     0,     0,   167,    28,
      31,    34,    37,    40,    43,    46,    53,    72,   119,     0,
      14,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    16,   163,    11,   181,
     171,   172,   173,   174,   175,   176,   177,   178,   179,     0,
     180,    29,    32,    35,    38,    41,    44,    47,    54,    73,
     120,     0,     0,     0,     0,   169,   168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,    12,
     182,     0,    30,    33,    36,    39,    42,    45,    48,    55,
      74,   121,   164,     0,     0,   170,     0,     0,     0,     0,
       0,   201,   195,   198,   204,   207,   239,   242,   245,     0,
     187,   188,   189,   190,   191,   192,   193,   194,   183,    50,
       0,    61,    68,     0,    59,    60,    78,     0,   138,   141,
     144,     0,   135,   136,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   185,    13,     0,     0,    49,     0,
       0,    57,    56,   118,    76,    75,     0,     0,     0,   133,
     122,   165,   202,   196,   199,   205,   208,   240,   243,   246,
       0,     0,    51,    62,    69,     0,   114,    82,     0,    80,
      81,     0,   139,   142,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,   184,     0,     0,
       0,    58,     0,     0,    79,    77,     0,     0,     0,   134,
     123,   166,   203,   197,   200,   206,   209,   241,   244,   247,
      52,    63,    70,   115,    83,   140,   143,   146,     0,     0,
       0,     0,     0,     0,     0,   124,   210,    67,     0,     0,
     116,    84,   147,     0,     0,    65,    64,    71,     0,     0,
     125,   221,   224,   227,   230,   233,   236,     0,   215,   216,
     217,   218,   219,   220,     0,   117,    85,     0,     0,     0,
       0,     0,     0,     0,   213,   211,    66,     0,   126,   222,
     225,   228,   231,   234,   237,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,   214,   212,     0,   127,   223,
     226,   229,   232,   235,   238,    87,     0,     0,   160,   129,
     150,   151,   152,   154,   155,   156,   157,   158,   159,     0,
     153,    88,     0,     0,   148,   128,     0,   161,   130,     0,
      89,     0,     0,   149,     0,   162,   131,    90,     0,     0,
       0,    91,   132,     0,    92,     0,    93,     0,    94,     0,
      95,     0,    96,     0,    97,     0,    98,     0,    99,     0,
     100,     0,   101,     0,   102,     0,   103,     0,   104,     0,
     105,     0,   106,     0,   107,     0,   108,     0,   109,     0,
     110,     0,   111,     0,   112,   118,   113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,   231,   234,  -241,   -44,  -241,  -241,   -43,  -241,
    -241,   -42,  -241,  -241,   -35,  -241,  -241,   -41,  -241,  -241,
     -40,  -241,  -241,   -39,  -241,  -241,  -241,  -241,  -241,  -241,
     -38,  -241,  -241,  -241,     4,  -241,  -241,  -241,  -241,  -241,
    -240,  -241,  -241,  -241,  -241,  -241,   -37,  -241,  -241,  -241,
       9,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -177,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -158,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -118,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,   -72,  -241,   236,  -241,  -241,
    -241,  -241,  -241,    42,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,   -68,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     8,    12,    16,     4,     9,    13,    17,
      83,   113,    29,    30,    81,    31,    45,    87,    32,    46,
      88,    33,    47,    89,    34,    48,    90,    35,    49,    91,
      36,    50,    92,    37,    51,    93,   116,   140,   167,   218,
      38,    52,    94,   117,   143,   195,   144,   169,   219,   250,
     258,   284,   145,   170,   220,   251,    39,    53,    95,   118,
     147,   201,   173,   198,   199,   223,   253,   269,   297,   317,
     327,   346,   354,   359,   363,   365,   367,   369,   371,   373,
     375,   377,   379,   381,   383,   385,   387,   389,   391,   393,
     395,   397,   399,   401,   403,   405,   200,   222,   252,   268,
      40,    54,    96,   119,   206,   248,   263,   287,   308,   326,
     338,   343,   352,   358,   151,   205,   152,   176,   226,   153,
     177,   227,   154,   178,   228,   254,   339,   349,   340,   342,
     351,    41,    82,   120,   207,    42,    44,    69,   101,    70,
      84,   114,   166,   129,   190,   130,   157,   209,   131,   158,
     210,   132,   156,   208,   133,   159,   211,   134,   160,   212,
     249,   264,   306,   277,   305,   278,   288,   309,   279,   289,
     310,   280,   290,   311,   281,   291,   312,   282,   292,   313,
     283,   293,   314,   135,   161,   213,   136,   162,   214,   137,
     163,   215
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    61,    62,    64,    65,    66,    67,    68,   191,    63,
      98,   259,    18,   148,   149,   150,   196,    19,    20,    21,
      22,   174,    23,    24,    25,   175,    26,     1,   121,    27,
      -7,    19,    20,    21,    22,   197,    23,    24,    25,    28,
      26,   265,   265,    27,   296,   266,   267,   229,   155,    85,
     164,    86,   165,    59,   171,     5,   172,    60,    61,    62,
      64,    65,    66,    67,    68,     7,    63,   122,   123,   124,
     179,   179,   180,   217,   141,   142,   125,   126,   127,   128,
      19,    20,    21,    22,     6,    23,    24,    25,    10,    26,
      15,   294,    27,   295,    19,    20,    21,   328,    11,    23,
      24,    25,    28,    26,    14,    56,    27,   271,   272,   273,
     274,   275,   276,   344,    55,   345,   329,   179,    57,   362,
      58,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   102,   100,    18,    99,   231,   103,   104,   106,   105,
     108,   107,   109,   110,   111,   112,   168,   138,    85,   139,
     146,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     192,   193,   194,   202,   203,   204,   232,   237,   321,   224,
     230,   164,   236,   241,   171,   242,   244,   233,   234,   235,
     174,   247,   179,   238,   255,   260,   256,   262,   239,   286,
     240,   298,   299,   245,   300,   301,   302,   303,   304,   221,
     360,   265,   243,   318,   316,   294,   325,   347,   307,   348,
     225,   350,   344,   270,   246,   356,   361,   257,   366,   370,
     261,   374,   378,   319,   320,   382,   386,   285,   406,   390,
     394,   353,   216,   398,   357,   402,   322,   315,   368,   196,
       0,   355,     0,     0,     0,   376,   341,     0,    43,     0,
     384,   323,     0,     0,     0,   392,   364,     0,     0,   372,
     400,   324,     0,     0,   380,     0,     0,     0,   388,     0,
     404,     0,     0,   396,     0,     0,     0,     0,     0,     0,
       0,     0,   330,   331,   332,   333,   334,   335,   336,   337,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   330,   331,   332,   333,   334,
     335,   336,   337,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115
};

static const yytype_int16 yycheck[] =
{
      44,    44,    44,    44,    44,    44,    44,    44,   166,    44,
      82,   251,     5,    33,    34,    35,     4,    10,    11,    12,
      13,     4,    15,    16,    17,     8,    19,     5,     9,    22,
      47,    10,    11,    12,    13,    23,    15,    16,    17,    32,
      19,     4,     4,    22,   284,     8,     8,   205,   120,     4,
       4,     6,     6,    32,     4,     0,     6,   101,   101,   101,
     101,   101,   101,   101,   101,    47,   101,    48,    49,    50,
       4,     4,     6,     6,    20,    21,    57,    58,    59,    60,
      10,    11,    12,    13,     9,    15,    16,    17,     3,    19,
       7,     4,    22,     6,    10,    11,    12,    13,     3,    15,
      16,    17,    32,    19,     5,     4,    22,    51,    52,    53,
      54,    55,    56,     4,     6,     6,    32,     4,     4,     6,
       8,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,    45,     3,     5,     4,   207,    45,    45,    45,    37,
       5,    45,     5,     7,     5,     4,     6,     5,     4,    18,
       5,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,    61,    61,    61,     6,
       6,     4,     7,     7,     4,     7,     3,    45,    45,    45,
       4,     7,     4,    45,     4,     3,     5,     8,    45,     4,
      44,     3,     3,    45,     3,     3,     3,     3,     3,   195,
     358,     4,    31,     5,     8,     4,     3,     3,    24,     3,
     201,     4,     4,    36,    45,     5,     3,    45,     4,     3,
      45,     4,     3,    37,    37,     4,     3,    44,   405,     4,
       3,   349,   190,     4,    25,     3,    37,   305,    26,     4,
      -1,    36,    -1,    -1,    -1,    27,    44,    -1,    17,    -1,
      28,    61,    -1,    -1,    -1,    29,    45,    -1,    -1,    44,
      30,    61,    -1,    -1,    44,    -1,    -1,    -1,    44,    -1,
      37,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   326,   326,   326,   326,   326,   326,   326,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   349,   349,   349,   349,   349,
     349,   349,   349,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    63,    64,    68,     0,     9,    47,    65,    69,
       3,     3,    66,    70,     5,     7,    67,    71,     5,    10,
      11,    12,    13,    15,    16,    17,    19,    22,    32,    74,
      75,    77,    80,    83,    86,    89,    92,    95,   102,   118,
     162,   193,   197,    74,   198,    78,    81,    84,    87,    90,
      93,    96,   103,   119,   163,     6,     4,     4,     8,    32,
      77,    80,    83,    86,    89,    92,    95,   102,   118,   199,
     201,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,    76,   194,    72,   202,     4,     6,    79,    82,    85,
      88,    91,    94,    97,   104,   120,   164,    75,   197,     4,
       3,   200,    45,    45,    45,    37,    45,    45,     5,     5,
       7,     5,     4,    73,   203,   199,    98,   105,   121,   165,
     195,     9,    48,    49,    50,    57,    58,    59,    60,   205,
     207,   210,   213,   216,   219,   245,   248,   251,     5,    18,
      99,    20,    21,   106,   108,   114,     5,   122,    33,    34,
      35,   176,   178,   181,   184,   197,   214,   208,   211,   217,
     220,   246,   249,   252,     4,     6,   204,   100,     6,   109,
     115,     4,     6,   124,     4,     8,   179,   182,   185,     4,
       6,     4,     3,     3,     3,     3,     3,     3,     3,     3,
     206,   176,     3,     3,     3,   107,     4,    23,   125,   126,
     158,   123,     3,     3,     3,   177,   166,   196,   215,   209,
     212,   218,   221,   247,   250,   253,   205,     6,   101,   110,
     116,   106,   159,   127,     6,   122,   180,   183,   186,   176,
       6,   197,    61,    45,    45,    45,     7,    61,    45,    45,
      44,     7,     7,    31,     3,    45,    45,     7,   167,   222,
     111,   117,   160,   128,   187,     4,     5,    45,   112,   112,
       3,    45,     8,   168,   223,     4,     8,     8,   161,   129,
      36,    51,    52,    53,    54,    55,    56,   225,   227,   230,
     233,   236,   239,   242,   113,    44,     4,   169,   228,   231,
     234,   237,   240,   243,     4,     6,   112,   130,     3,     3,
       3,     3,     3,     3,     3,   226,   224,    24,   170,   229,
     232,   235,   238,   241,   244,   225,     8,   131,     5,    37,
      37,    61,    37,    61,    61,     3,   171,   132,    13,    32,
      77,    80,    83,    89,    92,    95,   102,   118,   172,   188,
     190,    44,   191,   173,     4,     6,   133,     3,     3,   189,
       4,   192,   174,   188,   134,    36,     5,    25,   175,   135,
     176,     3,     6,   136,    45,   137,     4,   138,    26,   139,
       3,   140,    44,   141,     4,   142,    27,   143,     3,   144,
      44,   145,     4,   146,    28,   147,     3,   148,    44,   149,
       4,   150,    29,   151,     3,   152,    45,   153,     4,   154,
      30,   155,     3,   156,    37,   157,   158
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    64,    65,    66,    67,    63,    68,    69,    70,
      71,    72,    73,    63,    74,    74,    76,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    78,    79,
      77,    81,    82,    80,    84,    85,    83,    87,    88,    86,
      90,    91,    89,    93,    94,    92,    96,    97,    98,    95,
     100,   101,    99,   103,   104,   105,   102,   107,   106,   106,
     106,   109,   110,   111,   108,   113,   112,   112,   115,   116,
     117,   114,   119,   120,   121,   118,   123,   122,   124,   122,
     125,   125,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   126,   159,   160,   161,   158,   158,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   162,   173,
     174,   175,   172,   177,   176,   176,   176,   176,   179,   180,
     178,   182,   183,   181,   185,   186,   187,   184,   189,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     191,   192,   190,   194,   195,   196,   193,   198,   197,   200,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   202,   203,   204,   201,   206,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   208,   209,   207,   211,   212,
     210,   214,   215,   213,   217,   218,   216,   220,   221,   222,
     223,   224,   219,   226,   225,   225,   225,   225,   225,   225,
     225,   228,   229,   227,   231,   232,   230,   234,   235,   233,
     237,   238,   236,   240,   241,   239,   243,   244,   242,   246,
     247,   245,   249,   250,   248,   252,   253,   251
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,    15,     1,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     0,     0,     8,
       0,     0,     5,     0,     0,     0,     8,     0,     4,     1,
       1,     0,     0,     0,     8,     0,     4,     1,     0,     0,
       0,     8,     0,     0,     0,     8,     0,     4,     0,     4,
       1,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     8,     0,     4,     1,     1,     1,     0,     0,
       5,     0,     0,     5,     0,     0,     0,     7,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     5,     0,     0,     0,    10,     0,     4,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     0,     8,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     0,     0,     0,
       0,     0,    12,     0,     4,     1,     1,     1,     1,     1,
       1,     0,     0,     5,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     0,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 88 "bison.y"
                                  {printf("{\n");}
#line 1924 "bison.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 88 "bison.y"
                                                        {printf("\t\"last\"");}
#line 1930 "bison.tab.c"
    break;

  case 4: /* $@3: %empty  */
#line 88 "bison.y"
                                                                                      {printf(":");}
#line 1936 "bison.tab.c"
    break;

  case 5: /* $@4: %empty  */
#line 88 "bison.y"
                                                                                                              {printf("{\n");}
#line 1942 "bison.tab.c"
    break;

  case 6: /* jsonfile: OBRACKETS $@1 LAST $@2 COLON $@3 OBRACKETS $@4 ruleSTART CBRACKETS  */
#line 88 "bison.y"
                                                                                                                                                   {printf("}\n");}
#line 1948 "bison.tab.c"
    break;

  case 7: /* $@5: %empty  */
#line 89 "bison.y"
                                           {printf("{\n");}
#line 1954 "bison.tab.c"
    break;

  case 8: /* $@6: %empty  */
#line 89 "bison.y"
                                                                    {printf("\t\"content\"");}
#line 1960 "bison.tab.c"
    break;

  case 9: /* $@7: %empty  */
#line 89 "bison.y"
                                                                                                     {printf(":");}
#line 1966 "bison.tab.c"
    break;

  case 10: /* $@8: %empty  */
#line 89 "bison.y"
                                                                                                                           {printf("[\n");}
#line 1972 "bison.tab.c"
    break;

  case 11: /* $@9: %empty  */
#line 89 "bison.y"
                                                                                                                                                              {printf("]\n");}
#line 1978 "bison.tab.c"
    break;

  case 12: /* $@10: %empty  */
#line 89 "bison.y"
                                                                                                                                                                                    {printf(",\n");}
#line 1984 "bison.tab.c"
    break;

  case 13: /* jsonfile: OBRACKETS $@5 CONTENT $@6 COLON $@7 OBRACES $@8 ruleSTART CBRACES $@9 COMMA $@10 ruleTotal CBRACKETS  */
#line 89 "bison.y"
                                                                                                                                                                                                                        {printf("}\n");}
#line 1990 "bison.tab.c"
    break;

  case 16: /* $@11: %empty  */
#line 97 "bison.y"
                                      {printf(",\n");}
#line 1996 "bison.tab.c"
    break;

  case 28: /* $@12: %empty  */
#line 111 "bison.y"
                              {printf("\t\"gameId\"");}
#line 2002 "bison.tab.c"
    break;

  case 29: /* $@13: %empty  */
#line 111 "bison.y"
                                                             {printf(":");}
#line 2008 "bison.tab.c"
    break;

  case 30: /* ruleGameId: GAMEID $@12 COLON $@13 INT  */
#line 111 "bison.y"
                                                                               {printf("\%s",yytext);}
#line 2014 "bison.tab.c"
    break;

  case 31: /* $@14: %empty  */
#line 114 "bison.y"
                              {printf("\t\"drawId\"");}
#line 2020 "bison.tab.c"
    break;

  case 32: /* $@15: %empty  */
#line 114 "bison.y"
                                                             {printf(":");}
#line 2026 "bison.tab.c"
    break;

  case 33: /* ruleDrawId: DRAWID $@14 COLON $@15 INT  */
#line 114 "bison.y"
                                                                               {printf("\%s",yytext);}
#line 2032 "bison.tab.c"
    break;

  case 34: /* $@16: %empty  */
#line 117 "bison.y"
                                {printf("\t\"drawtime\"");}
#line 2038 "bison.tab.c"
    break;

  case 35: /* $@17: %empty  */
#line 117 "bison.y"
                                                                 {printf(":");}
#line 2044 "bison.tab.c"
    break;

  case 36: /* ruleDrawTime: DRAWTIME $@16 COLON $@17 INT  */
#line 117 "bison.y"
                                                                                   {printf("\%s",yytext);}
#line 2050 "bison.tab.c"
    break;

  case 37: /* $@18: %empty  */
#line 120 "bison.y"
                              {printf("\t\"Status\"");}
#line 2056 "bison.tab.c"
    break;

  case 38: /* $@19: %empty  */
#line 120 "bison.y"
                                                             {printf(":");}
#line 2062 "bison.tab.c"
    break;

  case 39: /* ruleStatus: STATUS $@18 COLON $@19 STRING  */
#line 120 "bison.y"
                                                                                  {printf("\%s",yytext);}
#line 2068 "bison.tab.c"
    break;

  case 40: /* $@20: %empty  */
#line 123 "bison.y"
                                 {printf("\t\"Drawbreak\"");}
#line 2074 "bison.tab.c"
    break;

  case 41: /* $@21: %empty  */
#line 123 "bison.y"
                                                                   {printf(":");}
#line 2080 "bison.tab.c"
    break;

  case 42: /* ruleDrawBreak: DRAWBREAK $@20 COLON $@21 INT  */
#line 123 "bison.y"
                                                                                     {printf("\%s",yytext);}
#line 2086 "bison.tab.c"
    break;

  case 43: /* $@22: %empty  */
#line 126 "bison.y"
                                  {printf("\t\"visualdraw\"");}
#line 2092 "bison.tab.c"
    break;

  case 44: /* $@23: %empty  */
#line 126 "bison.y"
                                                                     {printf(":");}
#line 2098 "bison.tab.c"
    break;

  case 45: /* ruleVisualDraw: VISUALDRAW $@22 COLON $@23 INT  */
#line 126 "bison.y"
                                                                                       {printf("\%s",yytext);}
#line 2104 "bison.tab.c"
    break;

  case 46: /* $@24: %empty  */
#line 129 "bison.y"
                                           {printf("\t\"pricepoints\"");}
#line 2110 "bison.tab.c"
    break;

  case 47: /* $@25: %empty  */
#line 129 "bison.y"
                                                                               {printf(":");}
#line 2116 "bison.tab.c"
    break;

  case 48: /* $@26: %empty  */
#line 129 "bison.y"
                                                                                                       {printf("{");}
#line 2122 "bison.tab.c"
    break;

  case 49: /* rulePricePoints: PRICEPOINTS $@24 COLON $@25 OBRACKETS $@26 ruleAmount CBRACKETS  */
#line 129 "bison.y"
                                                                                                                                           {printf("}\n");}
#line 2128 "bison.tab.c"
    break;

  case 50: /* $@27: %empty  */
#line 132 "bison.y"
                              {printf("\t\"amount\"");}
#line 2134 "bison.tab.c"
    break;

  case 51: /* $@28: %empty  */
#line 132 "bison.y"
                                                             {printf(":");}
#line 2140 "bison.tab.c"
    break;

  case 52: /* ruleAmount: AMOUNT $@27 COLON $@28 FLOAT  */
#line 132 "bison.y"
                                                                                 {printf("\%s",yytext);}
#line 2146 "bison.tab.c"
    break;

  case 53: /* $@29: %empty  */
#line 135 "bison.y"
                                              {printf("\t\"winningnumbers\"");}
#line 2152 "bison.tab.c"
    break;

  case 54: /* $@30: %empty  */
#line 135 "bison.y"
                                                                                     {printf(":");}
#line 2158 "bison.tab.c"
    break;

  case 55: /* $@31: %empty  */
#line 135 "bison.y"
                                                                                                             {printf("{\n");}
#line 2164 "bison.tab.c"
    break;

  case 56: /* ruleWinningNumbers: WINNINGNUMBERS $@29 COLON $@30 OBRACKETS $@31 ruleWinningNum CBRACKETS  */
#line 135 "bison.y"
                                                                                                                                                       {printf("}\n");}
#line 2170 "bison.tab.c"
    break;

  case 57: /* $@32: %empty  */
#line 138 "bison.y"
                                            {printf(",\n");}
#line 2176 "bison.tab.c"
    break;

  case 61: /* $@33: %empty  */
#line 144 "bison.y"
                            {printf("\t\"list\"");}
#line 2182 "bison.tab.c"
    break;

  case 62: /* $@34: %empty  */
#line 144 "bison.y"
                                                         {printf(":");}
#line 2188 "bison.tab.c"
    break;

  case 63: /* $@35: %empty  */
#line 144 "bison.y"
                                                                               {printf("[");}
#line 2194 "bison.tab.c"
    break;

  case 64: /* ruleList: LIST $@33 COLON $@34 OBRACES $@35 ruleArray CBRACES  */
#line 144 "bison.y"
                                                                                                               {printf("]\n");}
#line 2200 "bison.tab.c"
    break;

  case 65: /* $@36: %empty  */
#line 146 "bison.y"
                                  {printf(",");}
#line 2206 "bison.tab.c"
    break;

  case 67: /* ruleArray: INT  */
#line 147 "bison.y"
                                    {printf("\%s",yytext);}
#line 2212 "bison.tab.c"
    break;

  case 68: /* $@37: %empty  */
#line 153 "bison.y"
                             {printf("\t\"bonus\"");}
#line 2218 "bison.tab.c"
    break;

  case 69: /* $@38: %empty  */
#line 153 "bison.y"
                                                           {printf(":");}
#line 2224 "bison.tab.c"
    break;

  case 70: /* $@39: %empty  */
#line 153 "bison.y"
                                                                                 {printf("[");}
#line 2230 "bison.tab.c"
    break;

  case 71: /* ruleBonus: BONUS $@37 COLON $@38 OBRACES $@39 ruleArray CBRACES  */
#line 153 "bison.y"
                                                                                                                 {printf("]\n");}
#line 2236 "bison.tab.c"
    break;

  case 72: /* $@40: %empty  */
#line 156 "bison.y"
                                       {printf("\t\"prizecategories\"");}
#line 2242 "bison.tab.c"
    break;

  case 73: /* $@41: %empty  */
#line 156 "bison.y"
                                                                                {printf(":");}
#line 2248 "bison.tab.c"
    break;

  case 74: /* $@42: %empty  */
#line 156 "bison.y"
                                                                                                      {printf("[\n");}
#line 2254 "bison.tab.c"
    break;

  case 75: /* rulePrizeCategories: PRIZECATEGORIES $@40 COLON $@41 OBRACES $@42 rulePrizeCtgrs CBRACES  */
#line 156 "bison.y"
                                                                                                                                             {printf("]\n");}
#line 2260 "bison.tab.c"
    break;

  case 76: /* $@43: %empty  */
#line 159 "bison.y"
                                    {printf(",\n");}
#line 2266 "bison.tab.c"
    break;

  case 78: /* $@44: %empty  */
#line 160 "bison.y"
                                           {printf("{\n");}
#line 2272 "bison.tab.c"
    break;

  case 79: /* rulePrizeCtgrs: OBRACKETS $@44 rule CBRACKETS  */
#line 160 "bison.y"
                                                                           {printf("}\n");}
#line 2278 "bison.tab.c"
    break;

  case 82: /* $@45: %empty  */
#line 164 "bison.y"
         {printf("\t\"id\"");}
#line 2284 "bison.tab.c"
    break;

  case 83: /* $@46: %empty  */
#line 164 "bison.y"
                                    {printf(":");}
#line 2290 "bison.tab.c"
    break;

  case 84: /* $@47: %empty  */
#line 164 "bison.y"
                                                      {printf("\%s",yytext);}
#line 2296 "bison.tab.c"
    break;

  case 85: /* $@48: %empty  */
#line 164 "bison.y"
                                                                                   {printf(",");}
#line 2302 "bison.tab.c"
    break;

  case 86: /* $@49: %empty  */
#line 164 "bison.y"
                                                                                                          {printf("\t\"divident\"");}
#line 2308 "bison.tab.c"
    break;

  case 87: /* $@50: %empty  */
#line 164 "bison.y"
                                                                                                                                           {printf(":");}
#line 2314 "bison.tab.c"
    break;

  case 88: /* $@51: %empty  */
#line 164 "bison.y"
                                                                                                                                                               {printf("\%s",yytext);}
#line 2320 "bison.tab.c"
    break;

  case 89: /* $@52: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                            {printf(",");}
#line 2326 "bison.tab.c"
    break;

  case 90: /* $@53: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                  {printf("\t\"winners\"");}
#line 2332 "bison.tab.c"
    break;

  case 91: /* $@54: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                  {printf(":");}
#line 2338 "bison.tab.c"
    break;

  case 92: /* $@55: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                    {printf("\%s",yytext);}
#line 2344 "bison.tab.c"
    break;

  case 93: /* $@56: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                 {printf(",");}
#line 2350 "bison.tab.c"
    break;

  case 94: /* $@57: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                           {printf("\t\"distributed\"");}
#line 2356 "bison.tab.c"
    break;

  case 95: /* $@58: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                               {printf(":");}
#line 2362 "bison.tab.c"
    break;

  case 96: /* $@59: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                   {printf("\%s",yytext);}
#line 2368 "bison.tab.c"
    break;

  case 97: /* $@60: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                {printf(",");}
#line 2374 "bison.tab.c"
    break;

  case 98: /* $@61: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                      {printf("\t\"jackpot\"");}
#line 2380 "bison.tab.c"
    break;

  case 99: /* $@62: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                      {printf(":");}
#line 2386 "bison.tab.c"
    break;

  case 100: /* $@63: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          {printf("\%s",yytext);}
#line 2392 "bison.tab.c"
    break;

  case 101: /* $@64: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       {printf(",");}
#line 2398 "bison.tab.c"
    break;

  case 102: /* $@65: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           {printf("\t\"fixed\"");}
#line 2404 "bison.tab.c"
    break;

  case 103: /* $@66: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         {printf(":");}
#line 2410 "bison.tab.c"
    break;

  case 104: /* $@67: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             {printf("\%s",yytext);}
#line 2416 "bison.tab.c"
    break;

  case 105: /* $@68: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          {printf(",");}
#line 2422 "bison.tab.c"
    break;

  case 106: /* $@69: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     {printf("\t\"categorytype\"");}
#line 2428 "bison.tab.c"
    break;

  case 107: /* $@70: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          {printf(":");}
#line 2434 "bison.tab.c"
    break;

  case 108: /* $@71: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            {printf("\%s",yytext);}
#line 2440 "bison.tab.c"
    break;

  case 109: /* $@72: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         {printf(",");}
#line 2446 "bison.tab.c"
    break;

  case 110: /* $@73: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                {printf("\t\"gametype\"");}
#line 2452 "bison.tab.c"
    break;

  case 111: /* $@74: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 {printf(":");}
#line 2458 "bison.tab.c"
    break;

  case 112: /* $@75: %empty  */
#line 164 "bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      {printf("\%s",yytext);}
#line 2464 "bison.tab.c"
    break;

  case 114: /* $@76: %empty  */
#line 166 "bison.y"
            {printf(",");}
#line 2470 "bison.tab.c"
    break;

  case 115: /* $@77: %empty  */
#line 166 "bison.y"
                                             {printf("\t\"minimundistributed\"");}
#line 2476 "bison.tab.c"
    break;

  case 116: /* $@78: %empty  */
#line 166 "bison.y"
                                                                                        {printf(":");}
#line 2482 "bison.tab.c"
    break;

  case 117: /* rule2: COMMA $@76 MINIMUMDISTRIBUTED $@77 COLON $@78 FLOAT  */
#line 166 "bison.y"
                                                                                                            {printf("\%s",yytext);}
#line 2488 "bison.tab.c"
    break;

  case 119: /* $@79: %empty  */
#line 172 "bison.y"
                                       {printf("\t\"wagerstatistics\"");}
#line 2494 "bison.tab.c"
    break;

  case 120: /* $@80: %empty  */
#line 172 "bison.y"
                                                                               {printf(":");}
#line 2500 "bison.tab.c"
    break;

  case 121: /* $@81: %empty  */
#line 172 "bison.y"
                                                                                                       {printf("{\n");}
#line 2506 "bison.tab.c"
    break;

  case 122: /* $@82: %empty  */
#line 172 "bison.y"
                                                                                                                                             {printf("}\n");}
#line 2512 "bison.tab.c"
    break;

  case 123: /* $@83: %empty  */
#line 172 "bison.y"
                                                                                                                                                                       {printf("}\n");}
#line 2518 "bison.tab.c"
    break;

  case 124: /* $@84: %empty  */
#line 172 "bison.y"
                                                                                                                                                                                             {printf(",");}
#line 2524 "bison.tab.c"
    break;

  case 125: /* $@85: %empty  */
#line 172 "bison.y"
                                                                                                                                                                                                                  {printf("\t\"active\"");}
#line 2530 "bison.tab.c"
    break;

  case 126: /* $@86: %empty  */
#line 172 "bison.y"
                                                                                                                                                                                                                                                 {printf(":");}
#line 2536 "bison.tab.c"
    break;

  case 127: /* $@87: %empty  */
#line 172 "bison.y"
                                                                                                                                                                                                                                                                         {printf("{\n");}
#line 2542 "bison.tab.c"
    break;

  case 128: /* ruleWagerStatistics: WAGERSTATISTICS $@79 COLON $@80 OBRACKETS $@81 ruleWagerst CBRACKETS $@82 CBRACKETS $@83 COMMA $@84 ACTIVE $@85 COLON $@86 OBRACKETS $@87 ruleActive CBRACKETS  */
#line 172 "bison.y"
                                                                                                                                                                                                                                                                                                              {printf("}\n");}
#line 2548 "bison.tab.c"
    break;

  case 129: /* $@88: %empty  */
#line 175 "bison.y"
                                    {printf("\t\"wagerstatistics\"");}
#line 2554 "bison.tab.c"
    break;

  case 130: /* $@89: %empty  */
#line 175 "bison.y"
                                                                            {printf(":");}
#line 2560 "bison.tab.c"
    break;

  case 131: /* $@90: %empty  */
#line 175 "bison.y"
                                                                                                    {printf("{\n");}
#line 2566 "bison.tab.c"
    break;

  case 132: /* ruleWagerStatisticss: WAGERSTATISTICS $@88 COLON $@89 OBRACKETS $@90 ruleWagerst CBRACKETS  */
#line 175 "bison.y"
                                                                                                                                          {printf("}\n");}
#line 2572 "bison.tab.c"
    break;

  case 133: /* $@91: %empty  */
#line 177 "bison.y"
                                 {printf(",");}
#line 2578 "bison.tab.c"
    break;

  case 138: /* $@92: %empty  */
#line 184 "bison.y"
                       {printf("\t\"columns\"");}
#line 2584 "bison.tab.c"
    break;

  case 139: /* $@93: %empty  */
#line 184 "bison.y"
                                                       {printf(":");}
#line 2590 "bison.tab.c"
    break;

  case 140: /* ruleColumns: COLUMNS $@92 COLON $@93 INT  */
#line 184 "bison.y"
                                                                         {printf("\%s",yytext);}
#line 2596 "bison.tab.c"
    break;

  case 141: /* $@94: %empty  */
#line 187 "bison.y"
                      {printf("\t\"wagers\"");}
#line 2602 "bison.tab.c"
    break;

  case 142: /* $@95: %empty  */
#line 187 "bison.y"
                                                     {printf(":");}
#line 2608 "bison.tab.c"
    break;

  case 143: /* ruleWagers: WAGERS $@94 COLON $@95 INT  */
#line 187 "bison.y"
                                                                       {printf("\%s",yytext);}
#line 2614 "bison.tab.c"
    break;

  case 144: /* $@96: %empty  */
#line 190 "bison.y"
                     {printf("\t\"addon\"");}
#line 2620 "bison.tab.c"
    break;

  case 145: /* $@97: %empty  */
#line 190 "bison.y"
                                                   {printf(":");}
#line 2626 "bison.tab.c"
    break;

  case 146: /* $@98: %empty  */
#line 190 "bison.y"
                                                                         {printf("[");}
#line 2632 "bison.tab.c"
    break;

  case 147: /* ruleAddOn: ADDON $@96 COLON $@97 OBRACES $@98 CBRACES  */
#line 190 "bison.y"
                                                                                               {printf("]\n");}
#line 2638 "bison.tab.c"
    break;

  case 148: /* $@99: %empty  */
#line 193 "bison.y"
                                 {printf(",");}
#line 2644 "bison.tab.c"
    break;

  case 160: /* $@100: %empty  */
#line 206 "bison.y"
                              {printf("\t\"Status\"");}
#line 2650 "bison.tab.c"
    break;

  case 161: /* $@101: %empty  */
#line 206 "bison.y"
                                                             {printf(":");}
#line 2656 "bison.tab.c"
    break;

  case 162: /* ruleAcStatus: STATUS $@100 COLON $@101 ACTIVE  */
#line 206 "bison.y"
                                                                                  {printf("\t\"active\"");}
#line 2662 "bison.tab.c"
    break;

  case 163: /* $@102: %empty  */
#line 208 "bison.y"
                               {printf(",\n");}
#line 2668 "bison.tab.c"
    break;

  case 164: /* $@103: %empty  */
#line 208 "bison.y"
                                                                  {printf(",\n");}
#line 2674 "bison.tab.c"
    break;

  case 165: /* $@104: %empty  */
#line 208 "bison.y"
                                                                                                     {printf(",\n");}
#line 2680 "bison.tab.c"
    break;

  case 167: /* $@105: %empty  */
#line 211 "bison.y"
                       {printf("{\n");}
#line 2686 "bison.tab.c"
    break;

  case 168: /* ruleContent1: OBRACKETS $@105 ruleLastContent CBRACKETS  */
#line 211 "bison.y"
                                                                  {printf("}\n");}
#line 2692 "bison.tab.c"
    break;

  case 169: /* $@106: %empty  */
#line 213 "bison.y"
                                             {printf(",\n");}
#line 2698 "bison.tab.c"
    break;

  case 181: /* $@107: %empty  */
#line 228 "bison.y"
                                               {printf("\t\"wagerstatistics\"");}
#line 2704 "bison.tab.c"
    break;

  case 182: /* $@108: %empty  */
#line 228 "bison.y"
                                                                                       {printf(":");}
#line 2710 "bison.tab.c"
    break;

  case 183: /* $@109: %empty  */
#line 228 "bison.y"
                                                                                                               {printf("{\n");}
#line 2716 "bison.tab.c"
    break;

  case 184: /* ruleWagerStatisticsContent: WAGERSTATISTICS $@107 COLON $@108 OBRACKETS $@109 ruleWagerst CBRACKETS  */
#line 228 "bison.y"
                                                                                                                                                     {printf("}\n");}
#line 2722 "bison.tab.c"
    break;

  case 185: /* $@110: %empty  */
#line 230 "bison.y"
                         {printf(",\n");}
#line 2728 "bison.tab.c"
    break;

  case 195: /* $@111: %empty  */
#line 241 "bison.y"
                           {printf("\t\"totalpages\"");}
#line 2734 "bison.tab.c"
    break;

  case 196: /* $@112: %empty  */
#line 241 "bison.y"
                                                              {printf(":");}
#line 2740 "bison.tab.c"
    break;

  case 197: /* ruleTotalPages: TOTALPAGES $@111 COLON $@112 INT  */
#line 241 "bison.y"
                                                                                {printf("\%s",yytext);}
#line 2746 "bison.tab.c"
    break;

  case 198: /* $@113: %empty  */
#line 243 "bison.y"
                                {printf("\t\"totalElements\"");}
#line 2752 "bison.tab.c"
    break;

  case 199: /* $@114: %empty  */
#line 243 "bison.y"
                                                                      {printf(":");}
#line 2758 "bison.tab.c"
    break;

  case 200: /* ruleTotalElements: TOTALELEMENTS $@113 COLON $@114 INT  */
#line 243 "bison.y"
                                                                                        {printf("\%s",yytext);}
#line 2764 "bison.tab.c"
    break;

  case 201: /* $@115: %empty  */
#line 245 "bison.y"
              {printf("\t\"last\"");}
#line 2770 "bison.tab.c"
    break;

  case 202: /* $@116: %empty  */
#line 245 "bison.y"
                                           {printf(":");}
#line 2776 "bison.tab.c"
    break;

  case 203: /* ruleLaast: LAST $@115 COLON $@116 BOOLEAN  */
#line 245 "bison.y"
                                                                   {printf("\%s",yytext);}
#line 2782 "bison.tab.c"
    break;

  case 204: /* $@117: %empty  */
#line 247 "bison.y"
                                      {printf("\t\"numberOfElements\"");}
#line 2788 "bison.tab.c"
    break;

  case 205: /* $@118: %empty  */
#line 247 "bison.y"
                                                                               {printf(":");}
#line 2794 "bison.tab.c"
    break;

  case 206: /* ruleNumberOfElements: NUMBEROFELEMENTS $@117 COLON $@118 INT  */
#line 247 "bison.y"
                                                                                                 {printf("\%s",yytext);}
#line 2800 "bison.tab.c"
    break;

  case 207: /* $@119: %empty  */
#line 249 "bison.y"
               {printf("\t\"sort\"");}
#line 2806 "bison.tab.c"
    break;

  case 208: /* $@120: %empty  */
#line 249 "bison.y"
                                            {printf(":");}
#line 2812 "bison.tab.c"
    break;

  case 209: /* $@121: %empty  */
#line 249 "bison.y"
                                                                  {printf("[\n");}
#line 2818 "bison.tab.c"
    break;

  case 210: /* $@122: %empty  */
#line 249 "bison.y"
                                                                                            {printf("{\n");}
#line 2824 "bison.tab.c"
    break;

  case 211: /* $@123: %empty  */
#line 249 "bison.y"
                                                                                                                                {printf("}\n");}
#line 2830 "bison.tab.c"
    break;

  case 212: /* ruleSort: SORT $@119 COLON $@120 OBRACES $@121 OBRACKETS $@122 ruleSort1 CBRACKETS $@123 CBRACES  */
#line 249 "bison.y"
                                                                                                                                                        {printf("]\n");}
#line 2836 "bison.tab.c"
    break;

  case 213: /* $@124: %empty  */
#line 251 "bison.y"
                          {printf(",\n");}
#line 2842 "bison.tab.c"
    break;

  case 221: /* $@125: %empty  */
#line 260 "bison.y"
                         {printf("\t\"direction\"");}
#line 2848 "bison.tab.c"
    break;

  case 222: /* $@126: %empty  */
#line 260 "bison.y"
                                                           {printf(":");}
#line 2854 "bison.tab.c"
    break;

  case 223: /* ruleDirection: DIRECTION $@125 COLON $@126 STRING  */
#line 260 "bison.y"
                                                                                 {printf("\%s",yytext);}
#line 2860 "bison.tab.c"
    break;

  case 224: /* $@127: %empty  */
#line 262 "bison.y"
                        {printf("\t\"property\"");}
#line 2866 "bison.tab.c"
    break;

  case 225: /* $@128: %empty  */
#line 262 "bison.y"
                                                         {printf(":");}
#line 2872 "bison.tab.c"
    break;

  case 226: /* ruleProperty: PROPERTY $@127 COLON $@128 STRING  */
#line 262 "bison.y"
                                                                               {printf("\%s",yytext);}
#line 2878 "bison.tab.c"
    break;

  case 227: /* $@129: %empty  */
#line 264 "bison.y"
                           {printf("\t\"ignoreCase\"");}
#line 2884 "bison.tab.c"
    break;

  case 228: /* $@130: %empty  */
#line 264 "bison.y"
                                                              {printf(":");}
#line 2890 "bison.tab.c"
    break;

  case 229: /* ruleIgnoreCase: IGNORECASE $@129 COLON $@130 BOOLEAN  */
#line 264 "bison.y"
                                                                                      {printf("\%s",yytext);}
#line 2896 "bison.tab.c"
    break;

  case 230: /* $@131: %empty  */
#line 266 "bison.y"
                               {printf("\t\"nullHandling\"");}
#line 2902 "bison.tab.c"
    break;

  case 231: /* $@132: %empty  */
#line 266 "bison.y"
                                                                    {printf(":");}
#line 2908 "bison.tab.c"
    break;

  case 232: /* ruleNullHandling: NULLHANDLING $@131 COLON $@132 STRING  */
#line 266 "bison.y"
                                                                                          {printf("\%s",yytext);}
#line 2914 "bison.tab.c"
    break;

  case 233: /* $@133: %empty  */
#line 268 "bison.y"
                           {printf("\t\"descending\"");}
#line 2920 "bison.tab.c"
    break;

  case 234: /* $@134: %empty  */
#line 268 "bison.y"
                                                              {printf(":");}
#line 2926 "bison.tab.c"
    break;

  case 235: /* ruleDescending: DESCENDING $@133 COLON $@134 BOOLEAN  */
#line 268 "bison.y"
                                                                                      {printf("\%s",yytext);}
#line 2932 "bison.tab.c"
    break;

  case 236: /* $@135: %empty  */
#line 270 "bison.y"
                         {printf("\t\"ascending\"");}
#line 2938 "bison.tab.c"
    break;

  case 237: /* $@136: %empty  */
#line 270 "bison.y"
                                                           {printf(":");}
#line 2944 "bison.tab.c"
    break;

  case 238: /* ruleAscending: ASCENDING $@135 COLON $@136 BOOLEAN  */
#line 270 "bison.y"
                                                                                   {printf("\%s",yytext);}
#line 2950 "bison.tab.c"
    break;

  case 239: /* $@137: %empty  */
#line 272 "bison.y"
               {printf("\t\"first\"");}
#line 2956 "bison.tab.c"
    break;

  case 240: /* $@138: %empty  */
#line 272 "bison.y"
                                             {printf(":");}
#line 2962 "bison.tab.c"
    break;

  case 241: /* ruleFirst: FIRST $@137 COLON $@138 BOOLEAN  */
#line 272 "bison.y"
                                                                     {printf("\%s",yytext);}
#line 2968 "bison.tab.c"
    break;

  case 242: /* $@139: %empty  */
#line 274 "bison.y"
               {printf("\t\"size\"");}
#line 2974 "bison.tab.c"
    break;

  case 243: /* $@140: %empty  */
#line 274 "bison.y"
                                            {printf(":");}
#line 2980 "bison.tab.c"
    break;

  case 244: /* ruleSize: SIZE $@139 COLON $@140 INT  */
#line 274 "bison.y"
                                                              {printf("\%s",yytext);}
#line 2986 "bison.tab.c"
    break;

  case 245: /* $@141: %empty  */
#line 276 "bison.y"
                   {printf("\t\"number\"");}
#line 2992 "bison.tab.c"
    break;

  case 246: /* $@142: %empty  */
#line 276 "bison.y"
                                                  {printf(":");}
#line 2998 "bison.tab.c"
    break;

  case 247: /* ruleNumber: NUMBER $@141 COLON $@142 INT  */
#line 276 "bison.y"
                                                                    {printf("\%s",yytext);}
#line 3004 "bison.tab.c"
    break;


#line 3008 "bison.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 279 "bison.y"

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
