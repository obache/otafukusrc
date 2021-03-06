# $NetBSD: Makefile,v 1.54 2021/01/09 19:42:42 gdt Exp $

DISTNAME=	gpsd-3.22
CATEGORIES=	geography
MASTER_SITES=	http://download-mirror.savannah.gnu.org/releases/gpsd/
# will probably switch to https://gitlab.com/gpsd/gpsd/releases

MAINTAINER=	gdt@NetBSD.org
HOMEPAGE=	https://gpsd.io/
COMMENT=	GPS information daemon

LICENSE=	modified-bsd

PY_PATCHPLIST=	yes

USE_TOOLS+=	pkg-config gmake
USE_LIBTOOL=	yes
USE_LANGUAGES=	c99 c++

# \todo Separate upstream's build into configure and build.
NO_CONFIGURE=	yes

# Note that gpsd is documented to use ncurses, not curses.
FAKE_NCURSES=	yes
# gpsd uses syncok.  Insist on an implementation that provides it.
USE_CURSES=	syncok

# Documentation depends
BUILD_DEPENDS+=	libxslt-[0-9]*:../../textproc/libxslt

# \todo Decide if buildlink3 is more appropriate.
DEPENDS+=	${PYPKGPREFIX}-gobject3-[0-9]*:../../devel/py-gobject3
DEPENDS+=	${PYPKGPREFIX}-serial-[0-9]*:../../comms/py-serial

CFLAGS.SunOS=	-DLOG_PERROR=0

## Configure phase arguments:
# Do not use the net at build time.
SCONS_ARGS+=	leapfetch=no
# Use the python chosen by pkgsrc, not "/usr/bin/env python"
SCONS_ARGS+=	python_shebang=${PYTHONBIN}
SCONS_ARGS+=	target_python=${PYTHONBIN}
# Put docs in standard pkgsrc location
SCONS_ARGS+=	docdir=share/doc/gpsd

SUBST_CLASSES+=		pyenv
SUBST_MESSAGE.pyenv=	Fixing Python path in test script
# We would choose post-configure, but gpsd's build system blurs
# configure and build.
SUBST_STAGE.pyenv=	pre-build
SUBST_FILES.pyenv+=	tests/test_misc.py
SUBST_SED.pyenv=	-e 's,/usr/bin/env python.*$$,${PYTHONBIN},'

# \todo: Determine if CC/CXX are needed (e.g, when using other than gcc).
#	CC=${CC:Q} CXX=${CXX:Q}
do-build:
	cd ${WRKSRC} && \
	${SETENV} ${MAKE_ENV} ${SCONSBIN} \
	prefix=${PREFIX} mandir=${PREFIX}/${PKGMANDIR} \
	${SCONS_ARGS} \
	-j${MAKE_JOBS:U1}

do-install:
	cd ${WRKSRC} && \
	${SETENV} ${MAKE_ENV} ${INSTALL_ENV} ${SCONSBIN} install

do-test:
	cd ${WRKSRC} && \
	${SETENV} ${MAKE_ENV} ${INSTALL_ENV} ${SCONSBIN} check

# Upstream does not document the minimum version; hope this is ok.
# \todo Pick a ruby version dynamically.
# Probably, this is not actually a build dependency for releases.
# BUILD_DEPENDS+=	ruby26-asciidoctor>=2.0.0:../../textproc/ruby-asciidoctor

# \todo Change to TOOLS or BUILD_DEPENDS after scons support is improved.
.include "../../devel/scons/buildlink3.mk"

.include "../../devel/libusb1/buildlink3.mk"
.include "../../graphics/py-cairo/buildlink3.mk"
.include "../../lang/python/extension.mk"
.include "../../x11/gtk3/buildlink3.mk"
# \todo Resolve mk/curses not invoking ncurses builtin processing.
# For now, include the ncurses package directly.
.include "../../devel/ncurses/buildlink3.mk"
#.include "../../mk/curses.buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
