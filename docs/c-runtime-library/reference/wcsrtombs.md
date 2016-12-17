---
title: "wcsrtombs | Microsoft Docs"
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
  - "wcsrtombs"
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
  - "wcsrtombs"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wcsrtombs (funzione)"
  - "conversione di stringhe, caratteri wide"
  - "caratteri wide, stringhe"
ms.assetid: a8d21fec-0d36-4085-9d81-9b1c61c7259d
caps.latest.revision: 26
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# wcsrtombs
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una stringa di caratteri estesi nella relativa rappresentazione di stringa di caratteri multibyte.  È disponibile una versione più sicura di questa funzione; consultare [wcsrtombs\_s](../../c-runtime-library/reference/wcsrtombs-s.md).  
  
## Sintassi  
  
```  
size_t wcsrtombs(  
   char *mbstr,  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
);  
template <size_t size>  
size_t wcsrtombs(  
   char (&mbstr)[size],  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `mbstr`  
 La posizione dell'indirizzo della stringa convertita in caratteri multibyte risultante.  
  
 \[in\] `wcstr`  
 Punta indirettamente al percorso della stringa di caratteri wide da convertire.  
  
 \[in\] `count`  
 Numero di caratteri da convertire.  
  
 \[in\] `mbstate`  
 Un puntatore a un oggetto di conversione di stato `mbstate_t`.  
  
## Valore restituito  
 Restituisce il numero di byte convertite correttamente, escluso il byte di terminazione null se presente, in caso contrario restituisce \-1 se si è verificato un errore.  
  
## Note  
 La funzione `wcsrtombs` converte una stringa di caratteri wide, a partire dallo stato specificato di conversione contenuto in `mbstate`, dai valori indirettamente puntati da `wcstr`, negli indirizzi di `mbstr`.  La conversione continua per ogni carattere fino a quando non viene rilevato un carattere wide di terminazione null, oppure quando viene rilevato un carattere non concordante o quando il carattere successivo eccede il limite specificato in `count`.  Se `wcsrtombs` rileva il carattere wide null \(L'\\0'\) o prima o in corrispondenza di `count`, lo converte in uno 0 ad 8 bit e si arresta.  
  
 Pertanto, la stringa di caratteri multibyte in `mbstr` ha terminazione null solo se `wcsrtombs` rileva un carattere wide null durante la conversione.  Se le sequenze puntate da `wcstr` e sovrapposizione `mbstr`, il comportamento `wcsrtombs` non è definito.  `wcsrtombs` è influenzata dalla categoria di LC\_TYPE delle impostazioni locali correnti.  
  
 La funzione `wcsrtombs` differisce da [wcstombs, \_wcstombs\_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md) dalla sua possibilità di essere avviata nuovamente.  Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alla stessa o ad altre funzioni avviabili nuovamente.  I risultati non sono definiti quando si combina l'utilizzo delle funzioni avviabili nuovamente e non avviabili nuovamente.  Ad esempio, un'applicazione utilizzerebbe `wcsrlen` anziché `wcsnlen`, se è stata utilizzata una chiamata successiva a `wcsrtombs` al posto di `wcstombs`.  
  
 Se l'argomento `mbstr` è `NULL`, `wcsrtombs` restituisce la dimensione necessaria in byte della stringa di destinazione.  Se `mbstate` è null, viene utilizzato lo stato interno di conversione di `mbstate_t`.  Se la sequenza di caratteri `wchar` non dispone di una rappresentazione di caratteri multibyte corrispondente, viene restituito un \-1 e `errno` viene impostato a `EILSEQ`.  
  
 In C\+\+, questa funzione presenta un overload del modello che invoca le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Eccezioni  
 La funzione `wcsrtombs` è multithread\-safe mentre nessuna funzione nella thread corrente chiama `setlocale` mentre questa funzione è in esecuzione e `mbstate` non è null.  
  
## Esempio  
  
```  
// crt_wcsrtombs.cpp  
// compile with: /W3  
// This code example converts a wide  
// character string into a multibyte  
// character string.  
  
#include <stdio.h>  
#include <memory.h>  
#include <wchar.h>  
#include <errno.h>  
  
#define MB_BUFFER_SIZE 100  
  
int main()  
{  
    const wchar_t   wcString[] =   
                    {L"Every good boy does fine."};  
    const wchar_t   *wcsIndirectString = wcString;  
    char            mbString[MB_BUFFER_SIZE];  
    size_t          countConverted;  
    mbstate_t       mbstate;  
  
    // Reset to initial shift state  
    ::memset((void*)&mbstate, 0, sizeof(mbstate));  
  
    countConverted = wcsrtombs(mbString, &wcsIndirectString,  
                               MB_BUFFER_SIZE, &mbstate); // C4996  
    // Note: wcsrtombs is deprecated; consider using wcsrtombs_s  
    if (errno == EILSEQ)  
    {  
        printf( "An encoding error was detected in the string.\n" );  
    }  
    else   
    {  
        printf( "The string was successfuly converted.\n" );  
    }  
}  
```  
  
  **La stringa è stata convertita con successo.**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`wcsrtombs`|\<wchar.h\>|  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [wcrtomb](../../c-runtime-library/reference/wcrtomb.md)   
 [wcrtomb\_s](../../c-runtime-library/reference/wcrtomb-s.md)   
 [wctomb, \_wctomb\_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)   
 [wcstombs, \_wcstombs\_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)