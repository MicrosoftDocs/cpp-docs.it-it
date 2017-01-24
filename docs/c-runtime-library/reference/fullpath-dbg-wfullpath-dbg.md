---
title: "_fullpath_dbg, _wfullpath_dbg | Microsoft Docs"
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
  - "_wfullpath_dbg"
  - "_fullpath_dbg"
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
  - "wfullpath_dbg"
  - "_wfullpath_dbg"
  - "_fullpath_dbg"
  - "fullpath_dbg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fullpath_dbg (funzione)"
  - "_wfullpath_dbg (funzione)"
  - "percorsi assoluti"
  - "fullpath_dbg (funzione)"
  - "percorsi di file relativi"
  - "wfullpath_dbg (funzione)"
ms.assetid: 81f72f85-07da-4f5c-866a-598e0fb03f6b
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _fullpath_dbg, _wfullpath_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Versioni di [\_fullpath, \_wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)che usa la versione di debug di `malloc` per allocare memoria.  
  
## Sintassi  
  
```  
char *_fullpath_dbg(     char *absPath,    const char *relPath,    size_t maxLength,    int blockType,    const char *filename,    int linenumber  ); wchar_t *_wfullpath_dbg(     wchar_t *absPath,    const wchar_t *relPath,    size_t maxLength,    int blockType,    const char *filename,    int linenumber  );  
```  
  
#### Parametri  
 `absPath`  
 Puntatore a un buffer contenente il nome del percorso assoluto o completo o `NULL`.  
  
 `relPath`  
 Nome del percorso relativo.  
  
 `maxLength`  
 Lunghezza massima del buffer del nome del percorso assoluto \(`absPath`\).  Tale lunghezza è espressa in byte per `_fullpath` ma in caratteri wide \(`wchar_t`\) per `_wfullpath`.  
  
 `blockType`  
 Tipo richiesto di blocco di memoria: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o `NULL`.  
  
 `linenumber`  
 Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o `NULL`.  
  
## Valore restituito  
 Ogni funzione restituisce un puntatore a un buffer contenente il nome del percorso assoluto \(`absPath`\).  Se è presente un errore \(ad esempio, se il valore passato in `relPath` include una lettera di unità non valida o che non può essere trovata oppure se la lunghezza del nome del percorso assoluto creato \(`absPath`\) è maggiore di `maxLength`\) la funzione restituisce `NULL`.  
  
## Note  
 Le funzioni `_fullpath_dbg` e `_wfullpath_dbg` sono identiche a `_fullpath` e `_wfullpath` ad eccezione che, quando **\_**`DEBUG` è definito, queste funzioni usano la versione di debug di `malloc`, `_malloc_dbg` per allocare memoria se viene passato NULL come primo parametro.  Per informazioni sulle funzionalità di debug di `_malloc_dbg`, vedere [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md).  
  
 Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito.  In alternativa, è possibile definire il flag `_CRTDBG_MAP_ALLOC`.  Quando `_CRTDBG_MAP_ALLOC` è definito, le chiamate a `_fullpath` e `_wfullpath` vengono mappate nuovamente a `_fullpath_dbg` e `_wfullpath_dbg` rispettivamente, con `blockType` impostato su `_NORMAL_BLOCK`.  Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come `_CLIENT_BLOCK`.  Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tfullpath_dbg`|`_fullpath_dbg`|`_fullpath_dbg`|`_wfullpath_dbg`|  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fullpath_dbg`|\<crtdbg.h\>|  
|`_wfullpath_dbg`|\<crtdbg.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 <xref:System.IO.File.Create%2A>  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_fullpath, \_wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md)