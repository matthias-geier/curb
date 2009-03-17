/* Curb - Libcurl(3) bindings for Ruby.
 * Copyright (c)2006 Ross Bamford. 
 * Licensed under the Ruby License. See LICENSE for details.
 * 
 * $Id: curb.h 39 2006-12-23 15:28:45Z roscopeco $
 */

#ifndef __CURB_H
#define __CURB_H

#include <ruby.h>
#include <curl/curl.h>

#include "curb_config.h"
#include "curb_easy.h"
#include "curb_errors.h"
#include "curb_postfield.h"
#include "curb_multi.h"

#include "curb_macros.h"

// These should be managed from the Rake 'release' task.
#define CURB_VERSION   "0.2.9.1"
#define CURB_VER_NUM   291
#define CURB_VER_MAJ   0
#define CURB_VER_MIN   2
#define CURB_VER_MIC   9
#define CURB_VER_PATCH 1


// Maybe not yet defined in Ruby
#ifndef RSTRING_LEN 
#define RSTRING_LEN(x) RSTRING(x)->len 
#endif

#ifdef HAVE_RUBY19_HASH
  #define RHASH_LEN(hash) RHASH(hash)->ntbl->num_entries
#else
  #define RHASH_LEN(hash) RHASH(hash)->tbl->num_entries
#endif

extern VALUE mCurl;

extern void Init_curb_core();

#endif

