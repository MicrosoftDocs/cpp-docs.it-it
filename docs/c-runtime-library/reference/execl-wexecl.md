---
title: _execl, _wexecl | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _execl
- _wexecl
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
- _execl
- _wexecl
- wexecl
dev_langs:
- C++
helpviewer_keywords:
- _execl function
- wexecl function
- _wexecl function
- execl function
ms.assetid: 81fefb8a-0a06-4221-b2bc-be18e38e89f4
caps.latest.revision: 23
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
ms.openlocfilehash: 670d4ddaa4209830f842c68eb84d1840e1592790
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="execl-wexecl"></a>_execl, _wexecl
Carica ed esegue nuovi processi figlio.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
intptr_t _execl(   
   const char *cmdname,  
   const char *arg0,  
   ... const char *argn,  
   NULL   
);  
intptr_t _wexecl(  
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
  
|Valore errno|Descrizione|  
|-----------------|-----------------|  
|`E2BIG`|Lo spazio necessario per gli argomenti e le impostazioni di ambiente supera 32 KB.|  
|`EACCES`|Il file specificato dispone di una violazione di blocco o di condivisione.|  
|`EINVAL`|Parametro non valido (uno o più parametri sono puntatori Null o stringhe vuote).|  
|`EMFILE`|Troppi file aperti (il file specificato deve essere aperto per determinare se sia eseguibile).|  
|`ENOENT`|Il file o il percorso non è stato trovato.|  
|`ENOEXEC`|Il file specificato non è eseguibile o il formato del file eseguibile non è valido.|  
|`ENOMEM`|Memoria insufficiente per eseguire il nuovo processo; la memoria disponibile è stata danneggiata; o esiste un blocco non valido che indica che il processo chiamante non è stato allocato correttamente.|  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni carica ed esegue un nuovo processo, passando ogni argomento della riga di comando come parametro separato. Il primo argomento è il comando o il nome del file eseguibile e il secondo argomento deve essere uguale al primo. Diventa `argv[0]` nel processo eseguito. Il terzo argomento è il primo argomento, `argv[1]`, del processo in esecuzione.  
  
 Le funzioni `_execl` convalidano i propri parametri. Se `cmdname` o `arg0` sono puntatori Null o stringhe vuote, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono -1. Non viene eseguito alcun nuovo processo.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|---------------------|---------------------|  
|`_execl`|\<process.h>|\<errno.h>|  
|`_wexecl`|\<process.h> o \<wchar.h>|\<errno.h>|  
  
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
