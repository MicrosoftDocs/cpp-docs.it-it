---
title: "tmpfile_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "tmpfile_s"
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
  - "tmpfile_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file temporanei"
  - "tmpfile_s (funzione)"
  - "file temporanei, creazione"
ms.assetid: 50879c69-215e-425a-a2a3-8b5467121eae
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# tmpfile_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un file temporaneo:  Si tratta di una versione di [\_tmpfile](../../c-runtime-library/reference/tmpfile.md) con miglioramenti di sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t tmpfile_s(  
   FILE** pFilePtr  
);  
```  
  
#### Parametri  
 \[out\] `pFilePtr`  
 L'indirizzo di un puntatore per archiviare l'indirizzo del puntatore generato in un flusso.  
  
## Valore restituito  
 Restituisce 0 se ha esito positivo, un codice di errore in caso di errore.  
  
### Condizioni di errore  
  
|`pFilePtr`|**Valore restituito**|**Contenuto di**  `pFilePtr`|  
|----------------|---------------------------|----------------------------------|  
|`NULL`|`EINVAL`|non modificato|  
  
 Se si verifica un errore di convalida dei parametri sopra riportati, viene invocato il gestore del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` ed il valore di ritorno è `EINVAL`.  
  
## Note  
 La funzione `tmpfile_s` crea un file temporaneo ed inserisce un puntatore al flusso nell'argomento `pFilePtr`.  Il file temporaneo viene creato nella directory radice.  Per creare un file temporaneo in una directory diversa dalla radice, utilizzare [tmpnam\_s](../../c-runtime-library/reference/tmpnam-s-wtmpnam-s.md) o [tempnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md) insieme a [fopen](../../c-runtime-library/reference/fopen-wfopen.md).  
  
 Se il file non può essere aperto, `tmpfile_s` scrive `NULL` nel parametro `pFilePtr`.  Questo file temporaneo viene automaticamente eliminato quando il file è chiuso, quando il programma termina normalmente, oppure quando `_rmtmp` viene chiamato, presupponendo che la cartella di lavoro corrente non cambi.  Il file temporaneo viene aperto con modalità `w+b` \(lettura\/scrittura binaria\).  
  
 L'errore può verificarsi se si effettuano più di `TMP_MAX_S` \(vedere STDIO.H\) chiamate con `tmpfile_s.`  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`tmpfile_s`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
> [!NOTE]
>  In questo esempio sono richiesti privilegi amministrativi per l'esecuzione su Windows Vista.  
  
```  
// crt_tmpfile_s.c  
// This program uses tmpfile_s to create a  
// temporary file, then deletes this file with _rmtmp.  
//  
  
#include <stdio.h>  
  
int main( void )  
{  
   FILE *stream;  
   char tempstring[] = "String to be written";  
   int  i;  
   errno_t err;  
  
   // Create temporary files.  
   for( i = 1; i <= 3; i++ )  
   {  
      err = tmpfile_s(&stream);  
      if( err )  
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