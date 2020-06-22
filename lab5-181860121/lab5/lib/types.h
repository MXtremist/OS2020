#ifndef __TYPES_H__
#define __TYPES_H__

typedef unsigned int   uint32_t;
typedef          int   int32_t;
typedef unsigned short uint16_t;
typedef          short int16_t;
typedef unsigned char  uint8_t;
typedef          char  int8_t;
typedef unsigned char  boolean;

typedef uint32_t size_t;
typedef int32_t  pid_t;
typedef int32_t sem_t;

union DirEntry {
	uint8_t byte[128];
	struct
	{
		int32_t inode; // index in inode table, started from 1, 0 for unused.
		char name[64];
	};
};
typedef union DirEntry DirEntry;

#endif