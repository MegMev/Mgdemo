/** MegatAnalyzer module: Mgdemo
 *
 * \file DummyAnalysis.h
 *
 * Description:
 *   [...]
 */

#ifndef Mgdemo_DummyAnalysis_h
#define Mgdemo_DummyAnalysis_h

#include "ROOT/RVec.hxx"
#include "edm4hep/TrackerHitData.h"

namespace Mgdemo {
  namespace rv = ROOT::VecOps;

  void            dummy_analysis();
  rv::RVec<float> dummy_collection( const rv::RVec<edm4hep::TrackerHitData>& );
} // namespace Mgdemo

#endif
