/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OHOS_AAFWK_INTERFACES_INNERKITS_CONFIGURATION_CONVERTOR_H
#define OHOS_AAFWK_INTERFACES_INNERKITS_CONFIGURATION_CONVERTOR_H

#include "resource_manager.h"

namespace OHOS::AppExecFwk {
Global::Resource::ColorMode ConvertColorMode(std::string colormode);

Global::Resource::Direction ConvertDirection(int32_t height, int32_t width);

Global::Resource::ScreenDensity ConvertDensity(float density);

std::string GetDirectionStr(Global::Resource::Direction direction);
std::string GetDirectionStr(int32_t height, int32_t width);

std::string GetDensityStr(Global::Resource::ScreenDensity density);
std::string GetDensityStr(float density);
} // namespace OHOS::AppExecFwk
#endif  // OHOS_AAFWK_INTERFACES_INNERKITS_CONFIGURATION_CONVERTOR_H