/*
  Copyright 2024 SINTEF AS

  This file is part of the Open Porous Media project (OPM).

  OPM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  OPM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OPM.  If not, see <http://www.gnu.org/licenses/>.
*/

// This file keeps the factory a bit more tidy.
// When adding a new GPU preconditioner make sure to add it
// both with the normal cuistl path, and the hipistl path
#if HAVE_CUDA
#if USE_HIP
#include <opm/simulators/linalg/hipistl/CuBlockPreconditioner.hpp>
#include <opm/simulators/linalg/hipistl/CuDILU.hpp>
#include <opm/simulators/linalg/hipistl/CuJac.hpp>
#include <opm/simulators/linalg/hipistl/CuSeqILU0.hpp>
#include <opm/simulators/linalg/hipistl/PreconditionerAdapter.hpp>
#include <opm/simulators/linalg/hipistl/PreconditionerConvertFieldTypeAdapter.hpp>
#include <opm/simulators/linalg/hipistl/detail/cuda_safe_call.hpp>
#else
#include <opm/simulators/linalg/cuistl/CuBlockPreconditioner.hpp>
#include <opm/simulators/linalg/cuistl/CuDILU.hpp>
#include <opm/simulators/linalg/cuistl/CuJac.hpp>
#include <opm/simulators/linalg/cuistl/CuSeqILU0.hpp>
#include <opm/simulators/linalg/cuistl/PreconditionerAdapter.hpp>
#include <opm/simulators/linalg/cuistl/PreconditionerConvertFieldTypeAdapter.hpp>
#include <opm/simulators/linalg/cuistl/detail/cuda_safe_call.hpp>
#endif
#endif
