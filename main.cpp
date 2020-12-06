#include "mainwindow.h"

#include <QApplication>
#include "commandline.h"
#include <thread>
#include <mutex>
#include <future>
#include <queue>
#include <QProcess>


using namespace std;

queue<future<string>> messageQueu;
void createProducerThreads()
{


    //TODO: Create 3 threads and setup synchronization between them
    thread commandLineThread {[&]{
            CommandLine commandLine(messageQueu);
                              }};
    thread senderThread {[&]{
            //TODO: sendData
                              }};
    commandLineThread.detach();
    senderThread.detach();
}

void createProcess()
{
    QObject *parent;
    QString program = "./ConcurrencyLearningApp";
    QStringList arguments;
        arguments << "-style" << "fusion";
    QProcess* myProcess = new QProcess(parent);
    myProcess->start(program, arguments);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //TODO: Create additional process here
    createProcess();
        //TODO: Create two threads
        //One for receiving
        //One for console writing
    //TODO: Create Shared memory or MSQ by using QT
    //Use semaphore for Shared memory sinchronization

    if (argc <= 1)
    {
        createProducerThreads();
    }
    //One for command line handling
    //One for processing
    //One for sending
    //TODO: maybe use barier for thread synchronization


    return a.exec();
}
