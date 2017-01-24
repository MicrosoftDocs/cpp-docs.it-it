---
title: "_fseek_nolock, _fseeki64_nolock | Microsoft Docs"
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
  - "_fseek_nolock"
  - "_fseeki64_nolock"
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
  - "_fseek_nolock"
  - "_fseeki64_nolock"
  - "fseek_nolock"
  - "fseeki64_nolock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fseek_nolock (funzione)"
  - "_fseeki64_nolock (funzione)"
  - "puntatori a file [C++], spostamento"
  - "fseek_nolock (funzione)"
  - "fseeki64_nolock (funzione)"
  - "posizionare i puntatori a file"
ms.assetid: 2dd4022e-b715-462b-b935-837561605a02
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _fseek_nolock, _fseeki64_nolock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sposta il puntatore del file in una posizione specificata.  
  
## Sintassi  
  
```  
int _fseek_nolock(   
   FILE *stream,  
   long offset,  
   int origin   
);  
int _fseeki64_nolock(   
   FILE *stream,  
   __int64 offset,  
   int origin   
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
 `offset`  
 Numero di byte da `origin.`  
  
 `origin`  
 Posizione iniziale.  
  
## Valore restituito  
 Equivalente rispettivamente a [fseek, \_fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md).  
  
## Note  
 Queste funzioni sono rispettivamente le versioni non bloccanti di `fseek` e `_fseeki64`.          Sono identiche a `fseek` e a `_fseeki64`, ad eccezione del fatto che non sono protette dalle interferenze da parte di altre thread.  Queste funzioni potrebbero essere più veloci perché non incorrono nel sovraccarico del bloccaggio di altri thread.  Utilizzare queste funzioni solo in contesti thread\-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`fseek`|\<stdio.h\>|  
|`_fseeki64`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Equivalente .NET Framework  
  
-   [System::IO::FileStream::Position](https://msdn.microsoft.com/en-us/library/system.io.filestream.position.aspx)  
  
-   [System::IO::FileStream::Seek](https://msdn.microsoft.com/en-us/library/system.io.filestream.seek.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [ftell, \_ftelli64](../../c-runtime-library/reference/ftell-ftelli64.md)   
 [\_lseek, \_lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)   
 [rewind](../../c-runtime-library/reference/rewind.md)