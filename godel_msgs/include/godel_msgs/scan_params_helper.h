#ifndef BLENDING_PARAMS_HELPER_H
#define BLENDING_PARAMS_HELPER_H

#include <param_helpers/param_interfaces.h>
#include <godel_msgs/BlendingPlanParameters.h>

namespace param_helpers 
{

template<>
struct ParamInterfaces<godel_msgs::BlendingPlanParameters>
{
  template<typename Setter>
  static void save(Setter& setter, const godel_msgs::BlendingPlanParameters& params)
  {
    setter.set("tool_scan_width", params.scan_width);
    setter.set("margin", params.margin);
    setter.set("overlap", params.overlap);
    setter.set("approach_distance", params.approach_distance);
    setter.set("traverse_spd", params.traverse_spd);
    setter.set("quality_metric", params.quality_metric);
    setter.set("window_width", params.safe_window_width);
    setter.set("min_qa_value", params.min_qa_value);
    setter.set("max_qa_value", params.max_qa_value);
  }

  template<typename Getter>
  static void load(Getter& getter, godel_msgs::BlendingPlanParameters& params)
  {
    getter.get("tool_scan_width", params.scan_width);
    getter.get("margin", params.margin);
    getter.get("overlap", params.overlap);
    getter.get("approach_distance", params.approach_distance);
    getter.get("traverse_spd", params.traverse_spd);
    getter.get("quality_metric", params.quality_metric);
    getter.get("window_width", params.safe_window_width);
    getter.get("min_qa_value", params.min_qa_value);
    getter.get("max_qa_value", params.max_qa_value);
  }
};

}

#endif
