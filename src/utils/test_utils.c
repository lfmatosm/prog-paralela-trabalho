#include "stdlib.h"
#include "test_utils.h"

/*
Cria uma matriz dinamicamente alocada a partir dos elementos de uma matriz estaticamente alocada

Recebe:

   - static_mtx: matriz alocada estaticamente com proporcoes TEST_MTX_NROWSxTEST_MTX_NCOLS (para ver esses valores, abra "test_utils.h")

Retorna:

    - ponteiro para inicio da matriz dinamicamente alocada
*/
int **create_dynamic_matrix_from_static(int static_mtx[TEST_MTX_NROWS][TEST_MTX_NCOLS])
{
    int **dynamic_matrix = (int **)malloc(sizeof(int *) * TEST_MTX_NROWS);
    for (int i = 0; i < TEST_MTX_NROWS; i++)
    {
        dynamic_matrix[i] = (int *)malloc(TEST_MTX_NCOLS * sizeof(int));
        for (int j = 0; j < TEST_MTX_NCOLS; j++)
            dynamic_matrix[i][j] = static_mtx[i][j];
    }

    return dynamic_matrix;
}
