#include "Data.hpp"
#include "Serialization.hpp"

int	main()
{
	Data *data = new Data;
	uintptr_t p;

	std::cout << "data address: " << data << std::endl;
	p = serialize(data);
	std::cout << "address casted to uintptr_t: " << p << std::endl;
	data = deserialize(p);
	std::cout << "address recasted to Data *: " << data << std::endl;
}