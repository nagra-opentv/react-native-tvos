/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * Copyright (C) 1994-2021 OpenTV, Inc. and Nagravision S.A.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <react/renderer/core/Props.h>
#include <react/renderer/core/ReactPrimitives.h>
#include <react/renderer/debug/DebugStringConvertible.h>

#include <folly/dynamic.h>

namespace facebook {
namespace react {

class TVViewProps {
 public:
  TVViewProps() = default;
  TVViewProps(
      TVViewProps const &sourceProps,
      RawProps const &rawProps);

#pragma mark - Props

  bool isTVSelectable{false};
  bool focusable{false};
  bool hasTVPreferredFocus{false};

  int nextFocusUp;
  int nextFocusDown;
  int nextFocusLeft;
  int nextFocusRight;

  std::string testId{""};
#pragma mark - DebugStringConvertible

#if RN_DEBUG_STRING_CONVERTIBLE
  SharedDebugStringConvertibleList getDebugProps() const;
#endif
};

} // namespace react
} // namespace facebook
