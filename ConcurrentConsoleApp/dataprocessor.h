#ifndef DATAPROCESSOR_H
#define DATAPROCESSOR_H
#include <string>
#include <future>


class DataProcessor
{
public:
    DataProcessor(std::promise<std::string> processorPromise);
    void process(std::string);
private:
    std::promise<std::string> _processorPromise;
};

#endif // DATAPROCESSOR_H
