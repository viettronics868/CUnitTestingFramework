#include "test/../src/bai3.3.h"
#include "test/../unity/unity.h"






void setUp(void) {



}



void tearDown(void) {



}



void test_read_process_name_from_ID(void) {

    char *process_name = 

                        ((void *)0)

                            ;



    pid_t pid = 1345;

    read_process_name_from_ID(pid, &process_name);



    do { if ((((process_name)) != 

   ((void *)0)

   )) { } else { UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(20)))); } } while (0);









    free(process_name);

}
