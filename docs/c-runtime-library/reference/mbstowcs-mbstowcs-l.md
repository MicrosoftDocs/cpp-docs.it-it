---
title: "mbstowcs, _mbstowcs_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "mbstowcs"
  - "_mbstowcs_l"
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
  - "mbstowcs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_mbstowcs_l (funzione)"
  - "mbstowcs (funzione)"
  - "mbstowcs_l (funzione)"
ms.assetid: 96696b27-e068-4eeb-8006-3f7a0546ae6d
caps.latest.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 30
---
# mbstowcs, _mbstowcs_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una sequenza di caratteri multibyte in una corrispondente sequenza di caratteri wide.  Sono disponibili versioni più sicure di queste funzioni. Vedere [mbstowcs\_s, \_mbstowcs\_s\_l](../../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md).  
  
## Sintassi  
  
```  
size_t mbstowcs(  
   wchar_t *wcstr,  
   const char *mbstr,  
   size_t count   
);  
size_t _mbstowcs_l(  
   wchar_t *wcstr,  
   const char *mbstr,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
size_t mbstowcs(  
   wchar_t (&wcstr)[size],  
   const char *mbstr,  
   size_t count   
); // C++ only  
template <size_t size>  
size_t _mbstowcs_l(  
   wchar_t (&wcstr)[size],  
   const char *mbstr,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `wcstr`  
 L'indirizzo di una sequenza di caratteri wide.  
  
 \[in\] `mbstr`  
 L'indirizzo di una sequenza di caratteri multibyte con terminazione null.  
  
 \[in\] `count`  
 Numero massimo di caratteri multibyte da convertire.  
  
 \[in\] `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Se `mbstowcs` converte correttamente la stringa di origine, restituisce il numero di caratteri multibyte convertiti.  Se l'argomento di `wcstr` è `NULL`, la funzione restituisce la dimensione richiesta \(in caratteri estesi\) della stringa di destinazione.  Se `mbstowcs` rileva un carattere multibyte non valido, restituisce \-1.  Se il valore restituito è `count`, la stringa di caratteri estesi non è con terminazione null.  
  
> [!IMPORTANT]
>  Assicurarsi che `wcstr` e `mbstr` non si sovrappongano e che `count` rifletta correttamente il numero di caratteri di tipo multibyte da convertire.  
  
## Note  
 La funzione di `mbstowcs` converte fino al numero massimo di caratteri multibyte di `count` puntati da `mbstr` in una stringa di caratteri di tipo corrispondenti che sono determinati dalle impostazioni locali correnti.  Archivia la stringa di caratteri estesi risultante all'indirizzo rappresentato da `wcstr`*.* Il risultato è simile a una serie di chiamate a `mbtowc`.  Se `mbstowcs` rileva il carattere null a singolo byte \("\\0"\) o prima o dopo che si verifichi `count`, converte il carattere null in carattere null a caratteri estesi \(L'\\0"\) e termina.  Pertanto, la stringa di caratteri wide in `wcstr` ha terminazione null solo se rileva un carattere multibyte null durante la conversione.  Se le sequenze puntate da `wcstr` e `mbstr` si sovrappongono, il comportamento non è definito.  
  
 Se l'argomento di `wcstr` è `NULL`, `mbstowcs` restituisce il numero di caratteri di tipo che deriverebbero da conversione, escluso un carattere di terminazione null.  La stringa di origine deve essere con terminazione null per il valore corretto restituito.  Se si richiede che una stringa di caratteri estesi risultante sia con terminazione null, aggiungere uno al valore restituito.  
  
 Se l'argomento `mbstr` è `NULL`, o se `count` è \> `INT_MAX`, viene invocato il gestore del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, errno viene impostato su `EINVAL` e la funzione restituisce \-1.  
  
 `mbstowcs` utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; `_mbstowcs_l` è identica, ad eccezione del fatto che utilizza il parametro delle impostazioni locali passato precedentemente.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 In C\+\+, queste funzioni presentano overload dei modelli che richiamano le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`mbstowcs`|\<stdlib.h\>|  
