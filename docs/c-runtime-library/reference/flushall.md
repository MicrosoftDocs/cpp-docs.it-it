---
title: "_flushall | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_flushall"
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
  - "_flushall"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flushall (funzione)"
  - "svuotamento di flussi"
  - "flussi, scaricamento"
  - "_flushall (funzione)"
ms.assetid: 2cd73562-6d00-4ca2-b13c-80d0ae7870b5
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _flushall
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Elimina tutti i flussi; rimuove tutti i buffer.  
  
## Sintassi  
  
```  
int _flushall( void );  
```  
  
## Valore restituito  
 `_flushall` restituisce il numero di flussi aperti \(input e output\).  Nessun ritorno di errore.  
  
## Note  
 Per impostazione predefinita, la funzione `_flushall` scrive sui file appropriati i contenuti di tutti i buffer associati ai flussi aperti di output.  A tutti i buffer associati ai flussi aperti di input vengono cancellati i contenuti correnti. \(Questi buffer sono normalmente gestiti dal sistema operativo, il quale determina il momento ottimale per scrivere automaticamente i dati sul disco: quando un buffer è completo, o un flusso viene chiuso, o quando un programma termina normalmente senza chiudere i flussi.\)  
  
 Se una lettura segue una chiamata a `_flushall`, i nuovi dati vengono letti dai file di input nel buffer.  Tutti i flussi rimangono aperti dopo la chiamata a `_flushall`.  
  
 La funzionalità di commit su disco della libreria di runtime consente di assicurare che i dati critici siano scritti direttamente su disco anziché nei buffer del sistema operativo.  Senza riscrivere un programma esistente, è possibile abilitare questa funzionalità collegando i file oggetto del programma a Commode.obj.  Nel file eseguibile risultante, le chiamate a `_flushall` scrivono il contenuto di qualsiasi buffer sul disco.  Solo `_flushall` e `fflush` sono interessati da Commode.obj.  
  
 Per informazioni sul controllo della funzionalità del commit da disco, consultare [Flusso I\/O](../../c-runtime-library/stream-i-o.md), [fopen](../../c-runtime-library/reference/fopen-wfopen.md) e [\_fdopen](../../c-runtime-library/reference/fdopen-wfdopen.md).  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_flushall`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_flushall.c  
// This program uses _flushall  
// to flush all open buffers.  
  
#include <stdio.h>  
  
int main( void )  
{  
   int numflushed;  
  
   numflushed = _flushall();  
   printf( "There were %d streams flushed\n", numflushed );  
}  
```  
  
  **Vi sono 3 flussi scaricati**   
## Equivalente .NET Framework  
  
-   [System::IO::FileStream::Flush](https://msdn.microsoft.com/en-us/library/2bw4h516.aspx)  
  
-   [System::IO::StreamWriter::Flush](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.flush.aspx)  
  
-   [System::IO::TextWriter::Flush](https://msdn.microsoft.com/en-us/library/system.io.textwriter.flush.aspx)  
  
-   [System::IO::BinaryWriter::Flush](https://msdn.microsoft.com/en-us/library/system.io.binarywriter.flush.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [\_commit](../../c-runtime-library/reference/commit.md)   
 [fclose, \_fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [fflush](../../c-runtime-library/reference/fflush.md)   
 [setvbuf](../../c-runtime-library/reference/setvbuf.md)