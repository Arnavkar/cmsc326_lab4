/* Executes and waits for a single child process. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

//wait and exec defined in lib/user/syscall.c
//child-simple in tests/userprog/child-simple.c
void
test_main (void) 
{
  wait (exec ("child-simple"));
}
