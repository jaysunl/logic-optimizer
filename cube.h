#include <string>
#include <vector>
#include <iostream>

using namespace std;

class cube {
	public:
		int numImplicants;

		cube(const char* const & pla_file);

		bool expand(string implicant);

		vector<string> reduce();

		void remove_covered_implicants();

		bool validity_check();
	
};