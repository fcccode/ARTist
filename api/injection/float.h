/**
 * The ARTist Project (https://artist.cispa.saarland)
 *
 * Copyright (C) 2017 CISPA (https://cispa.saarland), Saarland University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @author "Sebastian Weisgerber <weisgerber@cispa.saarland>"
 *
 */

#ifndef ART_API_INJECTION_FLOAT_H_
#define ART_API_INJECTION_FLOAT_H_

#include "primitives.h"

namespace art {

class Float : public Primitives {
 public:
  explicit Float(const float _value)
      : value(_value) {}

  ParameterType GetType() const override {
    return ParameterType::tFloat;
  }

  float GetValue() const {
    return value;
  }

 private:
  float value;
};



}  // namespace art

#endif  // ART_API_INJECTION_FLOAT_H_
