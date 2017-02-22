---
title: "wcsrtombs_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "wcsrtombs_s"
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
  - "wcsrtombs_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "conversione di stringhe, caratteri "wide""
  - "wcsrtombs_s (funzione)"
  - "caratteri wide, stringhe"
ms.assetid: 9dccb766-113c-44bb-9b04-07a634dddec8
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 27
---
# wcsrtombs_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una stringa di caratteri estesi nella relativa rappresentazione di stringa di caratteri multibyte.  Una versione di [wcsrtombs](../../c-runtime-library/reference/wcsrtombs.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t wcsrtombs_s(  
   size_t *pReturnValue,  
   char *mbstr,  
   size_t sizeInBytes,  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
);  
template <size_t size>  
errno_t wcsrtombs_s(  
   size_t *pReturnValue,  
   char (&mbstr)[size],  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `pReturnValue`  
 Numero di caratteri convertiti.  
  
 \[out\] `mbstr`  
 L'indirizzo di un buffer per la stringa convertita risultante di caratteri multibyte.  
  
 \[out\] `sizeInBytes`  
 La dimensione, in byte, del buffer `mbstr`.  
  
 \[in\] `wcstr`  
 Punta alla stringa di caratteri estesi da convertire.  
  
 \[in\] `count`  
 Numero massimo di byte da memorizzare nel buffer di `mbstr`, o [\_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 \[in\] `mbstate`  
 Un puntatore a un oggetto di conversione di stato `mbstate_t`.  
  
## Valore restituito  
 Zero se ha esito positivo, un codice di errore in caso di errore.  
  
|Condizione di errore|Valore di ritorno e `errno`|  
|--------------------------|---------------------------------|  
|`mbstr` è `NULL` e `sizeInBytes` \> 0|`EINVAL`|  
|`wcstr` è `NULL`.|`EINVAL`|  
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita \(a meno che `count` sia `_TRUNCATE`; vedere i commenti di seguito\)|`ERANGE`|  
  
 Se tutte le condizioni si verificano, l'eccezione del parametro non valido viene invocata come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se all'esecuzione è permesso continuare, la funzione restituisce un codice di errore e imposta `errno` come indicato nella tabella.  
  
## Note  
 La funzione di `wcsrtombs_s` converte una stringa di caratteri di tipo puntati da `wcstr` in caratteri multibyte memorizzati nel buffer puntato da `mbstr`, utilizzando lo stato di conversione contenuto in `mbstate`.  La conversione continuerà per ogni carattere finché non verrà soddisfatta una di queste condizioni:  
  
-   Un carattere null di tipo "wide" viene rilevato  
  
-   Un carattere di tipo "wide" che non può essere convertito viene rilevato  
  
-   Il numero di byte memorizzati nel buffer `mbstr` equivale a `count`.  
  
 La stringa di destinazione è sempre con terminazione null \(anche in caso di errore\).  
  
 Se `count` è il valore speciale [\_TRUNCATE](../../c-runtime-library/truncate.md), allora `wcsrtombs_s` converte la stringa finché ci sta nel buffer di destinazione, pur lasciando spazio per un terminatore null.  
  
 Se `wcsrtombs_s` converte correttamente la stringa di origine, inserisce la dimensione in byte della stringa convertita, incluso il terminatore null, in `*``pReturnValue` \(il valore fornito `pReturnValue` non è `NULL`\).  Questo accade anche se l'argomento `mbstr` è `NULL` e consente di determinare la dimensione del buffer richiesto.  Si noti che se `mbstr` è `NULL`, `count` viene ignorato.  
  
 Se `wcsrtombs_s` rileva un carattere di tipo "wide" non può convertire in un carattere multibyte, viene inserito 1 in `*``pReturnValue`, imposta il buffer di destinazione su una stringa vuota, imposta `errno` a `EILSEQ`, e restituisce `EILSEQ`.  
  
 Se le sequenze puntate da `wcstr` e sovrapposizione `mbstr`, il comportamento `wcsrtombs_s` non è definito.  `wcsrtombs_s` è influenzata dalla categoria di LC\_TYPE delle impostazioni locali correnti.  
  
> [!IMPORTANT]
>  Assicurarsi che `wcstr` e `mbstr` non si sovrappongano e che `count` rifletta correttamente il numero di caratteri di tipo "wide" per la conversione.  
  
 La funzione `wcsrtombs_s` differisce da [wcstombs\_s, \_wcstombs\_s\_l](../../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md) dalla sua possibilità di essere avviata nuovamente.  Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alla stessa o ad altre funzioni avviabili nuovamente.  I risultati non sono definiti quando si combina l'utilizzo delle funzioni avviabili nuovamente e non avviabili nuovamente.  Ad esempio, un'applicazione utilizzerebbe `wcsrlen` anziché `wcslen`, se è stata utilizzata una chiamata successiva a `wcsrtombs_s` al posto di `wcstombs_s.`  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Eccezioni  
 La funzione `wcsrtombs_s` è multithread\-safe mentre nessuna funzione nella thread corrente chiama `setlocale` mentre questa funzione è in esecuzione e `mbstate` è null.  
  
## Esempio  
  
```  
// crt_wcsrtombs_s.cpp  
//   
// This code example converts a wide  
// character string into a multibyte  
// character string.  
//  
  
#include <stdio.h>  
#include <memory.h>  
#include <wchar.h>  
#include <errno.h>  
  
#define MB_BUFFER_SIZE 100  
  
void main()  
{  
    const wchar_t   wcString[] =   
                    {L"Every good boy does fine."};  
    const wchar_t   *wcsIndirectString = wcString;  
    char            mbString[MB_BUFFER_SIZE];  
    size_t          countConverted;  
    errno_t         err;  
    mbstate_t       mbstate;  
  
    // Reset to initial shift state  
    ::memset((void*)&mbstate, 0, sizeof(mbstate));  
  
    err = wcsrtombs_s(&countConverted, mbString, MB_BUFFER_SIZE,  
                      &wcsIndirectString, MB_BUFFER_SIZE, &mbstate);  
    if (err == EILSEQ)  
    {  
        printf( "An encoding error was detected in the string.\n" );  
    }  
    else   
    {  
        printf( "The string was successfully converted.\n" );  
    }  
}  
```  
  
  **La stringa è stata convertita correttamente.**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`wcsrtombs_s`|\<wchar.h\>|  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [wcrtomb](../../c-runtime-library/reference/wcrtomb.md)   
 [wcrtomb\_s](../../c-runtime-library/reference/wcrtomb-s.md)   
 [wctomb, \_wctomb\_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)   
 [wcstombs, \_wcstombs\_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)