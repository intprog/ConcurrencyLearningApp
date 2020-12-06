#include "dataprocessor.h"

using namespace std;

DataProcessor::DataProcessor(std::promise<std::string> processorPromis):
_processorPromise(std::move(processorPromis))
{

}

void DataProcessor::process(string command)
{
    command += " was processed.";

    //TODO: add some random waiting
    _processorPromise.set_value(command);
}
