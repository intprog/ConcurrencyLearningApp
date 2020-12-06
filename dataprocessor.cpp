#include "dataprocessor.h"

using namespace std;

DataProcessor::DataProcessor(std::promise<std::string> processorPromis):
_processorPromise(std::move(processorPromis))
{

}
