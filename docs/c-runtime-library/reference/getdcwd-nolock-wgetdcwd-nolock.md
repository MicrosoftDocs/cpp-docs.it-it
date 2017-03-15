---
title: "_getdcwd_nolock, _wgetdcwd_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wgetdcwd_nolock"
  - "_getdcwd_nolock"
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
apitype: "DLLExport"
f1_keywords: 
  - "_wgetdcwd_nolock"
  - "tgetdcwd_nolock"
  - "wgetdcwd_nolock"
  - "_getdcwd_nolock"
  - "_tgetdcwd_nolock"
  - "getdcwd_nolock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_getdcwd_nolock (funzione)"
  - "_tgetdcwd_nolock (funzione)"
  - "_wgetdcwd_nolock (funzione)"
  - "directory di lavoro corrente"
  - "directory [C++], lavoro corrente"
  - "getdcwd_nolock (funzione)"
  - "tgetdcwd_nolock (funzione)"
  - "wgetdcwd_nolock (funzione)"
  - "directory di lavoro"
ms.assetid: d9bdf712-43f8-4173-8f9a-844e82beaa97
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _getdcwd_nolock, _wgetdcwd_nolock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene il percorso completo della directory di lavoro corrente nell'unità specificata.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *_getdcwd_nolock(   
   int drive,  
   char *buffer,  
   int maxlen   
);  
wchar_t *_wgetdcwd_nolock(   
   int drive,  
   wchar_t *buffer,  
   int maxlen   
);  
```  
  
#### Parametri  
 `drive`  
 Unità disco.  
  
 `buffer`  
 Locazione di archiviazione per il percorso.  
  
 `maxlen`  
 Lunghezza massima del percorso in caratteri: `char` per `_getdcwd` e `wchar_t` per `_wgetdcwd`.  
  
## Valore restituito  
 Vedere [\_getdcwd, \_wgetdcwd](../../c-runtime-library/reference/getdcwd-wgetdcwd.md).  
  
## Note  
 `_getdcwd_nolock` e `_wgetdcwd_nolock` sono identiche rispettivamente a `_getdcwd` e `_wgetdcwd` ad eccezione del fatto che non sono protette dalle interferenze da parte di altre thread.  Potrebbero essere più veloci perché non comportano un sovraccarico che blocca altri thread.  Utilizzare queste funzioni solo in contesti thread\-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tgetdcwd_nolock`|`_getdcwd_nolock`|`_getdcwd_nolock`|`_wgetdcwd_nolock`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_getdcwd_nolock`|\<direct.h\>|  
|`_wgetdcwd_nolock`|\<direct.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 [System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)  
  
## Vedere anche  
 [Controllo Directory](../../c-runtime-library/directory-control.md)   
 [\_chdir, \_wchdir](../../c-runtime-library/reference/chdir-wchdir.md)   
 [\_getcwd, \_wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)   
 [\_getdrive](../../c-runtime-library/reference/getdrive.md)   
 [\_mkdir, \_wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)   
 [\_rmdir, \_wrmdir](../../c-runtime-library/reference/rmdir-wrmdir.md)