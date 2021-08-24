/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * Copyright (C) 1994-2021 OpenTV, Inc. and Nagravision S.A.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "TVViewProps.h"

#include <react/renderer/components/view/propsConversions.h>
#include <react/renderer/core/propsConversions.h>
#include <react/renderer/debug/debugStringConvertibleUtils.h>

namespace facebook {
namespace react {

TVViewProps::TVViewProps(
    TVViewProps const &sourceProps,
    RawProps const &rawProps)
    : isTVSelectable(convertRawProp(
          rawProps,
          "isTVSelectable",
          sourceProps.isTVSelectable,
          false)),
      focusable(convertRawProp(
          rawProps,
          "focusable",
          sourceProps.focusable,
          false)),
      hasTVPreferredFocus(convertRawProp(
          rawProps,
          "hasTVPreferredFocus",
          sourceProps.hasTVPreferredFocus,
          false)),
      nextFocusUp(convertRawProp(
          rawProps,
          "nextFocusUp",
          sourceProps.nextFocusUp,
          -1)),
      nextFocusDown(convertRawProp(
          rawProps,
          "nextFocusDown",
          sourceProps.nextFocusDown,
          -1)),
      nextFocusLeft(convertRawProp(
          rawProps,
          "nextFocusLeft",
          sourceProps.nextFocusLeft,
          -1)),
      nextFocusRight(convertRawProp(
          rawProps,
          "nextFocusRight",
          sourceProps.nextFocusRight,
          -1)),
      testId(convertRawProp(rawProps, "testId", sourceProps.testId, "")) {}

#pragma mark - DebugStringConvertible

#if RN_DEBUG_STRING_CONVERTIBLE
SharedDebugStringConvertibleList TVViewProps::getDebugProps() const {
  auto const &defaultProps = TVViewProps();
  return SharedDebugStringConvertibleList{
      debugStringConvertibleItem("testId", testId, defaultProps.testId),
  };
}
#endif // RN_DEBUG_STRING_CONVERTIBLE

} // namespace react
} // namespace facebook
