---
title: "_execv, _wexecv | Microsoft Docs"
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
  - "_wexecv"
  - "_execv"
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
  - "_execv"
  - "_wexecv"
  - "wexecv"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_execv (funzione)"
  - "_wexecv (funzione)"
  - "execv (funzione)"
  - "wexecv (funzione)"
ms.assetid: 8dbaf7bc-9040-4316-a0c1-db7e866b52af
caps.latest.revision: 23
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _execv, _wexecv
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Carica ed esegue i nuovi processi figlio.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
intptr_t _execv(   
   const char *cmdname,  
   const char *const *argv   
);  
intptr_t _wexecv(   
   const wchar_t *cmdname,  
   const wchar_t *const *argv   
);  
```  
  
#### Parametri  
 `cmdname`  
 Il percorso del file da eseguire.  
  
 `argv`  
 Matrice di puntatori ai parametri.  
  
## Valore restituito  
 Se vengono completate correttamente, queste funzioni non restituiscono nessun valore al processo chiamante.  Un valore restituito pari a –1 indica un errore, in questo caso viene impostata la variabile globale `errno`.  
  
|Valore `errno`|Descrizione|  
|--------------------|-----------------|  
|`E2BIG`|Lo spazio necessario per gli argomenti e le impostazioni di ambiente supera 32 KB.|  
|`EACCES`|Il file specificato ha una violazione di blocco o di condivisione.|  
|`EINVAL`|Parametro non valido.|  
|`EMFILE`|Vengono aperti troppi file \(il file specificato deve essere aperto per determinare se è eseguibile\).|  
|`ENOENT`|Impossibile trovare il file o il percorso.|  
|`ENOEXEC`|Il file specificato non è eseguibile o ha un formato di file eseguibile non valido.|  
|`ENOMEM`|Memoria insufficiente per eseguire il nuovo processo; la memoria disponibile è stata danneggiata; o c'è un blocco non valido, che indica che il processo chiamante non è stato allocato correttamente.|  
  
 Per ulteriori informazioni su questi e altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Ognuna di queste funzioni carica ed esegue un nuovo processo, passando una matrice di puntatori agli argomenti alla riga di comando.  
  
 Le funzioni `_execv` convalidano i parametri.  Se `cmdname` è un puntatore null, o se `argv` è un puntatore null, un puntatore ad una matrice vuota oppure se la matrice contiene una stringa vuota come primo argomento, le funzioni `_execv` richiamano il gestore di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono \-1.  Nessun processo viene avviato.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|-------------------------------|------------------------------|  
|`_execv`|\<process.h\>|\<errno.h\>|  
|`_wexecv`|\<process.h\> o \<wchar.h\>|\<errno.h\>|  
  
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