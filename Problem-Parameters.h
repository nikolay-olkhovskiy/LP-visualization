/*==============================================================================
Project: Linear programming by deep neural network
Theme: Visualization of Linear Programming Problem (ViLiPP)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author: Nikolay A. Olkhovsky

This source code is developed based on the BSF skeleton (https://github.com/leonid-sokolinsky/BSF-skeleton)
==============================================================================*/

//=========================== Problem Parameters =========================
#define PP_MAX_M	50			// Maximal  number of inequalities
#define PP_MAX_N	50			// Maximal  space dimension
#define PP_ETA		100			// Rank of receptive field 		
#define PP_DELTA	0.1			// Density of receptive field
#define PP_MAX_K	1000000		// Maximal number of receptive field points
#define PP_PATH		"./"	// Working directory of the application
#define PP_LPP_FILE	"input_example.txt"	// File with initial data

//-------------------------- Macroses ---------------------------
#define PF_MIN(x,y) (x<y?x:y)