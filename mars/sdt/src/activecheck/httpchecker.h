// Tencent is pleased to support the open source community by making Mars available.
// Copyright (C) 2016 THL A29 Limited, a Tencent company. All rights reserved.

// Licensed under the MIT License (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT

// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.

/*
 * httpchecker.h
 *
 *  Created on: 2014-7-1
 *      Author: yanguoyue caoshaokun
 */

#ifndef SDT_SRC_ACTIVECHECK_HTTPCHEKCER_H_
#define SDT_SRC_ACTIVECHECK_HTTPCHEKCER_H_

#include <string>

#include "basechecker.h"
#include "mars/sdt/sdt.h"

namespace mars {
namespace sdt {

class HttpChecker : public BaseChecker {
 public:
    HttpChecker();
    virtual ~HttpChecker();

    virtual int StartDoCheck(CheckRequestProfile& _check_request);

 public:
    void SetHttpNetcheckCGI(std::string cgi);

 protected:
    virtual void __DoCheck(CheckRequestProfile& _check_request);
};

}  // namespace sdt
}  // namespace mars

#endif /* SDT_SRC_ACTIVECHECK_HTTPCHEKCER_H_ */
