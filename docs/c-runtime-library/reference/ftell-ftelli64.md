---
title: ftell, _ftelli64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ftelli64
- ftell
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
- _ftelli64
- ftell
dev_langs:
- C++
helpviewer_keywords:
- ftell function
- ftelli64 function
- _ftelli64 function
- file pointers [C++], getting current position
- file pointers [C++]
ms.assetid: 40149cd8-65f2-42ff-b70c-68e3e918cdd7
caps.latest.revision: 19
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 220b34e5bba7a4a6716d6ef18d6621b58d36ecc3
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="ftell-ftelli64"></a>ftell, _ftelli64
Ottiene la posizione corrente di un puntatore del file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
long ftell(   
   FILE *stream   
);  
__int64 _ftelli64(   
   FILE *stream   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Struttura `FILE` di destinazione.  
  
## <a name="return-value"></a>Valore restituito  
 `ftell` e `_ftelli64` restituiscono la posizione corrente del file. Il valore restituito da `ftell` e `_ftelli64` potrebbero non riflettere l'offset di byte fisico per i flussi aperti in modalità testo, in quanto la modalità testo causa la conversione di ritorno-avanzamento riga, ritorno a capo. Utilizzare `ftell` con `fseek` o `_ftelli64` con `_fseeki64` per tornare alle posizioni di file in modo corretto. In caso di errore, `ftell` e `_ftelli64` richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono-1L e set `errno` a uno dei due costanti, definite in ERRNO. H. La costante `EBADF` indica che l'argomento `stream` non è un valore di puntatore di file valido o non fa riferimento a un file aperto. `EINVAL` indica che è stato passato un argomento `stream` non valido alla funzione. Nei dispositivi che non supportano la ricerca (ad esempio terminali e stampanti), o quando `stream` non fa riferimento a un file aperto, il valore restituito è indefinito.  
  
 Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Il `ftell` e `_ftelli64` le funzioni di recuperare la posizione corrente del puntatore del file (se presente) associata `stream`. La posizione viene espressa come offset rispetto all'inizio del flusso.  
  
 Si noti che quando un file viene aperto per l'accodamento dei dati, la posizione corrente nel file è determinata dall'ultima operazione di I/O e non dalla posizione in cui si verificherà la scrittura successiva. Ad esempio, se un file viene aperto per un accodamento e l'ultima operazione è stata una lettura, la posizione nel file è il punto in cui inizierebbe l'operazione di lettura successiva e non quella in cui inizierebbe inizia la scrittura successiva. (Quando un file viene aperto per l'accodamento, la posizione nel file viene spostata alla fine del file prima di qualsiasi operazione di scrittura.) Se non è ancora stata eseguita alcuna operazione di I/O su un file aperto per l'accodamento, la posizione nel file è l'inizio del file.  
  
 In modalità testo CTRL+Z viene interpretato nell'input come un carattere di fine file. Nei file aperti per la lettura/scrittura, `fopen` e tutte le routine correlate verificano la presenza della combinazione CTRL+Z alla fine del file e la rimuovono, se possibile. Questa operazione viene eseguita perché l'uso di `ftell` e `fseek` o `_ftelli64` e `_fseeki64` per spostarsi all'interno di un file che termina con CTRL+Z può causare un comportamento non corretto di `ftell` o `_ftelli64` in prossimità della fine del file.  
  
 Questa funzione blocca il thread chiamante durante l'esecuzione e pertanto è thread-safe. Per una versione che non blocca il thread, vedere `_ftell_nolock`.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazioni facoltative|  
|--------------|---------------------|----------------------|  
|`ftell`|\<stdio.h>|\<errno.h>|  
|`_ftelli64`|\<stdio.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_ftell.c  
// This program opens a file named CRT_FTELL.C  
// for reading and tries to read 100 characters. It  
// then uses ftell to determine the position of the  
// file pointer and displays this position.  
  
#include <stdio.h>  
  
FILE *stream;  
  
int main( void )  
{  
   long position;  
   char list[100];  
   if( fopen_s( &stream, "crt_ftell.c", "rb" ) == 0 )  
   {  
      // Move the pointer by reading data:   
      fread( list, sizeof( char ), 100, stream );  
      // Get position after read:   
      position = ftell( stream );  
      printf( "Position after trying to read 100 bytes: %ld\n",  
              position );  
      fclose( stream );  
   }  
}  
```  
  
```Output  
Position after trying to read 100 bytes: 100  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [fgetpos](../../c-runtime-library/reference/fgetpos.md)   
 [fseek, _fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md)   
 [_lseek, _lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)
