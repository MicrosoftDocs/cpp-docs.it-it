---
title: "vprintf, _vprintf_l, vwprintf, _vwprintf_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "vprintf"
  - "_vwprintf_l"
  - "_vprintf_l"
  - "vwprintf"
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
  - "vwprintf"
  - "_vtprintf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_vprintf_l (funzione)"
  - "_vtprintf (funzione)"
  - "_vtprintf_l (funzione)"
  - "_vwprintf_l (funzione)"
  - "testo formattato [C++]"
  - "vprintf (funzione)"
  - "vprintf_l (funzione)"
  - "vtprintf (funzione)"
  - "vtprintf_l (funzione)"
  - "vwprintf (funzione)"
  - "vwprintf_l (funzione)"
ms.assetid: 44549505-00a0-4fa7-9a85-f2e666f55a38
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# vprintf, _vprintf_l, vwprintf, _vwprintf_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrive l'output formattato utilizzando un puntatore a un elenco di argomenti.  Sono disponibili versioni più sicure di queste funzioni., vedere [vprintf\_s, \_vprintf\_s\_l, vwprintf\_s, \_vwprintf\_s\_l](../../c-runtime-library/reference/vprintf-s-vprintf-s-l-vwprintf-s-vwprintf-s-l.md).  
  
## Sintassi  
  
```  
int vprintf(  
   const char *format,  
   va_list argptr   
);  
int _vprintf_l(  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int vwprintf(  
   const wchar_t *format,  
   va_list argptr   
);  
int _vwprintf_l(  
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
 `vprintf` e `vwprintf` restituiscono il numero di caratteri scritti, escluso il carattere di terminazione null, o un valore negativo se un errore di output viene visualizzato.  Se `format` è un puntatore null, o se la stringa di formato contiene caratteri di formattazione non validi, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` a `EINVAL`.  
  
 Per ulteriori informazioni su questi, e altri, codici di errore vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .  
  
## Note  
 Ognuna di queste funzioni accetta un puntatore a un elenco di argomenti, quindi formatta e scrive i relativi dati su `stdout`.  
  
 `vwprintf` è la versione a caratteri estesi di `vprintf`; se il flusso viene aperto in modalità ANSI, le due funzioni si comportano in modo identico.  `vprintf` non supporta attualmente l'output in un flusso UNICODE.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare quelle del thread corrente.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  Si noti che stringhe di formato non valido vengono rilevate e danno come risultato un errore.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vtprintf`|`vprintf`|`vprintf`|`vwprintf`|  
|`_vtprintf_l`|`_vprintf_l`|`_vprintf_l`|`_vwprintf_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`vprintf`, `_vprintf_l`|\<stdio.h\> e \<stdarg.h\>|\<varargs.h\>\*|  
|`vwprintf`, `_vwprintf_l`|\<stdio.h\> o \<wchar.h\>, e \<stdarg.h\>|\<varargs.h\>\*|  
  
 \* Necessario per la compatibilità con UNIX V.  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Funzioni vprintf](../../c-runtime-library/vprintf-functions.md)   
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [va\_arg, va\_copy, va\_end, va\_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)