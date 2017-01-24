---
title: "strerror, _strerror, _wcserror, __wcserror | Microsoft Docs"
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
  - "strerror"
  - "_strerror"
  - "_wcserror"
  - "__wcserror"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__sys_errlist"
  - "wcserror"
  - "_strerror"
  - "__wcserror"
  - "strerror"
  - "__sys_nerr"
  - "_tcserror"
  - "_wcserror"
  - "tcserror"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__sys_errlist"
  - "__sys_nerr"
  - "__wcserror (funzione)"
  - "_strerror (funzione)"
  - "_tcserror (funzione)"
  - "_wcserror (funzione)"
  - "messaggi di errore, recupero"
  - "messaggi di errore, stampa"
  - "stampa di messaggi di errore"
  - "strerror (funzione)"
  - "tcserror (funzione)"
  - "wcserror (funzione)"
ms.assetid: 27b72255-f627-43c0-8836-bcda8b003e14
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strerror, _strerror, _wcserror, __wcserror
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene un messaggio di errore dal sistema \(`strerror`, `_wcserror`\) o formatta una stringa di messaggio di errore fornita dall'utente \(`_strerror`, `__wcserror`\).  Sono disponibili versioni più sicure di queste funzioni. Vedere [strerror\_s, \_strerror\_s, \_wcserror\_s, \_\_wcserror\_s](../../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md).  
  
## Sintassi  
  
```  
char *strerror(    int errnum  ); char *_strerror(    const char *strErrMsg  ); wchar_t * _wcserror(    int errnum  ); wchar_t * __wcserror(    const wchar_t *strErrMsg  );  
```  
  
#### Parametri  
 `errnum`  
 Numero errore.  
  
 `strErrMsg`  
 Messaggio fornito dall'utente.  
  
## Valore restituito  
 Tutte queste funzioni restituiscono un puntatore alla stringa del messaggio di errore.  Le chiamate successive possono sovrascrivere la stringa.  
  
## Note  
 La funzione `strerror` mappa `errnum` su una stringa di messaggio di errore e restituisce un puntatore alla stringa.  Né `strerror` né `_strerror` visualizzano effettivamente il messaggio: a tale scopo, è necessario chiamare una funzione di output come [fprintf](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md):  
  
```  
if (( _access( "datafile",2 )) == -1 )  
   fprintf( stderr, _strerror(NULL) );  
```  
  
 Se `strErrMsg` viene passato come `NULL`, `_strerror`, restituisce un puntatore a una stringa contenente il messaggio di errore di sistema per l'ultima chiamata della libreria che ha generato un errore.  La stringa del messaggio di errore termina con il carattere di nuova riga \("\\n"\).  Se `strErrMsg` non è uguale a `NULL`, `_strerror` restituisce un puntatore a una stringa che contiene, nell'ordine, il messaggio stringa, i due punti, uno spazio, il messaggio di errore del sistema per l'ultima chiamata della libreria che ha generato un errore e il carattere di nuova riga.  La lunghezza massima consentita del messaggio stringa è pari a 94 caratteri.  
  
 Il numero di errore effettivo per `_strerror` viene archiviato nella variabile [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  Per risultati accurati, chiamare `_strerror` immediatamente dopo la restituzione di un errore da parte della routine di libreria.  In caso contrario, le chiamate successive a `strerror` o `_strerror` possono sovrascrivere il valore `errno`.  
  
 `_wcserror` e `__wcserror` sono versioni a caratteri wide di `strerror` e `_strerror` rispettivamente.  
  
 `_strerror`, `_wcserror` e `__wcserror` fanno parte della definizione ANSI ma si tratta di estensioni Microsoft e se ne sconsiglia l'uso laddove si voglia ottenere codice portabile.  Per la compatibilità ANSI, usare invece `strerror`.  
  
 Per ottenere le stringhe di errore, si consiglia l'uso di `strerror` o `_wcserror` e di non usare le macro deprecate [\_sys\_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) e [\_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) e le funzioni interne deprecate `__sys_errlist` e `__sys_nerr`.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcserror`|`strerror`|`strerror`|`_wcserror`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strerror`|\<string.h\>|  
|`_strerror`|\<string.h\>|  
|`_wcserror`, `__wcserror`|\<string.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio relativo a [perror](../../c-runtime-library/reference/perror-wperror.md).  
  
## Equivalente .NET Framework  
 [System::Exception::Message](https://msdn.microsoft.com/en-us/library/system.exception.message.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [clearerr](../../c-runtime-library/reference/clearerr.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [perror, \_wperror](../../c-runtime-library/reference/perror-wperror.md)