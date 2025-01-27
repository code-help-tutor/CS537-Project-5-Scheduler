WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef __SPINKLOCK__
#define __SPINKLOCK__

// Mutual exclusion lock.
struct spinlock {
  uint locked;       // Is the lock held?

  // For debugging:
  char *name;        // Name of lock.
  struct cpu *cpu;   // The cpu holding the lock.
  uint pcs[10];      // The call stack (an array of program counters)
                     // that locked the lock.
};

#endif
