---
title: _read
ms.date: 02/13/2019
apiname:
- _read
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
- _read
helpviewer_keywords:
- data [CRT]
- _read function
- read function
- data [C++], reading
- reading data [C++]
- files [C++], reading
ms.assetid: 2ce9c433-57ad-47fe-9ac1-4a7d4c883d30
ms.openlocfilehash: 40f52ea37ae5419fe986aa505aad4fddfe8403ff
ms.sourcegitcommit: eb2b34a24e6edafb727e87b138499fa8945f981e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2019
ms.locfileid: "56264790"
---
# <a name="read"></a>_read

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

*fd*<br/>
Il descrittore del file che fa riferimento al file aperto.

*buffer*<br/>
Percorso di archiviazione per i dati.

*buffer_size*<br/>
Numero massimo di byte da leggere.

## <a name="return-value"></a>Valore restituito

**Read** restituisce il numero di byte letti, che può essere minore rispetto *buffer_size* se ci sono meno *buffer_size* byte lasciato nel file, o se il file è stato aperto in modalità testo. In modalità testo, ogni ritorno a capo con avanzamento riga coppia `\r\n` viene sostituito con un carattere di avanzamento riga singola `\n`. Solo il singolo carattere di avanzamento riga viene conteggiato nel valore restituito. La sostituzione non influisce sul puntatore di file.

Se la funzione tenta di leggere alla fine del file, restituisce 0. Se *fd* è non valido, il file non è aperto per la lettura, o il file è bloccato, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce -1 e imposta **errno** al **EBADF**.

Se *buffer* viene **NULL**, o se *buffer_size* > **INT_MAX**, viene richiamato il gestore di parametri non validi. Se l'esecuzione può continuare, la funzione restituisce -1 e **errno** è impostata su **EINVAL**.

Per altre informazioni su questi e su altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **Read** funzione legge un numero massimo di *buffer_size* byte in *buffer* dal file associato *fd*. L'operazione di lettura inizia dalla posizione corrente del puntatore del file associato al file specificato. Dopo l'operazione di lettura, il puntatore del file punta al carattere successivo non letto.

Se il file è stato aperto in modalità testo, la lettura termina quando **Read** rileva un carattere CTRL + Z, che viene considerato come un indicatore di fine del file. Usa [lseek](lseek-lseeki64.md) per cancellare l'indicatore di fine del file.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_read**|\<io.h>|

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

### <a name="input-crtreadtxt"></a>Input: crt_read.txt

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
