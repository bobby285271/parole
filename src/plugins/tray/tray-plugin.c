/*
 * * Copyright (C) 2009-2011 Ali <aliov@xfce.org>
 * * Copyright (C) 2012-2014 Sean Davis <smd.seandavis@gmail.com>
 * * Copyright (C) 2012-2014 Simon Steinbeiß <ochosi@xfce.org>
 *
 * Licensed under the GNU General Public License Version 2
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <libxfce4util/libxfce4util.h>

#include "tray-provider.h"

G_MODULE_EXPORT GType   parole_plugin_initialize (ParoleProviderPlugin *plugin);

G_MODULE_EXPORT void    parole_plugin_shutdown   (void);

G_MODULE_EXPORT GType
parole_plugin_initialize (ParoleProviderPlugin *plugin)
{
    xfce_textdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR, "UTF-8");

    tray_provider_register_type (plugin);

    return TRAY_TYPE_PROVIDER;
}

G_MODULE_EXPORT void
parole_plugin_shutdown (void)
{

}
