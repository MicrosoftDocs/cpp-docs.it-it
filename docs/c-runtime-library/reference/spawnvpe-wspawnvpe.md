---
title: _spawnvpe, _wspawnvpe | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _spawnvpe
- _wspawnvpe
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
- _spawnvpe
- wspawnvpe
- spawnvpe
- _wspawnvpe
dev_langs:
- C++
helpviewer_keywords:
- _wspawnvpe function
- processes, creating
- _spawnvpe function
- processes, executing new
- wspawnvpe function
- process creation
- spawnvpe function
ms.assetid: 3db6394e-a955-4837-97a1-fab1db1e6092
caps.latest.revision: 16
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
ms.openlocfilehash: 5c6b6ce9e791ff0a514d5d5d04ba73a6de1b9c90
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="spawnvpe-wspawnvpe"></a>_spawnvpe, _wspawnvpe
Crea ed esegue un nuovo processo.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
intptr_t _spawnvpe(  
   int mode,  
   const char *cmdname,  
   const char *const *argv,  
   const char *const *envp   
);  
intptr_t _wspawnvpe(  
   int mode,  
   const wchar_t *cmdname,  
   const wchar_t *const *argv,  
   const wchar_t *const *envp   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `mode`  
 Modalità di esecuzione per il processo chiamante.  
  
 `cmdname`  
 Percorso del file da eseguire.  
  
 `argv`  
 Matrice di puntatori agli argomenti. L'argomento `argv`[0] è in genere un puntatore a un percorso in modalità reale o al nome del programma in modalità protetta e `argv`[1] con `argv`[`n`] sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti. L'argomento `argv`[`n` +1] deve essere un puntatore `NULL` per contrassegnare la fine dell'elenco di argomenti.  
  
 `envp`  
 Matrice di puntatori alle impostazioni d'ambiente.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito da un `_spawnvpe` sincrono o `_wspawnvpe` (`_P_WAIT` specificato per `mode`) è lo stato di uscita del nuovo processo. Il valore restituito da un `_spawnvpe` asincrono o `_wspawnvpe` (`_P_NOWAIT` o `_P_NOWAITO` specificato per `mode`) è l'handle del processo. Lo stato di uscita è 0 se il processo è terminato normalmente. È possibile impostare lo stato di uscita su un valore diverso da zero se il processo generato chiama specificatamente la routine `exit` con un argomento diverso da zero. Se il nuovo processo non ha impostato in modo esplicito uno stato di uscita positivo, uno stato di uscita positivo indica l'uscita anomala con interruzione. Il valore restituito-1 indica un errore (il nuovo processo non è avviato). In questo caso, `errno` è impostato su uno dei valori indicati di seguito:  
  
 `E2BIG`  
 L'elenco di argomenti supera i 1024 byte  
  
 `EINVAL`  
L'argomento  `mode` non è valido  
  
 `ENOENT`  
 Il file o il percorso non è stato trovato  
  
 `ENOEXEC`  
 Il file specificato non è eseguibile o il formato del file eseguibile non è valido  
  
 `ENOMEM`  
 Memoria insufficiente per eseguire il nuovo processo  
  
 Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni crea ed esegue un nuovo processo, passando una matrice di puntatori agli argomenti della riga di comando e una matrice di puntatori alle impostazioni di ambiente. Per trovare il file da eseguire, queste funzioni usano la variabile di ambiente `PATH`.  
  
 Queste funzioni convalidano i relativi parametri. Se `cmdname` o `argv` è un puntatore Null o se `argv` punta a un puntatore Null o `argv[0]` è una stringa vuota, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL`e restituiscono -1. Nessun nuovo processo viene generato.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_spawnvpe`|\<stdio.h> o \<process.h>|  
|`_wspawnvpe`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio in [Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_flushall](../../c-runtime-library/reference/flushall.md)   
 [_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)
