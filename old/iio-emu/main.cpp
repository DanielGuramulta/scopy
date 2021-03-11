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

#include <QCoreApplication>
#include "networking/server.hpp"

int main(int argc, char *argv[])
{
	if (argc < 2) {
		qDebug() << "No server type provided";
	}
	qDebug() << "Virtual device: " << argv[1];

	QCoreApplication a(argc, argv);

	iio_emu::Server tcpServer(&a, argv[1]);
	return QCoreApplication::exec();
}
