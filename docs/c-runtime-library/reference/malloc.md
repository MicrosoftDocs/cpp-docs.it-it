---
title: "malloc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "malloc"
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
  - "api-ms-win-crt-heap-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "malloc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "malloc (funzione)"
  - "allocazione di memoria"
ms.assetid: 144fcee2-be34-4a03-bb7e-ed6d4b99eea0
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# malloc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alloca i blocchi di memoria.  
  
## Sintassi  
  
```  
void *malloc(  
   size_t size   
);  
```  
  
#### Parametri  
 `size`  
 Byte da allocare.  
  
## Valore restituito  
 `malloc` restituisce un puntatore a void allo spazio allocato o a `NULL` se la memoria disponibile non è sufficiente.  Per restituire un puntatore a un tipo diverso da `void`, utilizzare un cast di tipo sul valore restituito.  Dello spazio di archiviazione puntato in base al valore restituito è garantito l'adeguato allineamento per l'archiviazione di qualsiasi tipo di oggetto che contiene un requisito di allineamento minore o uguale a quello dell'allineamento fondamentale. In Visual C\+\+ l'allineamento fondamentale è l'allineamento richiesto per `double` o 8 byte.  Nel codice destinato a piattaforme a 64 bit, è 16 byte. Utilizzare [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md) per allocare lo spazio di archiviazione per oggetti con requisiti di allineamento maggiori, ad esempio i tipi SSE [\_\_m128](../../cpp/m128.md) e `__m256` e i tipi dichiarati utilizzando `__declspec(align(``n``))` dove `n` è maggiore di 8.  Se `size` è 0, `malloc` alloca un elemento di lunghezza zero nell'heap e restituisce un puntatore valido per l'elemento.  Verificare sempre il ritorno da `malloc`, anche se la quantità di memoria richiesta è poca.  
  
## Note  
 La funzione `malloc` alloca un blocco di memoria di almeno `size` byte.  Il blocco può essere maggiore di `size` byte a causa dello spazio richiesto per le informazioni di manutenzione e di allineamento.  
  
 `malloc` imposta `errno` a `ENOMEM` se un'allocazione della memoria fallisce o se la quantità di memoria richiesta supera `_HEAP_MAXREQ`.  Per informazioni su questo e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Il codice di avvio utilizza `malloc` per allocare la memoria per le variabili `_environ`, `envp`e `argv`.  Le seguenti funzioni e anche le relative controparti a caratteri estesi chiamano `malloc`.  
  
|||||  
|-|-|-|-|  
|[calloc](../../c-runtime-library/reference/calloc.md)|[fscanf](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)|[\_getw](../../c-runtime-library/reference/getw.md)|[setvbuf](../../c-runtime-library/reference/setvbuf.md)|  
|[funzioni \_exec](../../c-runtime-library/exec-wexec-functions.md)|[fseek](../../c-runtime-library/reference/fseek-fseeki64.md)|[\_popen](../../c-runtime-library/reference/popen-wpopen.md)|[funzioni \_spawn](../../c-runtime-library/spawn-wspawn-functions.md)|  
|[fgetc](../../c-runtime-library/reference/fgetc-fgetwc.md)|[fsetpos](../../c-runtime-library/reference/fsetpos.md)|[printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)|[\_strdup](../../c-runtime-library/reference/strdup-wcsdup-mbsdup.md)|  
|[\_fgetchar](../../c-runtime-library/reference/fgetc-fgetwc.md)|[\_fullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)|[putc](../../c-runtime-library/reference/putc-putwc.md)|[sistema](../../c-runtime-library/reference/system-wsystem.md)|  
|[fgets](../../c-runtime-library/reference/fgets-fgetws.md)|[fwrite](../../c-runtime-library/reference/fwrite.md)|[putchar](../../c-runtime-library/reference/putc-putwc.md)|[\_tempnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)|  
|[fprintf](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)|[getc](../../c-runtime-library/reference/getc-getwc.md)|[\_putenv](../../c-runtime-library/reference/putenv-wputenv.md)|[ungetc](../../c-runtime-library/reference/ungetc-ungetwc.md)|  
|[fputc](../../c-runtime-library/reference/fputc-fputwc.md)|[getchar](../../c-runtime-library/reference/getc-getwc.md)|[puts](../../c-runtime-library/reference/puts-putws.md)|[vfprintf](../../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)|  
|[\_fputchar](../../c-runtime-library/reference/fputc-fputwc.md)|[\_getcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)|[\_putw](../../c-runtime-library/reference/putw.md)|[vprintf](../../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)|  
|[fputs](../../c-runtime-library/reference/fputs-fputws.md)|[\_getdcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)|[scanf](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)||  
|[fread](../../c-runtime-library/reference/fread.md)|[ottiene](../../c-runtime-library/gets-getws.md)|[\_searchenv](../../c-runtime-library/reference/searchenv-wsearchenv.md)||  
  
 La funzione C\+\+ [\_set\_new\_mode](../../c-runtime-library/reference/set-new-mode.md) imposta la nuova modalità di gestione per `malloc`.  La nuova modalità del gestore indica se, in caso di errore, `malloc` deve richiamare la nuova routine del gestore come imposto da [\_set\_new\_handler](../../c-runtime-library/reference/set-new-handler.md).  Per impostazione predefinita, `malloc` non richiama la nuova routine di gestione in caso di errore nell'allocare memoria.  È possibile eseguire l'override di questo comportamento predefinito affinché, quando `malloc` non riesce ad allocare memoria, `malloc` chiami la nuova routine del gestore allo stesso modo di come avviene con l'operatore `new` quando si verifica il medesimo errore.  Per eseguire l'override del comportamento predefinito, chiamare  
  
```cpp  
_set_new_mode(1)  
```  
  
 all'inizio del programma, o collegare con NEWMODE.OBJ \(vedere [Opzioni collegamento](../../c-runtime-library/link-options.md)\).  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime del linguaggio C, `malloc` viene identificato come [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md).  Per ulteriori informazioni su come viene gestito l'heap durante il processo di debug, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 `malloc` è contrassegnata in `__declspec(noalias)` e `__declspec(restrict)`, pertanto la funzione garantisce che le variabili globali non vengono modificate, e che il puntatore restituito è già utilizzato.  Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`malloc`|\<stdlib.h\> e \<malloc.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```c  
// crt_malloc.c  
// This program allocates memory with  
// malloc, then frees the memory with free.  
  
#include <stdlib.h>   // For _MAX_PATH definition  
#include <stdio.h>  
#include <malloc.h>  
  
int main( void )  
{  
   char *string;  
  
   // Allocate space for a path name  
   string = malloc( _MAX_PATH );  
  
   // In a C++ file, explicitly cast malloc's return.  For example,   
   // string = (char *)malloc( _MAX_PATH );  
  
   if( string == NULL )  
      printf( "Insufficient memory available\n" );  
   else  
   {  
      printf( "Memory space allocated for path name\n" );  
      free( string );  
      printf( "Memory freed\n" );  
   }  
}  
```  
  
  **Spazio di memoria allocato per il nome del percorso**  
**Memoria liberata**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md)