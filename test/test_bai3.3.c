#include "../unity/unity.h"
#include "../src/bai3.3.h"
//#include <sys/types.h>
#include <stdlib.h>

void setUp(void) {
    // This function will be called before each test function
}

void tearDown(void) {
    // This function will be called after each test function
}

void test_read_process_name_from_ID(void) {
    char *process_name = NULL;
    //pid_t pid = getpid();  // You can use any valid process ID for testing
    pid_t pid = 1345;
    read_process_name_from_ID(pid, &process_name);

    TEST_ASSERT_NOT_NULL(process_name);
    //TEST_ASSERT_NULL(process_name);
    // Add more assertions based on your requirements

    // Clean up memory if needed
    free(process_name);
}

// Add more test functions as needed


/*
int main(void) {
    UNITY_BEGIN();

    // Run your test functions
    RUN_TEST(test_read_process_name_from_ID);
    // Add more test functions with RUN_TEST as needed

    return UNITY_END();
}
*/













// #include "../unity/unity.h"
// #include "../unity/unity_internals.h"
// #include "../src/bai3.3.h"  // Include the header file corresponding to your source file



// void test_read_process_name_from_ID() {
//     char *process_name = NULL;
//     //pid_t pid = getpid();  // You can use any valid process ID for testing
//     pid_t pid = 1345;

//     read_process_name_from_ID(pid, &process_name);

//     TEST_ASSERT_NOT_NULL(process_name);
//     // Add more assertions based on your requirements
// }

// // Add more test functions as needed

// int main(void) {
//     UNITY_BEGIN();

//     // Run your test functions
//     RUN_TEST(test_read_process_name_from_ID);
//     // Add more test functions with RUN_TEST as needed

//     return UNITY_END();
// }
