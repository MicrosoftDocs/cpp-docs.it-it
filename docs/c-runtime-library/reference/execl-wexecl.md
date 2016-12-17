---
title: "_execl, _wexecl | Microsoft Docs"
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
  - "_execl"
  - "_wexecl"
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
  - "_execl"
  - "_wexecl"
  - "wexecl"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_execl (funzione)"
  - "_wexecl (funzione)"
  - "execl (funzione)"
  - "wexecl (funzione)"
ms.assetid: 81fefb8a-0a06-4221-b2bc-be18e38e89f4
caps.latest.revision: 23
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _execl, _wexecl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Carica ed esegue i nuovi processi figlio.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
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
  
#### Parametri  
 `cmdname`  
 Percorso del file da eseguire.  
  
 `arg0`, `...``argn`  
 Elenco dei puntatori ai parametri.  
  
## Valore restituito  
 Se vengono completate correttamente, queste funzioni non restituiscono nessun valore al processo chiamante.  Un valore restituito pari a –1 indica un errore, in questo caso viene impostata la variabile globale `errno`.  
  
|valore errno|Descrizione|  
|------------------|-----------------|  
|`E2BIG`|Lo spazio necessario per gli argomenti e le impostazioni di ambiente supera 32 KB.|  
|`EACCES`|Il file specificato ha una violazione di blocco o di condivisione.|  
|`EINVAL`|Parametro non valido \(uno o più parametri è un puntatore null o una stringa vuota\).|  
|`EMFILE`|Vengono aperti troppi file \(il file specificato deve essere aperto per determinare se è eseguibile\).|  
|`ENOENT`|Il file o il percorso non è stato trovato.|  
|`ENOEXEC`|Il file specificato non è eseguibile o ha un formato di file eseguibile non valido.|  
|`ENOMEM`|Memoria insufficiente per eseguire il nuovo processo; la memoria disponibile è stata danneggiata; o c'è un blocco non valido, che indica che il processo chiamante non è stato allocato correttamente.|  
  
## Note  
 Ognuna di queste funzioni carica ed esegue un nuovo processo, passando ogni argomento della riga di comando come un parametro separato..  Il primo argomento è il nome del file eseguibile o del comando, e il secondo argomento deve essere uguale al primo.  Diventa `argv[0]` nel processo eseguito.  Il terzo argomento è il primo argomento, `argv[1]`, del processo che viene eseguito.  
  
 Le funzioni `_execl` convalidano i parametri.  Se `cmdname` o `arg0` è un puntatore null o una stringa vuota, queste funzioni richiamano il gestore non valido di parametro come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md) Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EINVAL` e restituiscono \-1.  Nessun nuovo processo viene eseguito.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|-------------------------------|------------------------------|  
|`_execl`|\<process.h\>|\<errno.h\>|  
|`_wexecl`|\<process.h\> o \<wchar.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio in [Funzioni \_exec, \_wexec](../../c-runtime-library/exec-wexec-functions.md).  
  
## Equivalente .NET Framework  
  
-   [System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx)  
  
-   [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Funzioni \_exec, \_wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [exit, \_Exit, \_exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [\_onexit, \_onexit\_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [Funzioni \_spawn, \_wspawn](../../c-runtime-library/spawn-wspawn-functions.md)   
 [system, \_wsystem](../../c-runtime-library/reference/system-wsystem.md)