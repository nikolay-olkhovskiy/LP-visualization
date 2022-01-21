/*==============================================================================
Project: Linear programming by deep neural network
Theme: Visualization of Linear Programming Problem (ViLiPP)
Module: Problem-Data.h (Problem Data)
Prefix: PD
Author: Nikolay A. Olkhovsky
This source code is developed based on the BSF skeleton (https://github.com/leonid-sokolinsky/BSF-skeleton)
==============================================================================*/
#include "Problem-Types.h"			// Problem Parameters 

//========================== Problem variables ====================================
static int		PD_n;		// Space dimension
static int		PD_m;		// Number of inequalities
static int		PD_K;		// Number of receptive fied points // (must be < 2 147 483 647)	
static int		PD_retina_k = 0;	// Currend number of retina point
static int		PD_recept_k = 0;	// Currend number of point of receptive field
//========================== Problem data structures ==============================
static PT_matrix_T PD_A;	// Matrix of the system Ax <= b
static PT_column_T PD_b;	// Column of the constant terms of the system Ax <= b
static PT_vector_T PD_c;	// Coefficients of the objective function <c,x>
static PT_vector_T PD_g;	// Point of retina
static PT_vector_T PD_z;	// Center of retina
static PT_float_T PD_I[PP_MAX_K]; // Retina