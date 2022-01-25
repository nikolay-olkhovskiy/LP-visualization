/*==============================================================================
Project: Linear programming by deep neural network
Theme: Visualization of Linear Programming Problem (ViLiPP)
Module: Problem-bsf-Forwards.h (Problem Function Forwards)
Author: Nikolay A. Olkhovsky 
This source code is developed based on the BSF skeleton (https://github.com/leonid-sokolinsky/BSF-skeleton)
==============================================================================*/
#include "Problem-bsfTypes.h"	// Predefined BSF types
#include "Problem-Types.h"		// Problem Types
//====================== Problem Functions ===========================
inline void basis_Init();
inline void basis_Print();
inline void G(int pointNo, PT_vector_T receptivePoint);