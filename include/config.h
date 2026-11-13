#ifndef MINIVCS_CONFIG_H
#define MINIVCS_CONFIG_H

// Version
#define TN_VERSION "0.1.0"

// Limits
#define HASH_HEX_LEN  16                  // hex characters in a hash
#define HASH_STR_LEN  (HASH_HEX_LEN + 1)  // room for the '\0' with +1
#define MAX_PATH_LEN  256
#define MAX_MSG_LEN   124                 // max length of commit message
#define MAX_LINE_LEN  4096                // buffer for reading a line

// Info name and folder on repo
#define VCS_DIR     ".minivcs"
#define HEAD_FILE   "HEAD"
#define INDEX_FILE  "index"
#define COMMITS_DIR "commits"
#define OBJECTS_DIR "objects"

// Return codes
#define VCS_OK 0
#define VCS_ERR 1

// Debug logging
#ifdef DEBUG
  #include <stdio.h>
  #define LOG(fmt, ...) \
    fprintf(stderr, "[DEBUG] %s:%d: " fmt "\n", \
            __FILE__, __LINE__, ##__VA_ARGS__)
#else
  #define LOG(fmt, ...) ((void)0)
#endif

#endif /* MINIVCS_CONFIG_H */
