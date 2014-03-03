/*
 * Copyright (C) 2012 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Michał Sawicz <michal.sawicz@canonical.com>
 */

// Qt
#include <QtQml/qqml.h>

// self
#include "fakeplugin.h"

// local
#include "fakeindicatorsmodel.h"
#include "indicators.h"
#include "menucontentactivator.h"
#include "unitymenumodelstack.h"
#include "visibleindicatorsmodel.h"

void IndicatorsFakePlugin::registerTypes(const char * uri)
{
    Q_INIT_RESOURCE(indicators_fake);

    qmlRegisterType<FakeIndicatorsModel>(uri, 0, 1, "FakeIndicatorsModel");

    qmlRegisterType<MenuContentActivator>(uri, 0, 1, "MenuContentActivator");
    qmlRegisterType<UnityMenuModelStack>(uri, 0, 1, "UnityMenuModelStack");
    qmlRegisterType<VisibleIndicatorsModel>(uri, 0, 1, "VisibleIndicatorsModel");

    qmlRegisterUncreatableType<MenuContentState>(uri, 0, 1, "MenuContentState", "Can't create MenuContentState class");
    qmlRegisterUncreatableType<ActionState>(uri, 0, 1, "ActionState", "Can't create ActionState class");
    qmlRegisterUncreatableType<NetworkActionState>(uri, 0, 1, "NetworkActionState", "Can't create NetworkActionState class");
    qmlRegisterUncreatableType<NetworkConnection>(uri, 0, 1, "NetworkConnection", "Can't create NetworkConnection class");
    qmlRegisterUncreatableType<IndicatorsModelRole>(uri, 0, 1, "IndicatorsModelRole", "Can't create IndicatorsModelRole class");
    qmlRegisterUncreatableType<FlatMenuProxyModelRole>(uri, 0, 1, "FlatMenuProxyModelRole", "Can't create FlatMenuProxyModelRole class");
}
