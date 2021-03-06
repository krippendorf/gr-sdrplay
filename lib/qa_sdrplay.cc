/*
 * Copyright 2012 Free Software Foundation, Inc.
 *
 * This file was generated by gr_modtool, a tool from the GNU Radio framework
 * This file is a part of gr-sdrplay
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

/*
 * This class gathers together all the test cases for the gr-filter
 * directory into a single test suite.  As you create new test cases,
 * add them here.
 */

#include "qa_sdrplay.h"
#include "qa_rsp1_source.h"
#include "qa_rsp1a_source.h"
#include "qa_rsp2_source.h"
#include "qa_rspduo_source.h"

CppUnit::TestSuite *
qa_sdrplay::suite()
{
  CppUnit::TestSuite *s = new CppUnit::TestSuite("sdrplay");
  s->addTest(gr::sdrplay::qa_rsp1_source::suite());
  s->addTest(gr::sdrplay::qa_rsp1a_source::suite());
  s->addTest(gr::sdrplay::qa_rsp2_source::suite());
  s->addTest(gr::sdrplay::qa_rspduo_source::suite());

  return s;
}
