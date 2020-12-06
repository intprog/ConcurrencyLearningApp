#ifndef COMMANDLINE_H
#define COMMANDLINE_H
#include <string>
#include <future>
#include <queue>

class CommandLine
{
public:
    void run();
    CommandLine(std::queue<std::future<std::string>>& messageQueue);
    std::future<std::string> processCommand(std::string);
private:
    std::queue<std::future<std::string>>& _messageQueue;
};

#endif // COMMANDLINE_H
