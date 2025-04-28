#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include "Eigen/Eigen"

using namespace std;
using namespace Eigen;

namespace PolygonalLibrary{

struct Polygonal_Mesh
{
    unsigned int num_cell0Ds;
	vector<unsigned int> cell0Ds_Id;
	MatrixXd cell0Ds_coordinates;
	map<unsigned int, list<unsigned int>> cell0Ds_markers;
	
    unsigned int num_cell1Ds;
	vector<unsigned int> cell1Ds_Id;
	MatrixXi cell1Ds_extrema;
	map<unsigned int, list<unsigned int>> cell1Ds_markers;
	
    unsigned int num_cell2Ds;
    vector<unsigned int> cell2Ds_Id;    
    vector<vector<unsigned int>> cell2Ds_vertices;
    vector<vector<unsigned int>> cell2Ds_edges;
	map<unsigned int, list<unsigned int>> cell2Ds_markers;
    // map to storage the markers, 
    //in which the keys are the markers and
    //the value is a list with the cell_id that have a specific key-marker
    
};

}
