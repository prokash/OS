//
// Created by Prokash Sinha on 6/9/23.
//
#include "locks.h"

int testNset ( int* lock, int newvalue)
{
    int oldvalue = *lock;
    *lock = newvalue;
    return oldvalue;
}

// 0 => not owned
void init (lock_t *lock)
{
    lock->flag =0;
}

// -- spinlock - current thread will spin
void lock( lock_t *lock)
{
    while (testNset ( &lock->flag, 1) == 1)
        ;
    // < testNset found lock is free, and set to busy >/
}

void unlock (lock_t *lock)
{
    lock->flag = 0;
}
