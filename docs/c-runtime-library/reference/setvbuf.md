---
title: setvbuf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: setvbuf
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
f1_keywords: setvbuf
dev_langs: C++
helpviewer_keywords:
- controlling stream buffering
- stream buffering
- setvbuf function
ms.assetid: 6aa5aa37-3408-4fa0-992f-87f9f9c4baea
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0855982627c60c51ec5753031ae932ffd430f024
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="setvbuf"></a>setvbuf
Controlla il buffering del flusso e le dimensioni del buffer.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int setvbuf(  
   FILE *stream,  
   char *buffer,  
   int mode,  
   size_t size   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
 `buffer`  
 Buffer allocato dall'utente.  
  
 `mode`  
 Modalità di buffering.  
  
 `size`  
 Dimensioni del buffer in byte. Intervallo consentito: 2 <= `size` <= INT_MAX (2147483647). Internamente, il valore specificato per `size` viene arrotondato per difetto al multiplo di 2 più prossimo.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce 0 in caso di esito positivo.  
  
 Se `stream` è `NULL` oppure se `mode` o `size` non corrisponde a una modifica valida, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce -1 e imposta `errno` su `EINVAL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `setvbuf` consente al programma di controllare sia il buffering che le dimensioni del buffer per `stream`. `stream` deve fare riferimento a un file aperto su cui non è stata eseguita un'operazione di I/O dopo l'apertura. La matrice a cui punta `buffer` viene usata come buffer, a meno che non sia `NULL`, nel qual caso `setvbuf` usa un buffer allocato automaticamente con una lunghezza pari a `size`/2 * 2 byte.  
  
 La modalità deve essere `_IOFBF`, `_IOLBF` o `_IONBF`. Se `mode` è `_IOFBF` o `_IOLBF`, viene usato `size` come dimensioni del buffer. Se `mode` è `_IONBF`, viene annullato il buffering del flusso e `size` e `buffer` vengono ignorati. I valori per `mode` e i rispettivi significati sono:  
  
 `_IOFBF`  
 Buffering completo, ovvero `buffer` viene usato come buffer e `size` viene usato come dimensioni del buffer. Se `buffer` è `NULL`, viene usato un buffer allocato automaticamente con lunghezza di `size` byte.  
  
 `_IOLBF`  
 Per alcuni sistemi, viene così fornito il buffering di riga. Tuttavia, per Win32, il comportamento è lo stesso di `_IOFBF` - buffering completo.  
  
 `_IONBF`  
 Non viene usato alcun buffer, indipendentemente da `buffer` o `size`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`setvbuf`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_setvbuf.c  
// This program opens two streams: stream1  
// and stream2. It then uses setvbuf to give stream1 a  
// user-defined buffer of 1024 bytes and stream2 no buffer.  
//  
  
#include <stdio.h>  
  
int main( void )  
{  
   char buf[1024];  
   FILE *stream1, *stream2;  
  
   if( fopen_s( &stream1, "data1", "a" ) == 0 &&  
       fopen_s( &stream2, "data2", "w" ) == 0 )  
   {  
      if( setvbuf( stream1, buf, _IOFBF, sizeof( buf ) ) != 0 )  
         printf( "Incorrect type or size of buffer for stream1\n" );  
      else  
         printf( "'stream1' now has a buffer of 1024 bytes\n" );  
      if( setvbuf( stream2, NULL, _IONBF, 0 ) != 0 )  
         printf( "Incorrect type or size of buffer for stream2\n" );  
      else  
         printf( "'stream2' now has no buffer\n" );  
      _fcloseall();  
   }  
}  
```  
  
```Output  
'stream1' now has a buffer of 1024 bytes  
'stream2' now has no buffer  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fclose, _fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [fflush](../../c-runtime-library/reference/fflush.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [setbuf](../../c-runtime-library/reference/setbuf.md)