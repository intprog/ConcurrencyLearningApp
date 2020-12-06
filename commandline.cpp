#include "commandline.h"
#include <string>
#include <thread>
#include <future>
#include <iostream>

using namespace std;
CommandLine::CommandLine()
{

}

future<string> CommandLine::processCommand(string)
{
    promise<string> readProcessPromise;
    thread processorThread {[&]{
            //TODO: process data

            readProcessPromise.set_value("sgfds");
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
    }
}
