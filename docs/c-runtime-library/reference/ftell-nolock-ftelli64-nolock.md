---
title: "_ftell_nolock, _ftelli64_nolock | Microsoft Docs"
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
  - "_ftelli64_nolock"
  - "_ftell_nolock"
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
  - "_ftelli64_nolock"
  - "ftelli64_nolock"
  - "ftell_nolock"
  - "_ftell_nolock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_ftell_nolock (funzione)"
  - "_ftelli64_nolock (funzione)"
  - "puntatori a file [C++], recupero posizione corrente"
  - "ftell_nolock (funzione)"
  - "ftelli64_nolock (funzione)"
ms.assetid: 84e68b0a-32f8-4c4a-90ad-3f2387685ede
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ftell_nolock, _ftelli64_nolock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la posizione corrente del puntatore ad un file, senza bloccare il thread.  
  
## Sintassi  
  
```  
long _ftell_nolock(   
   FILE *stream   
);  
__int64 _ftelli64_nolock(   
   FILE *stream   
);  
```  
  
#### Parametri  
 `stream`  
 Punta alla struttura `FILE`.  
  
## Valore restituito  
 Uguale a `ftell` e `_ftelli64`.  Per ulteriori informazioni, vedere [ftell, \_ftelli64](../../c-runtime-library/reference/ftell-ftelli64.md)**.**  
  
## Note  
 Queste funzioni sono versioni non bloccanti di `ftell` e `_ftelli64`, rispettivamente.  Sono identiche a `ftell` e `_ftelli64`ad eccezione del fatto che non sono protette dalle interferenze da parte di altre thread.  Queste funzioni potrebbero essere più veloci perché non incorrono nel sovraccarico di blocchi da parte di altri thread.  Utilizzare queste funzioni solo in contesti thread\-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazione facoltativa|  
|--------------|-------------------------------|------------------------------|  
|`ftell_nolock`|\<stdio.h\>|\<errno.h\>|  
|`_ftelli64_nolock`|\<stdio.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 [System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fgetpos](../../c-runtime-library/reference/fgetpos.md)   
 [fseek, \_fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md)   
 [\_lseek, \_lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)   
 [ftell, \_ftelli64](../../c-runtime-library/reference/ftell-ftelli64.md)