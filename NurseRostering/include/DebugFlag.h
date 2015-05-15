/**
*   usage : 1. make the program print and record debug information.
*
*   note :  1.
*/

#ifndef INRC2_DEBUG_FLAG_H
#define INRC2_DEBUG_FLAG_H


// performance switch
// comment to reduce error messages and log
#ifndef INRC2_LOG
#define INRC2_LOG
#endif

// comment to reduce unnecessary calculation
#ifndef INRC2_DEBUG
#define INRC2_DEBUG
#endif

// comment to reduce console output
#ifndef INRC2_PERFORMANCE_TEST
//#define INRC2_PERFORMANCE_TEST
#endif


// input switch
// uncomment to check the feasibility of the instance from the online feasible checker
#ifndef INRC2_CHECK_INSTANCE_FEASIBILITY_ONLINE
//#define INRC2_CHECK_INSTANCE_FEASIBILITY_ONLINE
#endif


// algorithm switch
// comment to use random pick
#ifndef INRC2_SECONDARY_OBJ_VALUE
#define INRC2_SECONDARY_OBJ_VALUE
#endif

// comment to use perturb
#ifndef INRC2_PERTRUB_IN_REBUILD
#define INRC2_PERTRUB_IN_REBUILD
#endif

// comment to use best improvement
#ifndef INRC2_BLOCK_SWAP_FIRST_IMPROVE
#define INRC2_BLOCK_SWAP_FIRST_IMPROVE
#endif

#define INRC2_BLOCK_SWAP_AVERAGE_TABU 0
#define INRC2_BLOCK_SWAP_STRONG_TABU 1
#define INRC2_BLOCK_SWAP_WEAK_TABU 2
#define INRC2_BLOCK_SWAP_NO_TABU 3
#ifndef INRC2_BLOCK_SWAP_TABU_STRENGTH
#define INRC2_BLOCK_SWAP_TABU_STRENGTH INRC2_BLOCK_SWAP_AVERAGE_TABU
#endif

#define INRC2_BLOCK_SWAP_ORGN 0
#define INRC2_BLOCK_SWAP_FAST 1
#define INRC2_BLOCK_SWAP_PART 2
#define INRC2_BLOCK_SWAP_RAND 3
#ifndef INRC2_BLOCK_SWAP_FIND_BEST
#define INRC2_BLOCK_SWAP_FIND_BEST INRC2_BLOCK_SWAP_ORGN
#endif

// comment to use double head version of swap chain 
// (incompatible with quick restart)
#ifndef INRC2_SWAP_CHAIN_DOUBLE_HEAD
#define INRC2_SWAP_CHAIN_DOUBLE_HEAD
#endif

// comment to keep searching after ACER improved the worsened nurse
#ifndef INRC2_SWAP_CHAIN_QUICK_RESTART
#define INRC2_SWAP_CHAIN_QUICK_RESTART
#endif


// deal with conflicts
#ifdef INRC2_SWAP_CHAIN_DOUBLE_HEAD
#undef INRC2_SWAP_CHAIN_QUICK_RESTART
#endif


#endif