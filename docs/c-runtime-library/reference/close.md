---
title: "_close | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_close"
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
  - "_close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_close (funzione)"
  - "close (funzione)"
  - "file [C++], chiusura"
ms.assetid: 4708a329-8acf-4cd9-b7b0-a952e1897247
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _close
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiude un file.  
  
## Sintassi  
  
```  
int _close(   
   int fd   
);  
```  
  
#### Parametri  
 `fd`  
 Il descrittore del file che fa riferimento al file aperto.  
  
## Valore restituito  
 `_close` restituisce 0 se il file è stato chiuso correttamente.  Un valore restituito pari a –1 indica un errore.  
  
## Note  
 La funzione `_close` chiude il file associato con `fd`.  
  
 Il descrittore di file e gli handle di file del sistema operativo sottostante vengono chiusi.  Pertanto, non è necessario chiamare `CloseHandle` se il file è stato originariamente aperto utilizzando la funzione Win32 `CreateFile` e convertito in un descrittore di file utilizzando `_open_osfhandle`.  
  
 Questa funzione convalida i parametri.  Se `fd` è un descrittore di file non valido, il gestore di parametri non validi viene invocato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può proseguire, la funzione ritorna \-1 e `errno` viene impostato su `EBADF`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_close`|\<io.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [\_open](../../c-runtime-library/reference/open-wopen.md).  
  
## Vedere anche  
 [I\/O a basso livello](../../c-runtime-library/low-level-i-o.md)   
 [\_chsize](../../c-runtime-library/reference/chsize.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [\_dup, \_dup2](../../c-runtime-library/reference/dup-dup2.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)   
 [\_unlink, \_wunlink](../../c-runtime-library/reference/unlink-wunlink.md)