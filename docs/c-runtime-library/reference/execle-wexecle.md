---
title: "_execle, _wexecle | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_execle"
  - "_wexecle"
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
  - "api-ms-win-crt-process-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wexecle"
  - "_execle"
  - "_wexecle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_execle (funzione)"
  - "_wexecle (funzione)"
  - "execle (funzione)"
  - "wexecle (funzione)"
ms.assetid: 75efa9c5-96b7-4e23-acab-06258901f63a
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# _execle, _wexecle
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Carica ed esegue nuovi processi figlio.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
intptr_t _execle(   
   const char *cmdname,  
   const char *arg0,  
   ... const char *argn,  
   NULL,  
   const char *const *envp   
);  
intptr_t _wexecle(   
   const wchar_t *cmdname,  
   const wchar_t *arg0,  
   ... const wchar_t *argn,  
   NULL,  
   const char *const *envp   
);  
```  
  
#### Parametri  
 `cmdname`  
 Percorso del file da eseguire.  
  
 `arg0`, `...``argn`  
 Elenco di puntatori ai parametri.  
  
 `envp`  
 Matrice di puntatori alle impostazioni d'ambiente.  
  
## Valore restituito  
 Se l'operazione riesce, le funzioni non ritornano al processo chiamante.  Un valore restituito di \-1 indica un errore, nel qual caso è impostata la variabile globale `errno`.  
  
|Valore di `errno`|Descrizione|  
|-----------------------|-----------------|  
|`E2BIG`|Lo spazio necessario per gli argomenti e le impostazioni di ambiente supera 32 KB.|  
|`EACCES`|Il file specificato dispone di una violazione di blocco o di condivisione.|  
|`EINVAL`|Parametro non valido.|  
|`EMFILE`|Sono aperti troppi file.  \(Il file specificato deve essere aperto per determinare se sia eseguibile\).|  
|`ENOENT`|Il file o il percorso non è stato trovato.|  
|`ENOEXEC`|Il file specificato non è eseguibile o il formato del file eseguibile non è valido.|  
|`ENOMEM`|Memoria insufficiente per eseguire il nuovo processo; la memoria disponibile è stata danneggiata; o esiste un blocco non valido che indica che il processo chiamante non è stato allocato correttamente.|  
  
 Per ulteriori informazioni su questi codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Ognuna di queste funzioni carica ed esegue un nuovo processo, passa ogni argomento della riga di comando come parametro separato e passa una matrice di puntatori alle impostazioni di ambiente.  
  
 Le funzioni `_execle` convalidano i propri parametri.  Se `cmdname` o `arg0` sono puntatori Null o stringhe vuote, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono \-1.  Non viene avviato alcun nuovo processo.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|-------------------------------|------------------------------|  
|`_execle`|\<process.h\>|\<errno.h\>|  
|`_wexecle`|\<process.h\> o \<wchar.h\>|\<errno.h\>|  
  
 Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio nelle [Funzioni \_exec, \_wexec](../../c-runtime-library/exec-wexec-functions.md).  
  
## Equivalente .NET Framework  
  
-   [Classe System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx)  
  
-   [Classe System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Funzioni \_exec, \_wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [exit, \_Exit, \_exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [\_onexit, \_onexit\_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [Funzioni \_spawn, \_wspawn](../../c-runtime-library/spawn-wspawn-functions.md)   
 [system, \_wsystem](../../c-runtime-library/reference/system-wsystem.md)