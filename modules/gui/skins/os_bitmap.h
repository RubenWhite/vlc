/*****************************************************************************
 * os_bitmap.h: Wrapper for the Bitmap class
 *****************************************************************************
 * Copyright (C) 2003 VideoLAN
 * $Id: os_bitmap.h,v 1.2 2003/04/12 21:43:27 asmax Exp $
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
    #include "win32_bitmap.h"
    #define OSBitmap Win32Bitmap
#else    
    #include "gtk2_bitmap.h"
    #define OSBitmap GTK2Bitmap
#endif


