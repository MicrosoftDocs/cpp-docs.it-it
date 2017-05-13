---
title: _dupenv_s_dbg, _wdupenv_s_dbg | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _dupenv_s_dbg
- _wdupenv_s_dbg
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
- _tdupenv_s_dbg
- _dupenv_s_dbg
- _wdupenv_s_dbg
dev_langs:
- C++
helpviewer_keywords:
- _tdupenv_s_dbg function
- dupenv_s_dbg function
- _wdupenv_s_dbg function
- environment variables
- tdupenv_s_dbg function
- wdupenv_s_dbg function
- _dupenv_s_dbg function
ms.assetid: e3d81148-e24e-46d0-a21d-fd87b5e6256c
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: b478e11cb4b3b04d92a693fca85cd6257b594514
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="dupenvsdbg-wdupenvsdbg"></a>_dupenv_s_dbg, _wdupenv_s_dbg
Ottiene un valore dall'ambiente corrente.  Versioni di [dupenv_s, wdupenv_s](../../c-runtime-library/reference/dupenv-s-wdupenv-s.md) che allocano la memoria con [malloc_dbg](../../c-runtime-library/reference/malloc-dbg.md) per fornire informazioni di debug aggiuntive.  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _dupenv_s_dbg(  
   char **buffer,  
   size_t *numberOfElements,  
   const char *varname,  
   int blockType,  
   const char *filename,  
   int linenumber  
);  
errno_t _wdupenv_s_dbg(  
   wchar_t **buffer,  
   size_t * numberOfElements,  
   const wchar_t *varname,  
   int blockType,  
   const char *filename,  
   int linenumber  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `buffer`  
 Buffer per l'archiviazione del valore della variabile.  
  
 `numberOfElements`  
 Dimensioni di `buffer`.  
  
 `varname`  
 Nome della variabile di ambiente.  
  
 `blockType`  
 Tipo di blocco di memoria richiesto: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine o a `NULL`.  
  
 `linenumber`  
 File di riga nel file di origine o `NULL`.  
  
## <a name="return-value"></a>Valore restituito  
 Zero se eseguita correttamente, un codice di errore se non eseguita correttamente.  
  
 Queste funzioni convalidano i propri parametri. Se `buffer` o `varname` è `NULL`, sarà richiamato il gestore dei parametri non validi come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, le funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
 Se queste funzioni non riescono ad allocare memoria sufficiente, impostano `buffer` su `NULL` e `numberOfElements` su 0, quindi restituiscono `ENOMEM`.  
  
## <a name="remarks"></a>Note  
 Le funzioni `_dupenv_s_dbg` e `_wdupenv_s_dbg` sono identiche a `_dupenv_s` e `_wdupenv_s` ad eccezione che, quando `_DEBUG` è definito, queste funzioni usano la versione di debug di [malloc](../../c-runtime-library/reference/malloc.md), [_malloc_dbg](../../c-runtime-library/reference/malloc-dbg.md) per allocare memoria per il valore della variabile di ambiente. Per informazioni sulle funzionalità di debug di `_malloc_dbg`, vedere [_malloc_dbg](../../c-runtime-library/reference/malloc-dbg.md).  
  
 Nella maggior parte dei casi non è necessario chiamare queste funzioni in modo esplicito. In alternativa, è possibile definire il flag `_CRTDBG_MAP_ALLOC`. Quando `_CRTDBG_MAP_ALLOC` è definito, le chiamate a `_dupenv_s` e `_wdupenv_s` vengono mappate nuovamente a `_dupenv_s_dbg` e `_wdupenv_s_dbg` rispettivamente, con `blockType` impostato su `_NORMAL_BLOCK`. Quindi, non è necessario chiamare queste funzioni in modo esplicito a meno che non si vogliano contrassegnare blocchi di memoria heap come `_CLIENT_BLOCK`. Per altre informazioni sui tipi di blocco, vedere [Types of blocks on the debug heap](/visualstudio/debugger/crt-debug-heap-details) (Tipi di blocchi sull'heap di debug).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tdupenv_s_dbg`|`_dupenv_s_dbg`|`_dupenv_s_dbg`|`_wdupenv_s_dbg`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_dupenv_s_dbg`|\<crtdbg.h>|  
|`_wdupenv_s_dbg`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_dupenv_s_dbg.c  
#include  <stdlib.h>  
#include <crtdbg.h>  
  
int main( void )  
{  
   char *pValue;  
   size_t len;  
   errno_t err = _dupenv_s_dbg( &pValue, &len, "pathext",  
      _NORMAL_BLOCK, __FILE__, __LINE__ );  
   if ( err ) return -1;  
   printf( "pathext = %s\n", pValue );  
   free( pValue );  
   err = _dupenv_s_dbg( &pValue, &len, "nonexistentvariable",  
      _NORMAL_BLOCK, __FILE__, __LINE__ );  
   if ( err ) return -1;  
   printf( "nonexistentvariable = %s\n", pValue );  
   free( pValue ); // It's OK to call free with NULL  
}  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
pathext = .COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.pl  
nonexistentvariable = (null)  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)  (Controllo processo e ambiente)  
 [Environmental Constants](../../c-runtime-library/environmental-constants.md)  (Costanti di ambiente)  
 [getenv_s, _wgetenv_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md)   
 [_putenv_s, _wputenv_s](../../c-runtime-library/reference/putenv-s-wputenv-s.md)
