---
title: _spawnl, _wspawnl | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _wspawnl
- _spawnl
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
- api-ms-win-crt-process-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- spawnl
- wspawnl
- _wspawnl
- _spawnl
dev_langs:
- C++
helpviewer_keywords:
- spawnl function
- processes, creating
- _spawnl function
- processes, executing new
- _wspawnl function
- wspawnl function
- process creation
ms.assetid: dd4584c9-7173-4fc5-b93a-6e7d3c2316d7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 24dff1d93952db30f641e5a4d105c88450715231
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="spawnl-wspawnl"></a>_spawnl, _wspawnl
Crea ed esegue un nuovo processo.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
intptr_t _spawnl(  
   int mode,  
   const char *cmdname,  
   const char *arg0,  
   const char *arg1,  
   ... const char *argn,  
   NULL   
);  
intptr_t _wspawnl(  
   int mode,  
   const wchar_t *cmdname,  
   const wchar_t *arg0,  
   const wchar_t *arg1,  
   ... const wchar_t *argn,  
   NULL   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `mode`  
 Modalità di esecuzione del processo chiamante.  
  
 `cmdname`  
 Percorso del file da eseguire.  
  
 `arg0, arg1, ... argn`  
 Elenco dei puntatori agli argomenti. L'argomento `arg0` è solitamente un puntatore a `cmdname`. Gli argomenti da `arg1` a `argn` sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti. Dopo `argn`, ci deve essere un puntatore `NULL` per contrassegnare la fine dell'elenco di argomenti.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito da un `_spawnl` sincrono o `_wspawnl` (`_P_WAIT` specificato per `mode`) è lo stato di uscita del nuovo processo. Il valore restituito da un `_spawnl` asincrono o `_wspawnl` (`_P_NOWAIT` o `_P_NOWAITO` specificato per `mode`) è l'handle del processo. Lo stato di uscita è 0 se il processo è terminato normalmente. È possibile impostare lo stato di uscita su un valore diverso da zero se il processo generato chiama specificatamente la routine `exit` con un argomento diverso da zero. Se il nuovo processo non ha impostato in modo esplicito uno stato di uscita positivo, uno stato di uscita positivo indica l'uscita anomala con interruzione. Il valore restituito-1 indica un errore (il nuovo processo non è avviato). In questo caso, `errno` è impostato su uno dei valori indicati di seguito.  
  
 `E2BIG`  
 L'elenco di argomenti supera i 1024 byte.  
  
 `EINVAL`  
 L'argomento `mode` non è valido.  
  
 `ENOENT`  
 Il file o il percorso non è stato trovato.  
  
 `ENOEXEC`  
 Il file specificato non è eseguibile o il formato del file eseguibile non è valido.  
  
 `ENOMEM`  
 Memoria insufficiente per eseguire il nuovo processo.  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Queste funzioni convalidano i relativi parametri. Se `cmdname` o `arg0` è una stringa vuota o un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL`e restituiscono -1. Nessun nuovo processo viene generato.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni crea ed esegue un nuovo processo, passando ogni argomento della riga di comando come parametro separato.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_spawnl`|\<process.h>|  
|`_wspawnl`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio in [Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_flushall](../../c-runtime-library/reference/flushall.md)   
 [_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)