---
title: "_unlock_file | Microsoft Docs"
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
  - "_unlock_file"
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
  - "_unlock_file"
  - "unlock_file"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_unlock_file (funzione)"
  - "file [C++], sblocco"
  - "unlock_file (funzione)"
  - "sblocco di file"
ms.assetid: cf380a51-6d3a-4f38-bd64-2d4fb57b4369
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _unlock_file
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sblocca un file, consentendo agli altri processi l'accesso al file.  
  
## Sintassi  
  
```  
void _unlock_file(  
   FILE* file  
);  
```  
  
#### Parametri  
 `file`  
 Gestione di file.  
  
## Note  
 La funzione `_unlock_file` sblocca il file specificato da `file`.  Lo sblocco di un file, consente agli altri processi l'accesso al file.  Questa funzione non deve essere chiamata a meno che `_lock_file` non sia stato precedentemente chiamato sul puntatore `file`.  La chiamata di `_unlock_file` su un file che non è bloccato può provocare un deadlock.  Per un esempio, vedere [\_lock\_file](../../c-runtime-library/reference/lock-file.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_unlock_file`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Equivalente .NET Framework  
 [System::IO::FileStream::Lock](https://msdn.microsoft.com/en-us/library/system.io.filestream.lock.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)   
 [\_lock\_file](../../c-runtime-library/reference/lock-file.md)