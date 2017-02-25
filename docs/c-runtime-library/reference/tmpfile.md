---
title: "tmpfile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "tmpfile"
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
  - "tmpfile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file temporanei"
  - "tmpfile (funzione)"
  - "file temporanei, creazione"
ms.assetid: c4a4dc24-70da-438d-ae4e-98352d88e375
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# tmpfile
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un file temporaneo:  Questa funzione è deprecata poiché è disponibile una versione più sicura; vedere [tmpfile\_s](../../c-runtime-library/reference/tmpfile-s.md).  
  
## Sintassi  
  
```  
FILE *tmpfile( void );  
```  
  
## Valore restituito  
 Se l'operazione riesce, `tmpfile` restituisce un puntatore di flusso.  In caso contrario, restituisce un puntatore `NULL`.  
  
## Note  
 La funzione `tmpfile` crea un file temporaneo e restituisce un puntatore al flusso.  Il file temporaneo viene creato nella directory radice.  Per creare un file temporaneo in una directory diversa dalla radice, utilizzare [tmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md) o [tempnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md) insieme a [fopen](../../c-runtime-library/reference/fopen-wfopen.md).  
  
 Se il file non può essere aperto, `tmpfile` restituisce un puntatore `NULL`.  Questo file temporaneo viene automaticamente eliminato quando il file è chiuso, quando il programma termina normalmente, oppure quando `_rmtmp` viene chiamato, presupponendo che la cartella di lavoro corrente non cambi.  Il file temporaneo viene aperto con modalità `w+b` \(lettura\/scrittura binaria\).  
  
 L'errore può verificarsi se si effettuano più di TMP\_MAX \(vedere STDIO.H\) chiamate con `tmpfile`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`tmpfile`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
> [!NOTE]
>  In questo esempio sono richiesti privilegi amministrativi per l'esecuzione su Windows Vista.  
  
```  
// crt_tmpfile.c  
// compile with: /W3  
// This program uses tmpfile to create a  
// temporary file, then deletes this file with _rmtmp.  
#include <stdio.h>  
  
int main( void )  
{  
   FILE *stream;  
   int  i;  
  
   // Create temporary files.  
   for( i = 1; i <= 3; i++ )  
   {  
      if( (stream = tmpfile()) == NULL ) // C4996  
      // Note: tmpfile is deprecated; consider using tmpfile_s instead  
         perror( "Could not open new temporary file\n" );  
      else  
         printf( "Temporary file %d was created\n", i );  
   }  
  
   // Remove temporary files.  
   printf( "%d temporary files deleted\n", _rmtmp() );  
}  
```  
  
  **Temporary file 1 was created**  
**Temporary file 2 was created**  
**Temporary file 3 was created**  
**3 temporary files deleted**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [\_rmtmp](../../c-runtime-library/reference/rmtmp.md)   
 [\_tempnam, \_wtempnam, tmpnam, \_wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)