/*****************************************************************************
 * os_graphics.h: Wrapper for the Graphics and Region classes
 *****************************************************************************
 * Copyright (C) 2003 VideoLAN
 * $Id: os_graphics.h,v 1.2 2003/04/12 21:43:27 asmax Exp $
 *
 * Authors: Olivier Teuli�re <ipkiss@via.ecp.fr>
 *          Emmanuel Puig    <karibu@via.ecp.fr>
 *
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111,
 * USA.
 *****************************************************************************/


#if defined( WIN32 )
    #include "win32_graphics.h"
    #define SRC_COPY   SRCCOPY
    #define SRC_AND    SRCAND
    #define OSGraphics Win32Graphics
    #define OSRegion   Win32Region
#else    
    #include "gtk2_graphics.h"
    #define SRC_COPY   SRCCOPY
    #define SRC_AND    SRCAND
    #define OSGraphics GTK2Graphics
    #define OSRegion   GTK2Region
#endif

