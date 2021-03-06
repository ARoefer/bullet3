#pragma once
#include <Wavefront/tiny_obj_loader.h>

#include <memory>
#include <string>
#include <vector>
#include <unordered_map>

class btCollisionShape;

std::shared_ptr<tinyobj::mesh_t> load_stl_mesh(const std::string& filename);

std::shared_ptr<btCollisionShape> load_convex_shape(std::string filename, bool use_cache = true);
std::string get_shape_filename(const btCollisionShape* shape);
