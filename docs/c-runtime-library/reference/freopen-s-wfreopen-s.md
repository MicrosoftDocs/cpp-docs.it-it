---
description: 'Altre informazioni su: freopen_s, _wfreopen_s'
title: freopen_s, _wfreopen_s
ms.date: 2/23/2021
api_name:
- _wfreopen_s
- freopen_s
- _o__wfreopen_s
- _o_freopen_s
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
- freopen_s
- _tfreopen_s
- _wfreopen_s
helpviewer_keywords:
- _tfreopen_s function
- _wfreopen_s function
- file pointers [C++], reassigning
- tfreopen_s function
- wfreopen_s function
- freopen_s function
ms.openlocfilehash: a2b9bf86d50972fcc820da3e53fd066717879ff3
ms.sourcegitcommit: c0c9cdae79f19655e809a4979227c51bb19cff63
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2021
ms.locfileid: "102236738"
---
# <a name="freopen_s-_wfreopen_s"></a>`freopen_s`, `_wfreopen_s`

Chiude il file attualmente associato a `oldStream` e riassegna `stream` al file specificato da `fileName` .

Queste versioni di [`freopen, _wfreopen`](freopen-wfreopen.md) includono miglioramenti per la sicurezza, come descritto in [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t freopen_s(
   FILE ** stream,
   const char * fileName,
   const char * mode,
   FILE* oldStream
);

errno_t _wfreopen_s(
   FILE ** stream,
   const wchar_t * fileName,
   const wchar_t * mode,
   FILE * oldStream
);
```

### <a name="parameters"></a>Parametri

*`stream`*\
Parametro out che punterà al flusso riaperto quando la funzione restituisce.

*`fileName`*\
Percorso del file da riaprire.

*` mode`*\
Modalità per il flusso riaperto.

*`oldStream`*\
Flusso da riaprire. Viene scaricato e tutti i file associati vengono chiusi.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo; in caso contrario, un codice di errore. Se si verifica un errore, il file originale viene chiuso e **`NULL`** viene scritto a *`stream`* meno che non *`stream`* sia anche **`NULL`**

Per ulteriori informazioni sui codici di errore, vedere [`errno, _doserrno, _sys_errlist, and _sys_nerr`](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .

## <a name="remarks"></a>Commenti

La **`freopen_s`** funzione viene in genere utilizzata per associare i flussi pre-aperti associati `stdin` a `stdout` e `stderr` a un altro file.

La **`freopen_s`** funzione chiude il file attualmente associato a *`stream`* e riassegna *`stream`* al file specificato da *path*. **`_wfreopen_s`** è una versione a caratteri wide di **`freopen_s`** . il *percorso* e gli *` mode`* argomenti per **`_wfreopen_s`** sono stringhe a caratteri wide. **`_wfreopen_s`** e si **`freopen_s`** comportano in modo identico.

Se *Pfile*, *path*, *` mode`* o *`stream`* sono **`NULL`** o se *path* è una stringa vuota, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **`errno`** su **`EINVAL`** e restituiscono **`EINVAL`** .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|`TCHAR.H` routine|_ `UNICODE & _MBCS` non definito|`_MBCS` definito|`_UNICODE` definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**`_tfreopen_s`**|**`freopen_s`**|**`freopen_s`**|**`_wfreopen_s`**|

**`freopen_s`** viene in genere usato per reindirizzare i file già aperti **`stdin`** , **`stdout`** e **`stderr`** ai file specificati dall'utente. Il nuovo file associato a *`stream`* viene aperto con *` mode`* , che è una stringa di caratteri che specifica il tipo di accesso richiesto per il file, come indicato di seguito:

|*` mode`*|Access|
|-|-|
| **`"r"`** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, la **`freopen_s`** chiamata ha esito negativo. |
| **`"w"`** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **`"a"`** | Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se non esiste. |
| **`"r+"`** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **`"w+"`** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **`"a+"`** | Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se non esiste. |

Usare i **`"w"`** **`"w+"`** tipi e con cautela, in quanto possono eliminare i file esistenti. A partire da C11, è possibile aggiungere **`"x"`** a **`"w"`** o **`"w+"`** per provocare l'esito negativo della funzione se il file esiste, anziché sovrascriverlo.

Quando un file viene aperto con il **`"a"`** **`"a+"`** tipo di accesso o, tutte le operazioni di scrittura si verificano alla fine del file. Sebbene il puntatore del file possa essere riposizionato usando [`fseek`](fseek-fseeki64.md) o [`rewind`](rewind.md) , il puntatore del file viene sempre spostato di nuovo alla fine del file prima che venga eseguita un'operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti.

La **`"a"`** modalità non rimuove il marcatore EOF prima dell'aggiunta al file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non i eventualmente aggiunti al file. La **`"a+"`** modalità rimuove il marcatore EOF prima dell'aggiunta al file. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. La **`"a+"`** modalità è necessaria per l'aggiunta a un file di flusso terminato con il marcatore EOF CTRL + Z.

Quando il **`"r+"`** **`"w+"`** tipo di accesso, o **`"a+"`** viene specificato, sono consentite sia la lettura che la scrittura (il file viene definito aperto per "aggiornare"). Tuttavia, quando si passa dalla lettura alla scrittura, è necessario che sia presente un' [`fsetpos`](fsetpos.md) [`fseek`](fseek-fseeki64.md) operazione, o [`rewind`](rewind.md) . [`fsetpos`](fsetpos.md)Se si desidera, è possibile specificare la posizione corrente per l' [`fseek`](fseek-fseeki64.md) operazione o. Oltre ai valori precedenti, è possibile includere nella stringa uno dei caratteri seguenti *` mode`* per specificare la modalità di conversione per le nuove righe.

|*` mode`* modificatore|Modalità di conversione|
|-|-|
| **`t`** | Aprire in modalità testo (convertita). |
| **`b`** | Apri in modalità binaria (non convertita); le traduzioni che includono caratteri di ritorno a capo e avanzamento riga vengono eliminati. |

In modalità testo (convertito), le combinazioni di ritorno a capo/avanzamento riga (CR-LF) vengono convertite in caratteri di avanzamento riga singolo (LF) nell'input; LF i caratteri vengono convertiti in combinazioni CR-LF nell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura o per la scrittura e **`"a+"`** la lettura con la libreria di runtime verifica la presenza di una combinazione CTRL + Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso di [`fseek`](fseek-fseeki64.md) e [`ftell`](ftell-ftelli64.md) per spostarsi all'interno di un file può causare un [`fseek`](fseek-fseeki64.md) comportamento non corretto in prossimità della fine del file. Non usare l' **`t`** opzione quando si desidera la portabilità ANSI perché si tratta di un'estensione Microsoft.

Se **`t`** o **`b`** non è specificato in *` mode`* , la modalità di conversione predefinita è definita dalla variabile globale [`_fmode`](../../c-runtime-library/fmode.md) . Se **`t`** o **`b`** è preceduto dall'argomento, la funzione ha esito negativo e restituisce **`NULL`** .

Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**`freopen_s`**|`<stdio.h>`|
|**`_wfreopen_s`**|`<stdio.h>` o `<wchar.h>`|

La console non è supportata nelle app piattaforma UWP (Universal Windows Platform) (UWP). Gli handle del flusso standard associati alla console,, **`stdin`** **`stdout`** e **`stderr`** , devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano usarle nelle app UWP. 

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_freopen_s.c
// This program reassigns stderr to the file
// named FREOPEN.OUT and writes a line to that file.

#include <stdio.h>
#include <stdlib.h>

FILE *stream;

int main( void )
{
   errno_t err;
   // Reassign "stderr" to "freopen.out":
   err = freopen_s( &stream, "freopen.out", "w", stderr );

   if( err != 0 )
      fprintf( stdout, "error on freopen\n" );
   else
   {
      fprintf( stdout, "successfully reassigned\n" ); 
      fflush( stdout );
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

[`Stream I/O`](../../c-runtime-library/stream-i-o.md)\
[`freopen, _wfreopen`](freopen-wfreopen.md)\
[`fclose, _fcloseall`](fclose-fcloseall.md)\
[`_fdopen, _wfdopen`](fdopen-wfdopen.md)\
[`_fileno`](fileno.md)\
[`fopen, _wfope`n](fopen-wfopen.md)\
[`_open, _wopen`](open-wopen.md)\
[`_setmode`](setmode.md)