|`_mbstowcs_l`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_mbstowcs.c  
// compile with: /W3  
// illustrates the behavior of the mbstowcs function  
  
#include <stdlib.h>  
#include <stdio.h>  
#include <locale.h>  
  
int main( void )  
{  
    size_t size;  
    int nChar = 2; // number of characters to convert  
    int requiredSize;  
  
    unsigned char    *pmbnull  = NULL;  
    unsigned char    *pmbhello = NULL;  
    char* localeInfo;  
  
    wchar_t *pwchello = L"\x3042\x3043"; // 2 Hiragana characters  
    wchar_t *pwc;  
  
    /* Enable the Japanese locale and codepage */  
    localeInfo = setlocale(LC_ALL, "Japanese_Japan.932");  
    printf("Locale information set to %s\n", localeInfo);  
  
    printf( "Convert to multibyte string:\n" );  
  
    requiredSize = wcstombs( NULL, pwchello, 0); // C4996  
    // Note: wcstombs is deprecated; consider using wcstombs_s  
    printf("  Required Size: %d\n", requiredSize);  
  
    /* Add one to leave room for the null terminator. */  
    pmbhello = (unsigned char *)malloc( requiredSize + 1);  
    if (! pmbhello)  
    {  
        printf("Memory allocation failure.\n");  
        return 1;  
    }  
    size = wcstombs( pmbhello, pwchello, requiredSize + 1); // C4996  
    // Note: wcstombs is deprecated; consider using wcstombs_s  
    if (size == (size_t) (-1))  
    {  
        printf("Couldn't convert string. Code page 932 may"  
                " not be available.\n");  
        return 1;  
    }  
    printf( "  Number of bytes written to multibyte string: %u\n",  
            (unsigned int) size );  
    printf( "  Hex values of the " );  
    printf( " multibyte characters: %#.2x %#.2x %#.2x %#.2x\n",  
            pmbhello[0], pmbhello[1], pmbhello[2], pmbhello[3] );  
    printf( "  Codepage 932 uses 0x81 to 0x9f as lead bytes.\n\n");  
  
    printf( "Convert back to wide-character string:\n" );  
  
    /* Assume we don't know the length of the multibyte string.  
     Get the required size in characters, and allocate enough space. */  
  
    requiredSize = mbstowcs(NULL, pmbhello, 0); // C4996  
    /* Add one to leave room for the NULL terminator */  
    pwc = (wchar_t *)malloc( (requiredSize + 1) * sizeof( wchar_t ));  
    if (! pwc)  
    {  
        printf("Memory allocation failure.\n");  
        return 1;  
    }  
    size = mbstowcs( pwc, pmbhello, requiredSize + 1); // C4996  
    if (size == (size_t) (-1))  
    {  
       printf("Couldn't convert string--invalid multibyte character.\n");  
    }  
    printf( "  Characters converted: %u\n", (unsigned int)size );  
    printf( "  Hex value of first 2" );  
    printf( " wide characters: %#.4x %#.4x\n\n", pwc[0], pwc[1] );  
    free(pwc);  
    free(pmbhello);  
}  
```  
  
  **Informazioni sulle impostazioni locali impostate su Japanese\_Japan.932**  
**Conversione ad una stringa multibyte:**  
 **Dimensione richieste: 4**  
 **Numero di byte scritti per una stringa multibyte: 4**  
 **Valori esadecimali di caratteri multibyte: 0x82 0xa0 0x82 0xa1**  
 **Codepage 921 use i valori 0x81 a 0x9f come byte iniziali.**  
**Riconverte una stringa di caratteri estesi:**  
 **Caratteri convertiti: 2**  
 **Valore esadecimale dei primi 2 caratteri di tipo: 0x3042 0x3043**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [\_mbclen, mblen, \_mblen\_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [mbtowc, \_mbtowc\_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [wcstombs, \_wcstombs\_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [wctomb, \_wctomb\_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)   
 [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072)