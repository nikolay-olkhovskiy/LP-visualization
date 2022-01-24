/*==============================================================================
Project: Linear programming by deep neural network
Theme: Visualization of Linear Programming Problem (ViLiPP)
Module: Problem-Types.h (Problem Types)
Prefix: PT
Author: Nikolay A. Olkhovsky
This source code is developed based on the BSF skeleton (https://github.com/leonid-sokolinsky/BSF-skeleton)
==============================================================================*/
#pragma once
#include "Problem-Include.h"		// Problem "Include" Files
#include "Problem-Parameters.h"		// Problem Parameters 
//=========================== Problem Types =========================
typedef float		PT_float_T;
typedef std::vector<PT_float_T> PT_test_T;
typedef PT_float_T	PT_vector_T[PP_MAX_N];
typedef PT_float_T	PT_matrix_T[PP_MAX_M][PP_MAX_N];
typedef PT_float_T	PT_column_T[PP_MAX_M];