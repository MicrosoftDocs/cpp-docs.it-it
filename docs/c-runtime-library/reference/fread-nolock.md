---
title: "_fread_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fread_nolock"
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
  - "_fread_nolock"
  - "fread_nolock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_fread_nolock (funzione)"
  - "dati [C++], lettura dal flusso di input"
  - "fread_nolock (funzione)"
  - "lettura di dati [C++], flussi di input"
  - "flussi [C++], lettura di dati"
ms.assetid: 60e4958b-1097-46f5-a77b-94af5e7dba40
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# _fread_nolock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati da un flusso, senza bloccare altri thread.  
  
## Sintassi  
  
```  
size_t _fread_nolock(   
   void *buffer,  
   size_t size,  
   size_t count,  
   FILE *stream   
);  
```  
  
#### Parametri  
 `buffer`  
 Percorso di archiviazione per i dati.  
  
 `size`  
 Dimensione dell'elemento in byte.  
  
 `count`  
 Numero massimo di elementi da leggere.  
  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 Vedere [fread](../../c-runtime-library/reference/fread.md).  
  
## Note  
 Questa funzione è una versione non bloccante di `fread`.  È identica a `fread` con la differenza che non è protetta da interferenze da parte di altri thread.  Potrebbe essere più veloce perché non comporta un sovraccarico che blocca altri thread.  Utilizzare questa funzione solo in contesti thread\-safe come applicazioni a thread singolo o dove l'ambito chiamante gestisce già l'isolamento del thread.  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fread_nolock`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 [System::IO::FileStream::Read](https://msdn.microsoft.com/en-us/library/system.io.filestream.read.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fwrite](../../c-runtime-library/reference/fwrite.md)   
 [\_read](../../c-runtime-library/reference/read.md)