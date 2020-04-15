---
title: ftell, _ftelli64
ms.date: 4/2/2020
api_name:
- _ftelli64
- ftell
- _o__ftelli64
- _o_ftell
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
- _ftelli64
- ftell
helpviewer_keywords:
- ftell function
- ftelli64 function
- _ftelli64 function
- file pointers [C++], getting current position
- file pointers [C++]
ms.assetid: 40149cd8-65f2-42ff-b70c-68e3e918cdd7
ms.openlocfilehash: bfe79610161a7f4032517d9f7eaa0de50be18e50
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81345618"
---
# <a name="ftell-_ftelli64"></a>ftell, _ftelli64

Ottiene la posizione corrente di un puntatore del file.

## <a name="syntax"></a>Sintassi

```C
long ftell(
   FILE *stream
);
__int64 _ftelli64(
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Struttura **FILE** di destinazione.

## <a name="return-value"></a>Valore restituito

**ftell** e **_ftelli64** restituiscono la posizione corrente del file. Il valore restituito da **ftell** e **_ftelli64** potrebbe non riflettere l'offset fisico dei byte per i flussi aperti in modalità testo, perché la modalità testo causa la conversione dell'avanzamento riga di ritorno a capo. Usa **ftell** con [fseek](fseek-fseeki64.md) o **_ftelli64** con [_fseeki64](fseek-fseeki64.md) per tornare correttamente alle posizioni dei file. In caso di errore, **ftell** e **_ftelli64** richiamare il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1L e impostano **errno** su una delle due costanti, definite in ERRNO. H. La costante **EBADF** indica che l'argomento *stream* non è un valore di puntatore al file valido o non fa riferimento a un file aperto. **EINVAL** significa che alla funzione è stato passato un argomento *di flusso* non valido. Nei dispositivi incapaci di cercare (come terminali e stampanti) o quando *il flusso* non fa riferimento a un file aperto, il valore restituito non è definito.

Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Le funzioni **ftell** e **_ftelli64** recuperano la posizione corrente del puntatore del file (se presente) associato al *flusso*. La posizione viene espressa come offset rispetto all'inizio del flusso.

Si noti che quando un file viene aperto per l'accodamento dei dati, la posizione corrente nel file è determinata dall'ultima operazione di I/O e non dalla posizione in cui si verificherà la scrittura successiva. Ad esempio, se un file viene aperto per un accodamento e l'ultima operazione è stata una lettura, la posizione nel file è il punto in cui inizierebbe l'operazione di lettura successiva e non quella in cui inizierebbe inizia la scrittura successiva. Quando un file viene aperto per l'aggiunta, la posizione del file viene spostata alla fine del file prima di qualsiasi operazione di scrittura. Se non si è ancora verificata alcuna operazione di I/O su un file aperto per l'aggiunta, la posizione del file è l'inizio del file.

In modalità testo CTRL+Z viene interpretato nell'input come un carattere di fine file. Nei file aperti per la lettura/scrittura, **fopen** e tutte le routine correlate controllano la presenza di un CTRL alla fine del file e, se possibile, lo rimuovono. Questa operazione viene eseguita in quanto l'utilizzo della combinazione di **ftell** e [fseek](fseek-fseeki64.md) o **_ftelli64** e [_fseeki64](fseek-fseeki64.md), per spostarsi all'interno di un file che termina con un CTRL, può causare un'operazione di **ftell** o **_ftelli64** comportarsi in modo non corretto vicino alla fine del file.

Questa funzione blocca il thread chiamante durante l'esecuzione e pertanto è thread-safe. Per una versione non bloccante, vedere **_ftell_nolock**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazioni facoltative|
|--------------|---------------------|----------------------|
|**ftell**|\<stdio.h>|\<errno.h>|
|**_ftelli64**|\<stdio.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
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

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[fgetpos](fgetpos.md)<br/>
[fseek, _fseeki64](fseek-fseeki64.md)<br/>
[_lseek, _lseeki64](lseek-lseeki64.md)<br/>
