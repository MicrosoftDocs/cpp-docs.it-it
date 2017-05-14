---
title: _spawnlpe, _wspawnlpe | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _spawnlpe
- _wspawnlpe
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
- spawnlpe
- _wspawnlpe
- _spawnlpe
- wspawnlpe
dev_langs:
- C++
helpviewer_keywords:
- _wspawnlpe function
- wspawnlpe function
- processes, creating
- spawnlpe function
- _spawnlpe function
- processes, executing new
- process creation
ms.assetid: e171ebfa-70e7-4c44-8331-2a291fc17bd6
caps.latest.revision: 18
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 9831f7056ef91f64bba54740fbf7a372beb8f335
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="spawnlpe-wspawnlpe"></a>_spawnlpe, _wspawnlpe
Crea ed esegue un nuovo processo.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
intptr_t _spawnlpe(  
   int mode,  
   const char *cmdname,  
   const char *arg0,  
   const char *arg1,  
   ... const char *argn,  
   NULL,  
   const char *const *envp   
);  
intptr_t _wspawnlpe(  
   int mode,  
   const wchar_t *cmdname,  
   const wchar_t *arg0,  
   const wchar_t *arg1,  
   ... const wchar_t *argn,  
   NULL,  
   const wchar_t *const *envp   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `mode`  
 Modalità di esecuzione del processo chiamante.  
  
 `cmdname`  
 Percorso del file da eseguire.  
  
 `arg0, arg1, ... argn`  
 Elenco dei puntatori agli argomenti. L'argomento `arg0` è in genere un puntatore a `cmdname`. Gli argomenti `arg1` tramite `argn` sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti. Dopo `argn`, ci deve essere un puntatore `NULL` per contrassegnare la fine dell'elenco di argomenti.  
  
 `envp`  
 Matrice di puntatori alle impostazioni d'ambiente.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito da un `_spawnlpe` sincrono o `_wspawnlpe` (`_P_WAIT` specificato per `mode`) è lo stato di uscita del nuovo processo. Il valore restituito da un `_spawnlpe` asincrono o `_wspawnlpe` (`_P_NOWAIT` o `_P_NOWAITO` specificato per `mode`) è l'handle del processo. Lo stato di uscita è 0 se il processo è terminato normalmente. È possibile impostare lo stato di uscita su un valore diverso da zero se il processo generato usa specificatamente un argomento diverso da zero per chiamare la routine `exit`. Se il nuovo processo non ha impostato in modo esplicito uno stato di uscita positivo, questo stato indica l'uscita anomala causata da un'interruzione. Il valore restituito-1 indica un errore (il nuovo processo non è avviato). In questo caso, `errno` è impostato su uno dei valori indicati di seguito.  
  
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
  
 Per altre informazioni su questi e altri codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni carica ed esegue un nuovo processo, passa ogni argomento della riga di comando come parametro separato e passa una matrice di puntatori alle impostazioni di ambiente. Per trovare il file da eseguire, queste funzioni usano la variabile di ambiente `PATH`.  
  
 Queste funzioni convalidano i relativi parametri. Se `cmdname` sincrono o `arg0` è una stringa vuota o un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL`e restituiscono -1. Nessun nuovo processo viene generato.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_spawnlpe`|\<process.h>|  
|`_wspawnlpe`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio in [Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)   
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
