# $NetBSD: Makefile,v 1.20 2020/12/02 00:56:50 gutteridge Exp $

.include "../../meta-pkgs/xfce4/Makefile.common"

VERSION=	1.3.0
DISTNAME=	xfce4-mailwatch-plugin-${VERSION}
CATEGORIES=	mail
MASTER_SITES=	https://archive.xfce.org/src/panel-plugins/xfce4-mailwatch-plugin/${VERSION:R}/

HOMEPAGE=	https://goodies.xfce.org/projects/panel-plugins/xfce4-mailwatch-plugin
COMMENT=	Xfce mail checker plugin for the panel

CONFIGURE_ARGS+=	--x-includes=${X11BASE}/include \
			--x-libraries=${X11BASE}/libs

.include "../../x11/xfce4-panel/buildlink3.mk"
.include "../../x11/xfce4-exo/buildlink3.mk"
.include "../../security/gnutls/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
