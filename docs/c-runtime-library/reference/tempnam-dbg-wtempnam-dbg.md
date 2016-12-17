---
title: "_tempnam_dbg, _wtempnam_dbg | Microsoft Docs"
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
  - "_wtempnam_dbg"
  - "_tempnam_dbg"
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
  - "wtempnam_dbg"
  - "tempnam_dbg"
  - "_tempnam_dbg"
  - "_wtempnam_dbg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_tempnam_dbg (funzione)"
  - "_wtempnam_dbg (funzione)"
  - "nomi file [C++], creazione temporanea"
  - "nomi file [C++], temporanei"
  - "tempnam_dbg (funzione)"
  - "file temporanei, creazione"
  - "wtempnam_dbg (funzione)"
ms.assetid: e3760bb4-bb01-4808-b689-2c45af56a170
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _tempnam_dbg, _wtempnam_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Versioni funzione di [\_tempnam, \_wtempnam, tmpnam, \_wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md) che usano la versione di debug di `malloc, _malloc_dbg`.  
  
## Sintassi  
  
```  
char *_tempnam_dbg(    const char *dir,    const char *prefix,    int blockType,    const char *filename,    int linenumber  ); wchar_t *_wtempnam_dbg(    const wchar_t *dir,    const wchar_t *prefix,    int blockType,    const char *filename,    int linenumber  );  
```  
  
#### Parametri  
 `dir`  
 Percorso usato nel nome del file se non è presente alcuna variabile di ambiente TMP o se TMP non è una directory valida.  
  
 `prefix`  
 La stringa da anteporre ai nomi restituiti da `_tempnam`.  
  
 `blockType`  
 Tipo richiesto di blocco di memoria: `_CLIENT_BLOCK`o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o `NULL`.  
  
 `linenumber`  
 Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o `NULL`.  
  
## Valore restituito  
 Ogni funzione restituisce un puntatore al nome generato o `NULL` se si verifica un errore.  Può verificarsi un errore se è specificato un nome di directory non valido nella variabile di ambiente TMP e nel parametro `dir`.  
  
> [!NOTE]
>  Non è necessario chiamare `free` \(o `free_dbg`\) per puntatori allocati da `_tempnam_dbg` e `_wtempnam_dbg`.  
  
## Note  
 Le funzioni `_tempnam_dbg` e `_wtempnam_dbg` sono identiche a `_tempnam` e `_wtempnam` ad eccezione che, quando `_DEBUG` è definito, queste funzioni usano la versione di debug di `malloc` e `_malloc_dbg` per allocare memoria se `NULL` viene passato come primo parametro.  Per altre informazioni, vedere [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md).  
  
 Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito.  In alternativa, è possibile definire il flag `_CRTDBG_MAP_ALLOC`.  Quando `_CRTDBG_MAP_ALLOC` è definito, le chiamate a `_tempnam` e `_wtempnam` vengono mappate nuovamente a  `_tempnam_dbg` e `_wtempnam_dbg` rispettivamente, con `blockType` impostato su `_NORMAL_BLOCK`.  Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come `_CLIENT_BLOCK`.  Per altre informazioni, vedere [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ttempnam_dbg`|`_tempnam_dbg`|`_tempnam_dbg`|`_wtempnam_dbg`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_tempnam_dbg`, `_wtempnam_dbg`|\<crtdbg.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [\_tempnam, \_wtempnam, tmpnam, \_wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)   
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md)