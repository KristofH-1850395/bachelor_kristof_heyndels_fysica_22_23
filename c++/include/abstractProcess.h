#include <vector>

class AbstractProcess {
    public:
        virtual void create(int x, int y) = 0;
        virtual void annihilate(int x) = 0;

        void setContaminationRate(float contaminationRate) {this->contaminationRate = contaminationRate;}
        float getContaminationRate() { return this->contaminationRate; }

        void setDensity(float density) { this->density = density; }
        float getDensity() { return this->density; }

        void setCreationProbability(float creationProbability) {this->creationProbability = creationProbability;}
        float getCreationProbability() { return this->creationProbability; }

        void setLatticeSize(int latticeSize) {this->latticeSize = latticeSize;}
        int getLatticeSize() { return this->latticeSize; }

        void setLattice(std::vector<int> lattice) { this->lattice = lattice; }
        std::vector<int> getLattice() { return this->lattice; }

        float getNormalisationFactor() { return this->normalisation; }

        virtual void monteCarloStep() = 0;

    protected:
        virtual void updateDensity() = 0;
        int getRandomNeighbour(int x);
        int latticeSize;
        float contaminationRate;
        float density;
        float creationProbability;
        float normalisation;
        std::vector<int> lattice;
};