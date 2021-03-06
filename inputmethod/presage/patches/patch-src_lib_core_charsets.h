$NetBSD$

--- src/lib/core/charsets.h.orig	2012-05-25 08:50:55.000000000 +0000
+++ src/lib/core/charsets.h
@@ -106,70 +106,70 @@ const char DEFAULT_WORD_CHARS[]={
     '8',
     '9',
 	
-    Agrave  ,
-    Aacute  ,
-    Acirc   ,
-    Atilde  ,
-    Auml    ,
-    Aring   ,
-    AElig   ,
-    Ccedil  ,
-    Egrave  ,
-    Eacute  ,
-    Ecirc   ,
-    Euml    ,
-    Igrave  ,
-    Iacute  ,
-    Icirc   ,
-    Iuml    ,
-    ETH     ,
-    Ntilde  ,
-    Ograve  ,
-    Oacute  ,
-    Ocirc   ,
-    Otilde  ,
-    Ouml    ,
-    times   ,
-    Oslash  ,
-    Ugrave  ,
-    Uacute  ,
-    Ucirc   ,
-    Uuml    ,
-    Yacute  ,
-    THORN   ,
-    szlig   ,
-    agrave  ,
-    aacute  ,
-    acirc   ,
-    atilde  ,
-    auml    ,
-    aring   ,
-    aelig   ,
-    ccedil  ,
-    egrave  ,
-    eacute  ,
-    ecirc   ,
-    euml    ,
-    igrave  ,
-    iacute  ,
-    icirc   ,
-    iuml    ,
-    eth     ,
-    ntilde  ,
-    ograve  ,
-    oacute  ,
-    ocirc   ,
-    otilde  ,
-    ouml    ,
-    divide  ,
-    oslash  ,
-    ugrave  ,
-    uacute  ,
-    ucirc   ,
-    uuml    ,
-    yacute  ,
-    thorn   ,
-    yuml    ,
+    static_cast< char >( Agrave  ),
+    static_cast< char >( Aacute  ),
+    static_cast< char >( Acirc   ),
+    static_cast< char >( Atilde  ),
+    static_cast< char >( Auml    ),
+    static_cast< char >( Aring   ),
+    static_cast< char >( AElig   ),
+    static_cast< char >( Ccedil  ),
+    static_cast< char >( Egrave  ),
+    static_cast< char >( Eacute  ),
+    static_cast< char >( Ecirc   ),
+    static_cast< char >( Euml    ),
+    static_cast< char >( Igrave  ),
+    static_cast< char >( Iacute  ),
+    static_cast< char >( Icirc   ),
+    static_cast< char >( Iuml    ),
+    static_cast< char >( ETH     ),
+    static_cast< char >( Ntilde  ),
+    static_cast< char >( Ograve  ),
+    static_cast< char >( Oacute  ),
+    static_cast< char >( Ocirc   ),
+    static_cast< char >( Otilde  ),
+    static_cast< char >( Ouml    ),
+    static_cast< char >( times   ),
+    static_cast< char >( Oslash  ),
+    static_cast< char >( Ugrave  ),
+    static_cast< char >( Uacute  ),
+    static_cast< char >( Ucirc   ),
+    static_cast< char >( Uuml    ),
+    static_cast< char >( Yacute  ),
+    static_cast< char >( THORN   ),
+    static_cast< char >( szlig   ),
+    static_cast< char >( agrave  ),
+    static_cast< char >( aacute  ),
+    static_cast< char >( acirc   ),
+    static_cast< char >( atilde  ),
+    static_cast< char >( auml    ),
+    static_cast< char >( aring   ),
+    static_cast< char >( aelig   ),
+    static_cast< char >( ccedil  ),
+    static_cast< char >( egrave  ),
+    static_cast< char >( eacute  ),
+    static_cast< char >( ecirc   ),
+    static_cast< char >( euml    ),
+    static_cast< char >( igrave  ),
+    static_cast< char >( iacute  ),
+    static_cast< char >( icirc   ),
+    static_cast< char >( iuml    ),
+    static_cast< char >( eth     ),
+    static_cast< char >( ntilde  ),
+    static_cast< char >( ograve  ),
+    static_cast< char >( oacute  ),
+    static_cast< char >( ocirc   ),
+    static_cast< char >( otilde  ),
+    static_cast< char >( ouml    ),
+    static_cast< char >( divide  ),
+    static_cast< char >( oslash  ),
+    static_cast< char >( ugrave  ),
+    static_cast< char >( uacute  ),
+    static_cast< char >( ucirc   ),
+    static_cast< char >( uuml    ),
+    static_cast< char >( yacute  ),
+    static_cast< char >( thorn   ),
+    static_cast< char >( yuml    ),
 
     '\0' };
 
