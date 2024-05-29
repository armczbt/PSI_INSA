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
#line 1 "lex.y"

#include <stdio.h>
#include <stdlib.h>

#line 76 "lex.tab.c"

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

#include "lex.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_tNB = 3,                        /* tNB  */
  YYSYMBOL_tID = 4,                        /* tID  */
  YYSYMBOL_tIF = 5,                        /* tIF  */
  YYSYMBOL_tWHILE = 6,                     /* tWHILE  */
  YYSYMBOL_tELSIF = 7,                     /* tELSIF  */
  YYSYMBOL_tELSE = 8,                      /* tELSE  */
  YYSYMBOL_tPRINT = 9,                     /* tPRINT  */
  YYSYMBOL_tRETURN = 10,                   /* tRETURN  */
  YYSYMBOL_tINT = 11,                      /* tINT  */
  YYSYMBOL_tVOID = 12,                     /* tVOID  */
  YYSYMBOL_tERROR = 13,                    /* tERROR  */
  YYSYMBOL_tADDRESS = 14,                  /* tADDRESS  */
  YYSYMBOL_tADD = 15,                      /* tADD  */
  YYSYMBOL_tSUB = 16,                      /* tSUB  */
  YYSYMBOL_tMUL = 17,                      /* tMUL  */
  YYSYMBOL_tDIV = 18,                      /* tDIV  */
  YYSYMBOL_tLT = 19,                       /* tLT  */
  YYSYMBOL_tGT = 20,                       /* tGT  */
  YYSYMBOL_tNOT = 21,                      /* tNOT  */
  YYSYMBOL_tEQ = 22,                       /* tEQ  */
  YYSYMBOL_tNE = 23,                       /* tNE  */
  YYSYMBOL_tGE = 24,                       /* tGE  */
  YYSYMBOL_tLE = 25,                       /* tLE  */
  YYSYMBOL_tASSIGN = 26,                   /* tASSIGN  */
  YYSYMBOL_tAND = 27,                      /* tAND  */
  YYSYMBOL_tOR = 28,                       /* tOR  */
  YYSYMBOL_tLBRACE = 29,                   /* tLBRACE  */
  YYSYMBOL_tRBRACE = 30,                   /* tRBRACE  */
  YYSYMBOL_tLPAR = 31,                     /* tLPAR  */
  YYSYMBOL_tRPAR = 32,                     /* tRPAR  */
  YYSYMBOL_tSEMI = 33,                     /* tSEMI  */
  YYSYMBOL_tCOMMA = 34,                    /* tCOMMA  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_program = 36,                   /* program  */
  YYSYMBOL_function_declaration = 37,      /* function_declaration  */
  YYSYMBOL_function_call = 38,             /* function_call  */
  YYSYMBOL_parameter_decla = 39,           /* parameter_decla  */
  YYSYMBOL_parameter_call = 40,            /* parameter_call  */
  YYSYMBOL_statements = 41,                /* statements  */
  YYSYMBOL_statement = 42,                 /* statement  */
  YYSYMBOL_assign = 43,                    /* assign  */
  YYSYMBOL_declaration = 44,               /* declaration  */
  YYSYMBOL_decla = 45,                     /* decla  */
  YYSYMBOL_expression = 46,                /* expression  */
  YYSYMBOL_atom = 47,                      /* atom  */
  YYSYMBOL_test = 48,                      /* test  */
  YYSYMBOL_if_statement = 49,              /* if_statement  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_52_3 = 52,                      /* $@3  */
  YYSYMBOL_else_statement = 53,            /* else_statement  */
  YYSYMBOL_while_statement = 54,           /* while_statement  */
  YYSYMBOL_55_4 = 55,                      /* @4  */
  YYSYMBOL_56_5 = 56,                      /* $@5  */
  YYSYMBOL_print_statement = 57            /* print_statement  */
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
typedef yytype_int8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  124

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    32,    35,    36,    39,    42,    43,    44,
      45,    46,    47,    50,    51,    55,    56,    59,    60,    61,
      62,    63,    64,    65,    68,    69,    72,    75,    76,    77,
      78,    82,    87,    92,    97,   102,   103,   104,   107,   112,
     117,   122,   129,   133,   142,   146,   155,   165,   172,   178,
     163,   198,   199,   203,   208,   202,   225
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "tNB", "tID", "tIF",
  "tWHILE", "tELSIF", "tELSE", "tPRINT", "tRETURN", "tINT", "tVOID",
  "tERROR", "tADDRESS", "tADD", "tSUB", "tMUL", "tDIV", "tLT", "tGT",
  "tNOT", "tEQ", "tNE", "tGE", "tLE", "tASSIGN", "tAND", "tOR", "tLBRACE",
  "tRBRACE", "tLPAR", "tRPAR", "tSEMI", "tCOMMA", "$accept", "program",
  "function_declaration", "function_call", "parameter_decla",
  "parameter_call", "statements", "statement", "assign", "declaration",
  "decla", "expression", "atom", "test", "if_statement", "$@1", "$@2",
  "$@3", "else_statement", "while_statement", "@4", "$@5",
  "print_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-31)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -31,    53,   -31,    -2,     9,   -31,    -3,     1,    78,    78,
       3,   -31,    50,    54,   -31,    38,    40,    62,    56,   -31,
     -31,     4,   -31,    20,   -31,    45,    30,    -9,    73,   -31,
      81,     2,    34,    89,   -31,    90,   -31,    91,   -31,   -31,
     -31,   -31,   -31,   -31,     2,     2,     2,    88,     2,   -31,
      97,   123,   125,     2,   -31,    -6,   -31,   112,   126,    64,
     114,   -31,   -31,    63,    86,    63,   117,   111,     2,    93,
     -31,   -31,    99,     2,     2,     2,     2,   -31,     2,   -31,
     -31,    34,     2,   -31,     2,     2,     2,     2,     2,     2,
     -31,   113,   115,   -31,   104,   104,   -31,   -31,    63,   110,
      63,    63,    63,    63,    63,    63,    63,   118,   -31,   -31,
     -31,   120,   -31,   -31,    57,    66,   -31,   -31,   138,   121,
     -31,   -31,    96,   -31
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     3,     0,     0,     7,     7,
       0,    12,     0,     0,     8,     0,     0,     0,     0,    10,
      15,     0,    15,     0,     9,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     4,     0,    16,     0,    19,    20,
      21,    22,    11,     5,     0,     0,     0,     0,     0,    39,
      38,     0,     0,     0,    36,     0,    37,    28,     0,     0,
       0,    18,    17,    24,     0,    13,     0,     0,     0,     0,
      41,    40,     0,     0,     0,     0,     0,    23,     0,    30,
      26,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      47,     0,     0,    35,    31,    32,    33,    34,    29,    27,
      25,    14,    46,    44,    42,    43,    45,     0,    54,    56,
      48,     0,    15,    15,     0,     0,    49,    55,    51,     0,
      50,    15,     0,    52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -31,   -31,   -31,   -23,   142,   -31,   -18,   -31,   -31,   -31,
      71,   -30,   -31,    85,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     5,    54,    12,    64,    23,    36,    37,    38,
      59,    66,    56,    67,    39,   107,   112,   118,   120,    40,
      47,   111,    41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      35,    55,     6,    35,    26,    49,    50,    14,    24,    73,
      74,    75,    76,     7,    63,    65,    51,    44,    69,    52,
      15,    25,    45,    72,    27,    28,    29,    77,     8,    30,
      31,    32,     9,    53,    27,    28,    29,    33,    57,    30,
      31,    32,    19,    94,    95,    96,    97,    33,    98,    42,
      34,    58,   100,     2,   101,   102,   103,   104,   105,   106,
      43,    27,    28,    29,     3,     4,    30,    31,    32,    20,
      27,    28,    29,    21,    33,    30,    31,    32,    73,    74,
      75,    76,    16,    33,    17,    22,    18,   116,    17,    10,
      11,    35,    35,    60,   114,   115,   117,    80,    81,    35,
      27,    28,    29,   122,    46,    30,    31,    32,    73,    74,
      75,    76,    48,    33,    73,    74,    75,    76,    83,    68,
      84,    75,    76,    61,    62,    92,   123,    70,    45,    71,
      79,    93,    73,    74,    75,    76,    85,    86,    78,    87,
      82,    88,    89,    90,    81,   108,   119,   110,   109,   113,
     121,    13,    99,    91
};

