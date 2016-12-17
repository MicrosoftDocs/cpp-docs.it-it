---
title: "_dupenv_s_dbg, _wdupenv_s_dbg | Microsoft Docs"
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
  - "_dupenv_s_dbg"
  - "_wdupenv_s_dbg"
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
  - "_tdupenv_s_dbg"
  - "_dupenv_s_dbg"
  - "_wdupenv_s_dbg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_tdupenv_s_dbg (funzione)"
  - "dupenv_s_dbg (funzione)"
  - "_wdupenv_s_dbg (funzione)"
  - "variabili di ambiente"
  - "tdupenv_s_dbg (funzione)"
  - "wdupenv_s_dbg (funzione)"
  - "_dupenv_s_dbg (funzione)"
ms.assetid: e3d81148-e24e-46d0-a21d-fd87b5e6256c
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _dupenv_s_dbg, _wdupenv_s_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene un valore dell'ambiente corrente.  Le versioni [\_dupenv\_s, \_wdupenv\_s](../../c-runtime-library/reference/dupenv-s-wdupenv-s.md) che allocano memoria con [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md) per fornire informazioni aggiuntive di debug.  
  
## Sintassi  
  
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
  
#### Parametri  
 `buffer`  
 Buffer per archiviare il valore della variabile.  
  
 `numberOfElements`  
 Dimensione del `buffer`.  
  
 `varname`  
 Nome della variabile d'ambiente.  
  
 `blockType`  
 Tipo richiesto del blocco di memoria: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine o `NULL`.  
  
 `linenumber`  
 Numero di riga nel file di origine o `NULL`.  
  
## Valore restituito  
 Zero in caso di successo, un codice di errore in caso di fallimento.  
  
 Queste funzioni convalidano i parametri; se `buffer` o `varname` è `NULL`, viene richiamato il gestore di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, le funzioni impostano `errno` su `EINVAL` e restituiscono `EINVAL`.  
  
 Se queste funzioni non sono in grado di allocare abbastanza memoria, impostano `buffer` a `NULL` e il `numberOfElements` a 0, e restituiscono `ENOMEM`.  
  
## Note  
 Le funzioni `_wdupenv_s_dbg` `_dupenv_s_dbg` sono identiche a `_dupenv_s` e `_wdupenv_s` tranne per il fatto che, quando viene definito `_DEBUG`, queste funzioni utilizzano la versione di debug di [malloc](../../c-runtime-library/reference/malloc.md), [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md), per allocare memoria per il valore della variabile.  Per informazioni sulle funzionalità di debug `_malloc_dbg`, consultare [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md).  
  
 Non è necessario chiamare queste funzioni in modo esplicito nella maggior parte dei casi.  In alternativa, è possibile definire il flag `_CRTDBG_MAP_ALLOC`.  Quando `_CRTDBG_MAP_ALLOC` è definito, le chiamate a `_dupenv_s` e `_wdupenv_s` sono rimappate a `_dupenv_s_dbg` e `_wdupenv_s_dbg`, rispettivamente, con `blockType` impostato su `_NORMAL_BLOCK`.  Pertanto, non è necessario chiamare queste funzioni in modo esplicito a meno che si desidera contrassegnare blocchi di memoria heap come `_CLIENT_BLOCK`.  Per ulteriori informazioni sui tipi di blocco, consultare [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tdupenv_s_dbg`|`_dupenv_s_dbg`|`_dupenv_s_dbg`|`_wdupenv_s_dbg`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_dupenv_s_dbg`|\<crtdbg.h\>|  
|`_wdupenv_s_dbg`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
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
  
## Esempio di output  
  
```  
pathext = .COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.pl  
nonexistentvariable = (null)  
```  
  
## Equivalente .NET Framework  
 [System::Environment::GetEnvironmentVariable](https://msdn.microsoft.com/en-us/library/system.environment.getenvironmentvariable.aspx)  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Costanti di ambiente](../../c-runtime-library/environmental-constants.md)   
 [getenv\_s, \_wgetenv\_s](../../c-runtime-library/reference/getenv-s-wgetenv-s.md)   
 [\_putenv\_s, \_wputenv\_s](../../c-runtime-library/reference/putenv-s-wputenv-s.md)