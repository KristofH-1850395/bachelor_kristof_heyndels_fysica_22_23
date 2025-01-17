#include "dictItem.h"
#include <vector>
#include <string>

// this helper class hosts the following functions:
// write data will write the data to a csv file
// average data will average the data over all simulations

class Application {
    public:
        //static functions
        static void writeData(std::vector<std::pair<double, double>> data, float contaminationRate, int latticeSize, std::string filePath);
        static std::vector<std::pair<double, double>> averageData(std::vector<dictItem> dataDict);
        static void simulateContactProcess(int simTime, int ensembleSize, float contaminationRate, int latticeSize, std::string filePath);
        static void simulatePiProcess(int simTime, int ensembleSize, float contaminationRate, int latticeSize, std::string filePath);
    private:
        template <typename Process> static dictItem monteCarlo(Process lattice, int simulationTime);
};

