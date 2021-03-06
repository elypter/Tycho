/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=8 sts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef _mozilla_threads_nsThreadIDs_h_
#define _mozilla_threads_nsThreadIDs_h_

namespace mozilla {
namespace threads {

enum ID
{
  Generic = 0,
  Main = 1,
};

} /* namespace threads */
} /* namespace mozilla */

#endif /* _mozilla_threads_nsThreadIDs_h_ */
