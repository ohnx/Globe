//////////////////////////////////////////////////////////////////////
//      Globe Webeditor © Gergely Rózsahegyi (RoGer) 2001-2002      //
//                                                                  //
//                       Application Header File                    //
//                                                                  //
//                       Last Update: 2002.05.17					//
//////////////////////////////////////////////////////////////////////
//                                                                  //
//  Copyright (C) 2001-2004 Gergely Rózsahegyi <roger@beos.hu>      //
//                                                                  //
//  This program is free software; you can redistribute it and/or   //
//  modify it under the terms of the GNU General Public License as  //
//  published by the Free Software Foundation; either version 2 of  //
//  the License, or (at your option) any later version.             //
//                                                                  //
//  This program is distributed in the hope that it will be useful, //
//  but WITHOUT ANY WARRANTY; without even the implied warranty of  //
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the   //
//  GNU General Public License for more details.                    //
//                                                                  //
//  You should have received a copy of the GNU General Public       //
//  License along with this program; if not, write to the           //
//  Free Software Foundation, Inc.,                                 //
//  59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.        //
//                                                                  //
//////////////////////////////////////////////////////////////////////

#ifndef _RHTMLAPP_H_
#define _RHTMLAPP_H_

// - Includes
#include <Application.h>
#include "RHTML_win.h"

#define RHTML_APP_SIG "application/x-vnd.Globe"

// ----------------------------------------------------------------------------------------- RHTML_App Class -
class RHTMLApp: public BApplication
{
 public:
								RHTMLApp(int argc, char **argv);
				void			RefsReceived(BMessage* msg);
				virtual void	MessageReceived(BMessage *msg);
 private: 
				RHTMLWin*		fWindow;
				TToolTip		*fToolTip;
};

#endif

// - End - Application - Header File -------------------------------------------------------------------------
