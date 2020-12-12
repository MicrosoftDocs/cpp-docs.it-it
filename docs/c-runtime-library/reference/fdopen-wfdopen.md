---
description: 'Altre informazioni su: _fdopen, _wfdopen'
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: e7b255017f0c4de060a91307bc816eb46af03d20
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322621"
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

*FD*<br/>
Descrittore di file del file aperto.

*mode*<br/>
Tipo di accesso ai file.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al flusso aperto. Un valore di puntatore Null indica un errore. Quando si verifica un errore, viene richiamato il gestore dei parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EBADF**, che indica un descrittore di file non valido, o **EINVAL**, che indica che la *modalità* è un puntatore null.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La funzione **_fdopen** associa un flusso di i/o al file identificato da *FD* e consente quindi a un file aperto per l'i/o di basso livello di essere memorizzato nel buffer e formattato. **_wfdopen** è una versione a caratteri wide di **_fdopen**; l'argomento *mode* per **_wfdopen** è una stringa di caratteri wide. **_wfdopen** e **_fdopen** altrimenti si comportano in modo identico.

I descrittori di file passati in **_fdopen** sono di proprietà del **file &#42;** flusso restituito. Se **_fdopen** ha esito positivo, non chiamare [ \_ Close](close.md) sul descrittore del file. La chiamata di [fclose](fclose-fcloseall.md) sul **file restituito &#42;** chiude anche il descrittore del file.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|\_UNICODE e \_ MBCS non definiti|\_MBCS definito|\_Definito UNICODE|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfdopen**|**_fdopen**|**_fdopen**|**_wfdopen**|

La stringa di caratteri *mode* specifica il tipo di accesso ai file richiesto per il file:

| *mode* | Access |
|--------|--------|
| **r** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata di **fopen** ha esito negativo. |
| **w** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **un** | Viene aperto per la scrittura alla fine del file (aggiunta). Creare il file se è inesistente. |
| **"r +"** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **"w +"** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **"a +"** | Viene aperto per la lettura e l'aggiunta. Creare il file se è inesistente. |

Quando un file viene aperto con il tipo di accesso **"a"** o **"a +"** , tutte le operazioni di scrittura si verificano alla fine del file. Il puntatore del file può essere riposizionato utilizzando [fseek](fseek-fseeki64.md) o [Rewind](rewind.md), ma viene sempre spostato di nuovo alla fine del file prima che venga eseguita un'operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti. Quando viene specificato il tipo di accesso **"r +"**, **"w +"** o **"a +"** , sono consentite sia la lettura che la scrittura (il file viene definito aperto per "aggiornare"). Tuttavia, quando si passa dalla lettura alla scrittura, è necessario che sia presente un'operazione [fflush](fflush.md), [fsetpos](fsetpos.md), [fseek](fseek-fseeki64.md)o [Rewind](rewind.md) corrispondente. Se lo si desidera, è possibile specificare la posizione corrente per l'operazione [fsetpos](fsetpos.md) o [fseek](fseek-fseeki64.md) .

Oltre ai valori precedenti, è anche possibile includere i caratteri seguenti in *modalità* per specificare la modalità di conversione per i caratteri di nuova riga:

| modificatore di *modalità* | Comportamento |
|-----------------|----------|
| **t** | Aprire in modalità testo (convertita). In questa modalità, le combinazioni di ritorno a capo-avanzamento di riga (CR-LF) vengono convertite in un avanzamento riga (LF) al momento dell'input e i caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo-avanzamento di riga (CR-LF) al momento dell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. |
| **b** | Aprire in modalità binaria (non convertita). Tutte le traduzioni dalla modalità **t** vengono evitate. |
| **c** | Abilitare il flag commit per il *nome file* associato, in modo che il contenuto del buffer di file venga scritto direttamente su disco se viene chiamato **fflush** o **_flushall** . |
| **n** | Reimpostare il flag di commit per il *nome file* associato su "no-commit". Questo è il valore predefinito. Esegue inoltre l'override del flag commit globale se il programma viene collegato a commode. obj. Il valore predefinito del flag commit globale è "no-commit", a meno che il programma non venga collegato in modo esplicito a commode. obj. |

Le opzioni della *modalità* **t**, **c** e **n** sono estensioni Microsoft per **fopen** e **_fdopen**. Non usarle se si desidera mantenere la portabilità ANSI.

Se **t** o **b** non è specificato in *modalità*, la modalità di conversione predefinita è definita dalla variabile globale [ \_ fmode](../../c-runtime-library/fmode.md). Se **t** o **b** è preceduto dall'argomento, la funzione ha esito negativo e restituisce null. Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

I caratteri validi per la stringa della *modalità* utilizzata in **fopen** e **_fdopen** corrispondono agli argomenti *Oflag* usati in [ \_ Open](open-wopen.md) e [ \_ sopen](sopen-wsopen.md), come illustrato nella tabella seguente:

|Caratteri nella stringa della *modalità*|Valore *Oflag* equivalente per **_open** e **_sopen**|
|---------------------------------|---------------------------------------------------|
|**un**|**\_ O \_ WRONLY &#124; \_ o \_ Append** (in genere **\_ o \_ WRONLY &#124; \_ o \_ Crea &#124; \_ o \_ Append**)|
|**a +**|**\_ O \_ RDWR &#124; \_ o \_ Append** (in genere **\_ o \_ RDWR &#124; \_ o \_ Append &#124; \_ o \_ create** )|
|**r**|**\_O \_ RDONLY**|
|**r +**|**\_O \_ RDWR**|
|**w**|**\_ O \_ WRONLY** (in genere **\_ o \_ WRONLY &#124; \_ o \_ Crea &#124; \_ o \_ Tronca**)|
|**w +**|**\_ O \_ RDWR** (in genere **\_ o \_ RDWR &#124; \_ o \_ Crea &#124; \_ o \_ Tronca**)|
|**b**|**\_\_binario O**|
|**t**|**\_\_Testo O**|
|**c**|Nessuno|
|**n**|Nessuno|

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

## <a name="see-also"></a>Vedi anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[\_duplicato, \_ dup2](dup-dup2.md)<br/>
[fclose, \_ fcloseall](fclose-fcloseall.md)<br/>
[fopen, \_ wfopen](fopen-wfopen.md)<br/>
[freopen, \_ wfreopen](freopen-wfreopen.md)<br/>
[\_Apri, \_ wopen](open-wopen.md)<br/>
