/**
 * 
 * 
 */


#pragma once

#include <stdbool.h>
#include <stddef.h>

typedef struct {
    bool (*write_str)(const char *data);
} Send;
