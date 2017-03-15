---
title: "_chsize_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_chsize_s"
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
  - "chsize_s"
  - "_chsize_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_chsize_s (funzione)"
  - "chsize_s (funzione)"
  - "file [C++], modifica delle dimensioni"
ms.assetid: d88d2e94-6e3b-42a5-8631-16ac4d82fa38
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _chsize_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cambia la dimensione di un file.  Si tratta di una versione di [\_chsize](../../c-runtime-library/reference/chsize.md) con miglioramenti di sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _chsize_s(   
   int fd,  
   __int64 size   
);  
```  
  
#### Parametri  
 `fd`  
 Il descrittore del file che fa riferimento a un file aperto.  
  
 `size`  
 Nuova lunghezza del file in byte.  
  
## Valore restituito  
 `_chsize_s` restituisce il valore 0 se le dimensioni del file vengono correttamente modificate.  Un valore diverso da zero indica un errore: il valore restituito è `EACCES` se il file specificato è bloccato all'accesso, `EBADF` se il file specificato è di sola lettura o il descrittore non è valido, `ENOSPC` se non c'è più spazio nel dispositivo, o `EINVAL` se la dimensione è minore di zero.  `errno` è impostato sullo stesso valore.  
  
 Per ulteriori informazioni su questi e altri codici restituiti, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_chsize_s` estende o tronca il file associato con `fd` alla lunghezza specificata da `size`.  Il file deve essere aperto in una modalità che consente di scrivere.  I caratteri null \('\\0'\) vengono aggiunti se il file viene esteso.  Se il file viene troncato, tutti i dati dalla fine del file ridotto alla lunghezza originale del file verranno persi.  
  
 `_chsize_s` accetta un intero a 64 bit come la dimensione del file e quindi può gestire dimensioni del file maggiori di 4 GB.  `_chsize` è limitato alle dimensioni dei file a 32 bit.  
  
 Questa funzione convalida i parametri.  Se `fd` non è un descrittore di file valido o la dimensione è minore di zero, il gestore di parametro non valido viene invocato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_chsize_s`|\<io.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
  
-   [System::IO::Stream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.stream.setlength.aspx)  
  
-   [System::IO::FileStream::SetLength](https://msdn.microsoft.com/en-us/library/system.io.filestream.setlength.aspx)  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [\_chsize](../../c-runtime-library/reference/chsize.md)   
 [\_close](../../c-runtime-library/reference/close.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)