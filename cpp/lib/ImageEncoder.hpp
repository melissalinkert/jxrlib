/*
 * #%L
 * Copyright (C) 2016 Glencoe Software, Inc. All rights reserved.
 * %%
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * #%L
 */
#pragma once

#include <string>

#include "windowsmediaphoto.h"
#include "FormatConverter.hpp"
#include "JXRGlue.h"
#include "Stream.hpp"
#include "ImageDecoder.hpp"

namespace jxrlib {

  class ImageEncoder {
    PKImageEncode *pEncoder;
    ERR err;
  public:
    ImageEncoder(Stream encodeStream, std::string extension);

    void initializeWithDecoder(ImageDecoder& decoder);
    void writeSource(FormatConverter& converter);

    void close();
  };

} // namespace jxrlib
