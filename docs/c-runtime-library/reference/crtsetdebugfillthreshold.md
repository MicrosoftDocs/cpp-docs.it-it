---
title: "_CrtSetDebugFillThreshold | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtSetDebugFillThreshold"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_CrtSetDebugFillThreshold"
  - "CrtSetDebugFillThreshold"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_CrtSetDebugFillThreshold (funzione)"
  - "0xFD"
  - "comportamento di riempimento buffer"
  - "CrtSetDebugFillThreshold (funzione)"
  - "debug, comportamento di riempimento buffer"
ms.assetid: 6cb360e8-56ae-4248-b17f-e28aee3e0ed7
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CrtSetDebugFillThreshold
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera o modifica la soglia controllando il comportamento del riempimento del buffer nelle funzioni di debug.  
  
## Sintassi  
  
```  
size_t _CrtSetDebugFillThreshold(  
   size_t _NewThreshold  
);  
```  
  
#### Parametri  
 `newThreshold`  
 Nuova soglia.  
  
## Valore restituito  
 La soglia precedente.  
  
## Note  
 Le versioni di debug delle funzioni di sicurezza avanzata CRT riempiono il buffer passato a queste con un carattere speciale \(0xFD\).  Ciò consente di individuare i casi in cui la dimensione errata è stata passata alla funzione.  Sfortunatamente, questo riduce anche le prestazioni.  Per migliorare le prestazioni, utilizzare `_CrtSetDebugFillThreshold` per disabilitare il riempimento del buffer per i buffer più grandi della soglia.  Una soglia di 0 lo disabiliterà per tutti i buffer.  
  
 La soglia predefinita è `SIZE_T_MAX`.  
  
 Segue un elenco delle funzioni coinvolte.  
  
-   [strcpy\_s, wcscpy\_s, \_mbscpy\_s](../../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md)  
  
-   [strncpy\_s, \_strncpy\_s\_l, wcsncpy\_s, \_wcsncpy\_s\_l, \_mbsncpy\_s, \_mbsncpy\_s\_l](../../c-runtime-library/reference/strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)  
  
-   [\_mbsnbcpy\_s, \_mbsnbcpy\_s\_l](../../c-runtime-library/reference/mbsnbcpy-s-mbsnbcpy-s-l.md)  
  
-   [strcat\_s, wcscat\_s, \_mbscat\_s](../../c-runtime-library/reference/strcat-s-wcscat-s-mbscat-s.md)  
  
-   [strncat\_s, \_strncat\_s\_l, wcsncat\_s, \_wcsncat\_s\_l, \_mbsncat\_s, \_mbsncat\_s\_l](../../c-runtime-library/reference/strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)  
  
-   [\_mbsnbcat\_s, \_mbsnbcat\_s\_l](../../c-runtime-library/reference/mbsnbcat-s-mbsnbcat-s-l.md)  
  
-   [\_strset\_s, \_strset\_s\_l, \_wcsset\_s, \_wcsset\_s\_l, \_mbsset\_s, \_mbsset\_s\_l](../../c-runtime-library/reference/strset-s-strset-s-l-wcsset-s-wcsset-s-l-mbsset-s-mbsset-s-l.md)  
  
-   [\_strnset\_s, \_strnset\_s\_l, \_wcsnset\_s, \_wcsnset\_s\_l, \_mbsnset\_s, \_mbsnset\_s\_l](../../c-runtime-library/reference/strnset-s-strnset-s-l-wcsnset-s-wcsnset-s-l-mbsnset-s-mbsnset-s-l.md)  
  
-   [\_mbsnbset\_s, \_mbsnbset\_s\_l](../../c-runtime-library/reference/mbsnbset-s-mbsnbset-s-l.md)  
  
-   [\_makepath\_s, \_wmakepath\_s](../../c-runtime-library/reference/makepath-s-wmakepath-s.md)  
  
-   [\_splitpath\_s, \_wsplitpath\_s](../../c-runtime-library/reference/splitpath-s-wsplitpath-s.md)  
  
-   [\_strlwr\_s, \_strlwr\_s\_l, \_mbslwr\_s, \_mbslwr\_s\_l, \_wcslwr\_s, \_wcslwr\_s\_l](../../c-runtime-library/reference/strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md)  
  
-   [\_strupr\_s, \_strupr\_s\_l, \_mbsupr\_s, \_mbsupr\_s\_l, \_wcsupr\_s, \_wcsupr\_s\_l](../../c-runtime-library/reference/strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md)  
  
-   [strerror\_s, \_strerror\_s, \_wcserror\_s, \_\_wcserror\_s](../../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md)  
  
-   [\_itoa\_s, \_i64toa\_s, \_ui64toa\_s, \_itow\_s, \_i64tow\_s, \_ui64tow\_s](../../c-runtime-library/reference/itoa-s-i64toa-s-ui64toa-s-itow-s-i64tow-s-ui64tow-s.md)  
  
-   [\_ecvt\_s](../../c-runtime-library/reference/ecvt-s.md)  
  
-   [\_fcvt\_s](../../c-runtime-library/reference/fcvt-s.md)  
  
-   [\_gcvt\_s](../../c-runtime-library/reference/gcvt-s.md)  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtSetDebugFillThreshold`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_crtsetdebugfillthreshold.cpp  
// compile with: /MTd  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <crtdbg.h>  
  
void Clear( char buff[], size_t size )  
{  
   for( int i=0; i<size; ++i )  
      buff[i] = 0;  
}  
  
void Print( char buff[], size_t size )  
{  
   for( int i=0; i<size; ++i )  
      printf( "%02x  %c\n", (unsigned char)buff[i], buff[i] );  
}  
  
int main( void )  
{  
   char buff[10];  
  
   printf( "With buffer-filling on:\n" );  
   strcpy_s( buff, _countof(buff), "howdy" );  
   Print( buff, _countof(buff) );  
  
   _CrtSetDebugFillThreshold( 0 );  
  
   printf( "With buffer-filling off:\n" );  
   Clear( buff, _countof(buff) );  
   strcpy_s( buff, _countof(buff), "howdy" );  
   Print( buff, _countof(buff) );  
}  
```  
  
```  
With buffer-filling on:  
68  h  
6f  o  
77  w  
64  d  
79  y  
00  
fd  ²  
fd  ²  
fd  ²  
fd  ²  
With buffer-filling off:  
68  h  
6f  o  
77  w  
64  d  
79  y  
00  
00  
00  
00  
00  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)