---
title: "_filelength, _filelengthi64 | Microsoft Docs"
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
  - "_filelengthi64"
  - "_filelength"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_filelength"
  - "_filelengthi64"
  - "filelengthi64"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_filelength (funzione)"
  - "_filelengthi64 (funzione)"
  - "filelength (funzione)"
  - "filelengthi64 (funzione)"
  - "file [C++], lunghezza"
  - "lunghezze, file"
ms.assetid: 3ab83d5a-543c-4079-b9d9-0abfc7da0275
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _filelength, _filelengthi64
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la lunghezza di una file.  
  
## Sintassi  
  
```  
long _filelength(   
   int fd   
);  
__int64 _filelengthi64(   
   int fd   
);  
```  
  
#### Parametri  
 `fd`  
 Ha come target il descrittore del file.  
  
## Valore restituito  
 Sia `_filelength` che `_filelengthi64` restituiscono la lunghezza del file, in byte, del file di destinazione associato a `fd`.  Se `fd` è un descrittore di file non valido,questa funzione invoca il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Si viene consentito all'esecuzione di continuare, entrambe le funzioni restituiscono \-1L per indicare un errore e impostano `errno` a `EBADF`.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_filelength`|\<io.h\>|  
|`_filelengthi64`|\<io.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [\_chsize](../../c-runtime-library/reference/chsize.md).  
  
## Equivalente .NET Framework  
  
-   [System::IO::Stream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.stream.setlength.aspx)  
  
-   [System::IO::FileStream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.filestream.setlength.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_chsize](../../c-runtime-library/reference/chsize.md)   
 [\_fileno](../../c-runtime-library/reference/fileno.md)   
 [\_fstat, \_fstat32, \_fstat64, \_fstati64, \_fstat32i64, \_fstat64i32](../../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [\_fstat, \_fstat32, \_fstat64, \_fstati64, \_fstat32i64, \_fstat64i32](../../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)   
 [Funzioni \_stat, \_wstat](../../c-runtime-library/reference/stat-functions.md)   
 [Funzioni \_stat, \_wstat](../../c-runtime-library/reference/stat-functions.md)