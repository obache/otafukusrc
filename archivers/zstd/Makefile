# $NetBSD: Makefile,v 1.33 2021/01/05 07:38:22 wiz Exp $

DISTNAME=	zstd-1.4.8
CATEGORIES=	archivers
MASTER_SITES=	${MASTER_SITE_GITHUB:=facebook/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://facebook.github.io/zstd/
COMMENT=	Fast real-time compression algorithm
LICENSE=	modified-bsd OR gnu-gpl-v2

CHECK_PORTABILITY_SKIP+=	tests/playTests.sh

# 1.4.8
# ld: ../lib/libzstd.a: error adding symbols: no more archived files
# ld:../lib/libzstd.a: file format not recognized; treating as linker script
# ld:../lib/libzstd.a:1: syntax error
# or
# ld: ../lib/libzstd.a: error adding symbols: file format not recognized
# reported as
# https://github.com/facebook/zstd/issues/2453
MAKE_JOBS_SAFE=		no

USE_LANGUAGES=		c c++
USE_TOOLS+=		ggrep gmake pkg-config
PKGCONFIG_OVERRIDE+=	lib/libzstd.pc.in
MAKE_FLAGS=		MANDIR=${PREFIX}/${PKGMANDIR}
MAKE_FLAGS+=		mandir=${PREFIX}/${PKGMANDIR}
MAKE_FLAGS+=		INSTALL=${INSTALL:Q}
MAKE_FLAGS+=		PKGCONFIGDIR=${PREFIX}/lib/pkgconfig
MAKE_FLAGS+=		BUILD_DIR=obj/${PKGNAME}

BUILD_TARGET=		allmost
TEST_TARGET=		test
TEST_ENV+=		LD_LIBRARY_PATH=${WRKSRC}/lib

.include "../../archivers/lz4/buildlink3.mk"
.include "../../archivers/xz/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
