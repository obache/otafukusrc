# $NetBSD: Makefile,v 1.24 2021/01/01 09:52:15 ryoon Exp $

GST_PLUGINS1_NAME=	pulse
GST_PLUGINS1_DIRS=	ext/pulse
GST_PLUGINS1_FLAGS=	pulse

PKGREVISION= 4
.include "../../multimedia/gst-plugins1-good/Makefile.common"

.include "../../audio/pulseaudio/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
