# $NetBSD: Makefile,v 1.3 2020/03/20 11:58:17 nia Exp $

DISTNAME=	libdecaf-1.0.0
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=ed448goldilocks/}
EXTRACT_SUFX=	.tgz

MAINTAINER=	fox@NetBSD.org
HOMEPAGE=	http://ed448goldilocks.sourceforge.net/
COMMENT=	Implementation of Ed448-Goldilocks elliptic curve for cryptography
LICENSE=	mit

USE_CMAKE=	yes
USE_LANGUAGES=	c99 c++11
CMAKE_ARGS+=	-DENABLE_TESTS=YES

# These are required to prevent build breakage when tests are enabled
# This is probably due to the auto-generated headers clobbering with
# the #defines
CFLAGS.NetBSD+=	-D_NETBSD_SOURCE

PYTHON_FOR_BUILD_ONLY=		tool

TEST_TARGET=	test

post-install:
	${CHMOD} -x ${DESTDIR}${PREFIX}/lib/libdecaf.a

.include "../../lang/python/pyversion.mk"
.include "../../mk/bsd.pkg.mk"
