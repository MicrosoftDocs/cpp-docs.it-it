---
title: _execlp, _wexeclp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wexeclp
- _execlp
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
- _wexeclp
- wexeclp
- _execlp
dev_langs: C++
helpviewer_keywords:
- execlp function
- _execlp function
- _wexeclp function
- wexeclp function
ms.assetid: 7b179163-4bcd-4d6a-8baf-68f886791928
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f02bff312ec718333aa46184830397976b0df240
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="execlp-wexeclp"></a>_execlp, _wexeclp
Carica ed esegue nuovi processi figlio.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
intptr_t _execlp(   
   const char *cmdname,  
   const char *arg0,  
   ... const char *argn,  
   NULL   
);  
intptr_t _wexeclp(   
   const wchar_t *cmdname,  
   const wchar_t *arg0,  
   ... const wchar_t *argn,  
   NULL   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `cmdname`  
 Percorso del file da eseguire.  
  
 `arg0, ... argn`  
 Elenco di puntatori ai parametri.  
  
## <a name="return-value"></a>Valore restituito  
 Se l'operazione riesce, le funzioni non ritornano al processo chiamante. Il valore restituito-1 indica un errore, nel qual caso il `errno` è impostata la variabile globale.  
  
|Valore di `errno`|Descrizione|  
|-------------------|-----------------|  
|`E2BIG`|Lo spazio necessario per gli argomenti e le impostazioni di ambiente supera 32 KB.|  
|`EACCES`|Il file specificato dispone di una violazione di blocco o di condivisione.|  
|`EINVAL`|Parametro non valido.|  
|`EMFILE`|Troppi file aperti (il file specificato deve essere aperto per determinare se sia eseguibile).|  
|`ENOENT`|File o percorso non trovato.|  
|`ENOEXEC`|Il file specificato non è eseguibile o il formato del file eseguibile non è valido.|  
|`ENOMEM`|Memoria insufficiente per eseguire il nuovo processo; la memoria disponibile è stata danneggiata; o esiste un blocco non valido che indica che il processo chiamante non è stato allocato correttamente.|  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni carica ed esegue un nuovo processo, passando ogni argomento della riga di comando come parametro separato e usando la variabile di ambiente `PATH` per trovare il file da eseguire.  
  
 Le funzioni `_execlp` convalidano i propri parametri. Se `cmdname` o `arg0` sono puntatori Null o stringhe vuote, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono -1. Non viene avviato alcun nuovo processo.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|---------------------|---------------------|  
|`_execlp`|\<process.h>|\<errno.h>|  
|`_wexeclp`|\<process.h> o \<wchar.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio in [Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)  (Controllo processo e ambiente)  
 [Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)