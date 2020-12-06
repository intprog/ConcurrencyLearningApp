#include "mainwindow.h"

#include <QApplication>
#include "commandline.h"
#include <thread>
#include <mutex>
#include <future>


using namespace std;

void createProducerThreads()
{

    //TODO: Create 3 threads and setup synchronization between them
    thread commandLineThread {[&]{
            //TODO: read from a command line
                              }};
    thread senderThread {[&]{
            //TODO: sendData
                              }};
    commandLineThread.detach();
    senderThread.detach();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //TODO: Create additional process here
        //TODO: Create two threads
        //One for receiving
        //One for console writing
    //TODO: Create Shared memory or MSQ by using QT
    //Use semaphore for Shared memory sinchronization


    createProducerThreads();
    //One for command line handling
    //One for processing
    //One for sending
    //TODO: maybe use barier for thread synchronization


    return a.exec();
}
