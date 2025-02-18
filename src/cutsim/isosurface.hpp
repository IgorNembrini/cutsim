/*  
 *  Copyright 2010-2011 Anders Wallin (anders.e.e.wallin "at" gmail.com)
 *  
 *  This file is part of Cutsim / OpenCAMlib.
 *
 *  OpenCAMlib is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  OpenCAMlib is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OpenCAMlib.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ISOSURFACE_H
#define ISOSURFACE_H

#include <cassert>
#include <vector>

#include "gldata.hpp"
#include "octree.hpp"
#include "octnode.hpp"

namespace cutsim {

/// abstract base class for isosurface extraction algorithms
/// 
/// isosurface algorithms produce vertices and polygons based on an Octree
/// vertices and polygons are added to a GLData using addVertex, addPolygon, etc.
///
class IsoSurfaceAlgorithm {
public:
    IsoSurfaceAlgorithm(GLData* gl, Octree* tr) : g(gl), tree(tr) {}
    virtual ~IsoSurfaceAlgorithm() { }
    
    // return polygons corresponding to the octree node
    virtual void updateGL() { 
        //update_calls=0;
        //valid_count=0;
        //debugValid();
        updateGL( tree->root );
        //debugValid();
        
        //std::cout << update_calls << " calls made\n";
        //std::cout << valid_count << " valid_nodes\n";
    }
protected:
    virtual void updateGL( Octnode* node) =0 ;
    void remove_node_vertices(Octnode* current ) {
        while( !current->vertexSetEmpty() ) {
            unsigned int delId = current->vertexSetTop();
            current->removeIndex( delId );
            g->removeVertex( delId );
        }
        assert( current->vertexSetEmpty() ); // when done, set should be empty
    }
    
    // count the valid/invalid nodes
    void debugValid() {
        std::vector<Octnode*> nodelist; // = new std::vector<Octnode*>();
        tree->get_all_nodes( tree->root,  nodelist);
        int val=0,inv=0;
        BOOST_FOREACH( Octnode* node , nodelist ) {
            if ( node->valid() )
                val++;
            else
                inv++;
        }
    }
    
// DATA
    int update_calls, valid_count;
    GLData* g;
    Octree* tree;
};


} // end namespace
#endif
// end file isosurface.hpp
