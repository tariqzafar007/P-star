/*

-------------------------------------------------------------

Copyright (c) MMXIII Atle Solbakken
atle@goliathdns.no

-------------------------------------------------------------

This file is part of P* (P-star).

P* is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

P* is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with P*.  If not, see <http://www.gnu.org/licenses/>.

-------------------------------------------------------------

*/

#pragma once

#include <iostream>

#include "matcher.h"
#include "namespace_session.h"
#include "operator_return_values.h"
#include "debug.h"

using namespace std;

class wpl_state;
class wpl_value;
struct wpl_operator;
class wpl_namespace;
class wpl_io;

class wpl_runable {
	protected:
	public:
	virtual ~wpl_runable() {};
	virtual int run(wpl_state *state, wpl_value *res) = 0;
	virtual wpl_state *new_state(wpl_namespace_session *nss, wpl_io *io);
};
