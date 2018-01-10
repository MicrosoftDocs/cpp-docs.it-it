---
title: _read | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _read
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
f1_keywords: _read
dev_langs: C++
helpviewer_keywords:
- data [CRT]
- _read function
- read function
- data [C++], reading
- reading data [C++]
- files [C++], reading
ms.assetid: 2ce9c433-57ad-47fe-9ac1-4a7d4c883d30
caps.latest.revision: "15"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0c55e2607a706648c818fc94e73197756470110c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="read"></a>_read

Legge i dati da un file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _read(  
   int fd,  
   void *buffer,  
   unsigned int count   
);  
```  
  
### <a name="parameters"></a>Parametri  

*daemon di filtri*  
Il descrittore del file che fa riferimento al file aperto.  
  
*buffer*  
Percorso di archiviazione per i dati.  
  
*count*  
Numero massimo di byte.  
  
## <a name="return-value"></a>Valore restituito  

`_read`Restituisce il numero di byte letti, che potrebbe essere inferiore rispetto a *conteggio* se ci sono meno di *conteggio* byte lasciato nel file o se il file è stato aperto in modalità testo, nel qual caso ogni ritorno a capo return-avanzamento riga `\r\n` viene sostituito con un carattere di avanzamento riga singola `\n`. Solo il singolo carattere di avanzamento riga viene conteggiato nel valore restituito. La sostituzione non influisce sul puntatore di file.  
  
Se la funzione tenta di leggere alla fine del file, restituisce 0. Se *fd* è non valido, il file non è aperto per la lettura, o il file è bloccato, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e imposta `errno` su `EBADF`.  
  
Se *buffer* è **NULL**, viene richiamato il gestore di parametri non validi. Se l'esecuzione può continuare, la funzione restituisce -1 ed `errno` viene impostato su `EINVAL`.  
  
Per altre informazioni su questi e su altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  

Il `_read` funzione legge un numero massimo di *conteggio* byte in *buffer* dal file di cui è associato a *fd*. L'operazione di lettura inizia dalla posizione corrente del puntatore del file associato al file specificato. Dopo l'operazione di lettura, il puntatore del file punta al carattere successivo non letto.  
  
Se il file è stato aperto in modalità testo, la lettura termina quando `_read` rileva un carattere CTRL + Z, che viene considerato come un indicatore di fine del file. Usa [lseek](../../c-runtime-library/reference/lseek-lseeki64.md) per cancellare l'indicatore di fine del file.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_read`|\<io.h>|  
  
Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_read.c  
/* This program opens a file named crt_read.txt  
 * and tries to read 60,000 bytes from  
 * that file using _read. It then displays the  
 * actual number of bytes read.  
 */  
  
#include <fcntl.h>      /* Needed only for _O_RDWR definition */  
#include <io.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <share.h>  
  
char buffer[60000];  
  
int main( void )  
{  
   int fh;  
   unsigned int nbytes = 60000, bytesread;  
  
   /* Open file for input: */  
   if( _sopen_s( &fh, "crt_read.txt", _O_RDONLY, _SH_DENYNO, 0 ) )  
   {  
      perror( "open failed on input file" );  
      exit( 1 );  
   }  
  
   /* Read in input: */  
   if( ( bytesread = _read( fh, buffer, nbytes ) ) <= 0 )  
      perror( "Problem reading file" );  
   else  
      printf( "Read %u bytes from file\n", bytesread );  
  
   _close( fh );  
}  
```  
  
### <a name="input-crtreadtxt"></a>Input: crt_read.txt  
  
```  
Line one.  
Line two.  
```  
  
### <a name="output"></a>Output  
  
```  
Read 19 bytes from file  
```  
  
## <a name="see-also"></a>Vedere anche  

[Low-Level I/O](../../c-runtime-library/low-level-i-o.md) (I/O di basso livello)   
[_creat, _wcreat](../../c-runtime-library/reference/creat-wcreat.md)   
[fread](../../c-runtime-library/reference/fread.md)   
[_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
[_write](../../c-runtime-library/reference/write.md)
