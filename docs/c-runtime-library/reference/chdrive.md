---
title: "_chdrive | Microsoft Docs"
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
  - "_chdrive"
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "chdrive"
  - "_chdrive"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_chdrive (funzione)"
  - "chdrive (funzione)"
  - "unità, modifica"
ms.assetid: 212a1a4b-4fa8-444e-9677-7fca4c8c47e3
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _chdrive
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cambia l'unità di lavoro corrente.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _chdrive(   
   int drive   
);  
```  
  
#### Parametri  
 `drive`  
 Un numero integer compreso tra 1 e 26 che specifica l'unità corrente di esecuzione \(1\=A, 2\=B, e così via\).  
  
## Valore restituito  
 Zero \(0\) se l'unità corrente di esecuzione è stata modificata correttamente; in caso contrario, \-1.  
  
## Note  
 Se `drive` non è compreso tra 1 e 26, il gestore di parametro non valido viene richiamato come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione **\_chdrive** ritorna \-1, `errno` è impostato a `EACCES`, e `_doserrno` è impostato a `ERROR_INVALID_DRIVE`.  
  
 La funzione **\_chdrive** non è thread\-safe poiché dipende dalla funzione **SetCurrentDirectory**, la quale non è thread\-safe.  Per utilizzare **\_chdrive** in modo sicuro in un'applicazione multithread, è necessario fornire la propria sincronizzazione dei thread.  Per ulteriori informazioni, visitare [MSDN Library](http://go.microsoft.com/fwlink/?LinkID=150542) e quindi cercare **SetCurrentDirectory**.  
  
 La funzione **\_chdrive** modifica solo l'unità corrente di esecuzione;  **\_chdir** modifica la cartella di lavoro corrente.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|**\_chdrive**|\<direct.h\>|  
  
 Per ulteriori informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Vedere l'esempio per [\_getdrive](../../c-runtime-library/reference/getdrive.md).  
  
## Equivalente .NET Framework  
 [System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)  
  
## Vedere anche  
 [Controllo Directory](../../c-runtime-library/directory-control.md)   
 [\_chdir, \_wchdir](../../c-runtime-library/reference/chdir-wchdir.md)   
 [\_fullpath, \_wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [\_getcwd, \_wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)   
 [\_getdrive](../../c-runtime-library/reference/getdrive.md)   
 [\_mkdir, \_wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)   
 [\_rmdir, \_wrmdir](../../c-runtime-library/reference/rmdir-wrmdir.md)   
 [system, \_wsystem](../../c-runtime-library/reference/system-wsystem.md)