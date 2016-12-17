---
title: "wcstombs, _wcstombs_l | Microsoft Docs"
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
  - "wcstombs"
  - "_wcstombs_l"
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
  - "wcstombs"
  - "_wcstombs_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_wcstombs_l (funzione)"
  - "caratteri, conversione"
  - "conversione di stringhe, stringhe di caratteri multibyte"
  - "conversione di stringhe, caratteri "wide""
  - "wcstombs (funzione)"
  - "wcstombs_l (funzione)"
  - "caratteri wide, conversione"
ms.assetid: 91234252-9ea1-423a-af99-e9d0ce4a40e3
caps.latest.revision: 30
caps.handback.revision: 28
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# wcstombs, _wcstombs_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una sequenza di caratteri di tipo "wide" a una corrispondente sequenza di caratteri multibyte.  Sono disponibili versioni più sicure di queste funzioni. Vedere [wcstombs\_s, \_wcstombs\_s\_l](../../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md).  
  
## Sintassi  
  
```  
size_t wcstombs(  
   char *mbstr,  
   const wchar_t *wcstr,  
   size_t count   
);  
size_t _wcstombs_l(  
   char *mbstr,  
   const wchar_t *wcstr,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
size_t wcstombs(  
   char (&mbstr)[size],  
   const wchar_t *wcstr,  
   size_t count   
); // C++ only  
template <size_t size>  
size_t _wcstombs_l(  
   char (&mbstr)[size],  
   const wchar_t *wcstr,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 `mbstr`  
 L'indirizzo di una sequenza di caratteri multibyte.  
  
 `wcstr`  
 L'indirizzo di una sequenza di caratteri wide.  
  
 `count`  
 Il numero massimo di byte che possono essere memorizzati nella stringa multibyte di output.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Se `wcstombs` converte correttamente la stringa multibyte, restituisce il numero di byte scritti nella stringa multibyte di output, escluso il `NULL` di terminazione \(se presente\).  Se l'argomento `mbstr` è `NULL`, `wcstombs` restituisce la dimensione necessaria in byte della stringa di destinazione.  Se `wcstombs` rileva un carattere wide non può convertirlo in un carattere multibyte, restituisce \-1 con cast al tipo `size_t` ed imposta `errno` a `EILSEQ`.  
  
## Note  
 La funzione `wcstombs` converte la stringa con caratteri wide puntata da `wcstr` ai caratteri multibyte corrispondenti e memorizza i risultati nell'array `mbstr`.  Il parametro `count` indica il numero massimo di byte che possono essere memorizzati nella stringa multibyte di output \(ovvero la dimensione di `mbstr`\).  In genere non si conosce il numero di byte che saranno necessari quando si converte una stringa di caratteri wide.  Alcuni caratteri wide richiedono solo un byte nella stringa di output; altri ne richiedono due.  Se vi sono due byte nella stringa multibyte di output per ogni carattere wide nella stringa di input \(incluso il carattere wide `NULL`\), si ha la certezza che le dimensioni siano sufficienti.  
  
 Se `wcstombs` rileva il carattere wide null \(L'\\0'\) o prima o in corrispondenza di `count`, lo converte in uno 0 ad 8 bit e si arresta.  Pertanto, la stringa di caratteri multibyte in `mbstr` ha terminazione null solo se `wcstombs` rileva un carattere wide null durante la conversione.  Se le sequenze puntate da `wcstr` e sovrapposizione `mbstr`, il comportamento `wcstombs` non è definito.  
  
 Se l'argomento `mbstr` è `NULL`, `wcstombs` restituisce la dimensione necessaria in byte della stringa di destinazione.  
  
 `wcstombs` convalida i suoi parametri.  Se `wcstr` è `NULL`, o se `count` è maggiore di `INT_MAX`, questa funzione invoca il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` a `EINVAL` e restituisce \-1.  
  
 `wcstombs` utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; `_wcstombs_l` è identica, ad eccezione del fatto che utilizza il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 In C\+\+, queste funzioni presentano overload dei modelli che richiamano le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`wcstombs`|\<stdlib.h\>|  
|`_wcstombs_l`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Questo programma mostra il comportamento della funzione `wcstombs`.  
  
```  
// crt_wcstombs.c  
// compile with: /W3  
// This example demonstrates the use  
// of wcstombs, which converts a string  
// of wide characters to a string of   
// multibyte characters.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
#define BUFFER_SIZE 100  
  
int main( void )  
{  
    size_t  count;  
    char    *pMBBuffer = (char *)malloc( BUFFER_SIZE );  
    wchar_t *pWCBuffer = L"Hello, world.";  
  
    printf("Convert wide-character string:\n" );  
  
    count = wcstombs(pMBBuffer, pWCBuffer, BUFFER_SIZE ); // C4996  
    // Note: wcstombs is deprecated; consider using wcstombs_s instead  
    printf("   Characters converted: %u\n",  
            count );  
    printf("    Multibyte character: %s\n\n",  
           pMBBuffer );  
  
    free(pMBBuffer);  
}  
```  
  
  **Convertire una stringa di caratteri wide:**  
 **Caratteri convertiti: 13**  
 **Carattere multibyte: Hello, world.**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [\_mbclen, mblen, \_mblen\_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [mbstowcs, \_mbstowcs\_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbtowc, \_mbtowc\_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [wctomb, \_wctomb\_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)   
 [WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)