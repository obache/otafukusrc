# $NetBSD: Makefile,v 1.7 2020/12/04 20:45:49 nia Exp $

DISTNAME=	qutebrowser-1.13.1
PKGREVISION=	3
CATEGORIES=	www
MASTER_SITES=	${MASTER_SITE_GITHUB:=qutebrowser/}
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://qutebrowser.org/
COMMENT=	Keyboard-driven, vim-like browser based on PyQt5
LICENSE=	gnu-gpl-v3

USE_LANGUAGES=	# none

DEPENDS+=	${PYPKGPREFIX}-peg2-[0-9]*:../../textproc/py-peg2
DEPENDS+=	${PYPKGPREFIX}-attrs-[0-9]*:../../devel/py-attrs
DEPENDS+=	${PYPKGPREFIX}-cssutils-[0-9]*:../../textproc/py-cssutils
DEPENDS+=	${PYPKGPREFIX}-jinja2-[0-9]*:../../textproc/py-jinja2
DEPENDS+=	${PYPKGPREFIX}-pygments-[0-9]*:../../textproc/py-pygments
DEPENDS+=	${PYPKGPREFIX}-yaml-[0-9]*:../../textproc/py-yaml

PYTHON_VERSIONED_DEPENDENCIES+=	setuptools:tool

TOOL_DEPENDS+=	asciidoc-[0-9]*:../../textproc/asciidoc

PYTHON_VERSIONS_INCOMPATIBLE=	27

.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../lang/python/egg.mk"
.include "../../x11/qt5-qtwebkit/buildlink3.mk"
.include "../../x11/py-qt5/buildlink3.mk"
.include "../../lang/python/versioned_dependencies.mk"
.include "../../mk/bsd.pkg.mk"
