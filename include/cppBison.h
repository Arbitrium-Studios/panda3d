/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_CPPYY_BUILT_X64_TMP_CPPBISON_YXX_H_INCLUDED
# define YY_CPPYY_BUILT_X64_TMP_CPPBISON_YXX_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int cppyydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REAL = 258,
     INTEGER = 259,
     CHAR_TOK = 260,
     SIMPLE_STRING = 261,
     SIMPLE_IDENTIFIER = 262,
     STRING_LITERAL = 263,
     CUSTOM_LITERAL = 264,
     IDENTIFIER = 265,
     TYPENAME_IDENTIFIER = 266,
     TYPEPACK_IDENTIFIER = 267,
     SCOPING = 268,
     TYPEDEFNAME = 269,
     ELLIPSIS = 270,
     OROR = 271,
     ANDAND = 272,
     EQCOMPARE = 273,
     NECOMPARE = 274,
     LECOMPARE = 275,
     GECOMPARE = 276,
     SPACESHIP = 277,
     LSHIFT = 278,
     RSHIFT = 279,
     POINTSAT_STAR = 280,
     DOT_STAR = 281,
     UNARY = 282,
     UNARY_NOT = 283,
     UNARY_NEGATE = 284,
     UNARY_MINUS = 285,
     UNARY_PLUS = 286,
     UNARY_STAR = 287,
     UNARY_REF = 288,
     POINTSAT = 289,
     SCOPE = 290,
     PLUSPLUS = 291,
     MINUSMINUS = 292,
     TIMESEQUAL = 293,
     DIVIDEEQUAL = 294,
     MODEQUAL = 295,
     PLUSEQUAL = 296,
     MINUSEQUAL = 297,
     OREQUAL = 298,
     ANDEQUAL = 299,
     XOREQUAL = 300,
     LSHIFTEQUAL = 301,
     RSHIFTEQUAL = 302,
     ATTR_LEFT = 303,
     ATTR_RIGHT = 304,
     KW_ALIGNAS = 305,
     KW_ALIGNOF = 306,
     KW_AUTO = 307,
     KW_BEGIN_PUBLISH = 308,
     KW_BLOCKING = 309,
     KW_BOOL = 310,
     KW_BUILTIN_VA_LIST = 311,
     KW_CATCH = 312,
     KW_CHAR = 313,
     KW_CHAR8_T = 314,
     KW_CHAR16_T = 315,
     KW_CHAR32_T = 316,
     KW_CLASS = 317,
     KW_CONST = 318,
     KW_CONSTEVAL = 319,
     KW_CONSTEXPR = 320,
     KW_CONSTINIT = 321,
     KW_CONST_CAST = 322,
     KW_DECLTYPE = 323,
     KW_DEFAULT = 324,
     KW_DELETE = 325,
     KW_DOUBLE = 326,
     KW_DYNAMIC_CAST = 327,
     KW_ELSE = 328,
     KW_END_PUBLISH = 329,
     KW_ENUM = 330,
     KW_EXTENSION = 331,
     KW_EXTERN = 332,
     KW_EXPLICIT = 333,
     KW_EXPLICIT_LPAREN = 334,
     KW_PUBLISHED = 335,
     KW_FALSE = 336,
     KW_FINAL = 337,
     KW_FLOAT = 338,
     KW_FRIEND = 339,
     KW_FOR = 340,
     KW_GOTO = 341,
     KW_HAS_VIRTUAL_DESTRUCTOR = 342,
     KW_IF = 343,
     KW_INLINE = 344,
     KW_INT = 345,
     KW_IS_ABSTRACT = 346,
     KW_IS_BASE_OF = 347,
     KW_IS_CLASS = 348,
     KW_IS_CONSTRUCTIBLE = 349,
     KW_IS_CONVERTIBLE_TO = 350,
     KW_IS_DESTRUCTIBLE = 351,
     KW_IS_EMPTY = 352,
     KW_IS_ENUM = 353,
     KW_IS_FINAL = 354,
     KW_IS_FUNDAMENTAL = 355,
     KW_IS_POD = 356,
     KW_IS_POLYMORPHIC = 357,
     KW_IS_STANDARD_LAYOUT = 358,
     KW_IS_TRIVIAL = 359,
     KW_IS_TRIVIALLY_COPYABLE = 360,
     KW_IS_UNION = 361,
     KW_LONG = 362,
     KW_MAKE_MAP_KEYS_SEQ = 363,
     KW_MAKE_MAP_PROPERTY = 364,
     KW_MAKE_PROPERTY = 365,
     KW_MAKE_PROPERTY2 = 366,
     KW_MAKE_SEQ = 367,
     KW_MAKE_SEQ_PROPERTY = 368,
     KW_MUTABLE = 369,
     KW_NAMESPACE = 370,
     KW_NEW = 371,
     KW_NOEXCEPT = 372,
     KW_NOEXCEPT_LPAREN = 373,
     KW_NULLPTR = 374,
     KW_OPERATOR = 375,
     KW_OVERRIDE = 376,
     KW_PRIVATE = 377,
     KW_PROTECTED = 378,
     KW_PUBLIC = 379,
     KW_REGISTER = 380,
     KW_REINTERPRET_CAST = 381,
     KW_RESTRICT = 382,
     KW_RETURN = 383,
     KW_SHORT = 384,
     KW_SIGNED = 385,
     KW_SIZEOF = 386,
     KW_STATIC = 387,
     KW_STATIC_ASSERT = 388,
     KW_STATIC_CAST = 389,
     KW_STRUCT = 390,
     KW_TEMPLATE = 391,
     KW_THREAD_LOCAL = 392,
     KW_THROW = 393,
     KW_TRUE = 394,
     KW_TRY = 395,
     KW_TYPEDEF = 396,
     KW_TYPEID = 397,
     KW_TYPENAME = 398,
     KW_UNDERLYING_TYPE = 399,
     KW_UNION = 400,
     KW_UNSIGNED = 401,
     KW_USING = 402,
     KW_VIRTUAL = 403,
     KW_VOID = 404,
     KW_VOLATILE = 405,
     KW_WCHAR_T = 406,
     KW_WHILE = 407,
     START_CPP = 408,
     START_CONST_EXPR = 409,
     START_TYPE = 410
   };
