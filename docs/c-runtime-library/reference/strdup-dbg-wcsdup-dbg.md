---
title: "_strdup_dbg, _wcsdup_dbg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_strdup_dbg"
  - "_wcsdup_dbg"
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
  - "_wcsdup_dbg"
  - "strdup_dbg"
  - "_strdup_dbg"
  - "wcsdup_dbg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_strdup_dbg (funzione)"
  - "_wcsdup_dbg (funzione)"
  - "copia di stringhe"
  - "duplicazione di stringhe"
  - "stdup_dbg (funzione)"
  - "stringhe [C++], copia"
  - "stringhe [C++], duplicazione"
  - "wcsdup_dbg (funzione)"
ms.assetid: 681db70c-d124-43ab-b83e-5eeea9035097
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# _strdup_dbg, _wcsdup_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Versioni di [\_strdup e \_wcsdup](../../c-runtime-library/reference/strdup-wcsdup-mbsdup.md) che usano la versione di debug di `malloc`.  
  
## Sintassi  
  
```  
char *_strdup_dbg(    const char *strSource,    int blockType,    const char *filename,    int linenumber  ); wchar_t *_wcsdup_dbg(    const wchar_t *strSource,    int blockType,    const char *filename,    int linenumber  );  
```  
  
#### Parametri  
 `strSource`  
 Stringa di origine con terminazione null.  
  
 `blockType`  
 Tipo richiesto di blocco di memoria: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o NULL.  
  
 `linenumber`  
 Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o NULL.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore a una posizione di archiviazione per la stringa copiata oppure `NULL` se l'archiviazione non può essere allocata.  
  
## Note  
 Le funzioni `_strdup_dbg` e `_wcsdup_dbg` sono identiche a `_strdup` e `_wcsdup` ad eccezione che, quando `_DEBUG` è definito, queste funzioni usano la versione di debug di `malloc`, `_malloc_dbg` per allocare memoria per la stringa duplicata.  Per informazioni sulle funzionalità di debug di `_malloc_dbg`, vedere [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md).  
  
 Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito.  In alternativa, è possibile definire il flag `_CRTDBG_MAP_ALLOC`.  Quando `_CRTDBG_MAP_ALLOC` è definito, le chiamate a `_strdup` e `_wcsdup` vengono mappate nuovamente a `_strdup_dbg` e `_wcsdup_dbg` rispettivamente, con `blockType` impostato su `_NORMAL_BLOCK`.  Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come `_CLIENT_BLOCK`.  Per altre informazioni sui tipi di blocchi, vedere [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsdup_dbg`|`_strdup_dbg`|`_mbsdup`|`_wcsdup_dbg`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_strdup_dbg`, `_wcsdup_dbg`|\<crtdbg.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 [System::String::Clone](https://msdn.microsoft.com/en-us/library/system.string.clone.aspx)  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [\_strdup, \_wcsdup, \_mbsdup](../../c-runtime-library/reference/strdup-wcsdup-mbsdup.md)   
 [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md)