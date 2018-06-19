---
title: _fdopen, _wfdopen | Microsoft Docs
ms.custom: ''
ms.date: 12/12/2017
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _fdopen
- _wfdopen
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
apitype: DLLExport
f1_keywords:
- _tfdopen
- _fdopen
- _wfdopen
- wfdopen
- tfdopen
dev_langs:
- C++
helpviewer_keywords:
- wfdopen function
- _fdopen function
- _wfdopen function
- tfdopen function
- fdopen function
- _tfdopen function
- streams, associating with files
ms.assetid: 262757ff-1e09-4472-a5b6-4325fc28f971
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 21bd849d5ce9560fae356869291d6764d613f0a7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32405419"
---
# <a name="fdopen-wfdopen"></a>_fdopen, _wfdopen

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

*FD* descrittore di File del file aperto.

*modalità* tipo di accesso ai file.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al flusso aperto. Un valore di puntatore Null indica un errore. Quando si verifica un errore, viene richiamato il gestore dei parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EBADF**, che indica un descrittore di file non valido, o **EINVAL**, a indicare che *modalità*  era un puntatore null.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **fdopen** funzione associa un flusso dei / o con il file identificato dal *fd*in modo da consentire un file che viene aperto per i/o di basso livello essere memorizzati nel buffer e formattato. **wfdopen** è una versione a caratteri "wide" **fdopen**; il *modalità* argomento **wfdopen** è una stringa di caratteri "wide". **wfdopen** e **fdopen** in caso contrario, si comportano in modo identico.

File descrittori passati **fdopen** sono di proprietà dall'oggetto restituito **FILE &#42;**  flusso. Se **fdopen** ha esito positivo, non chiamare [ \_chiudere](close.md) nel descrittore di file. La chiamata [fclose](fclose-fcloseall.md) sull'oggetto restituito **FILE &#42;**  e inoltre chiude il descrittore del file.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tfdopen**|**_fdopen**|**_fdopen**|**_wfdopen**|

Il *modalità* stringa di caratteri specifica il tipo di accesso ai file richiesto per il file:

|*mode*|Accedi a|
|-|-|
**"r"**|Viene aperto per la lettura. Se il file non esiste o non viene trovato, il **fopen** chiamata ha esito negativo.
**"w"**|Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.
**"a"**|Viene aperto per la scrittura alla fine del file (aggiunta). Creare il file se è inesistente.
**"r+"**|Viene aperto per la lettura e la scrittura. Il file deve esistere.
**"w+"**|Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente.
**"a+"**|Viene aperto per la lettura e l'aggiunta. Creare il file se è inesistente.

Quando viene aperto un file con il **"a"** oppure **"+"** , tipo di accesso tutte le operazioni vengono eseguite alla fine del file di scrittura. Il puntatore del file può essere riposizionato usando [fseek](fseek-fseeki64.md) oppure [rewind](rewind.md), ma viene sempre spostato di nuovo alla fine del file prima di qualsiasi operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti. Quando il **"r +"**, **"w +"**, o **"a +"** viene specificato il tipo di accesso, sono consentite sia la lettura e scrittura (il file viene definito aperto per "aggiornamento"). Tuttavia, quando si passa da lettura a scrittura, deve esserci una nuova [fflush](fflush.md), [fsetpos](fsetpos.md), [fseek](fseek-fseeki64.md), oppure [rewind](rewind.md) operazione. È possibile specificare la posizione corrente per il [fsetpos](fsetpos.md) oppure [fseek](fseek-fseeki64.md) operazione, se si desidera.

Oltre ai valori specificati sopra, anche i seguenti caratteri possono essere incluso *modalità* per specificare la modalità di conversione per caratteri di nuova riga:

|*modalità* modificatore|Comportamento|
|-|-|
**t**|Aprire in modalità testo (convertita). In questa modalità, le combinazioni di ritorno a capo-avanzamento di riga (CR-LF) vengono convertite in un avanzamento riga (LF) al momento dell'input e i caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo-avanzamento di riga (CR-LF) al momento dell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file.
**b**|Aprire in modalità binaria (non convertita). Tutte le conversioni dalla **t** modalità vengono soppressi.
**c**|Abilitare il flag commit per la proprietà associata *filename* in modo che il contenuto del buffer di file viene scritti direttamente su disco se **fflush** oppure **FlushAll** viene chiamato.
**n**|Reimpostare il flag commit per la proprietà associata *filename* su "no-commit". Questa è l'impostazione predefinita. Esegue inoltre l'override del flag commit globale se il programma viene collegato a Commode.obj. L'impostazione predefinita del flag commit globale è "no-commit", a meno che il programma venga collegato in modo esplicito a Commode.obj.

Il **t**, **c**, e **n** *modalità* opzioni sono estensioni Microsoft per **fopen** e**fdopen**. Non usarle se si desidera mantenere la portabilità ANSI.

Se **t** oppure **b** non è specificato in *modalità*, la modalità di traduzione predefinita è definita dalla variabile globale [ \_fmode](../../c-runtime-library/fmode.md). Se **t** oppure **b** è il prefisso dell'argomento, la funzione ha esito negativo e viene restituito NULL. Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

Valori validi per il *modalità* stringa usata nel **fopen** e **fdopen** corrispondono a *oflag* argomenti usati nel [ \_aprire](open-wopen.md) e [ \_sopen](sopen-wsopen.md), come illustrato in questa tabella:

|I caratteri *modalità* stringa|Equivalente *oflag* il valore per **Open** e **sopen**|
|---------------------------------|---------------------------------------------------|
|**a**|**\_O\_WRONLY &#124; \_O\_APPEND** (in genere  **\_O\_WRONLY &#124; \_O\_CREAT &#124; \_O \_APPEND**)|
|**+**|**\_O\_RDWR &#124; \_O\_APPEND** (in genere  **\_O\_RDWR &#124; \_O\_APPEND &#124; \_O\_ Creazione di un** )|
|**r**|**\_O\_RDONLY**|
|**r +**|**\_O\_RDWR**|
|**w**|**\_O\_WRONLY** (in genere  **\_O\_WRONLY &#124; \_O\_CREAT &#124; \_O\_TRUNC**)|
|**w +**|**\_O\_RDWR** (in genere  **\_O\_RDWR &#124; \_O\_CREAT &#124; \_O\_TRUNC**)|
|**b**|**\_O\_BINARIO**|
|**t**|**\_O\_TEXT**|
|**c**|Nessuno|
|**n**|Nessuno|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_fdopen**|\<stdio.h>|
|**_wfdopen**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

### <a name="input-crtfdopentxt"></a>Input: crt_fdopen.txt

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
[\_aprire, \_wopen](open-wopen.md)<br/>
