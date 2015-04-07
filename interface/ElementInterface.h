#include <vector>
namespace abstrDesing{
	class ElementInterface{
		public:
			 virtual bool compute() = 0;
			 virtual void addElementOutput(std::vector ElementInterface) = 0;
			 virtual void removeElement(int position);
			 virtual bool getOutput();	
	};
}
