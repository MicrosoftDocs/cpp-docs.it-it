---
title: _fdopen, _wfdopen
ms.date: 4/2/2020
api_name:
- _fdopen
- _wfdopen
- _o__fdopen
- _o__wfdopen
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
- api-ms-win-crt-math-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _tfdopen
- _fdopen
- _wfdopen
- wfdopen
- tfdopen
helpviewer_keywords:
- wfdopen function
- _fdopen function
- _wfdopen function
- tfdopen function
- fdopen function
- _tfdopen function
- streams, associating with files
ms.assetid: 262757ff-1e09-4472-a5b6-4325fc28f971
ms.openlocfilehash: 82a7e891e8bd6031ebbf761534b6df7cd8488d36
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81347381"
---
# <a name="_fdopen-_wfdopen"></a>_fdopen, _wfdopen

Associa un flusso a un file che è stato precedentemente aperto per I/O di basso livello.

## <a name="syntax"></a>Sintassi

```C
FILE *_fdopen(
   int fd,
   const char *mode
);
FILE *_wfdopen(
   int fd,
   const wchar_t *mode
);
```

### <a name="parameters"></a>Parametri

*Fd*<br/>
Descrittore di file del file aperto.

*Modalità*<br/>
Tipo di accesso ai file.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al flusso aperto. Un valore di puntatore Null indica un errore. Quando si verifica un errore, viene richiamato il gestore dei parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostato su **EBADF**, che indica un descrittore di file non valido, o **EINVAL**, che indica che *la modalità* è un puntatore null.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_fdopen** associa un flusso I/O al file identificato da *fd*e consente pertanto di memorizzare nel buffer e la formattazione un file aperto per l'I/O di basso livello. **_wfdopen** è una versione a caratteri wide di **_fdopen**; l'argomento *mode* di **_wfdopen** è una stringa di caratteri wide. **_wfdopen** e **_fdopen** altrimenti si comportano in modo identico.

I descrittori di file passati **in _fdopen** sono di proprietà del flusso di **&#42;FILE** restituito. Se **_fdopen** ha esito positivo, non chiamare [ \_close](close.md) sul descrittore di file. La chiamata a [fclose](fclose-fcloseall.md) sul **&#42;FILE** restituito chiude anche il descrittore di file.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|\_UNICODE \_e MBCS non definiti|\_MBCS definito|\_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfdopen**|**_fdopen**|**_fdopen**|**_wfdopen**|

La stringa di caratteri *della modalità* specifica il tipo di accesso al file richiesto per il file:

| *Modalità* | Accesso |
|--------|--------|
| **"r"** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata **fopen** ha esito negativo. |
| **"w"** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **"a"** | Si apre per la scrittura alla fine del file (aggiunta). Creare il file se è inesistente. |
| **"r"** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **"w" (w)** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **"A"** | Viene aperto per la lettura e l'aggiunta. Creare il file se è inesistente. |

Quando un file viene aperto con il tipo di accesso **"a"** o **"a"** , tutte le operazioni di scrittura si verificano alla fine del file. Il puntatore del file può essere riposizionato utilizzando [fseek](fseek-fseeki64.md) o [rewind](rewind.md), ma viene sempre spostato alla fine del file prima che venga eseguita qualsiasi operazione di scrittura. Pertanto, i dati esistenti non possono essere sovrascritti. Quando viene specificato il tipo di accesso **"r"**, **"w"** o **"a"** , sono consentite sia la lettura che la scrittura (il file viene detto aperto per "aggiornamento"). Tuttavia, quando si passa dalla lettura alla scrittura e dalla scrittura, deve essere presente un'operazione [fflush](fflush.md), [fsetpos](fsetpos.md), [fseek](fseek-fseeki64.md)o [rewind](rewind.md) intermedia. Se lo si desidera, è possibile specificare la posizione corrente per l'operazione [fsetpos](fsetpos.md) o [fseek.](fseek-fseeki64.md)

Oltre ai valori sopra, i seguenti caratteri possono anche essere inclusi in *modalità* per specificare la modalità di conversione per i caratteri di nuova riga:

