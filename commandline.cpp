#include "commandline.h"
#include "dataprocessor.h"
#include <string>
#include <thread>
#include <future>
#include <iostream>
#include <QProcess>

using namespace std;
CommandLine::CommandLine(queue<future<string>>& messageQueue):
_messageQueue(messageQueue)
{

}

future<string> CommandLine::processCommand(string)
{
    promise<string> readProcessPromise;
    thread processorThread {[&]{
            DataProcessor dataProcessor(move(readProcessPromise));
                              }};
    processorThread.detach();
    return readProcessPromise.get_future();
}

void CommandLine::run()
{
    while (true) {
        string command;
        cin >> command;
       auto processedDataFuture = processCommand(command);
       //_messageQueue.push(processedDataFuture);
    }
}
