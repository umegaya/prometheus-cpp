#include <gmock/gmock.h>

#include "lib/metric.h"

namespace io {
namespace prometheus {
namespace client {
class Metric;
}
}
}

class MockMetric : public prometheus::Metric {
 public:
  MOCK_METHOD0(Collect, io::prometheus::client::Metric());
};
