# $NetBSD: Makefile,v 1.11 2020/10/24 22:39:48 wiz Exp $

COLLECTD_PACKAGE=	riemann
COLLECTD_PLUGINS=	write_riemann

COMMENT=		Statistics collection daemon - riemann plugin

.include "../../sysutils/riemann-client/buildlink3.mk"
COLLECTD_LIB.riemann-client=${BUILDLINK_PREFIX.riemann-client}

.include "../../devel/protobuf-c/buildlink3.mk"

.include "../../sysutils/collectd/Makefile.common"

.include "../../mk/bsd.pkg.mk"