#endif
/* Tokens.  */
#define REAL 258
#define INTEGER 259
#define CHAR_TOK 260
#define SIMPLE_STRING 261
#define SIMPLE_IDENTIFIER 262
#define STRING_LITERAL 263
#define CUSTOM_LITERAL 264
#define IDENTIFIER 265
#define TYPENAME_IDENTIFIER 266
#define TYPEPACK_IDENTIFIER 267
#define SCOPING 268
#define TYPEDEFNAME 269
#define ELLIPSIS 270
#define OROR 271
#define ANDAND 272
#define EQCOMPARE 273
#define NECOMPARE 274
#define LECOMPARE 275
#define GECOMPARE 276
#define SPACESHIP 277
#define LSHIFT 278
#define RSHIFT 279
#define POINTSAT_STAR 280
#define DOT_STAR 281
#define UNARY 282
#define UNARY_NOT 283
#define UNARY_NEGATE 284
#define UNARY_MINUS 285
#define UNARY_PLUS 286
#define UNARY_STAR 287
#define UNARY_REF 288
#define POINTSAT 289
#define SCOPE 290
#define PLUSPLUS 291
#define MINUSMINUS 292
#define TIMESEQUAL 293
#define DIVIDEEQUAL 294
#define MODEQUAL 295
#define PLUSEQUAL 296
#define MINUSEQUAL 297
#define OREQUAL 298
#define ANDEQUAL 299
#define XOREQUAL 300
#define LSHIFTEQUAL 301
#define RSHIFTEQUAL 302
#define ATTR_LEFT 303
#define ATTR_RIGHT 304
#define KW_ALIGNAS 305
#define KW_ALIGNOF 306
#define KW_AUTO 307
#define KW_BEGIN_PUBLISH 308
#define KW_BLOCKING 309
#define KW_BOOL 310
#define KW_BUILTIN_VA_LIST 311
#define KW_CATCH 312
#define KW_CHAR 313
#define KW_CHAR8_T 314
#define KW_CHAR16_T 315
#define KW_CHAR32_T 316
#define KW_CLASS 317
#define KW_CONST 318
#define KW_CONSTEVAL 319
#define KW_CONSTEXPR 320
#define KW_CONSTINIT 321
#define KW_CONST_CAST 322
#define KW_DECLTYPE 323
#define KW_DEFAULT 324
#define KW_DELETE 325
#define KW_DOUBLE 326
#define KW_DYNAMIC_CAST 327
#define KW_ELSE 328
#define KW_END_PUBLISH 329
#define KW_ENUM 330
#define KW_EXTENSION 331
#define KW_EXTERN 332
#define KW_EXPLICIT 333
#define KW_EXPLICIT_LPAREN 334
#define KW_PUBLISHED 335
#define KW_FALSE 336
#define KW_FINAL 337
#define KW_FLOAT 338
#define KW_FRIEND 339
#define KW_FOR 340
#define KW_GOTO 341
#define KW_HAS_VIRTUAL_DESTRUCTOR 342
#define KW_IF 343
#define KW_INLINE 344
#define KW_INT 345
#define KW_IS_ABSTRACT 346
#define KW_IS_BASE_OF 347
#define KW_IS_CLASS 348
#define KW_IS_CONSTRUCTIBLE 349
#define KW_IS_CONVERTIBLE_TO 350
#define KW_IS_DESTRUCTIBLE 351
#define KW_IS_EMPTY 352
#define KW_IS_ENUM 353
#define KW_IS_FINAL 354
#define KW_IS_FUNDAMENTAL 355
#define KW_IS_POD 356
#define KW_IS_POLYMORPHIC 357
#define KW_IS_STANDARD_LAYOUT 358
#define KW_IS_TRIVIAL 359
#define KW_IS_TRIVIALLY_COPYABLE 360
#define KW_IS_UNION 361
#define KW_LONG 362
#define KW_MAKE_MAP_KEYS_SEQ 363
#define KW_MAKE_MAP_PROPERTY 364
#define KW_MAKE_PROPERTY 365
#define KW_MAKE_PROPERTY2 366
#define KW_MAKE_SEQ 367
#define KW_MAKE_SEQ_PROPERTY 368
#define KW_MUTABLE 369
#define KW_NAMESPACE 370
#define KW_NEW 371
#define KW_NOEXCEPT 372
#define KW_NOEXCEPT_LPAREN 373
#define KW_NULLPTR 374
#define KW_OPERATOR 375
#define KW_OVERRIDE 376
#define KW_PRIVATE 377
#define KW_PROTECTED 378
#define KW_PUBLIC 379
#define KW_REGISTER 380
#define KW_REINTERPRET_CAST 381
#define KW_RESTRICT 382
#define KW_RETURN 383
#define KW_SHORT 384
#define KW_SIGNED 385
#define KW_SIZEOF 386
#define KW_STATIC 387
#define KW_STATIC_ASSERT 388
#define KW_STATIC_CAST 389
#define KW_STRUCT 390
#define KW_TEMPLATE 391
#define KW_THREAD_LOCAL 392
#define KW_THROW 393
#define KW_TRUE 394
#define KW_TRY 395
#define KW_TYPEDEF 396
#define KW_TYPEID 397
#define KW_TYPENAME 398
#define KW_UNDERLYING_TYPE 399
#define KW_UNION 400
#define KW_UNSIGNED 401
#define KW_USING 402
#define KW_VIRTUAL 403
#define KW_VOID 404
#define KW_VOLATILE 405
#define KW_WCHAR_T 406
#define KW_WHILE 407
#define START_CPP 408
#define START_CONST_EXPR 409
#define START_TYPE 410



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int cppyyparse (void *YYPARSE_PARAM);
#else
int cppyyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int cppyyparse (void);
#else
int cppyyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_CPPYY_BUILT_X64_TMP_CPPBISON_YXX_H_INCLUDED  */
