# $NetBSD: Makefile,v 1.39 2021/01/01 09:52:21 ryoon Exp $

DISTNAME=	kde-dev-utils-${KAPPSVER}
PKGREVISION=	5
CATEGORIES=	devel

HOMEPAGE=	https://kde.org/applications/development/
COMMENT=	Small utilities for developers using KDE/Qt libs/frameworks
LICENSE=	gnu-gpl-v2 AND gnu-fdl-v1.2

.include "../../meta-pkgs/kde/applications.mk"

USE_TOOLS+=	msgmerge

.include "../../devel/kparts/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../x11/qt5-qttools/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
