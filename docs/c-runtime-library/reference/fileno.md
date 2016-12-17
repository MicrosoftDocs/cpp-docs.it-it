---
title: "_fileno | Microsoft Docs"
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
  - "_fileno"
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
  - "_fileno"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "handle di file [C++], recupero da flussi"
  - "fileno (funzione)"
  - "_fileno (funzione)"
  - "flussi, recupero di handle di file"
ms.assetid: 86474174-2f17-4100-bcc4-352dd976c7b5
caps.latest.revision: 19
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _fileno
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene il descrittore del file associato a un flusso.  
  
## Sintassi  
  
```  
int _fileno(   
   FILE *stream   
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
## Valore restituito  
 `_fileno` restituisce il descrittore del file.  Nessun ritorno di errore.  Il risultato è indefinito se `stream` non specifica un file aperto.  Se il flusso è `NULL`, \_`fileno` invoca il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce \-1 ed imposta `errno` a `EINVAL`.  
  
 Per ulteriori informazioni su questi e altri codici, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
> [!NOTE]
>  Se `stdout` o `stderr` non è associato a un flusso di output \(ad esempio, in un'applicazione Windows senza una finestra della console\), il descrittore del file restituito è \-2.  Nelle versioni precedenti, il descrittore del file restituito era \-1.  Questa modifica consente alle applicazioni di distinguere questa condizione da un errore.  
  
## Note  
 La routine `_fileno` restituisce il descrittore del file attualmente associato a `stream`.  Questa procedura è implementata sia come funzione che come macro.  Per informazioni sulla scelta di un'implementazione, vedere [Scelta tra le funzioni e le macro](../../c-runtime-library/recommendations-for-choosing-between-functions-and-macros.md) .  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`_fileno`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_fileno.c  
// This program uses _fileno to obtain  
// the file descriptor for some standard C streams.  
//  
  
#include <stdio.h>  
  
int main( void )  
{  
   printf( "The file descriptor for stdin is %d\n", _fileno( stdin ) );  
   printf( "The file descriptor for stdout is %d\n", _fileno( stdout ) );  
   printf( "The file descriptor for stderr is %d\n", _fileno( stderr ) );  
}  
```  
  
  **Il descrittore del file per stdin è 0**  
**Il descrittore del file per stdout è 1**  
**Il descrittore del file per stderr è 2**   
## Equivalente .NET Framework  
 [System::IO::FileStream::Handle](https://msdn.microsoft.com/en-us/library/system.io.filestream.handle.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [\_fdopen, \_wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [\_filelength, \_filelengthi64](../../c-runtime-library/reference/filelength-filelengthi64.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, \_wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)