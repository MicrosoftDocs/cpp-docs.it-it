---
title: "wctomb, _wctomb_l | Microsoft Docs"
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
  - "_wctomb_l"
  - "wctomb"
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
  - "api-ms-win-crt-convert-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wctomb"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_wctomb_l (funzione)"
  - "caratteri, conversione"
  - "conversione di stringhe, stringhe di caratteri multibyte"
  - "conversione di stringhe, caratteri "wide""
  - "wctomb (funzione)"
  - "wctomb_l (funzione)"
  - "caratteri wide, conversione"
ms.assetid: 4a543f0e-5516-4d81-8ff2-3c5206f02ed5
caps.latest.revision: 23
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# wctomb, _wctomb_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un carattere wide nel corrispondente carattere multibyte.  Sono disponibili versioni più sicure di queste funzioni. Vedere [wctomb\_s, \_wctomb\_s\_l](../../c-runtime-library/reference/wctomb-s-wctomb-s-l.md).  
  
## Sintassi  
  
```  
int wctomb(  
   char *mbchar,  
   wchar_t wchar   
);  
int _wctomb_l(  
   char *mbchar,  
   wchar_t wchar,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `mbchar`  
 L'indirizzo di un carattere multibyte.  
  
 `wchar`  
 Un carattere wide.  
  
## Valore restituito  
 Se `wctomb` converte il carattere wide in un carattere multibyte, restituisce il numero di byte \(che non è mai maggiore di `MB_CUR_MAX`\) nel carattere wide.  Se `wchar` è il carattere null a caratteri estesi \(L'\\ 0 "\), `wctomb` restituisce 1.  Se il puntatore di destinazione `mbchar` è NULL, `wctomb` restituisce 0.  Se la conversione non è possibile nelle impostazioni locali correnti, `wctomb` restituisce 1 e `errno` viene impostato su `EILSEQ`.  
  
## Note  
 La funzione `wctomb` converte il suo argomento `wchar` nel carattere multibyte corrispondente e memorizza i risultati in `mbchar`.  È possibile chiamare la funzione da qualsiasi punto di qualsiasi programma.  `wctomb` utilizza le impostazioni locali correnti per i comportamenti dipendenti dalle impostazioni locali; `_wctomb_l` è identica a `wctomb`, ad eccezione del fatto che utilizza il parametro delle impostazioni locali passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 `wctomb` convalida i suoi parametri.  Se `mbchar` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce \-1.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`wctomb`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Questo programma mostra il comportamento della funzione wctomb.  
  
```  
// crt_wctomb.cpp  
// compile with: /W3  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   int i;  
   wchar_t wc = L'a';  
   char *pmb = (char *)malloc( MB_CUR_MAX );  
  
   printf( "Convert a wide character:\n" );  
   i = wctomb( pmb, wc ); // C4996  
   // Note: wctomb is deprecated; consider using wctomb_s  
   printf( "   Characters converted: %u\n", i );  
   printf( "   Multibyte character: %.1s\n\n", pmb );  
}  
```  
  
  **Converte un carattere wide:**  
 **Caratteri convertiti: 1**  
 **Carattere multibyte: a**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [\_mbclen, mblen, \_mblen\_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [mbstowcs, \_mbstowcs\_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbtowc, \_mbtowc\_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [wcstombs, \_wcstombs\_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)