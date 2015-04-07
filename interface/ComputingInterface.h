#include <vector>
namespace abstrDesing{
class ComputingInterface{

 virtual void compute() = 0;
 virtual static float checkGene(std::vector<float> gene) = 0;
 virtual void mainLoop() = 0 ;
public:
	virtual void SetGene(std::vector<float> newGene , int position) = 0;
	virtual void startComputing();
	virtual void stopComputing();
};
}
