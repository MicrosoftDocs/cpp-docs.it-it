---
title: _strdup_dbg, _wcsdup_dbg | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _strdup_dbg
- _wcsdup_dbg
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _wcsdup_dbg
- strdup_dbg
- _strdup_dbg
- wcsdup_dbg
dev_langs:
- C++
helpviewer_keywords:
- _wcsdup_dbg function
- stdup_dbg function
- copying strings
- duplicating strings
- strings [C++], copying
- strings [C++], duplicating
- _strdup_dbg function
- wcsdup_dbg function
ms.assetid: 681db70c-d124-43ab-b83e-5eeea9035097
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 22798d52d78a822c538055b55fd8f10660de780c
ms.lasthandoff: 02/24/2017

---
# <a name="strdupdbg-wcsdupdbg"></a>_strdup_dbg, _wcsdup_dbg
Versioni di [_strdup e _wcsdup](../../c-runtime-library/reference/strdup-wcsdup-mbsdup.md) che usano la versione di debug di `malloc`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *_strdup_dbg(  
   const char *strSource,  
   int blockType,  
   const char *filename,  
   int linenumber   
);  
wchar_t *_wcsdup_dbg(  
   const wchar_t *strSource,  
   int blockType,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `strSource`  
 Stringa di origine con terminazione null.  
  
 `blockType`  
 Tipo richiesto di blocco di memoria: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o NULL.  
  
 `linenumber`  
 Numero di riga nel file di origine in cui è stata richiesta l'operazione di allocazione o NULL.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore a una posizione di archiviazione per la stringa copiata oppure `NULL` se l'archiviazione non può essere allocata.  
  
## <a name="remarks"></a>Note  
 Le funzioni `_strdup_dbg` e `_wcsdup_dbg` sono identiche a `_strdup` e `_wcsdup` ad eccezione che, quando `_DEBUG` è definito, queste funzioni usano la versione di debug di `malloc`, `_malloc_dbg` per allocare memoria per la stringa duplicata. Per informazioni sulle funzionalità di debug di `_malloc_dbg`, vedere [_malloc_dbg](../../c-runtime-library/reference/malloc-dbg.md).  
  
 Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. In alternativa, è possibile definire il flag `_CRTDBG_MAP_ALLOC`. Quando `_CRTDBG_MAP_ALLOC` è definito, le chiamate a `_strdup` e `_wcsdup` vengono mappate nuovamente a `_strdup_dbg` e `_wcsdup_dbg` rispettivamente, con `blockType` impostato su `_NORMAL_BLOCK`. Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come `_CLIENT_BLOCK`. Per altre informazioni sui tipi di blocco, vedere [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details) (Tipi di blocchi sull'heap di debug).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsdup_dbg`|`_strdup_dbg`|`_mbsdup`|`_wcsdup_dbg`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_strdup_dbg`, `_wcsdup_dbg`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 [System::String::Clone](https://msdn.microsoft.com/en-us/library/system.string.clone.aspx)  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [_strdup, _wcsdup, _mbsdup](../../c-runtime-library/reference/strdup-wcsdup-mbsdup.md)   
 [Versioni di debug delle funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions)
