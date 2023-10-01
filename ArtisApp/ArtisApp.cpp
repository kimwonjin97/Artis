#include "ArtisEngine.h"

#define SHORT_NAME       42
#define LONGER_NAME      0x007f
#define EVEN_LONGER_NAME (2)
#define foo(x)           (x * x)
#define bar(y, z)        (y + z)
int main()
{
	ArtisEngine::Print();

	ArtisEngine::Test(21123412, 212341233, 124324123, 3123412, 11234123);
}
