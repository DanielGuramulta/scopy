/*
 * Copyright (c) 2021 Analog Devices Inc.
 *
 * This file is part of iio-emu
 * (see http://www.github.com/analogdevicesinc/iio-emu).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef IIO_EMU_DEVICE_HPP
#define IIO_EMU_DEVICE_HPP

#include <tinyiiod/compat.h>

namespace iio_emu {

class AbstractDevice {
public:
	virtual int32_t open_dev(size_t sample_size, uint32_t mask, bool cyclic) = 0;
	virtual int32_t close_dev() = 0;
	virtual int32_t set_buffers_count(uint32_t buffers_count) = 0;
	virtual int32_t get_mask(uint32_t *mask) = 0;

	const char *getDeviceId();
protected:
	const char *m_device_id;
};
}

#endif //IIO_EMU_DEVICE_HPP
