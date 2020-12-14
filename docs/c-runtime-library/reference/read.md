---
description: 'Altre informazioni su: _read'
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: f814c912c9f5d5e2dc7897cb3a2dcc8099503314
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97274840"
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

*FD*<br/>
Il descrittore del file che fa riferimento al file aperto.

*buffer*<br/>
Percorso di archiviazione per i dati.

*buffer_size*<br/>
Numero massimo di byte da leggere.

## <a name="return-value"></a>Valore restituito

**_read** restituisce il numero di byte letti, che potrebbero essere minori di *BUFFER_SIZE* se sono presenti meno di *BUFFER_SIZE* byte rimanenti nel file o se il file è stato aperto in modalità testo. In modalità testo ogni coppia ritorno a capo/avanzamento riga `\r\n` viene sostituita da un singolo carattere di avanzamento riga `\n` . Solo il carattere di avanzamento riga singolo viene conteggiato nel valore restituito. La sostituzione non influisce sul puntatore di file.

Se la funzione tenta di leggere alla fine del file, restituisce 0. Se *FD* non è valido, il file non è aperto per la lettura o il file è bloccato, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce-1 e **errno** viene impostato su **EBADF**.

Se il *buffer* è **null** o se *BUFFER_SIZE*  >  **INT_MAX**, viene richiamato il gestore di parametri non validi. Se l'esecuzione può continuare, la funzione restituisce-1 e **errno** viene impostato su **EINVAL**.

Per altre informazioni su questi e su altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La funzione **_read** legge un massimo di *BUFFER_SIZE* byte nel *buffer* dal file associato a *FD*. L'operazione di lettura inizia dalla posizione corrente del puntatore del file associato al file specificato. Dopo l'operazione di lettura, il puntatore del file punta al carattere successivo non letto.

Se il file è stato aperto in modalità testo, la lettura termina quando **_read** rileva un carattere CTRL + Z, che viene considerato come un indicatore di fine del file. Usa [lseek](lseek-lseeki64.md) per cancellare l'indicatore di fine del file.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

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

## <a name="see-also"></a>Vedi anche

[I/O di basso livello](../../c-runtime-library/low-level-i-o.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[fread](fread.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_write](write.md)<br/>
