#include "espresso.h"

using namespace std;

class PLA {
    public:
        /**
         * Initialize a PLA object from a given PLA file with parameters. 
         * Populate the PLA member variables based on the type of the PLA.
         */
        PLA(const char *pla_file);

        /**
         * Destructor for cleaning up the PLA list
         */
        ~PLA();

        /**
         * Read in the pla and populate the pla member variables given the file. If the pla is properly formatted, then the pla argument that is passed in should be populated.
         * 
         * Returns EOF (-1) if an error is encountered, or > 0 if operation is successful
         */
        void read_pla(const char *pla_file);

        /**
         * Perform the Espresso expand operation.
         * 
         * Iterate on each nonprime cube on the on-set and expand it to a prime implicant in order to cover as many cubes on the on-set. 
         * 
         */
        void expand();

        void removed_covered_implicants();
        
        bool validity_check();
};