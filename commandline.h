#ifndef COMMANDLINE_H
#define COMMANDLINE_H
#include <string>
#include <future>

class CommandLine
{
public:
    void run();
    CommandLine();
    std::future<std::string> processCommand(std::string);
};

#endif // COMMANDLINE_H
