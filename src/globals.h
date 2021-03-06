/*
 * globals.h
 *
 * This file is part of rmw<https://remove-to-waste.info/>
 *
 * Copyright (C) 2012-2020  Andy Alt (andy400-dev@yahoo.com)
 * Other authors: https://github.com/theimpossibleastronaut/rmw/blob/master/AUTHORS.md
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#ifndef _INC_GLOBALS_H
#define _INC_GLOBALS_H

#include "config.h"
#include <errno.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
#include "gettext.h"
#define _(String) gettext (String)
#define gettext_noop(String) String
#define N_(String) gettext_noop (String)

#ifdef DEBUG
# define DEBUG_PREFIX printf ("[DEBUG] ");
#endif

/* This is always defined when 'configure' is used */
#ifndef VERSION
  #define VERSION "unversioned"
#endif

/*!
 * PATH_MAX is used to set limits on how long a pathname can be.
 * Some systems may not define PATH_MAX so it's defined here if it's
 * not found in limits.h
 */
#ifndef PATH_MAX /* for portability */
#  define PATH_MAX 256
#endif

/*! The LEN_MAX_PATH macro is used as a shortcut throughout the program. */
#define LEN_MAX_PATH (PATH_MAX + 1)

#define EBUF 11

extern int verbose;

extern const char *HOMEDIR;

#endif
