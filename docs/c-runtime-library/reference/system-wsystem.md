---
title: system, _wsystem | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- system
- _wsystem
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _tsystem
- _wsystem
dev_langs:
- C++
helpviewer_keywords:
- _wsystem function
- wsystem function
- tsystem function
- _tsystem function
- system function
- commands, executing
- command interpreter
ms.assetid: 7d3df2b6-f742-49ce-bf52-012b0aee3df5
caps.latest.revision: 17
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
ms.openlocfilehash: 3ce182dd28fa5af0fef9c2c51c14fc54aa5af972
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="system-wsystem"></a>system, _wsystem
Esegue un comando.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int system(  
   const char *command   
);  
int _wsystem(  
   const wchar_t *command   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `command`  
 Comando da eseguire.  
  
## <a name="return-value"></a>Valore restituito  
 Se `command` è `NULL` e viene trovato l'interprete dei comandi, restituisce un valore diverso da zero. Se l'interprete dei comandi non viene trovato, restituisce 0 e imposta `errno` su `ENOENT`. Se `command` non è `NULL`, `system` restituisce il valore restituito dall'interprete dei comandi. Restituisce il valore 0 solo se l'interprete dei comandi restituisce il valore 0. Valore restituito di - 1 indica un errore e `errno` è impostata su uno dei valori seguenti:  
  
 `E2BIG`  
 L'elenco degli argomenti (che è dipendente dal sistema) è troppo grande.  
  
 `ENOENT`  
 L'interprete dei comandi non viene trovato.  
  
 `ENOEXEC`  
 Il file dell'interprete dei comandi non può essere eseguito perché il formato non è valido.  
  
 `ENOMEM`  
 Memoria insufficiente per eseguire il comando; la memoria disponibile è stata danneggiata; esiste un blocco non valido che indica che il processo chiamante non è stato allocato correttamente.  
  
 Per altre informazioni su questi codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `system` passa `command` all'interprete dei comandi che esegue la stringa come un comando del sistema operativo. `system` usa le variabili di ambiente `COMSPEC` e `PATH` per individuare il file CMD.exe dell'interprete dei comandi. Se `command` è `NULL`, la funzione verifica solo se l'interprete dei comandi esiste.  
  
 È necessario chiudere o svuotare in modo esplicito qualsiasi flusso, usando `fflush` o `_flushall`, prima di chiamare `system`.  
  
 `_wsystem` è una versione a caratteri wide di `system`; l'argomento `command` in `_wsystem` è una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tsystem`|`system`|`system`|`_wsystem`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`system`|\<process.h> o \<stdlib.h>|  
|`_wsystem`|\<process.h> o \<stdlib.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 In questo esempio si usa `system` per digitare un file di testo.  
  
```  
// crt_system.c  
  
#include <process.h>  
  
int main( void )  
{  
   system( "type crt_system.txt" );  
}  
```  
  
## <a name="input-crtsystemtxt"></a>Input: crt_system.txt  
  
```  
Line one.  
Line two.  
```  
  
### <a name="output"></a>Output  
  
```  
Line one.  
Line two.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)  (Controllo processo e ambiente)  
 [Funzioni _exec, _wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_flushall](../../c-runtime-library/reference/flushall.md)   
 [Funzioni _spawn, _wspawn](../../c-runtime-library/spawn-wspawn-functions.md)
