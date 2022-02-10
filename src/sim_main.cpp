#include <iostream>
#include <physicsFUNs.h>
#include <graphicsFUNs.h>

/* Shortened namespace names */
namespace pFs = physicsFUNs;
namespace gFs = graphicsFUNs;

int main() {

	pFs::testPhysicsLib();
	gFs::testPlot();

	/* Read config and 
	 		load parameters */
	//load_config();
	
	/* Calculate variables */
	//calculate_vars();

	/* Initialize GRIN matrix */
	//make_grin();
	
	/* Initialize rays */
	//make_rays();
	
	/* Calculate gradient */
	//get_gradient();
	
	/* Ray propagation */
	//propagate_rays();
	 
	/* Visualization */
	//plots();

	return 0;
}
