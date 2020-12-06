#include <iostream>
#include <thread>
#include <mutex>
#include <future>
#include <queue>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <queue>



using namespace std;

//queue<future<string>> messageQueu;
//void createProducerThreads()
//{


//    //TODO: Create 3 threads and setup synchronization between them
//    thread commandLineThread {[&]{
//            CommandLine commandLine(messageQueu);
//                              }};
//    thread senderThread {[&]{
//            //TODO: sendData
//                              }};
//    commandLineThread.detach();
//    senderThread.detach();
//}

//void createProcess()
//{
//    pid_t child_pid;
//    child_pid = fork (); // Create a new child process;
//    if (child_pid < 0) {
//      printf("fork failed");
//      return;
//    } else if (child_pid == 0) {
//      printf ("child process successfully created!\n");
//      printf ("child_PID = %d,parent_PID = %d\n",
//      getpid(), getppid( ) );
//    } else {
//      //wait(NULL);
//      printf ("parent process successfully created!\n");
//      printf ("child_PID = %d, parent_PID = %d", getpid( ), getppid( ) );
//    }
//   return;
//}

int main()
{
    std::cout << "Hello World!" << endl;
    //TODO: Create additional process here
    //createProcess();
        //TODO: Create two threads
        //One for receiving
        //One for console writing
    //TODO: Create Shared memory or MSQ by using QT
    //Use semaphore for Shared memory sinchronization


        //createProducerThreads();

    //One for command line handling
    //One for processing
    //One for sending
    //TODO: maybe use barier for thread synchronization


    return 0;
}
