---
title: "_getdcwd, _wgetdcwd | Microsoft Docs"
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
  - "_getdcwd"
  - "_wgetdcwd"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wgetdcwd"
  - "getdcwd"
  - "_getdcwd"
  - "tgetdcwd"
  - "_wgetdcwd"
  - "_tgetdcwd"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "wgetdcwd (funzione)"
  - "directory di lavoro"
  - "getdcwd (funzione)"
  - "_getdcwd (funzione)"
  - "_wgetdcwd (funzione)"
  - "directory di lavoro corrente"
  - "utilizzo di directory [C++], corrente"
ms.assetid: 184152f5-c7b0-495b-918d-f9a6adc178bd
caps.latest.revision: 24
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _getdcwd, _wgetdcwd
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene il percorso completo della directory di lavoro corrente nell'unità specificata.  
  
## Sintassi  
  
```  
char *_getdcwd(   
   int drive,  
   char *buffer,  
   int maxlen   
);  
wchar_t *_wgetdcwd(   
   int drive,  
   wchar_t *buffer,  
   int maxlen   
);  
```  
  
#### Parametri  
 `drive`  
 Integer non negativo che specifica l'unità \(0 \= unità predefinita, 1 \= A, B \= 2, e così via\).  
  
 Se l'unità specificata non è disponibile o il tipo di unità \(ad esempio disco rimovibile, fisso, CD\-ROM, RAM, o un'unità di rete\) non può essere determinato, viene richiamato il gestore di parametro non valido, descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 `buffer`  
 Percorso di archiviazione per il percorso, o **NULL**.  
  
 Se **NULL** è specificato, questa funzione consente di allocare un buffer di almeno `maxlen` dimensioni utilizzando **malloc**, e il valore restituito di `_getdcwd` è un puntatore al buffer allocato. Il buffer può essere liberato chiamando la funzione `free` e passandola al puntatore.  
  
 `maxlen`  
 Un integer positivo diverso da zero che specifica la lunghezza massima del percorso, in caratteri: `char` per `_getdcwd` e `wchar_t` per `_wgetdcwd`.  
  
 Se `maxlen` non è maggiore di zero, viene richiamato il gestore di parametro non valido, descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
## Valore restituito  
 Puntatore a una stringa che rappresenta il percorso completo della directory di lavoro corrente nell'unità specificata, o `NULL`, che indica un errore.  
  
 Se `buffer` viene specificato come `NULL` e non vi è memoria sufficiente per allocare un numero `maxlen` di caratteri, si verifica un errore e `errno` viene impostato su `ENOMEM`. Se la lunghezza del percorso, incluso il carattere Null di terminazione, supera `maxlen`, si verifica un errore e `errno` viene impostato su `ERANGE`. Per altre informazioni su questi codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_getdcwd` ottiene il percorso completo della directory di lavoro corrente nell'unità specificata e lo archivia in `buffer`. Se la directory di lavoro corrente è impostata su quella radice, la stringa termina con una barra rovesciata \(\\\). Se la directory di lavoro corrente è impostata su una directory diversa dalla quella radice, la stringa termina con il nome della directory e non con una barra rovesciata.  
  
 `_wgetdcwd` è una versione a caratteri wide di `_getdcwd` il cui parametro `buffer` e il cui valore restituito sono stringhe a caratteri wide. In caso contrario, `_wgetdcwd` e `_getdcwd` si comportano in modo identico.  
  
 Questa funzione è thread\-safe, anche se dipende **chiamata GetFullPathName**, anch'esso non è thread\-safe. Tuttavia, si può violare thread\-safe se entrambi questa funzione viene chiamata l'applicazione multithreading e **chiamata GetFullPathName**. Per ulteriori informazioni, vedere [MSDN Library](http://go.microsoft.com/fwlink/?LinkID=150542) e quindi cercare **chiamata GetFullPathName**.  
  
 La versione di questa funzione con il suffisso `_nolock` si comporta in modo identico a questa funzione con l'eccezione che non è thread\-safe e non è protetta da interferenze da parte di altri thread. Per altre informazioni, vedere [\_getdcwd\_nolock, \_wgetdcwd\_nolock](../../c-runtime-library/reference/getdcwd-nolock-wgetdcwd-nolock.md).  
  
 Quando `_DEBUG` e `_CRTDBG_MAP_ALLOC` sono definiti, le chiamate a `_getdcwd` e a `_wgetdcwd` vengono sostituite dalle quelle a `_getdcwd_dbg` e a `_wgetdcwd_dbg` per consentire il debug delle allocazioni di memoria. Per altre informazioni, vedere [\_getdcwd\_dbg, \_wgetdcwd\_dbg](../../c-runtime-library/reference/getdcwd-dbg-wgetdcwd-dbg.md).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tgetdcwd`|`_getdcwd`|`_getdcwd`|`_wgetdcwd`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_getdcwd`|\<direct.h\>|  
|`_wgetdcwd`|\<direct.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio in [\_getdrive](../../c-runtime-library/reference/getdrive.md).  
  
## Equivalente .NET Framework  
 [System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)  
  
## Vedere anche  
 [Controllo Directory](../../c-runtime-library/directory-control.md)   
 [\_chdir, \_wchdir](../../c-runtime-library/reference/chdir-wchdir.md)   
 [\_getcwd, \_wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)   
 [\_getdrive](../../c-runtime-library/reference/getdrive.md)   
 [\_mkdir, \_wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)   
 [\_rmdir, \_wrmdir](../../c-runtime-library/reference/rmdir-wrmdir.md)