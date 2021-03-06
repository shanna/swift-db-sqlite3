// vim:ts=4:sts=4:sw=4:expandtab

// (c) Bharanee Rathna 2012

#pragma once

#include "common.h"

typedef struct Adapter {
    sqlite3 *connection;
    int t_nesting;
} Adapter;

void init_swift_db_sqlite3_adapter();
