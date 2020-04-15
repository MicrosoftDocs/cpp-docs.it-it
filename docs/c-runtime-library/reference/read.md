---
title: _read
ms.date: 4/2/2020
api_name:
- _read
- _o__read
api_location:
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _read
helpviewer_keywords:
- data [CRT]
- _read function
- read function
- data [C++], reading
- reading data [C++]
- files [C++], reading
ms.assetid: 2ce9c433-57ad-47fe-9ac1-4a7d4c883d30
ms.openlocfilehash: db3726b85bb4ba7c8e9a691bef3fb063ec5709c9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81338138"
---
# <a name="_read"></a>_read

Legge i dati da un file.

## <a name="syntax"></a>Sintassi

```C
int _read(
   int const fd,
   void * const buffer,
   unsigned const buffer_size
);
```

### <a name="parameters"></a>Parametri

*Fd*<br/>
Il descrittore del file che fa riferimento al file aperto.

*buffer*<br/>
Percorso di archiviazione per i dati.

*buffer_size*<br/>
Numero massimo di byte da leggere.

## <a name="return-value"></a>Valore restituito

**_read** restituisce il numero di byte letti, che potrebbe essere inferiore *a buffer_size* se il file è rimasto meno di *buffer_size* byte o se il file è stato aperto in modalità testo. In modalità testo, ogni coppia `\r\n` ritorno a capo-avanzamento riga viene sostituita con un singolo carattere `\n`di avanzamento riga. Solo il carattere di avanzamento riga singola viene conteggiato nel valore restituito. La sostituzione non influisce sul puntatore di file.

Se la funzione tenta di leggere alla fine del file, restituisce 0. Se *fd* non è valido, il file non è aperto per la lettura o il file è bloccato, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e imposta **errno** su **EBADF**.

Se *buffer* è **NULL**o se *buffer_size* > **INT_MAX**, viene richiamato il gestore di parametri non validi. Se l'esecuzione può continuare, la funzione restituisce -1 e **errno** è impostato su **EINVAL**.

Per altre informazioni su questi e su altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_read** legge un massimo di *buffer_size* byte nel *buffer* dal file associato a *fd*. L'operazione di lettura inizia dalla posizione corrente del puntatore del file associato al file specificato. Dopo l'operazione di lettura, il puntatore del file punta al carattere successivo non letto.

Se il file è stato aperto in modalità testo, la lettura termina quando **_read** viene rilevato un carattere di chiusura del file, che viene considerato come un indicatore di fine file. Usa [lseek](lseek-lseeki64.md) per cancellare l'indicatore di fine del file.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_read**|\<io.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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
   int fh, bytesread;
   unsigned int nbytes = 60000;

   /* Open file for input: */
   if ( _sopen_s( &fh, "crt_read.txt", _O_RDONLY, _SH_DENYNO, 0 ))
   {
      perror( "open failed on input file" );
      exit( 1 );
   }

   /* Read in input: */
   if (( bytesread = _read( fh, buffer, nbytes )) <= 0 )
      perror( "Problem reading file" );
   else
      printf( "Read %u bytes from file\n", bytesread );

   _close( fh );
}
```

### <a name="input-crt_readtxt"></a>Input: crt_read.txt

```Input
Line one.
Line two.
```

### <a name="output"></a>Output

```Output
Read 19 bytes from file
```

## <a name="see-also"></a>Vedere anche

[I/O a basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[fread](fread.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_write](write.md)<br/>