| modificatore *di modalità* | Comportamento |
|-----------------|----------|
| **T** | Aprire in modalità testo (convertita). In questa modalità, le combinazioni di ritorno a capo-avanzamento di riga (CR-LF) vengono convertite in un avanzamento riga (LF) al momento dell'input e i caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo-avanzamento di riga (CR-LF) al momento dell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. |
| **B** | Aprire in modalità binaria (non convertita). Tutte le traduzioni dalla modalità **t** vengono soppresse. |
| **C** | Abilitare il flag di commit per il *nome file* associato in modo che il contenuto del buffer di file venga scritto direttamente su disco se viene chiamato **fflush** o **_flushall.** |
| **N** | Reimpostare il flag di commit per il *nome file* associato su "no-commit". Questa è la modalità predefinita. Esegue inoltre l'override del flag di commit globale se si collega il programma a Commode.obj. Il valore predefinito del flag di commit globale è "no-commit" a meno che non si colleghi esplicitamente il programma con Commode.obj. |

Le opzioni di **n** *modalità* **t**, **c**e n sono estensioni Microsoft per **fopen** e **_fdopen**. Non usarle se si desidera mantenere la portabilità ANSI.

Se **t** o **b** non viene specificato in *modalità*, la modalità di conversione predefinita è definita dalla variabile [ \_](../../c-runtime-library/fmode.md)globale fmode . Se **t** o **b** è preceduto dall'argomento, la funzione ha esito negativo e restituisce NULL. Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

I caratteri validi per *la* stringa mode utilizzata in **fopen** e **_fdopen** corrispondono agli argomenti *oflag* utilizzati in [ \_open](open-wopen.md) e [ \_sopen](sopen-wsopen.md), come illustrato nella tabella seguente:

|Caratteri nella stringa *di modalità*|Valore *oflag* equivalente per **_open** e **_sopen**|
|---------------------------------|---------------------------------------------------|
|**Un**|**\_O\_WRONLY \_\_&#124; O APPEND** (di solito ** \_ \_O\_\_WRONLY &#124; \_O\_CREAT &#124; O APPEND**)|
|**a'**|**\_O\_RDWR \_\_&#124; O APPEND** (di solito ** \_O\_RDWR &#124; \_\_O APPEND &#124; \_O\_CREAT** )|
|**R**|**\_O\_RDONLY**|
|**r.**|**\_O\_RDWR**|
|**W**|**\_O\_WRONLY** (di solito ** \_O\_WRONLY &#124; \_O\_CREAT &#124; \_O\_TRUNC**)|
|**W.**|**\_O\_RDWR** (di solito ** \_O\_RDWR &#124; \_O\_CREAT &#124; \_O\_TRUNC**)|
|**B**|**\_O\_BINARIO**|
|**T**|**\_O\_TESTO**|
|**C**|nessuno|
|**N**|nessuno|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fdopen**|\<stdio.h>|
|**_wfdopen**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```c
// crt_fdopen.c
// This program opens a file by using low-level
// I/O, then uses _fdopen to switch to stream
// access. It counts the lines in the file.

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <io.h>
#include <share.h>

int main( void )
{
   FILE *stream;
   int  fd, count = 0;
   char inbuf[128];

   // Open a file.
   if( _sopen_s( &fd, "crt_fdopen.txt", _O_RDONLY, _SH_DENYNO, 0 ) )
      exit( 1 );

   // Get stream from file descriptor.
   if( (stream = _fdopen( fd, "r" )) == NULL )
      exit( 1 );

   while( fgets( inbuf, 128, stream ) != NULL )
      count++;

   // After _fdopen, close by using fclose, not _close.
   fclose( stream );
   printf( "Lines in file: %d\n", count );
}
```

### <a name="input-crt_fdopentxt"></a>Input: crt_fdopen.txt

```Input
Line one
Line two
```

### <a name="output"></a>Output

```Output
Lines in file: 2
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[\_dup, \_dup2](dup-dup2.md)<br/>
[fclose, \_fcloseall](fclose-fcloseall.md)<br/>
[fopen, \_wfopen](fopen-wfopen.md)<br/>
[freopen, \_wfreopen](freopen-wfreopen.md)<br/>
[\_aperto, \_wopen](open-wopen.md)<br/>
