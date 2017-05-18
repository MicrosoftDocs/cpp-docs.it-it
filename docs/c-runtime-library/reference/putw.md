---
title: _putw | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _putw
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
- _putw
- putw
dev_langs:
- C++
helpviewer_keywords:
- integers, writing to streams
- putw function
- streams, writing integers to
- _putw function
ms.assetid: 83d63644-249d-4a39-87e5-3b7aa313968d
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 5e6cb1b57135502d7e75df7d0db7cb363a1fe003
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="putw"></a>_putw
Scrive un Integer in un flusso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int _putw(  
   int binint,  
   FILE *stream   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *binint*  
 Integer binario da restituire.  
  
 `stream`  
 Puntatore alla struttura **FILE**.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il valore scritto. Un valore restituito di `EOF` potrebbe indicare un errore. Poiché `EOF` è un Integer legittimo, utilizzare `ferror` per verificare un errore. Se `stream` è un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce `EOF`.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `_putw` scrive un valore binario di tipo `int` nella posizione corrente di *stream*. `_putw` non influisce sull'allineamento degli elementi del flusso né presuppone alcune allineamento speciale. `_putw` è principalmente usato per compatibilità con le librerie precedenti. Problemi di portabilità possono verificarsi con `_putw` a causa delle dimensioni di un `int` e dell'ordine di byte in un `int` che differiscono fra sistemi.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_putw`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_putw.c  
/* This program uses _putw to write a  
 * word to a stream, then performs an error check.  
 */  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   FILE *stream;  
   unsigned u;  
   if( fopen_s( &stream, "data.out", "wb" ) )  
      exit( 1 );  
   for( u = 0; u < 10; u++ )  
   {  
      _putw( u + 0x2132, stream );   /* Write word to stream. */  
      if( ferror( stream ) )         /* Make error check. */  
      {  
         printf( "_putw failed" );  
         clearerr_s( stream );  
         exit( 1 );  
      }  
   }  
   printf( "Wrote ten words\n" );  
   fclose( stream );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
Wrote ten words  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [_getw](../../c-runtime-library/reference/getw.md)
