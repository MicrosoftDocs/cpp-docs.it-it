---
title: "_fwrite_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fwrite_nolock"
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
  - "_fwrite_nolock"
  - "fwrite_nolock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_fwrite_nolock (funzione)"
  - "fwrite_nolock (funzione)"
  - "flussi, scrittura di dati"
ms.assetid: 2b4ec6ce-742e-4615-8407-44a0a18ec1d7
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# _fwrite_nolock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Scrive i dati in un flusso, senza bloccare il thread.  
  
## Sintassi  
  
```  
size_t _fwrite_nolock(  
   const void *buffer,  
   size_t size,  
   size_t count,  
   FILE *stream   
);  
```  
  
#### Parametri  
 `buffer`  
 Puntatore ai dati da scrivere.  
  
 `size`  
 Dimensione dell'elemento in byte.  
  
 `count`  
 Numero massimo di elementi da scrivere.  
  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 Uguale a [fwrite](../../c-runtime-library/reference/fwrite.md).  
  
## Note  
 Questa funzione è una versione non bloccante di `fwrite`.  È identica a `fwrite` con la differenza che non è protetta da interferenze da parte di altri thread.  Potrebbe essere più veloce perché non comporta un sovraccarico che blocca altri thread.  Utilizzare questa funzione solo in contesti thread\-safe come applicazioni a thread singolo o dove l'ambito chiamante gestisce già l'isolamento del thread.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fwrite_nolock`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Vedere l'esempio relativo a [fread](../../c-runtime-library/reference/fread.md).  
  
## Equivalente .NET Framework  
 [System::IO::FileStream::Write](https://msdn.microsoft.com/en-us/library/system.io.filestream.write.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fread](../../c-runtime-library/reference/fread.md)   
 [\_write](../../c-runtime-library/reference/write.md)