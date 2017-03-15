---
title: tmpfile | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- tmpfile
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
- tmpfile
dev_langs:
- C++
helpviewer_keywords:
- temporary files
- tmpfile function
- temporary files, creating
ms.assetid: c4a4dc24-70da-438d-ae4e-98352d88e375
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 05edefa97701ebd70d86ff4fc78dc6cee7f083fa
ms.lasthandoff: 02/24/2017

---
# <a name="tmpfile"></a>tmpfile
Crea un file temporaneo. Questa funzione è deprecata perché è disponibile una versione più sicura. Vedere [tmpfile_s](../../c-runtime-library/reference/tmpfile-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
FILE *tmpfile( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 In caso di esito positivo `tmpfile` restituisce un puntatore a un flusso. In caso contrario, restituisce un puntatore `NULL`.  
  
## <a name="remarks"></a>Note  
 La funzione `tmpfile` crea un file temporaneo e restituisce un puntatore a tale flusso. Il file temporaneo viene creato nella directory radice. Per creare un file temporaneo in una directory diversa dalla radice, usare [tmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md) o [tempnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md) in combinazione con [fopen](../../c-runtime-library/reference/fopen-wfopen.md).  
  
 Se non è possibile aprire il file, `tmpfile` restituisce un puntatore `NULL`. Questo file temporaneo viene eliminato automaticamente alla chiusura del file, quando il programma termina normalmente oppure con la chiamata di `_rmtmp`, presupponendo che la directory di lavoro corrente rimanga invariata. Il file temporaneo viene aperto in modalità `w+b` (lettura/scrittura binaria).  
  
 Può verificarsi un errore se si tentano più di TMP_MAX chiamate (vedere STDIO.H) con `tmpfile`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`tmpfile`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
> [!NOTE]
>  Per l'esecuzione di questo esempio in Windows Vista sono necessari privilegi di amministratore.  
  
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
  
```Output  
Temporary file 1 was created  
Temporary file 2 was created  
Temporary file 3 was created  
3 temporary files deleted  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [_rmtmp](../../c-runtime-library/reference/rmtmp.md)   
 [_tempnam, _wtempnam, tmpnam, _wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)
