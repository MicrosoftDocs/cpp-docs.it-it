---
title: "_commit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_commit"
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
  - "_commit"
  - "commit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_commit (funzione)"
  - "commit (funzione)"
  - "commit di file su disco"
  - "file [C++], svuotamento"
  - "svuotamento di file su disco"
ms.assetid: d0c74d3a-4f2d-4fb0-b140-2d687db3d233
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# _commit
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scarica un file direttamente su disco.  
  
## Sintassi  
  
```  
int _commit(   
   int fd   
);  
```  
  
#### Parametri  
 `fd`  
 Il descrittore del file che fa riferimento al file aperto.  
  
## Valore restituito  
 `_commit` restituisce 0 se il file corretto è stato scaricato su disco.  Un valore restituito pari a –1 indica un errore.  
  
## Note  
 La funzione `_commit` forza il sistema operativo a scrivere il file associato a `fd` su disco.  Questa chiamata garantisce che il file specificato venga scaricato immediatamente, non a discrezione del sistema operativo.  
  
 Se `fd` è un descrittore di file non valido, il gestore di parametri non validi viene invocato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se all'esecuzione è permesso continuare, la funzione restituisce \-1 e `errno` viene impostato a `EBADF`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazioni facoltative|  
|-------------|-------------------------------|------------------------------|  
|`_commit`|\<io.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [I\/O a basso livello](../../c-runtime-library/low-level-i-o.md)   
 [\_creat, \_wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)   
 [\_read](../../c-runtime-library/reference/read.md)   
 [\_write](../../c-runtime-library/reference/write.md)