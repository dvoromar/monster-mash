#ifndef EXPORTGLTF_H
#define EXPORTGLTF_H

#include <tiny_gltf.h>

#include <Eigen/Core>
#include <string>

namespace exportgltf {

typedef Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor>
    MatrixXfR;
typedef Eigen::Matrix<unsigned short, Eigen::Dynamic, Eigen::Dynamic,
                      Eigen::RowMajor>
    MatrixXusR;

void exportStart(tinygltf::Model &m);
void exportStop(tinygltf::Model &m, const std::string &outFn);
void exportFullModel(const MatrixXfR &V, const MatrixXfR &N,
                     const MatrixXusR &F, const int frame, const int nFrames,
                     const int FPS, tinygltf::Model &m);
void exportMorphTarget(const MatrixXfR &V, const int frame, const int nFrames,
                       tinygltf::Model &m);

}  // namespace exportgltf

#endif  // EXPORTGLTF_H