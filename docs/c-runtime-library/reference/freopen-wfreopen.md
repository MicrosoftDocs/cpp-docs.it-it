---
title: freopen, _wfreopen
ms.date: 11/04/2016
apiname:
- freopen
- _wfreopen
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
- _wfreopen
- _tfreopen
- freopen
helpviewer_keywords:
- _wfreopen function
- file pointers [C++], reassigning
- _tfreopen function
- freopen function
- tfreopen function
- wfreopen function
ms.assetid: de4b73f8-1043-4d62-98ee-30d2022da885
ms.openlocfilehash: f31f0eeacaf573fe0f6489f4dc8b5da03bf9b64f
ms.sourcegitcommit: 878a164fe6d550ca81ab87d8425c8d3cd52fe384
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/22/2019
ms.locfileid: "68376102"
---
# <a name="freopen-wfreopen"></a>freopen, _wfreopen

Riassegna un puntatore del file. Sono disponibili versioni più sicure di queste funzioni. Vedere [freopen_s, _wfreopen_s](freopen-s-wfreopen-s.md).

## <a name="syntax"></a>Sintassi

```C
FILE *freopen(
   const char *path,
   const char *mode,
   FILE *stream
);
FILE *_wfreopen(
   const wchar_t *path,
   const wchar_t *mode,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*path*<br/>
Percorso del nuovo file.

*mode*<br/>
Tipo di accesso consentito.

*stream*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al nuovo file aperto. Se si verifica un errore, il file originale viene chiuso e la funzione restituisce un valore di puntatore **null** . Se il *percorso*, la *modalità*o il *flusso* è un puntatore null o se *filename* è una stringa vuota, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono **null**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Sono disponibili versioni più sicure di queste funzioni, vedere [freopen_s, _wfreopen_s](freopen-s-wfreopen-s.md).

La funzione **freopen** chiude il file attualmente associato a *Stream* e riassegna il *flusso* al file specificato da *path*. **_wfreopen** è una versione a caratteri wide di **_freopen**; gli argomenti *path* e *mode* di **_wfreopen** sono stringhe a caratteri wide. **_wfreopen** e **_freopen** si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tfreopen**|**freopen**|**freopen**|**_wfreopen**|

**freopen** viene in genere usato per reindirizzare i file già aperti **stdin**, **stdout**e **stderr** ai file specificati dall'utente. Il nuovo file associato al *flusso* viene aperto con la *modalità*, ovvero una stringa di caratteri che specifica il tipo di accesso richiesto per il file, come indicato di seguito:

|*mode*|Accesso|
|-|-|
| **"r"** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata a **freopen** ha esito negativo. |
| **"w"** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **"a"** | Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se è inesistente. |
| **"r+"** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **"w+"** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **"a+"** | Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se è inesistente. |

Usare i tipi **"w"** e **"w +"** con cautela, in quanto possono eliminare i file esistenti.

Quando un file viene aperto con il tipo di accesso **"a"** o **"a +"** , tutte le operazioni di scrittura si verificano alla fine del file. Sebbene il puntatore del file possa essere riposizionato utilizzando [fseek](fseek-fseeki64.md) o [Rewind](rewind.md), il puntatore del file viene sempre spostato di nuovo alla fine del file prima che venga eseguita un'operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti.

La modalità **"a"** non rimuove il marcatore EOF prima dell'aggiunta al file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non i eventualmente aggiunti al file. La modalità **"a +"** rimuove il marcatore EOF prima dell'aggiunta al file. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. La modalità **"a +"** è necessaria per l'aggiunta a un file di flusso terminato con il marcatore EOF CTRL + Z.

Quando viene specificato il tipo di accesso **"r +"** , **"w +"** o **"a +"** , sono consentite sia la lettura che la scrittura (il file viene definito aperto per "aggiornare"). Tuttavia, quando si passa da lettura a scrittura, deve esserci un'operazione [fsetpos](fsetpos.md), [fseek](fseek-fseeki64.md) o [rewind](rewind.md) intermedia. Se lo si desidera, è possibile specificare la posizione corrente per l'operazione [fsetpos](fsetpos.md) o [fseek](fseek-fseeki64.md) . Oltre ai valori precedenti, è possibile includere uno dei caratteri seguenti nella stringa *mode* per specificare la modalità di conversione per le nuove righe.

|modificatore di *modalità*|Modalità di conversione|
|-|-|
| **t** | Aprire in modalità testo (convertita). |
| **b** | Apri in modalità binaria (non convertita); le traduzioni che includono caratteri di ritorno a capo e avanzamento riga vengono eliminati. |

In modalità testo (convertito), le combinazioni di ritorno a capo/avanzamento riga (CR-LF) vengono convertite in caratteri di avanzamento riga singolo (LF) nell'input; LF i caratteri vengono convertiti in combinazioni CR-LF nell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura o per la scrittura e la lettura con **"a +"** , la libreria di runtime verifica la presenza della combinazione CTRL + Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso di [fseek](fseek-fseeki64.md) e [ftell](ftell-ftelli64.md) per spostarsi all'interno di un file può causare un comportamento non corretto di [fseek](fseek-fseeki64.md) in prossimità della fine del file. L'opzione **t** è un'estensione Microsoft che non deve essere usata in cui si desidera la portabilità ANSI.

Se **t** o **b** non è specificato in *modalità*, la modalità di conversione predefinita è definita dalla variabile globale [_fmode](../../c-runtime-library/fmode.md). Se **t** o **b** è preceduto dall'argomento, la funzione ha esito negativo e restituisce **null**.

Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**freopen**|\<stdio.h>|
|**_wfreopen**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app piattaforma UWP (Universal Windows Platform) (UWP). Gli handle del flusso standard associati alla console, **stdin**, **stdout**e **stderr**devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano usarle nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_freopen.c
// compile with: /W3
// This program reassigns stderr to the file
// named FREOPEN.OUT and writes a line to that file.
#include <stdio.h>
#include <stdlib.h>

FILE *stream;

int main( void )
{
   // Reassign "stderr" to "freopen.out":
   stream = freopen( "freopen.out", "w", stderr ); // C4996
   // Note: freopen is deprecated; consider using freopen_s instead

   if( stream == NULL )
      fprintf( stdout, "error on freopen\n" );
   else
   {
      fprintf( stdout, "successfully reassigned\n" ); fflush( stdout );
      fprintf( stream, "This will go to the file 'freopen.out'\n" );
      fclose( stream );
   }
   system( "type freopen.out" );
}
```

```Output
successfully reassigned
This will go to the file 'freopen.out'
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[_fileno](fileno.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmode](setmode.md)<br/>
