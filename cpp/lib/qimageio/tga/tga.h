/* This file is part of the KDE project
   Copyright (C) 2003 Dominik Seichter <domseichter@web.de>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the Lesser GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
*/

#ifndef QIMGIO_TGA_H
#define QIMGIO_TGA_H

#include <QImageIOHandler>

class TGAHandler : public QImageIOHandler
{
public:
	TGAHandler();

	bool canRead() const;
	bool read(QImage *image);
	bool write(const QImage &image);

	QByteArray name() const;

	static bool canRead(QIODevice *device);
};

#endif
