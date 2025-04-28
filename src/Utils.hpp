#pragma once

#include <iostream>
#include "PolygonalMesh.hpp"

using namespace std;

namespace PolygonalLibrary{

//import a polygonal mesh and test if the mesh is well imported
//mesh: a Polygonal_Mesh struct
//return the result of import, true if is success, false otherwise
bool import_mesh(Polygonal_Mesh& mesh);

//Import the Cell0D properties from Cell0Ds.csv file
//mesh: a Polygonal_Mesh struct
//return the result of import, true if is success, false otherwise 
bool import_cell0Ds(Polygonal_Mesh& mesh);

//Import the Cell1D properties from Cell1Ds.csv file
//mesh: a Polygonal_Mesh struct
//return the result of import, true if is success, false otherwise 
bool import_cell1Ds(Polygonal_Mesh& mesh);

//Import the Cell2D properties from Cell2Ds.csv file
//mesh: a Polygonal_Mesh struct
//return the result of import, true if is success, false otherwise 
bool import_cell2Ds(Polygonal_Mesh& mesh);

}
