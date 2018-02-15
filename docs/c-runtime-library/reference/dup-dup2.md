---
title: _dup, _dup2 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _dup
- _dup2
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _dup2
- _dup
dev_langs:
- C++
helpviewer_keywords:
- _dup2 function
- dup function
- file handles [C++], duplicating
- file handles [C++], reassigning
- dup2 function
- _dup function
ms.assetid: 4d07e92c-0d76-4832-a770-dfec0e7a0cfa
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 687c8e0d2f9f8f860e78a1c8e44cab6886e3cf04
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="dup-dup2"></a>_dup, _dup2
Crea un secondo descrittore del file per un file aperto (`_dup`) o riassegna un descrittore del file (`_dup2`).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _dup(   
   int fd   
);  
int _dup2(   
   int fd1,  
   int fd2   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `fd`, `fd1`  
 Descrittori del file che fanno riferimento al file aperto.  
  
 `fd2`  
 Qualsiasi descrittore del file.  
  
## <a name="return-value"></a>Valore restituito  
 `_dup` restituisce un nuovo descrittore del file. `_dup2` restituisce 0 per indicare l'esito positivo. Se si verifica un errore, ogni funzione restituisce -1 e imposta `errno` a `EBADF` se il descrittore del file non è valido o a `EMFILE` se altri descrittori di file non sono disponibili. Nel caso di un descrittore del file non valido, la funzione richiama anche il gestore dei parametri non validi, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md) (Convalida dei parametri).  
  
 Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Le funzioni `_dup` e `_dup2` associano un secondo descrittore del file a un file attualmente aperto. Tali funzioni possono essere utilizzate per associare un descrittore del file predefinito, come quello per `stdout`, con un file diverso. Le operazioni sul file possono essere eseguite utilizzando qualsiasi descrittore del file. Il tipo di accesso consentito per il file non viene influenzato dalla creazione di un nuovo descrittore. `_dup` restituisce il descrittore del file disponibile per il file specificato. `_dup2` impone `fd2` per fare riferimento allo stesso file di `fd1`. Se `fd2` è associato a un file aperto al momento della chiamata, tale file verrà chiuso.  
  
 Sia `_dup` che `_dup2` accettano descrittori del file come parametri. Per passare un flusso `(FILE *)` a una di queste funzioni, usare [_fileno](../../c-runtime-library/reference/fileno.md). La routine `fileno` restituisce il descrittore del file attualmente associato al flusso specificato. Di seguito viene illustrato come associare `stderr` (definito come `FILE` `*` in Stdio.h) a un descrittore del file:  
  
```  
int cstderr = _dup( _fileno( stderr ));  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_dup`|\<io.h>|  
|`_dup2`|\<io.h>|  
  
 La console non è supportata nelle app di piattaforma UWP (Universal Windows). L'handle del flusso standard associati con la console,`stdin`, `stdout`, e `stderr`, devono essere reindirizzati a funzioni di runtime C possono utilizzare in [! App INCLUDEUWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_dup.c  
// This program uses the variable old to save  
// the original stdout. It then opens a new file named  
// DataFile and forces stdout to refer to it. Finally, it  
// restores stdout to its original state.  
//  
  
#include <io.h>  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int old;  
   FILE *DataFile;  
  
   old = _dup( 1 );   // "old" now refers to "stdout"   
                      // Note:  file descriptor 1 == "stdout"   
   if( old == -1 )  
   {  
      perror( "_dup( 1 ) failure" );  
      exit( 1 );  
   }  
   _write( old, "This goes to stdout first\n", 26 );  
   if( fopen_s( &DataFile, "data", "w" ) != 0 )  
   {  
      puts( "Can't open file 'data'\n" );  
      exit( 1 );  
   }  
  
   // stdout now refers to file "data"   
   if( -1 == _dup2( _fileno( DataFile ), 1 ) )  
   {  
      perror( "Can't _dup2 stdout" );  
      exit( 1 );  
   }  
   puts( "This goes to file 'data'\n" );  
  
   // Flush stdout stream buffer so it goes to correct file   
   fflush( stdout );  
   fclose( DataFile );  
  
   // Restore original stdout   
   _dup2( old, 1 );  
   puts( "This goes to stdout\n" );  
   puts( "The file 'data' contains:" );  
   _flushall();  
   system( "type data" );  
}  
```  
  
```Output  
This goes to stdout first  
This goes to stdout  
  
The file 'data' contains:  
This goes to file 'data'  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Low-Level I/O](../../c-runtime-library/low-level-i-o.md)  (I/O di basso livello)  
 [_close](../../c-runtime-library/reference/close.md)   
 [_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)