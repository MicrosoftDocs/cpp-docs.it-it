---
title: freopen, _wfreopen
ms.date: 4/2/2020
api_name:
- freopen
- _wfreopen
- _o__wfreopen
- _o_freopen
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
ms.openlocfilehash: 635775469ed6545abd6da43ba27d496d439f80ee
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81345861"
---
# <a name="freopen-_wfreopen"></a>freopen, _wfreopen

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

*Percorso*<br/>
Percorso del nuovo file.

*Modalità*<br/>
Tipo di accesso consentito.

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al nuovo file aperto. Se si verifica un errore, il file originale viene chiuso e la funzione restituisce un valore di puntatore **NULL.** Se *path*, *mode*, o *stream* è un puntatore null o se *filename* è una stringa vuota, queste funzioni richiamano il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono **NULL**.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Sono disponibili versioni più sicure di queste funzioni, vedere [freopen_s, _wfreopen_s](freopen-s-wfreopen-s.md).

La funzione **freopen** chiude il file attualmente associato al *flusso* e riassegna il *flusso* al file specificato da *path*. **_wfreopen** è una versione a caratteri wide di **_freopen**; gli argomenti *path* e *mode* per **_wfreopen** sono stringhe di caratteri wide. **_wfreopen** e **_freopen** si comportano in modo identico in caso contrario.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tfreopen**|**freopen**|**freopen**|**_wfreopen**|

**freopen** viene in genere utilizzato per reindirizzare i file pre-aperti **stdin**, **stdout**e **stderr** ai file specificati dall'utente. Il nuovo file associato al *flusso* viene aperto con *mode*, ovvero una stringa di caratteri che specifica il tipo di accesso richiesto per il file, come indicato di seguito:

|*Modalità*|Accesso|
|-|-|
| **"r"** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata **freopen** ha esito negativo. |
| **"w"** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **"a"** | Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se è inesistente. |
| **"r"** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **"w" (w)** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **"A"** | Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se è inesistente. |

Utilizzare i tipi **"w"** e **"w"** con attenzione, in quanto possono distruggere i file esistenti.

Quando un file viene aperto con il tipo di accesso **"a"** o **"a"** , tutte le operazioni di scrittura vengono eseguite alla fine del file. Sebbene il puntatore del file possa essere riposizionato utilizzando [fseek](fseek-fseeki64.md) o [rewind](rewind.md), il puntatore del file viene sempre spostato alla fine del file prima che venga eseguita qualsiasi operazione di scrittura. Pertanto, i dati esistenti non possono essere sovrascritti.

La modalità **"a"** non rimuove il marcatore EOF prima dell'aggiunta al file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non i eventualmente aggiunti al file. La modalità **"a"** rimuove il marcatore EOF prima di aggiungerlo al file. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. Per **"a+"** l'aggiunta a un file di flusso che viene terminato con il marcatore EOF CTRL.

Quando viene specificato il tipo di accesso **"r"**, **"w"** o **"a"** , sono consentite sia la lettura che la scrittura (il file viene detto aperto per "aggiornamento"). Tuttavia, quando si passa da lettura a scrittura, deve esserci un'operazione [fsetpos](fsetpos.md), [fseek](fseek-fseeki64.md) o [rewind](rewind.md) intermedia. La posizione corrente può essere specificata per l'operazione [fsetpos](fsetpos.md) o [fseek,](fseek-fseeki64.md) se lo si desidera. Oltre ai valori sopra, uno dei seguenti caratteri può essere incluso nella stringa di *modalità* per specificare la modalità di conversione per le nuove righe.

|modificatore *di modalità*|Modalità di traduzione|
|-|-|
| **T** | Aprire in modalità testo (convertita). |
| **B** | Aperto in modalità binaria (non tradotta); le traduzioni che coinvolgono i caratteri di ritorno a capo e avanzamento riga vengono soppresse. |

In modalità testo (tradotto), le combinazioni ritorno a capo-avanzamento riga (CR-LF) vengono convertite in caratteri di avanzamento riga singola (LF) all'input; I caratteri LF vengono convertiti in combinazioni CR-LF nell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura o per la scrittura e la lettura con **"a"**, la libreria di runtime verifica la presenza di un tasto CTRL alla fine del file e, se possibile, lo rimuove. Ciò avviene perché l'uso di [fseek](fseek-fseeki64.md) e [ftell](ftell-ftelli64.md) per spostarsi all'interno di un file può causare [il comportarsi](fseek-fseeki64.md) in modo improprio verso la fine del file. L'opzione **t** è un'estensione Microsoft che non deve essere utilizzata dove si desidera la portabilità ANSI.

Se **t** o **b** non viene specificato in *modalità*, la modalità di conversione predefinita è definita dalla variabile globale [_fmode](../../c-runtime-library/fmode.md). Se **t** o **b** è preceduto dall'argomento , la funzione ha esito negativo e restituisce **NULL**.

Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**freopen**|\<stdio.h>|
|**_wfreopen**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app UWP (Universal Windows Platform). Gli handle di flusso standard associati alla console, **stdin**, **stdout**e **stderr**, devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano utilizzarli nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
