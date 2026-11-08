/* object.c

***********************************************
* PROJECT NAME: DUNGEON ADVENTURE             *
* AUTHOR: STEFANO PERIS                       *
* LANGUAGE: ANSI C                            *
* COMPILER: GNU GCC COMPILER (MINGW INCLUDED) *
***********************************************

---------------------------------------------------------------
- For error/bug reporting, e-mail: xenonlab.develop@gmail.com -
---------------------------------------------------------------

-----------
- LICENSE -
-----------

This content is free and open-source. You can modify and redistribute it under these terms.

Dungeon Adventure is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Dungeon Adventure is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include "../include/object.h"
static const char *tags0[] = { "field", NULL};
static const char *tags1[] = { "cave", NULL};
static const char *tags2[] = { "silver", "coin", "silver coin", NULL};
static const char *tags3[] = { "gold", "coin", "gold coin", NULL};
static const char *tags4[] = { "guard", "burly guard", NULL};
static const char *tags5[] = { "yourself", NULL};
static const char *tags6[] = { "east", "entrance", NULL};
static const char *tags7[] = { "west", "out", NULL};
static const char *tags8[] = { "west", "north", "south", "forest", NULL};
static const char *tags9[] = { "east", "north", "south", "rock", NULL};

OBJECT objs[] = {
	{	/* 0 = field */
		 "an open field",
		tags0,
		NULL,
		NULL
	},
	{	/* 1 = cave */
		 "a little cave",
		tags1,
		NULL,
		NULL
	},
	{	/* 2 = silver */
		 "a silver coin",
		tags2,
		 field,
		NULL
	},
	{	/* 3 = gold */
		 "a gold coin",
		tags3,
		 cave,
		NULL
	},
	{	/* 4 = guard */
		 "a burly guard",
		tags4,
		 field,
		NULL
	},
	{	/* 5 = player */
		 "yourself",
		tags5,
		 field,
		NULL
	},
	{	/* 6 = intoCave */
		 "a cave entrance to the east",
		tags6,
		 field,
		 cave
	},
	{	/* 7 = exitCave */
		 "a way out to the west",
		tags7,
		 cave,
		 field
	},
	{	/* 8 = wallField */
		 "dense forest all around",
		tags8,
		 field,
		NULL
	},
	{	/* 9 = wallCave */
		 "solid rock all around",
		tags9,
		 cave,
		NULL
	}
};
