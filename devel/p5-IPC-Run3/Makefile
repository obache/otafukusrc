# $NetBSD: Makefile,v 1.23 2020/09/08 13:09:54 wiz Exp $

DISTNAME=	IPC-Run3-0.048
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	6
CATEGORIES=	perl5 devel
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=IPC/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://metacpan.org/pod/IPC::Run3
COMMENT=	IPC::Run3 - run a subprocess in batch mode
LICENSE=	original-bsd OR artistic OR gnu-gpl-v2

PERL5_PACKLIST=	auto/IPC/Run3/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
