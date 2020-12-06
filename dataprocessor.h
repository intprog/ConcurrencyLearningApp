#ifndef DATAPROCESSOR_H
#define DATAPROCESSOR_H
#include <string>
#include <future>


class DataProcessor
{
public:
    DataProcessor(std::promise<std::string> processorPromise);

private:
    std::promise<std::string> _processorPromise;
};

#endif // DATAPROCESSOR_H
