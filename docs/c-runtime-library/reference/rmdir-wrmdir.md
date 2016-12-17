---
title: "_rmdir, _wrmdir | Microsoft Docs"
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
  - "_wrmdir"
  - "_rmdir"
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
  - "trmdir"
  - "_trmdir"
  - "wrmdir"
  - "_rmdir"
  - "_wrmdir"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_rmdir (funzione)"
  - "_trmdir (funzione)"
  - "_wrmdir (funzione)"
  - "directory [C++], eliminazione"
  - "directory [C++], rimozione"
  - "rmdir (funzione)"
  - "trmdir (funzione)"
  - "wrmdir (funzione)"
ms.assetid: 652c2a5a-b0ac-4493-864e-1edf484333c5
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _rmdir, _wrmdir
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Elimina una directory.  
  
## Sintassi  
  
```  
  
      int _rmdir(  
   const char *dirname   
);  
int _wrmdir(  
   const wchar_t *dirname   
);  
```  
  
#### Parametri  
 `dirname`  
 Percorso della directory da rimuovere.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce 0 se la directory corretta viene eliminata.  Il valore di ritorno \-1 indica un errore e `errno` viene impostato su uno dei seguenti valori:  
  
 **ENOTEMPTY**  
 Il percorso specificato non è una directory, la directory non è vuota, o la directory è la directory di lavoro corrente o la directory radice.  
  
 `ENOENT`  
 Percorso non valido.  
  
 **EACCES**  
 Un programma ha un handle aperto nella directory.  
  
 Per ulteriori informazioni su questi e altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_rmdir` elimina la directory specificata da `dirname`.  La directory deve essere vuota e non deve essere la cartella di lavoro corrente o la directory radice.  
  
 `_wrmdir` è una versione a caratteri estesi di `_rmdir`; l'argomento `dirname` in `_wrmdir` è una stringa di caratteri estesi.  `_wrmdir` e `_rmdir` si comportano in modo identico in caso contrario.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_trmdir`|`_rmdir`|`_rmdir`|`_wrmdir`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_rmdir`|\<direct.h\>|  
|`_wrmdir`|\<direct.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Vedere l'esempio relativo a [\_mkdir](../../c-runtime-library/reference/mkdir-wmkdir.md).  
  
## Equivalente .NET Framework  
 [System::IO::Directory::Delete](https://msdn.microsoft.com/en-us/library/system.io.directory.delete.aspx)  
  
## Vedere anche  
 [Controllo Directory](../../c-runtime-library/directory-control.md)   
 [\_chdir, \_wchdir](../../c-runtime-library/reference/chdir-wchdir.md)   
 [\_mkdir, \_wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)