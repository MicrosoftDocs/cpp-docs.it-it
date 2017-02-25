---
title: "wctomb_s, _wctomb_s_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wctomb_s_l"
  - "wctomb_s"
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
  - "wctomb_s"
  - "_wctomb_s_l"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_wctomb_s_l (funzione)"
  - "caratteri, conversione"
  - "conversione di stringhe, stringhe di caratteri multibyte"
  - "conversione di stringhe, caratteri "wide""
  - "wctomb_s (funzione)"
  - "wctomb_s_l (funzione)"
  - "caratteri wide, conversione"
ms.assetid: 7e94a888-deed-4dbd-b5e9-d4a0455538b8
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# wctomb_s, _wctomb_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un carattere wide nel corrispondente carattere multibyte.  Una versione di [wctomb, \_wctomb\_l](../../c-runtime-library/reference/wctomb-wctomb-l.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t wctomb_s(  
   int *pRetValue,  
   char *mbchar,  
   size_t sizeInBytes,  
   wchar_t wchar   
);  
errno_t _wctomb_s_l(  
   int *pRetValue,  
   char *mbchar,  
   size_t sizeInBytes,  
   wchar_t wchar,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 \[out\] `pRetValue`  
 Il numero di byte, o un codice che indica il risultato.  
  
 \[out\] `mbchar`  
 L'indirizzo di un carattere multibyte.  
  
 \[in\] `sizeInBytes`  
 Dimensione del buffer `mbchar`.  
  
 \[in\] `wchar`  
 Un carattere wide.  
  
 \[in\] `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Zero se ha esito positivo, un codice di errore in caso di errore.  
  
 Condizioni di errore  
  
|`mbchar`|`sizeInBytes`|Valore restituito|`pRetValue`|  
|--------------|-------------------|-----------------------|-----------------|  
|`NULL`|\>0|`EINVAL`|non modificato|  
|any|\>`INT_MAX`|`EINVAL`|non modificato|  
|any|troppo piccolo|`EINVAL`|non modificato|  
  
 Se si verifica una qualsiasi delle condizioni di errore sopra riportate, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `wctomb` ritorna `EINVAL` e imposta `errno` a `EINVAL`.  
  
## Note  
 La funzione `wctomb_s` converte il suo argomento `wchar` nel carattere multibyte corrispondente e memorizza i risultati in `mbchar`.  È possibile chiamare la funzione da qualsiasi punto di qualsiasi programma.  
  
 Se `wctomb_s` converte il carattere wide in un carattere multibyte, inserisce il numero di byte \(che non è mai maggiore di `MB_CUR_MAX`\) contenuti nel carattere wide nell'intero puntato da `pRetValue`.  Se `wchar` è il carattere wide null \(L'\\0'\), `wctomb_s` riempie `pRetValue` con 1.  Se il puntatore di destinazione `mbchar` è NULL, `wctomb_s` inserisce 0 in `pRetValue`.  Se la conversione non è possibile nelle impostazioni locali correnti, `wctomb_s` inserisce \- 1 in `pRetValue`.  
  
 `wctomb_s` utilizza le impostazioni locali correnti per le informazioni dipendenti dalle impostazioni locali; `_wctomb_s_l` è identica, ad eccezione del fatto che utilizza il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`wctomb_s`|\<stdlib.h\>|  
|`_wctomb_s_l`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Questo programma mostra il comportamento della funzione `wctomb`.  
  
```  
// crt_wctomb_s.cpp  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
    int i;  
    wchar_t wc = L'a';  
    char *pmb = (char *)malloc( MB_CUR_MAX );  
  
    printf_s( "Convert a wide character:\n" );  
    wctomb_s( &i, pmb, MB_CUR_MAX, wc );  
    printf_s( "   Characters converted: %u\n", i );  
    printf_s( "   Multibyte character: %.1s\n\n", pmb );  
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