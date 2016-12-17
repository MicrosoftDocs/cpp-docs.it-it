---
title: "_scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_scwprintf_p"
  - "_scprintf_p_l"
  - "_scwprintf_p_l"
  - "_scprintf_p"
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
apitype: "DLLExport"
f1_keywords: 
  - "_scwprintf_p_l"
  - "_sctprintf_p"
  - "scprintf_p_l"
  - "scprintf_p"
  - "_sctprintf_p_l"
  - "scwprintf_p"
  - "_scprintf_p_l"
  - "scwprintf_p_l"
  - "_scprintf_p"
  - "_scwprintf_p"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_scprintf_p (funzione)"
  - "_scprintf_p_l (funzione)"
  - "_sctprintf_p (funzione)"
  - "_sctprintf_p_l (funzione)"
  - "_scwprintf_p (funzione)"
  - "_scwprintf_p_l (funzione)"
  - "scprintf_p (funzione)"
  - "scprintf_p_l (funzione)"
  - "sctprintf_p (funzione)"
  - "sctprintf_p_l (funzione)"
  - "scwprintf_p (funzione)"
  - "scwprintf_p_l (funzione)"
ms.assetid: 8390d1e1-2826-47a4-851f-6635a88087cc
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce il numero di caratteri nella stringa formattata, con la possibilità di specificare l'ordine in cui i parametri vengono utilizzati nella stringa di formato.  
  
## Sintassi  
  
```  
int _scprintf_p(  
   const char *format [,  
   argument] ...   
);  
int _scprintf_p_l(  
   const char *format,  
   locale_t locale [,  
   argument] ...   
);  
int _scwprintf_p (  
   const wchar_t *format [,  
   argument] ...   
);  
int _scwprintf_p _l(  
   const wchar_t *format,  
   locale_t locale [,  
   argument] ...   
);  
```  
  
#### Parametri  
 `format`  
 Stringa di controllo del formato.  
  
 `argument`  
 Argomenti facoltativi.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce il numero di caratteri che verrebbero generati se la stringa dovesse essere stampata o mandata ad un file o un buffer tramite i codici di formattazione specificati.  Il valore restituito non include il carattere di terminazione null.  `_scwprintf_p` esegue la stessa funzione per i caratteri di tipo "wide".  
  
 La differenza tra `_scprintf_p` e `_scprintf` è che `_scprintf_p` supporta i parametri posizionali, che consentono di specificare l'ordine in cui gli argomenti vengono utilizzati nella stringa di formato.  Per ulteriori informazioni, vedere [Parametri posizionali printf\_p](../../c-runtime-library/printf-p-positional-parameters.md).  
  
 Se `format` è un `NULL` puntatore null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` su `EINVAL`.  
  
 Per ulteriori informazioni su questi e altri codici, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Ogni `argument` \(se presente\) viene convertito in base alla tipo di formato specificato in `format`.  Il formato è costituito da caratteri ordinari e ha lo stesso formato e la stessa funzione dell'argomento `format` per la funzione [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_sctprintf_p`|`_scprintf_p`|`_scprintf_p`|`_scwprintf_p`|  
|`_sctprintf_p_l`|`_scprintf_p_l`|`_scprintf_p_l`|`_scwprintf_p_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_scprintf_p`, `_scprintf_p_l`|\<stdio.h\>|  
|`_scwprintf_p`, `_scwprintf_p_l`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [\_scprintf, \_scprintf\_l, \_scwprintf, \_scwprintf\_l](../../c-runtime-library/reference/scprintf-scprintf-l-scwprintf-scwprintf-l.md)   
 [\_printf\_p, \_printf\_p\_l, \_wprintf\_p, \_wprintf\_p\_l](../../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)