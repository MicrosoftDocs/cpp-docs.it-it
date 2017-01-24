---
title: "_getcwd_dbg, _wgetcwd_dbg | Microsoft Docs"
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
  - "_wgetcwd_dbg"
  - "_getcwd_dbg"
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
  - "api-ms-win-crt-environment-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_getcwd_dbg"
  - "_wgetcwd_dbg"
  - "getcwd_dbg"
  - "wgetcwd_dbg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_getcwd_dbg (funzione)"
  - "_wgetcwd_dbg (funzione)"
  - "directory di lavoro corrente"
  - "directory [C++], lavoro corrente"
  - "getcwd_dbg (funzione)"
  - "wgetcwd_dbg (funzione)"
  - "directory di lavoro"
ms.assetid: 8d5d151f-d844-4aa6-a28c-1c11a22dc00d
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _getcwd_dbg, _wgetcwd_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Versioni di debug delle funzioni [\_getcwd, \_wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md) \(disponibili solo durante il debug\).  
  
## Sintassi  
  
```  
char *_getcwd_dbg(     char *buffer,    int maxlen,    int blockType,    const char *filename,    int linenumber  ); wchar_t *_wgetcwd_dbg(     wchar_t *buffer,    int maxlen,    int blockType,    const char *filename,    int linenumber  );  
```  
  
#### Parametri  
 `buffer`  
 Posizione di archiviazione per il percorso.  
  
 `maxlen`  
 Lunghezza massima del percorso in caratteri: `char` per `_getcwd_dbg` e `wchar_t` per `_wgetcwd_dbg`.  
  
 `blockType`  
 Tipo di blocco di memoria richiesto: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o `NULL`.  
  
 `linenumber`  
 Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o `NULL`.  
  
## Valore restituito  
 Restituisce un puntatore a `buffer`.  Un valore restituito di `NULL` indica un errore e `errno` viene impostato su `ENOMEM`, indicando che non vi è memoria sufficiente per allocare `maxlen` byte \(quando un argomento `NULL` viene fornito come `buffer`\) oppure su `ERANGE`, indicando che il percorso è più lungo di `maxlen` caratteri.  
  
 Per altre informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Le funzioni `_getcwd_dbg` e `_wgetcwd_dbg` sono identiche a `_getcwd` e `_wgetcwd` tranne per il fatto che, quando \_`DEBUG` è definito, queste funzioni usano la versione di debug di `malloc` e `_malloc_dbg` per allocare memoria se `NULL` viene passato come primo parametro.  Per altre informazioni, vedere [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md).  
  
 Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito.  In alternativa, è possibile definire il flag `_CRTDBG_MAP_ALLOC`.  Quando `_CRTDBG_MAP_ALLOC` è definito, le chiamate a `_getcwd`e `_wgetcwd`vengono mappate nuovamente a `_getcwd_dbg`e `_wgetcwd_dbg` rispettivamente, con `blockType` impostato su `_NORMAL_BLOCK`.  Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come `_CLIENT_BLOCK`.  Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  
  
## Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tgetcwd_dbg`|`_getcwd_dbg`|`_getcwd_dbg`|`_wgetcwd_dbg`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_getcwd_dbg`|\<crtdbg.h\>|  
|`_wgetcwd_dbg`|\<crtdbg.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 <xref:System.Environment.CurrentDirectory%2A>  
  
## Vedere anche  
 [\_getcwd, \_wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)   
 [Controllo Directory](../../c-runtime-library/directory-control.md)   
 [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md)