---
title: "_vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_vwprintf_p"
  - "_vprintf_p"
  - "_vprintf_p_l"
  - "_vwprintf_p_l"
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
  - "_vwprintf_p_l"
  - "vprintf_p"
  - "_vprintf_p_l"
  - "_vwprintf_p"
  - "vprintf_p_l"
  - "vwprintf_p_l"
  - "vwprintf_p"
  - "vtprintf_p"
  - "_vtprintf_p"
  - "_vprintf_p"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_vprintf_p (funzione)"
  - "_vprintf_p_l (funzione)"
  - "_vtprintf_p (funzione)"
  - "_vtprintf_p_l (funzione)"
  - "_vwprintf_p (funzione)"
  - "_vwprintf_p_l (funzione)"
  - "testo formattato [C++]"
  - "vprintf_p (funzione)"
  - "vprintf_p_l (funzione)"
  - "vtprintf_p (funzione)"
  - "vtprintf_p_l (funzione)"
  - "vwprintf_p (funzione)"
  - "vwprintf_p_l (funzione)"
ms.assetid: 3f99bde3-c891-493d-908f-30559c421058
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrive l'output formattato utilizzando un puntatore a un elenco di argomenti e consente di specificare l'ordine in cui gli argomenti sono utilizzati.  
  
## Sintassi  
  
```  
int _vprintf_p(  
   const char *format,  
   va_list argptr   
);  
int _vprintf_p_l(  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vwprintf_p(  
   const wchar_t *format,  
   va_list argptr   
);  
int _vwprintf_p_l(  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
```  
  
#### Parametri  
 `format`  
 Specifica di formato,  
  
 `argptr`  
 Puntatore all'elenco di argomenti.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
 Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Valore restituito  
 `_vprintf_p` e `_vwprintf_p` restituiscono il numero di caratteri scritti, escluso il carattere di terminazione null, o un valore negativo se un errore di output viene visualizzato.  
  
## Note  
 Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta e scrive i relativi dati su `stdout`.  Queste funzioni differiscono da `vprintf_s` e `vwprintf_s` solo nel fatto che supportano la possibilità di specificare l'ordine in cui gli argomenti sono utilizzati.  Per ulteriori informazioni, vedere [Parametri posizionali printf\_p](../../c-runtime-library/printf-p-positional-parameters.md).  
  
 `_vwprintf_p` è la versione a caratteri estesi di `_vprintf_p`; se il flusso viene aperto in modalità ANSI, le due funzioni si comportano in modo identico.  `_vprintf_p` non supporta attualmente l'output in un flusso UNICODE.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare quelle del thread corrente.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 Se `format` è un puntatore null, o se la stringa di formato contiene caratteri di formattazione non validi, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` a `EINVAL`.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vtprintf_p`|`_vprintf_p`|`_vprintf_p`|`_vwprintf_p`|  
|`_vtprintf_p_l`|`_vprintf_p_l`|`_vprintf_p_l`|`_vwprintf_p_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`_vprintf_p`, `_vprintf_p_l`|\<stdio.h\> e \<stdarg.h\>|\<varargs.h\>\*|  
|`_vwprintf_p`, `_vwprintf_p_l`|\<stdio.h\> o \<wchar.h\>, e \<stdarg.h\>|\<varargs.h\>\*|  
  
 \* Necessario per la compatibilità con UNIX V.  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)   
 [\_fprintf\_p, \_fprintf\_p\_l, \_fwprintf\_p, \_fwprintf\_p\_l](../../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)   
 [\_printf\_p, \_printf\_p\_l, \_wprintf\_p, \_wprintf\_p\_l](../../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)   
 [\_sprintf\_p, \_sprintf\_p\_l, \_swprintf\_p, \_swprintf\_p\_l](../../c-runtime-library/reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)   
 [vsprintf\_s, \_vsprintf\_s\_l, vswprintf\_s, \_vswprintf\_s\_l](../../c-runtime-library/reference/vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md)   
 [va\_arg, va\_copy, va\_end, va\_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)   
 [\_vfprintf\_p, \_vfprintf\_p\_l, \_vfwprintf\_p, \_vfwprintf\_p\_l](../../c-runtime-library/reference/vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)   
 [\_printf\_p, \_printf\_p\_l, \_wprintf\_p, \_wprintf\_p\_l](../../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)   
 [Parametri posizionali printf\_p](../../c-runtime-library/printf-p-positional-parameters.md)