//
// Created by Prokash Sinha on 6/9/23.
//

#ifndef OS_LOCKS_H
#define OS_LOCKS_H


typedef struct __lock_t {
    int flag;
}lock_t;

// -- primitive => assumed the function is atomic ( uxing xchange or something )
int testNset ( int* lock, int newvalue);


#endif //OS_LOCKS_H
