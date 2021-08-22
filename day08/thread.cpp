#include <pthread.h>
#include <iostream>
#include <unistd.h>

using namespace std;

void *say_hello(void *)
{
    cout << " - hello .." << endl;
    sleep(1);
    return 0;
}

void test()
{
    int NUM_THREADS = 5;
    pthread_t tids[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; ++i)
    {
        sleep(1);
        // parameters are: pthread id, pthread args, function to be executed, function args
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if (ret != 0)
        {
            cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    // wait pthreads to be finished
    pthread_exit(NULL);
}