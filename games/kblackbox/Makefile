# $NetBSD: Makefile,v 1.43 2021/01/01 09:52:25 ryoon Exp $

DISTNAME=	kblackbox-${KAPPSVER}
PKGREVISION=	5
CATEGORIES=	games

HOMEPAGE=	https://kde.org/applications/games/kblackbox/
COMMENT=	Find the balls hidden in the black box by shooting laser beams
LICENSE=	gnu-gpl-v2 AND gnu-fdl-v1.2

.include "../../meta-pkgs/kde/applications.mk"

BUILD_DEPENDS+=	kdoctools>=5.19.0:../../devel/kdoctools

USE_TOOLS+=	msgmerge

.include "../../games/libkdegames/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
