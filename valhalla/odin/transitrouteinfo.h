#ifndef VALHALLA_ODIN_TRANSIT_ROUTE_INFO_H_
#define VALHALLA_ODIN_TRANSIT_ROUTE_INFO_H_

#include <string>
#include <list>
#include <valhalla/odin/transitstop.h>

namespace valhalla {
namespace odin {

struct TransitRouteInfo {

  // TODO: do we need?
  std::string ToParameterString() const;

  std::string onestop_id;
  uint32_t block_id;
  uint32_t trip_id;
  std::string short_name;
  std::string long_name;
  std::string headsign;
  uint32_t color;
  uint32_t text_color;
  std::string operator_onestop_id;
  std::list<TransitStop> transit_stops;

};

}
}

#endif  // VALHALLA_ODIN_TRANSIT_ROUTE_INFO_H_