# $NetBSD: Makefile,v 1.29 2020/09/08 13:16:42 wiz Exp $

DISTNAME=	Net-Gnats-0.22
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	4
CATEGORIES=	net perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/R/RI/RICHE/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://metacpan.org/release/Net-Gnats
COMMENT=	Perl interface to the gnatsd daemon
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Object-Accessor-[0-9]*:../../devel/p5-Object-Accessor
# TEST_DEPENDS
BUILD_DEPENDS+=	p5-Readonly-[0-9]*:../../devel/p5-Readonly
BUILD_DEPENDS+=	p5-strictures-[0-9]*:../../devel/p5-strictures
BUILD_DEPENDS+=	p5-Test-MockObject-[0-9]*:../../devel/p5-Test-MockObject

PERL5_PACKLIST=		auto/Net/Gnats/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
