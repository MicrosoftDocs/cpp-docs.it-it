---
title: "_getdcwd_dbg, _wgetdcwd_dbg | Microsoft Docs"
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
  - "_getdcwd_dbg"
  - "_wgetdcwd_dbg"
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
  - "_getdcwd_dbg"
  - "getdcwd_dbg"
  - "_wgetdcwd_dbg"
  - "wgetdcwd_dbg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_getdcwd_dbg (funzione)"
  - "_wgetdcwd_dbg (funzione)"
  - "directory di lavoro corrente"
  - "directory [C++], lavoro corrente"
  - "getdcwd_dbg (funzione)"
  - "wgetdcwd_dbg (funzione)"
  - "directory di lavoro"
ms.assetid: 266bf6f0-0417-497f-963d-2e0f306d9385
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _getdcwd_dbg, _wgetdcwd_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Versioni di debug delle funzioni [\_getdcwd, \_wgetdcwd](../../c-runtime-library/reference/getdcwd-wgetdcwd.md) \(disponibili solo durante il debug\).  
  
## Sintassi  
  
```  
char *_getdcwd_dbg(    int drive,    char *buffer,    int maxlen,    int blockType,    const char *filename,    int linenumber  ); wchar_t *_wgetdcwd_dbg(    int drive,    wchar_t *buffer,    int maxlen,    int blockType,    const char *filename,    int linenumber  );  
```  
  
#### Parametri  
 `drive`  
 Nome dell'unità disco.  
  
 `buffer`  
 Posizione di archiviazione per il percorso.  
  
 `maxlen`  
 Lunghezza massima del percorso in caratteri: `char` per `_getdcwd_dbg`e `wchar_t`per `_wgetdcwd_dbg`.  
  
 `blockType`  
 Tipo di blocco di memoria richiesto: `_CLIENT_BLOCK`o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o `NULL`.  
  
 `linenumber`  
 Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o `NULL`.  
  
## Valore restituito  
 Restituisce un puntatore a `buffer`.  Un valore restituito di `NULL` indica un errore e `errno` viene impostato su `ENOMEM`, indicando che non vi è memoria sufficiente per allocare `maxlen` byte \(quando un argomento `NULL` viene fornito come `buffer`\) oppure su `ERANGE`, indicando che il percorso è più lungo di `maxlen` caratteri.  Per altre informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Le funzioni `_getdcwd_dbg` e `_wgetdcwd_dbg` sono identiche a `_getdcwd` e `_wgetdcwd` ad eccezione che, quando `_DEBUG` è definito, queste funzioni usano la versione di debug di `malloc` e `_malloc_dbg` per allocare memoria se viene passato `NULL` come parametro `buffer`.  Per altre informazioni, vedere [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md).  
  
 Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito.  In alternativa, è possibile definire il flag `_CRTDBG_MAP_ALLOC`.  Quando `_CRTDBG_MAP_ALLOC` è definito, le chiamate a `_getdcwd` e `_wgetdcwd` vengono mappate nuovamente a `_getdcwd_dbg` e `_wgetdcwd_dbg` rispettivamente, con `blockType` impostato su `_NORMAL_BLOCK`.  Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come `_CLIENT_BLOCK`.  Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tgetdcwd_dbg`|`_getdcwd_dbg`|`_getdcwd_dbg`|`_wgetdcwd_dbg`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_getdcwd_dbg`|\<crtdbg.h\>|  
|`_wgetdcwd_dbg`|\<crtdbg.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 <xref:System.Environment.CurrentDirectory%2A?displayProperty=fullName>  
  
## Vedere anche  
 [\_getdcwd, \_wgetdcwd](../../c-runtime-library/reference/getdcwd-wgetdcwd.md)   
 [Controllo Directory](../../c-runtime-library/directory-control.md)   
 [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md)