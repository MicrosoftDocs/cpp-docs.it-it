---
title: "wcstombs_s, _wcstombs_s_l | Microsoft Docs"
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
  - "_wcstombs_s_l"
  - "wcstombs_s"
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
  - "wcstombs_s"
  - "_wcstombs_s_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wcstombs_s (funzione)"
  - "conversione di stringhe, caratteri wide"
  - "caratteri wide, conversione"
  - "_wcstombs_s_l (funzione)"
  - "wcstombs_s_l (funzione)"
  - "caratteri, conversione"
  - "conversione di stringhe, stringhe di caratteri multibyte"
ms.assetid: 105f2d33-221a-4f6d-864c-23c1865c42af
caps.latest.revision: 31
caps.handback.revision: 31
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# wcstombs_s, _wcstombs_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una sequenza di caratteri wide in una sequenza di caratteri multibyte corrispondente. Una versione di [wcstombs, \_wcstombs\_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md) con miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t wcstombs_s(  
   size_t *pReturnValue,  
   char *mbstr,  
   size_t sizeInBytes,  
   const wchar_t *wcstr,  
   size_t count   
);  
errno_t _wcstombs_s_l(  
   size_t *pReturnValue,  
   char *mbstr,  
   size_t sizeInBytes,  
   const wchar_t *wcstr,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
errno_t wcstombs_s(  
   size_t *pReturnValue,  
   char (&mbstr)[size],  
   const wchar_t *wcstr,  
   size_t count   
); // C++ only  
template <size_t size>  
errno_t _wcstombs_s_l(  
   size_t *pReturnValue,  
   char (&mbstr)[size],  
   const wchar_t *wcstr,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `pReturnValue`  
 Numero di caratteri convertiti.  
  
 \[out\] `mbstr`  
 L'indirizzo di un buffer per la stringa di caratteri multibyte convertita risultante.  
  
 \[in\]`sizeInBytes`  
 La dimensione in byte del `mbstr` buffer.  
  
 \[in\] `wcstr`  
 Punta alla stringa di caratteri wide da convertire.  
  
 \[in\] `count`  
 Il numero massimo di byte da archiviare nel `mbstr` buffer, escluso il carattere di terminazione null, o [\_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 \[in\] `locale`  
 Impostazioni locali da usare.  
  
## Valore restituito  
 Zero se ha esito positivo, un codice di errore.  
  
|Condizione di errore|Valore restituito e `errno`|  
|--------------------------|---------------------------------|  
|`mbstr` è `NULL` e `sizeInBytes` \> 0|`EINVAL`|  
|`wcstr` è `NULL`|`EINVAL`|  
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita \(a meno che non `count` è `_TRUNCATE`; vedere la sezione Osservazioni riportata di seguito\)|`ERANGE`|  
  
 Se si verifica uno qualsiasi di queste condizioni, l'eccezione di parametro non valido viene richiamato come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, la funzione restituisce un codice errore e imposta `errno` come indicato nella tabella.  
  
## Note  
 Il `wcstombs_s` funzione converte una stringa di caratteri wide a cui puntata `wcstr` in caratteri multibyte memorizzati nel buffer a cui puntato `mbstr`. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:  
  
-   Viene rilevato un carattere wide null  
  
-   Viene rilevato un carattere wide che non può essere convertito  
  
-   Il numero di byte archiviato nel `mbstr` buffer uguale a `count`.  
  
 La stringa di destinazione è sempre con terminazione null \(anche in caso di errore\).  
  
 Se `count` è il valore speciale [\_TRUNCATE](../../c-runtime-library/truncate.md), quindi `wcstombs_s` Converte la porzione della stringa come rientrano nel buffer di destinazione, lasciando comunque lo spazio per una terminazione null.  
  
 Se `wcstombs_s` converte correttamente la stringa di origine, inserisce la dimensione in byte della stringa convertita, compreso il terminatore null, in `*``pReturnValue` \(fornito `pReturnValue` non `NULL`\). Questo errore si verifica anche se il `mbstr` è `NULL` e fornisce un modo per determinare le dimensioni del buffer richiesto. Si noti che se `mbstr` è `NULL`, `count` viene ignorato.  
  
 Se `wcstombs_s` rileva un carattere wide, non è possibile convertire un carattere multibyte, inserisce 0 in `*``pReturnValue`, imposta il buffer di destinazione in una stringa vuota, imposta `errno` a `EILSEQ`, e restituisce `EILSEQ`.  
  
 Se le sequenze a cui punta `wcstr` e `mbstr` si sovrappongono, il comportamento di `wcstombs_s` non è definito.  
  
> [!IMPORTANT]
>  Assicurarsi che `wcstr` e `mbstr` non si sovrappongano e che `count` riflette correttamente il numero di caratteri wide da convertire.  
  
 `wcstombs_s` utilizza le impostazioni locali correnti per qualsiasi comportamento dipende dalla lingua. `_wcstombs_s_l` è identico a `wcstombs` ad eccezione del fatto che utilizza le impostazioni locali passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`wcstombs_s`|\<stdlib.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Questo programma viene illustrato il comportamento del `wcstombs_s` \(funzione\).  
  
```  
// crt_wcstombs_s.c  
// This example converts a wide character  
// string to a multibyte character string.  
#include <stdio.h>  
#include <stdlib.h>  
#include <assert.h>  
  
#define BUFFER_SIZE 100  
  
int main( void )  
{  
    size_t   i;  
    char      *pMBBuffer = (char *)malloc( BUFFER_SIZE );  
    wchar_t*pWCBuffer = L"Hello, world.";  
  
    printf( "Convert wide-character string:\n" );  
  
    // Conversion  
    wcstombs_s(&i, pMBBuffer, (size_t)BUFFER_SIZE,   
               pWCBuffer, (size_t)BUFFER_SIZE );  
  
    // Output  
    printf("   Characters converted: %u\n", i);  
    printf("    Multibyte character: %s\n\n",  
     pMBBuffer );  
  
    // Free multibyte character buffer  
    if (pMBBuffer)  
    {  
    free(pMBBuffer);  
    }  
}  
```  
  
```Output  
Convertire una stringa di caratteri wide: caratteri convertiti: 14 caratteri Multibyte: Hello, world.  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [\_mbclen, mblen, \_mblen\_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [mbstowcs, \_mbstowcs\_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbtowc, \_mbtowc\_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [wctomb\_s, \_wctomb\_s\_l](../../c-runtime-library/reference/wctomb-s-wctomb-s-l.md)   
 [WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)