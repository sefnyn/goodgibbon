/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MAGIC = 258,
     HYPHEN = 259,
     COLON = 260,
     POSITIVE = 261,
     INTEGER = 262,
     NAME = 263,
     LENGTH = 264,
     PLAYER = 265,
     RANK = 266,
     LOCATION = 267,
     RULE = 268,
     CRAWFORD = 269,
     GAME = 270,
     WHITE = 271,
     BLACK = 272,
     NO_COLOR = 273,
     ROLL = 274,
     MOVE = 275,
     SLASH = 276,
     BAR = 277,
     HOME = 278,
     DOUBLE = 279,
     DROP = 280,
     TAKE = 281,
     RESIGN = 282,
     REJ = 283,
     ACCEPT = 284,
     UNKNOWN = 285,
     GARBAGE = 286,
     POINTS = 287,
     DICE = 288,
     SCORES = 289,
     CUBE = 290,
     TURN = 291,
     MAY_DOUBLE = 292,
     LBRACE = 293,
     RBRACE = 294
   };
#endif
/* Tokens.  */
#define MAGIC 258
#define HYPHEN 259
#define COLON 260
#define POSITIVE 261
#define INTEGER 262
#define NAME 263
#define LENGTH 264
#define PLAYER 265
#define RANK 266
#define LOCATION 267
#define RULE 268
#define CRAWFORD 269
#define GAME 270
#define WHITE 271
#define BLACK 272
#define NO_COLOR 273
#define ROLL 274
#define MOVE 275
#define SLASH 276
#define BAR 277
#define HOME 278
#define DOUBLE 279
#define DROP 280
#define TAKE 281
#define RESIGN 282
#define REJ 283
#define ACCEPT 284
#define UNKNOWN 285
#define GARBAGE 286
#define POINTS 287
#define DICE 288
#define SCORES 289
#define CUBE 290
#define TURN 291
#define MAY_DOUBLE 292
#define LBRACE 293
#define RBRACE 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 91 "gibbon-gmd-parser.y"

	gint64 num;
	gdouble dbl;
	gchar *name;
	gint side;



/* Line 1685 of yacc.c  */
#line 138 "gibbon-gmd-parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




