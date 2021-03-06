/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include <gbm.h>

struct gbm
{
  struct gbm_device *dev = nullptr;
  struct gbm_surface *surface = nullptr;
  struct gbm_bo *bo = nullptr;
  struct gbm_bo *next_bo = nullptr;
  int width = 0;
  int height = 0;
};

class CGBMUtils
{
public:
  static bool InitGbm(struct gbm *gbm, int hdisplay, int vdisplay);
  static void DestroyGbm(struct gbm *gbm);
};
