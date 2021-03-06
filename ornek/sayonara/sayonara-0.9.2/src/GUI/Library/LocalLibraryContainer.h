/* LocalLibraryContainer.h */

/* Copyright (C) 2011-2015  Lucio Carreras
 *
 * This file is part of sayonara player
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */



#ifndef LOCALLIBRARYCONTAINER_H
#define LOCALLIBRARYCONTAINER_H

#include "Interfaces/LibraryInterface/LibraryContainer/LibraryContainer.h"

class GUI_LocalLibrary;

class LocalLibraryContainer :
	public LibraryContainerInterface
{
	Q_OBJECT

private:
	GUI_LocalLibrary*   _ui=nullptr;

public:

	LocalLibraryContainer(QObject* parent=nullptr);

	// override from LibraryViewInterface
	QString     get_name() const override;
	QString     get_display_name() const override;
	QIcon       get_icon() const override;
	QWidget*    get_ui() const override;
	QComboBox*  get_libchooser() override;
	QMenu*      get_menu() override;
	void        init_ui() override;
};


#endif // LOCALLIBRARYCONTAINER_H