static const yytype_int8 yycheck[] =
{
      23,    31,     4,    26,    22,     3,     4,     4,     4,    15,
      16,    17,    18,     4,    44,    45,    14,    26,    48,    17,
      17,    17,    31,    53,     4,     5,     6,    33,    31,     9,
      10,    11,    31,    31,     4,     5,     6,    17,     4,     9,
      10,    11,     4,    73,    74,    75,    76,    17,    78,     4,
      30,    17,    82,     0,    84,    85,    86,    87,    88,    89,
      30,     4,     5,     6,    11,    12,     9,    10,    11,    29,
       4,     5,     6,    11,    17,     9,    10,    11,    15,    16,
      17,    18,    32,    17,    34,    29,    32,    30,    34,    11,
      12,   114,   115,     4,   112,   113,    30,    33,    34,   122,
       4,     5,     6,   121,    31,     9,    10,    11,    15,    16,
      17,    18,    31,    17,    15,    16,    17,    18,    32,    31,
      34,    17,    18,    33,    33,    32,    30,     4,    31,     4,
       4,    32,    15,    16,    17,    18,    19,    20,    26,    22,
      26,    24,    25,    32,    34,    32,     8,    29,    33,    29,
      29,     9,    81,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    36,     0,    11,    12,    37,     4,     4,    31,    31,
      11,    12,    39,    39,     4,    17,    32,    34,    32,     4,
      29,    11,    29,    41,     4,    17,    41,     4,     5,     6,
       9,    10,    11,    17,    30,    38,    42,    43,    44,    49,
      54,    57,     4,    30,    26,    31,    31,    55,    31,     3,
       4,    14,    17,    31,    38,    46,    47,     4,    17,    45,
       4,    33,    33,    46,    40,    46,    46,    48,    31,    46,
       4,     4,    46,    15,    16,    17,    18,    33,    26,     4,
      33,    34,    26,    32,    34,    19,    20,    22,    24,    25,
      32,    48,    32,    32,    46,    46,    46,    46,    46,    45,
      46,    46,    46,    46,    46,    46,    46,    50,    32,    33,
      29,    56,    51,    29,    41,    41,    30,    30,    52,     8,
      53,    29,    41,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    38,    39,    39,    39,
      39,    39,    39,    40,    40,    41,    41,    42,    42,    42,
      42,    42,    42,    42,    43,    43,    44,    45,    45,    45,
      45,    46,    46,    46,    46,    46,    46,    46,    47,    47,
      47,    47,    48,    48,    48,    48,    48,    50,    51,    52,
      49,    53,    53,    55,    56,    54,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     8,     8,     4,     0,     2,     4,
       3,     5,     1,     1,     3,     0,     2,     2,     2,     1,
       1,     1,     1,     3,     3,     4,     3,     3,     1,     3,
       2,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       2,     2,     3,     3,     3,     3,     3,     0,     0,     0,
      11,     0,     4,     0,     0,     9,     5
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
  case 3: /* program: program function_declaration  */
#line 32 "lex.y"
                                       {}
#line 1202 "lex.tab.c"
    break;

  case 4: /* function_declaration: tINT tID tLPAR parameter_decla tRPAR tLBRACE statements tRBRACE  */
#line 35 "lex.y"
                                                                                      {}
#line 1208 "lex.tab.c"
    break;

  case 5: /* function_declaration: tVOID tID tLPAR parameter_decla tRPAR tLBRACE statements tRBRACE  */
#line 36 "lex.y"
                                                                                       {}
#line 1214 "lex.tab.c"
    break;

  case 6: /* function_call: tID tLPAR parameter_call tRPAR  */
#line 39 "lex.y"
                                              {}
#line 1220 "lex.tab.c"
    break;

  case 8: /* parameter_decla: tINT tID  */
#line 43 "lex.y"
                           {addSymbol((yyvsp[0].str),false);initVar((yyvsp[0].str));}
#line 1226 "lex.tab.c"
    break;

  case 9: /* parameter_decla: parameter_decla tCOMMA tINT tID  */
#line 44 "lex.y"
                                                  {addSymbol((yyvsp[0].str),false); initVar((yyvsp[0].str));}
#line 1232 "lex.tab.c"
    break;

  case 10: /* parameter_decla: tINT tMUL tID  */
#line 45 "lex.y"
                                {addSymbol((yyvsp[0].str),true);initVar((yyvsp[0].str));}
#line 1238 "lex.tab.c"
    break;

  case 11: /* parameter_decla: parameter_decla tCOMMA tINT tMUL tID  */
#line 46 "lex.y"
                                                       {addSymbol((yyvsp[0].str),true);initVar((yyvsp[0].str));}
#line 1244 "lex.tab.c"
    break;

  case 12: /* parameter_decla: tVOID  */
#line 47 "lex.y"
                        {}
#line 1250 "lex.tab.c"
    break;

  case 13: /* parameter_call: expression  */
#line 50 "lex.y"
                           {}
#line 1256 "lex.tab.c"
    break;

  case 14: /* parameter_call: parameter_call tCOMMA expression  */
#line 51 "lex.y"
                                                   {}
#line 1262 "lex.tab.c"
    break;

  case 16: /* statements: statements statement  */
#line 56 "lex.y"
                                   {}
#line 1268 "lex.tab.c"
    break;

  case 17: /* statement: assign tSEMI  */
#line 59 "lex.y"
                        {}
#line 1274 "lex.tab.c"
    break;

  case 18: /* statement: function_call tSEMI  */
#line 60 "lex.y"
                                  {}
#line 1280 "lex.tab.c"
    break;

  case 19: /* statement: declaration  */
#line 61 "lex.y"
                           {}
#line 1286 "lex.tab.c"
    break;

  case 20: /* statement: if_statement  */
#line 62 "lex.y"
                           {}
#line 1292 "lex.tab.c"
    break;

  case 21: /* statement: while_statement  */
#line 63 "lex.y"
                              {}
#line 1298 "lex.tab.c"
    break;

  case 22: /* statement: print_statement  */
#line 64 "lex.y"
                              {}
#line 1304 "lex.tab.c"
    break;

  case 23: /* statement: tRETURN expression tSEMI  */
#line 65 "lex.y"
                                       {}
#line 1310 "lex.tab.c"
    break;

  case 24: /* assign: tID tASSIGN expression  */
#line 68 "lex.y"
                                 {initVar((yyvsp[-2].str));COP(getVarAddress((yyvsp[-2].str)), getLastAddr()-1); freeTmp();}
#line 1316 "lex.tab.c"
    break;

  case 25: /* assign: tMUL tID tASSIGN expression  */
#line 69 "lex.y"
                                      {initVar((yyvsp[-2].str));COP_INDIRECT_G(getVarAddress((yyvsp[-2].str)), getLastAddr()-1); freeTmp();}
#line 1322 "lex.tab.c"
    break;

  case 28: /* decla: tID  */
#line 76 "lex.y"
            {addSymbol((yyvsp[0].str),false);}
#line 1328 "lex.tab.c"
    break;

  case 29: /* decla: tID tASSIGN expression  */
#line 77 "lex.y"
                               {freeTmp(); addSymbol((yyvsp[-2].str), false); initVar((yyvsp[-2].str));}
#line 1334 "lex.tab.c"
    break;

  case 30: /* decla: tMUL tID  */
#line 78 "lex.y"
                 {addSymbol((yyvsp[0].str),true);}
#line 1340 "lex.tab.c"
    break;

  case 31: /* expression: expression tADD expression  */
#line 82 "lex.y"
                                         {
                ADD(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
                }
#line 1349 "lex.tab.c"
    break;

  case 32: /* expression: expression tSUB expression  */
#line 87 "lex.y"
                                         {
                SOU(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
            }
#line 1358 "lex.tab.c"
    break;

  case 33: /* expression: expression tMUL expression  */
#line 92 "lex.y"
                                         {
                MUL(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
            }
#line 1367 "lex.tab.c"
    break;

  case 34: /* expression: expression tDIV expression  */
#line 97 "lex.y"
                                         {
                DIV(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
            }
#line 1376 "lex.tab.c"
    break;

  case 35: /* expression: tLPAR expression tRPAR  */
#line 102 "lex.y"
                                     {}
#line 1382 "lex.tab.c"
    break;

  case 36: /* expression: function_call  */
#line 103 "lex.y"
                            {}
#line 1388 "lex.tab.c"
    break;

  case 38: /* atom: tID  */
#line 107 "lex.y"
          {
            checkInit((yyvsp[0].str));
            addTmp();
            COP(getLastAddr()-1, getVarAddress((yyvsp[0].str)));
    }
#line 1398 "lex.tab.c"
    break;

  case 39: /* atom: tNB  */
#line 112 "lex.y"
          {
      //printf("Nombre -> %d\n", $1);
      addTmp();
      AFC(getLastAddr() - 1, (yyvsp[0].nb));
    }
#line 1408 "lex.tab.c"
    break;

  case 40: /* atom: tMUL tID  */
#line 117 "lex.y"
               {
            checkInit((yyvsp[0].str));
            addTmp();
            COP_INDIRECT_D(getLastAddr()-1, getVarAddress((yyvsp[0].str)));
    }
#line 1418 "lex.tab.c"
    break;

  case 41: /* atom: tADDRESS tID  */
#line 122 "lex.y"
                   {
            addTmp();
            AFC(getVarAddress((yyvsp[0].str)), getLastAddr()-1);
    }
#line 1427 "lex.tab.c"
    break;

  case 42: /* test: expression tEQ expression  */
#line 129 "lex.y"
                                  {
                EQU(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
                }
#line 1436 "lex.tab.c"
    break;

  case 43: /* test: expression tGE expression  */
#line 133 "lex.y"
                                  { 
                addTmp();
                // a>=b    -> Adresse de a=last-3 , Adresse de b=last-2 , Adresse de Temp=last-1
                EQU(getLastAddr() - 1, getLastAddr() - 3, getLastAddr() - 2); // On met le resultat de EQ au dessus de la pile
                SUP(getLastAddr() - 2, getLastAddr() - 3, getLastAddr() - 2); // On met le resultat de SUP a la place de b
                ADD(getLastAddr() - 3, getLastAddr() - 2, getLastAddr() - 1); // On aditione les resultats de EQ et de SUP pour avoir le resultat du GE
                freeTmp(); //  On libere l'adrese -1 qui contenait Tmp puis EQ. 
                freeTmp(); //  On libere l'adrese -2 qui contenait b puis SUP. Ce qui nous laisse en haut de la pile (adresse -1) le resultat du <=.
              }
#line 1450 "lex.tab.c"
    break;

  case 44: /* test: expression tGT expression  */
#line 142 "lex.y"
                                  {
                SUP(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
              }
#line 1459 "lex.tab.c"
    break;

  case 45: /* test: expression tLE expression  */
#line 146 "lex.y"
                                  { 
                addTmp();
                // a<=b    -> Adresse de a=last-3 , Adresse de b=last-2 , Adresse de Temp=last-1
                EQU(getLastAddr() - 1, getLastAddr() - 3, getLastAddr() - 2); // On met le resultat de EQ au dessus de la pile
                INF(getLastAddr() - 2, getLastAddr() - 3, getLastAddr() - 2); // On met le resultat de INF a la place de b
                ADD(getLastAddr() - 3, getLastAddr() - 2, getLastAddr() - 1); // On aditione les resultats de EQ et de INF pour avoir le resultat du GE
                freeTmp(); //  On libere l'adrese -1 qui contenait Tmp puis EQ. 
                freeTmp(); //  On libere l'adrese -2 qui contenait b puis INF. Ce qui nous laisse en haut de la pile (adresse -1) le resultat du <=.
              }
#line 1473 "lex.tab.c"
    break;

  case 46: /* test: expression tLT expression  */
#line 155 "lex.y"
                                  {
                INF(getLastAddr() - 2, getLastAddr() - 2, getLastAddr() - 1);
                freeTmp();
              }
#line 1482 "lex.tab.c"
    break;

  case 47: /* $@1: %empty  */
#line 165 "lex.y"
              { 
                int ligne = JMF(0, getLastAddr()-1);//on recupere la ligne a laquelle on genere une intruction de saut conditionel
                (yyvsp[-3].nb) = ligne; // on stocke la ligne dans le token tIF
              }
#line 1491 "lex.tab.c"
    break;

  case 48: /* $@2: %empty  */
#line 172 "lex.y"
              {
                freeTmp(); // on libère la valeur temporaire test
              }
#line 1499 "lex.tab.c"
    break;

  case 49: /* $@3: %empty  */
#line 178 "lex.y"
              {
                int current = get_nb_lines_asm(); // derniere ligne ecrite
                PATCH((yyvsp[-8].nb),current+2); // on remplace l'adresse de jump JMF du IF par l'adresse derniere ligne +2 (car adresse derniere ligne +1 ça va etre pour l'instruction JMP du else et donc la +2 sera le debut du else ou si le else est vide la fin du if)
                int ligne = JMP(0); // jump du else
                (yyvsp[-8].nb) = ligne;
              }
#line 1510 "lex.tab.c"
    break;

  case 50: /* if_statement: tIF tLPAR test tRPAR $@1 tLBRACE $@2 statements tRBRACE $@3 else_statement  */
#line 187 "lex.y"
              {
                int current = get_nb_lines_asm(); // derniere ligne ecrite
                PATCH((yyvsp[-10].nb),current+1); // on remplace l'adresse de jump JMP du ELSE par l'adresse de la dernière ligne +1
              }
#line 1519 "lex.tab.c"
    break;

  case 52: /* else_statement: tELSE tLBRACE statements tRBRACE  */
#line 199 "lex.y"
                                                   {}
#line 1525 "lex.tab.c"
    break;

  case 53: /* @4: %empty  */
#line 203 "lex.y"
                  {
                    (yyvsp[0].nb) = get_nb_lines_asm() +1; // on enregistre la ligne de début du calcul de test   
                  }
#line 1533 "lex.tab.c"
    break;

  case 54: /* $@5: %empty  */
#line 208 "lex.y"
                  {
                    int ligne_JMF = JMF(0,getLastAddr()-1); // on génère intruction saut conditionnel
                    (yyvsp[-3].nb) = ligne_JMF; // on save la ligne du JMF dans $2
                    freeTmp(); //libérer la valeur temporaire test
                  }
#line 1543 "lex.tab.c"
    break;

  case 55: /* while_statement: tWHILE @4 tLPAR test tRPAR $@5 tLBRACE statements tRBRACE  */
#line 217 "lex.y"
                  {
                    int current = get_nb_lines_asm(); // derniere ligne ecrite
                    PATCH((yyvsp[-7].nb), current+2); // on patch le jump conditionel en indiquant de sauter à current+2 (car current+1=JMP et current+2=ligne après le JMP)

                    int _ = JMP((yyvsp[-8].nb)); // on saute au début des calculs de test
                  }
#line 1554 "lex.tab.c"
    break;

  case 56: /* print_statement: tPRINT tLPAR expression tRPAR tSEMI  */
#line 225 "lex.y"
                                                     {PRI(getLastAddr() - 1);freeTmp();}
#line 1560 "lex.tab.c"
    break;


#line 1564 "lex.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 230 "lex.y"


void yyerror(const char *msg) {
  fprintf(stderr, "error: %s\n", msg);
  exit(1);
}

int main(void) {
  //yydebug = 1;
  //printf("\n\n");
  yyparse();
  printTI();
  //printTS();
}
