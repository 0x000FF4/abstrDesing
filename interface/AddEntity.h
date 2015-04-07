#include "ComputingInterface.h"
namespace abstrDesing{
	class AddEntity : public ComputingInterface {
	bool toCompute;
	std::vector<float> gene;
	void compute();
	static float checkGene(std::vector<float>  gene);
	void mainLoop();
      public:
	AddEntity();
	virtual ~AddEntity();
	void SetGene(std::vector<float> gene,int place);
	void startComputing();
	void stopComputing();		
};

}

