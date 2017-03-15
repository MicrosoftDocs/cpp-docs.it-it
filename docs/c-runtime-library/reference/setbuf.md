---
title: setbuf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- setbuf
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
- setbuf
dev_langs:
- C++
helpviewer_keywords:
- setbuf function
- stream buffering
ms.assetid: 13beda22-7b56-455d-8a6c-f2eb636885b9
caps.latest.revision: 16
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
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: ce7ea86029a99b5727fa1d7bd033044431a1fbff
ms.lasthandoff: 02/24/2017

---
# <a name="setbuf"></a>setbuf
Controlla il buffering del flusso. Questa funzione è deprecata. In alternativa, usare [setvbuf](../../c-runtime-library/reference/setvbuf.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void setbuf(  
   FILE *stream,  
   char *buffer   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
 `buffer`  
 Buffer allocato dall'utente.  
  
## <a name="remarks"></a>Note  
 La funzione `setbuf` controlla il buffering per `stream`. L'argomento `stream` deve fare riferimento a un file aperto che non è stato letto o scritto. Se l'argomento `buffer` è `NULL`, il buffering del flusso viene annullato. In caso contrario, il buffer deve puntare a una matrice di caratteri di lunghezza `BUFSIZ`, dove `BUFSIZ` è la dimensione del buffer, come definita in STDIO.H. Per il buffering di I/O viene usato il buffer specificato dall'utente, invece del buffer allocato dal sistema predefinito per il flusso specificato. Il buffering del flusso `stderr` viene annullato per impostazione predefinita, ma è possibile usare `setbuf` per assegnare buffer a `stderr`.  
  
 La funzione `setbuf` è stata sostituita da [setvbuf](../../c-runtime-library/reference/setvbuf.md), ovvero la routine preferita per il nuovo codice. `setbuf` viene mantenuta per compatibilità con il codice esistente.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`setbuf`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
stream1 set to user-defined buffer at: 0012FCDC  
stream2 buffering disabled  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fclose, _fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [fflush](../../c-runtime-library/reference/fflush.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [setvbuf](../../c-runtime-library/reference/setvbuf.md)
