---
title: "setbuf | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "setbuf"
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
  - "setbuf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "setbuf (funzione)"
  - "memorizzazione nel buffer del flusso"
ms.assetid: 13beda22-7b56-455d-8a6c-f2eb636885b9
caps.latest.revision: 16
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# setbuf
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla la memorizzazione nel buffer del flusso.  Questa funzione è deprecata; usare invece [setvbuf](../../c-runtime-library/reference/setvbuf.md).  
  
## Sintassi  
  
```  
void setbuf(  
   FILE *stream,  
   char *buffer   
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
 `buffer`  
 Buffer allocato dall'utente.  
  
## Note  
 La funzione `setbuf` controlla il buffer per `stream`.  L'argomento `stream` deve fare riferimento a un file aperto che non è stato letto o scritto.  Se l'argomento `buffer` è `NULL`, il flusso è senza buffer.  In caso contrario, il buffer deve puntare a una matrice di caratteri di lunghezza `BUFSIZ`, dove `BUFSIZ` è la dimensione del buffer come definito in. STDIO.H.  Il buffer definito dall'utente, anziché un buffer allocato predefinito per il flusso specificato, viene utilizzato per il buffering di I\/O.  Il flusso `stderr` è senza buffer per impostazione predefinita, ma è possibile utilizzare `setbuf` per assegnare buffer su `stderr`.  
  
 `setbuf` è stato sostituito da [setvbuf](../../c-runtime-library/reference/setvbuf.md), che è la procedura consigliata per il nuovo codice.  `setbuf` viene mantenuto per compatibilità con il codice esistente.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`setbuf`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_setbuf.c  
// compile with: /W3  
// This program first opens files named DATA1 and  
// DATA2. Then it uses setbuf to give DATA1 a user-assigned  
// buffer and to change DATA2 so that it has no buffer.  
  
#include <stdio.h>  
  
int main( void )  
{  
   char buf[BUFSIZ];  
   FILE *stream1, *stream2;  
  
   fopen_s( &stream1, "data1", "a" );  
   fopen_s( &stream2, "data2", "w" );  
  
   if( (stream1 != NULL) && (stream2 != NULL) )  
   {  
      // "stream1" uses user-assigned buffer:  
      setbuf( stream1, buf ); // C4996  
      // Note: setbuf is deprecated; consider using setvbuf instead  
      printf( "stream1 set to user-defined buffer at: %Fp\n", buf );  
  
      // "stream2" is unbuffered  
      setbuf( stream2, NULL ); // C4996  
      printf( "stream2 buffering disabled\n" );  
      _fcloseall();  
   }  
}  
```  
  
  **stream1 impostato sul buffer definito dall'utente a: 0012FCDC**  
**memorizzazione nel buffer di stream2 disabilitata**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fclose, \_fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [fflush](../../c-runtime-library/reference/fflush.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [setvbuf](../../c-runtime-library/reference/setvbuf.md)