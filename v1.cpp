#include "Compress.h"
#include "Timer.h"

using namespace std;




int main(int argc, char* argv[]) {
	int ret = 0;
	for (const auto & i : CompressionMethod()) {
		Timer t1;
		string fileName = "./input.txt";

		ret = compressDecomress(true, i, fileName);

		cout << "Got file size: " << ret << " for compression method ";
		cout << CompressionMethod_toString(i)  << "\n";
	}

	return ret;
}