#ifndef COMPUTING_ENTITY
#define COMPUTING_ENTITY
#include <vector>
#include "Gene.h"
#include "ComputingInterface.h"
namespace abstrDesing{
class ComputingEntity : public ComputingInterface{
		std::vector<Gene> gene;
		bool toCompute;
		void compute();
		static float checkGene(Gene gene);
		void mainLoop();
	public:
		void SetGene(Gene newGene,int place);
		void startComputing();
		void stopComputing();
	};
}
#endif
