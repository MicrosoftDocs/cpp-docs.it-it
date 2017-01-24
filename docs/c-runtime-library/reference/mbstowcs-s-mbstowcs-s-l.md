---
title: "mbstowcs_s, _mbstowcs_s_l | Microsoft Docs"
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
  - "_mbstowcs_s_l"
  - "mbstowcs_s"
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
  - "_mbstowcs_s_l"
  - "mbstowcs_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbstowcs_s_l (funzione)"
  - "mbstowcs_s (funzione)"
  - "mbstowcs_s_l (funzione)"
ms.assetid: 2fbda953-6918-498f-b440-3e7b21ed65a4
caps.latest.revision: 31
caps.handback.revision: 31
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# mbstowcs_s, _mbstowcs_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Converte una sequenza di caratteri multibyte in una corrispondente sequenza di caratteri wide.  Versioni di [mbstowcs, \_mbstowcs\_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t mbstowcs_s(  
   size_t *pReturnValue,  
   wchar_t *wcstr,  
   size_t sizeInWords,  
   const char *mbstr,  
   size_t count   
);  
errno_t _mbstowcs_s_l(  
   size_t *pReturnValue,  
   wchar_t *wcstr,  
   size_t sizeInWords,  
   const char *mbstr,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
errno_t mbstowcs_s(  
   size_t *pReturnValue,  
   wchar_t (&wcstr)[size],  
   const char *mbstr,  
   size_t count   
); // C++ only  
template <size_t size>  
errno_t _mbstowcs_s_l(  
   size_t *pReturnValue,  
   wchar_t (&wcstr)[size],  
   const char *mbstr,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `pReturnValue`  
 Numero di caratteri convertiti.  
  
 \[out\] `wcstr`  
 L'indirizzo del buffer per la risultante stringa convertita con caratteri estesi.  
  
 \[in\] `sizeInWords`  
 Dimensione del buffer `wcstr` in parole.  
  
 \[in\]`mbstr`  
 L'indirizzo di una sequenza di caratteri multibyte con terminazione null.  
  
 \[in\] `count`  
 Il numero massimo di caratteri di tipo wide da memorizzare nel buffer `wcstr`, escluso il carattere di terminazione null, o [\_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 \[in\] `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Zero se ha esito positivo, un codice di errore in caso di errore.  
  
|Condizione di errore|Valore di ritorno e `errno`|  
|--------------------------|---------------------------------|  
|`wcstr` è `NULL` e `sizeInWords` \> 0|`EINVAL`|  
|`mbstr` è `NULL`.|`EINVAL`|  
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita \(a meno che `count` sia `_TRUNCATE`; vedere i commenti di seguito\)|`ERANGE`|  
|`wcstr` non è `NULL` e `sizeInWords` \=\= 0|`EINVAL`|  
  
 Se tutte le condizioni si verificano, l'eccezione del parametro non valido viene invocata come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se all'esecuzione è permesso continuare, la funzione restituisce un codice di errore e imposta `errno` come indicato nella tabella.  
  
## Note  
 La funzione `mbstowcs_s` converte una stringa di caratteri di tipo multibyte puntati da `mbstr` nei caratteri wide memorizzati nel buffer puntato da `wcstr`.  La conversione continuerà per ogni carattere finché non verrà soddisfatta una di queste condizioni:  
  
-   Viene rilevato un carattere null multibyte  
  
-   Viene rilevato un carattere multibyte non valido  
  
-   Il numero di caratteri wide memorizzati nel buffer `wcstr` equivale a `count`.  
  
 La stringa di destinazione è sempre con terminazione null \(anche in caso di errore\).  
  
 Se `count` è il valore speciale [\_TRUNCATE](../../c-runtime-library/truncate.md), allora `mbstowcs_s` converte la stringa finché ci sta nel buffer di destinazione, pur lasciando spazio per un terminatore null.  
  
 Se `mbstowcs_s` converte correttamente la stringa di origine, inserisce la dimensione in caratteri wide della stringa convertita, incluso il terminatore null, in `*``pReturnValue` \(il valore fornito `pReturnValue` non è `NULL`\).  Questo accade anche se l'argomento `wcstr` è `NULL` e consente di determinare la dimensione del buffer richiesto.  Si noti che se `wcstr` è `NULL`, `count` viene ignorato e `sizeInWords` deve essere 0.  
  
 Se `mbstowcs_s` rileva un carattere multibyte non valido, inserisce 0 in `*``pReturnValue`, imposta il buffer di destinazione con una stringa vuota, imposta `errno` a `EILSEQ` e restituisce `EILSEQ`.  
  
 Se le sequenze puntate da `mbstr` e sovrapposizione `wcstr`, il comportamento `mbstowcs_s` non è definito.  
  
> [!IMPORTANT]
>  Assicurarsi che `wcstr` e `mbstr` non si sovrappongano e che `count` rifletta correttamente il numero di caratteri di tipo multibyte da convertire.  
  
 `mbstowcs_s` utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; `_mbstowcs_s_l` è identica, ad eccezione del fatto che utilizza il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`mbstowcs_s`|\<stdlib.h\>|  
|`_mbstowcs_s_l`|\<stdlib.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [\_mbclen, mblen, \_mblen\_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [mbtowc, \_mbtowc\_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [wcstombs, \_wcstombs\_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [wctomb, \_wctomb\_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)