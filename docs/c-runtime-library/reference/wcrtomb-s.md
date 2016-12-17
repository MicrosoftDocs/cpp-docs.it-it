---
title: "wcrtomb_s | Microsoft Docs"
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
  - "wcrtomb_s"
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
  - "wcrtomb_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "caratteri wide, conversione"
  - "wcrtomb_s (funzione)"
  - "caratteri multibyte"
  - "caratteri, conversione"
ms.assetid: 9a8a1bd0-1d60-463d-a3a2-d83525eaf656
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# wcrtomb_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Convertire un carattere wide in una rappresentazione di caratteri multibyte. Una versione di [wcrtomb](../../c-runtime-library/reference/wcrtomb.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t wcrtomb_s(  
   size_t *pReturnValue,  
   char *mbchar,  
   size_t sizeOfmbchar,  
   wchar_t *wchar,  
   mbstate_t *mbstate  
);  
template <size_t size>  
errno_t wcrtomb_s(  
   size_t *pReturnValue,  
   char (&mbchar)[size],  
   wchar_t *wchar,  
   mbstate_t *mbstate  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `pReturnValue`  
 Restituisce il numero di byte scritti o \-1 se si è verificato un errore.  
  
 \[out\] `mbchar`  
 Multibyte risultante convertita caratteri.  
  
 \[in\] `sizeOfmbchar`  
 Le dimensioni del `mbchar` variabile in byte.  
  
 \[in\] `wchar`  
 Carattere wide da convertire.  
  
 \[in\] `mbstate`  
 Puntatore a un oggetto `mbstate_t`.  
  
## Valore restituito  
 Restituisce zero o un `errno` valore se si verifica un errore.  
  
## Note  
 Il `wcrtomb_s` funzione converte un carattere wide, a partire dallo stato di conversione specificato contenuto in `mbstate`, il valore contenuto in `wchar`, in indirizzo rappresentato da `mbchar`. Il `pReturnValue` valore sarà il numero di byte convertiti, ma non più di `MB_CUR_MAX` byte o un \-1 se si è verificato un errore.  
  
 Se `mbstate` è null, l'interno `mbstate_t` viene utilizzato lo stato di conversione. Se il carattere contenuto in `wchar` non dispone di un carattere multibyte corrispondente, il valore di `pReturnValue` sarà \-1 e la funzione restituirà il `errno` valore `EILSEQ`.  
  
 Il `wcrtomb_s` la funzione differisce da [wctomb\_s, \_wctomb\_s\_l](../../c-runtime-library/reference/wctomb-s-wctomb-s-l.md) dal relativo riavviabilità. Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione potrebbe utilizzare `wcsrlen` anziché `wcslen`, se una chiamata successiva a `wcsrtombs_s` utilizzati al posto di `wcstombs_s.`  
  
 In C\+\+, l'utilizzo di questa funzione è semplificato dagli overload dei modelli; gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Eccezioni  
 Il `wcrtomb_s` funzione è multithread\-safe finché nessuna funzione nel thread corrente chiama `setlocale` durante l'esecuzione di questa funzione e `mbstate` è null.  
  
## Esempio  
  
```  
// crt_wcrtomb_s.c  
// This program converts a wide character  
// to its corresponding multibyte character.  
//  
  
#include <string.h>  
#include <stdio.h>  
#include <wchar.h>  
  
int main( void )  
{  
    errno_t     returnValue;  
    size_t      pReturnValue;  
    mbstate_t   mbstate;  
    size_t      sizeOfmbStr = 1;  
    char        mbchar = 0;  
    wchar_t*    wchar = L"Q\0";  
  
    // Reset to initial conversion state  
    memset(&mbstate, 0, sizeof(mbstate));  
  
    returnValue = wcrtomb_s(&pReturnValue, &mbchar, sizeof(char),  
                            *wchar, &mbstate);  
    if (returnValue == 0) {  
        printf("The corresponding wide character \"");  
        wprintf(L"%s\"", wchar);  
        printf(" was converted to a the \"%c\" ", mbchar);  
        printf("multibyte character.\n");  
    }  
    else  
    {  
        printf("No corresponding multibyte character "  
               "was found.\n");  
    }  
}  
```  
  
```Output  
Il carattere wide corrispondente "Q" è stato convertito in un carattere multibyte "Q".  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`wcrtomb_s`|\<wchar.h\>|  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)