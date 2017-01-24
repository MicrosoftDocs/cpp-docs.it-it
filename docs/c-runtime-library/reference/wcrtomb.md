---
title: "wcrtomb | Microsoft Docs"
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
  - "wcrtomb"
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
  - "wcrtomb"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "caratteri, conversione"
  - "caratteri multibyte"
  - "wcrtomb (funzione)"
  - "caratteri wide, conversione"
ms.assetid: 717f1b21-2705-4b7f-b6d0-82adc5224340
caps.latest.revision: 26
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# wcrtomb
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte un carattere wide nella relativa rappresentazione di caratteri multibyte.  È disponibile una versione più sicura di questa funzione; vedere [wcrtomb\_s](../../c-runtime-library/reference/wcrtomb-s.md).  
  
## Sintassi  
  
```  
size_t wcrtomb(  
   char *mbchar,  
   wchar_t wchar,  
   mbstate_t *mbstate  
);  
template <size_t size>  
size_t wcrtomb(  
   char (&mbchar)[size],  
   wchar_t wchar,  
   mbstate_t *mbstate  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `mbchar`  
 Il carattere convertito multibyte risultante.  
  
 \[in\] `wchar`  
 Un carattere wide da convertire  
  
 \[in\] `mbstate`  
 Un puntatore ad un oggetto `mbstate_t`.  
  
## Valore restituito  
 Restituisce il numero di byte necessari per rappresentare il carattere multibyte convertito, altrimenti un \-1 se si verifica un errore.  
  
## Note  
 La funzione `wcrtomb` converte un carattere wide, a partire dallo stato specificato di conversione contenuto in `mbstate`, dal valore contenuto in `wchar`, nell'indirizzo rappresentato da `mbchar`.  Il valore restituito è il numero di byte necessari per rappresentare il carattere multibyte corrispondente, ma non restituirà più byte di `MB_CUR_MAX`.  
  
 Se `mbstate` è null, viene utilizzato l'oggetto interno `mbstate_t` contenente lo stato di conversione di `mbchar`.  Se la sequenza di caratteri `wchar` non dispone di una rappresentazione di caratteri multibyte corrispondente, viene restituito un \-1 e `errno` viene impostato a `EILSEQ`.  
  
 La funzione `wcrtomb` differisce da [wctomb, \_wctomb\_l](../../c-runtime-library/reference/wctomb-wctomb-l.md) dalla sua possibilità di essere avviata nuovamente.  Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alla stessa o ad altre funzioni avviabili nuovamente.  I risultati non sono definiti quando si combina l'utilizzo delle funzioni avviabili nuovamente e non avviabili nuovamente.  Ad esempio, un'applicazione utilizzerebbe `wcsrlen` anziché `wcsnlen`, se è stata utilizzata una chiamata successiva a `wcsrtombs` al posto di `wcstombs`.  
  
 In C\+\+, questa funzione presenta un overload del modello che invoca le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Eccezioni  
 La funzione `wcrtomb` è multithread\-safe mentre nessuna funzione nella thread corrente chiama `setlocale` mentre questa funzione è in esecuzione e `mbstate` è null.  
  
## Esempio  
  
```  
// crt_wcrtomb.c  
// compile with: /W3  
// This program converts a wide character  
// to its corresponding multibyte character.  
  
#include <string.h>  
#include <stdio.h>  
#include <wchar.h>  
  
int main( void )  
{  
    size_t      sizeOfCovertion = 0;  
    mbstate_t   mbstate;  
    char        mbStr = 0;  
    wchar_t*    wcStr = L"Q";  
  
    // Reset to initial conversion state  
    memset(&mbstate, 0, sizeof(mbstate));  
  
    sizeOfCovertion = wcrtomb(&mbStr, *wcStr, &mbstate); // C4996  
    // Note: wcrtomb is deprecated; consider using wcrtomb_s instead  
    if (sizeOfCovertion > 0)  
    {  
        printf("The corresponding wide character \"");  
        wprintf(L"%s\"", wcStr);  
        printf(" was converted to the \"%c\" ", mbStr);  
        printf("multibyte character.\n");  
    }  
    else  
    {  
        printf("No corresponding multibyte character "  
               "was found.\n");  
    }  
}  
```  
  
  **Il carattere wide corrispondente "Q" è stato convertito nel carattere multibyte "Q".**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`wcrtomb`|\<wchar.h\>|  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)