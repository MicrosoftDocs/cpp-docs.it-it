---
title: fopen_s, _wfopen_s
description: Descrive l'API per `fopen_s` e `_wfopen_s`
ms.date: 2/24/2021
api_name:
- _wfopen_s
- fopen_s
- _o__wfopen_s
- _o_fopen_s
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
- fopen_s
- _tfopen_s
- _wfopen_s
helpviewer_keywords:
- _wfopen_s function
- opening files, for file I/O
- _tfopen_s function
- tfopen_s function
- wfopen_s function
- fopen_s function
- Unicode [C++], creating files
- Unicode [C++], writing files
- files [C++], opening
- Unicode [C++], files
ms.openlocfilehash: a034eda7ad45be30decccee50a104c0565907c41
ms.sourcegitcommit: c0c9cdae79f19655e809a4979227c51bb19cff63
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2021
ms.locfileid: "102236537"
---
# <a name="fopen_s-_wfopen_s"></a>`fopen_s`, `_wfopen_s`

Apre un file. Queste versioni di [`fopen, _wfopen`](fopen-wfopen.md) includono miglioramenti per la sicurezza, come descritto in [funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t fopen_s(
   FILE** pFile,
   const char *filename,
   const char *mode
);
errno_t _wfopen_s(
   FILE** pFile,
   const wchar_t *filename,
   const wchar_t *mode
);
```

### <a name="parameters"></a>Parametri

*`pFile`*\
Puntatore al puntatore del file che riceverà il puntatore al file aperto.

*`filename`*\
Filename.

*`mode`*\
Tipo di accesso consentito.

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore. Per ulteriori informazioni su questi codici di errore, vedere [`errno, _doserrno, _sys_errlist, and _sys_nerr`](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .

### <a name="error-conditions"></a>Condizioni di errore

|*`pFile`*|*`filename`*|*`mode`*|Valore restituito|Contenuto di *`pFile`*|
|-------------|----------------|------------|------------------|------------------------|
|**`NULL`**|any|any|**`EINVAL`**|non modificato|
|any|**`NULL`**|any|**`EINVAL`**|non modificato|
|any|any|**`NULL`**|**`EINVAL`**|non modificato|

## <a name="remarks"></a>Commenti

I file aperti da **`fopen_s`** e **`_wfopen_s`** non sono condivisibili. Se è necessario che un file sia condivisibile, utilizzare [`_fsopen, _wfsopen`](fsopen-wfsopen.md) con la costante di modalità di condivisione appropriata, ad esempio **`_SH_DENYNO`** per la condivisione in lettura/scrittura.

La **`fopen_s`** funzione apre il file specificato da *filename*. **`_wfopen_s`** è una versione a caratteri wide di **`fopen_s`** . gli argomenti per **`_wfopen_s`** sono stringhe a caratteri wide. **`_wfopen_s`** e si **`fopen_s`** comportano in modo identico.

**`fopen_s`** accetta percorsi validi nel file system al momento dell'esecuzione. I percorsi UNC e i percorsi che coinvolgono le unità di rete mappate vengono accettati da **`fopen_s`** purché il sistema che esegue il codice abbia accesso alla condivisione o all'unità di rete mappata al momento dell'esecuzione. Quando si creano i percorsi per **`fopen_s`** , non creare presupposti sulla disponibilità di unità, percorsi o condivisioni di rete nell'ambiente di esecuzione. È possibile usare barre (/) o barre rovesciate (\\) come separatori di directory in un percorso.

Queste funzioni convalidano i relativi parametri. Se *`pFile`* , *`filename`* o *`mode`* è un puntatore null, queste funzioni generano un'eccezione di parametro non valido, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Controllare sempre il valore restituito per verificare se la funzione ha avuto esito positivo prima di eseguire altre operazioni sul file. Se si verifica un errore, viene restituito il codice di errore e viene impostata la variabile globale **`errno`** . Per altre informazioni, vedere [`errno, _doserrno, _sys_errlist, and _sys_nerr`](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="unicode-support"></a>Supporto Unicode

**`fopen_s`** supporta flussi di file Unicode. Per aprire un file Unicode nuovo o esistente, passare un flag *CCS* che specifichi la codifica desiderata per **`fopen_s`** :

**`fopen_s(&fp, "newfile.txt", "rw, ccs=**_encoding_**");`**

I valori consentiti della *codifica* sono **`UNICODE`** , **`UTF-8`** e **`UTF-16LE`** . Se non è specificato alcun valore per *`encoding`* , **`fopen_s`** Usa la codifica ANSI.

Se il file esiste già e viene aperto per la lettura o l'aggiunta, indicatore per l'ordine dei byte (BOM, Byte Order Mark), se presente nel file, determina la codifica. La codifica DBA ha la precedenza sulla codifica specificata dal *`ccs`* flag. La *`ccs`* codifica viene utilizzata solo se non è presente alcun BOM o se il file è un nuovo file.

> [!NOTE]
> Il rilevamento DBA si applica solo ai file aperti in modalità Unicode; ovvero passando il *`ccs`* flag.

Nella tabella seguente sono riepilogate le modalità per i diversi *`ccs`* flag assegnati a **`fopen_s`** e per gli indicatori di ordine dei byte nel file.

### <a name="encodings-used-based-on-ccs-flag-and-bom"></a>Codifiche usate in base a flag ccs e indicatore ordine byte

|flag CCS|Nessun indicatore ordine byte (o file nuovo)|Indicatore ordine byte (BOM): UTF-8|Indicatore ordine byte (BOM): UTF-16|
|----------------|----------------------------|-----------------|------------------|
|**`UNICODE`**|**`UTF-16LE`**|**`UTF-8`**|**`UTF-16LE`**|
|**`UTF-8`**|**`UTF-8`**|**`UTF-8`**|**`UTF-16LE`**|
|**`UTF-16LE`**|**`UTF-16LE`**|**`UTF-8`**|**`UTF-16LE`**|

I file aperti per la scrittura in modalità Unicode dispongono di un indicatore per l'ordine dei byte scritto automaticamente in tali file.

Se *`mode`* è **`"a, ccs=` codifica `"`**, **`fopen_s`** tenta innanzitutto di aprire il file con accesso in lettura e in scrittura. Se ha esito positivo, la funzione legge l'indicatore per l'ordine dei byte per determinare la codifica del file. In caso contrario, la funzione usa la codifica predefinita per il file. In entrambi i casi, **`fopen_s`** riapre il file con accesso di sola scrittura. (Questo vale solo per la **`a`** modalità, non per **`a+`** ).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**`_tfopen_s`**|**`fopen_s`**|**`fopen_s`**|**`_wfopen_s`**|

La stringa *`mode`* di caratteri specifica il tipo di accesso richiesto per il file, come indicato di seguito.

|*`mode`*|Access|
|-|-|
| **`"r"`** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, la **`fopen_s`** chiamata ha esito negativo. |
| **`"w"`** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **`"a"`** | Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se non esiste. |
| **`"r+"`** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **"w +"** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **`"a+"`** | Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se non esiste. |

Quando un file viene aperto usando il **`"a"`** tipo di **`"a+"`** accesso o, tutte le operazioni di scrittura si verificano alla fine del file. Il puntatore del file può essere riposizionato usando [`fseek`](fseek-fseeki64.md) o [`rewind`](rewind.md) , ma viene sempre spostato di nuovo alla fine del file prima che venga eseguita un'operazione di scrittura in modo che i dati esistenti non possano essere sovrascritti.

La **`"a"`** modalità non rimuove il marcatore EOF prima dell'aggiunta al file. Al termine dell'accodamento, il `TYPE` comando MS-DOS Mostra solo i dati fino al marcatore EOF originale e non i dati aggiunti al file. La **`"a+"`** modalità rimuove il marcatore EOF prima dell'aggiunta al file. Dopo l'aggiunta, il `TYPE` comando MS-DOS Mostra tutti i dati nel file. La **`"a+"`** modalità è necessaria per l'aggiunta a un file di flusso terminato con il `CTRL+Z` marcatore EOF.

Quando il **`"r+"`** **`"w+"`** tipo di accesso, o **`"a+"`** viene specificato, sono consentite sia la lettura che la scrittura. (Il file viene definito aperto per "Update"). Tuttavia, quando si passa dalla lettura alla scrittura, l'operazione di input deve rientrare in un marcatore EOF. Se non è presente alcun marcatore EOF, è necessario usare una chiamata a una funzione di posizionamento di file. Le funzioni di posizionamento dei file sono **`fsetpos`** , [`fseek`](fseek-fseeki64.md) e [`rewind`](rewind.md) . Quando si passa dalla scrittura alla lettura, è necessario usare una chiamata corrispondente a **`fflush`** o a una funzione di posizionamento dei file.

A partire da C11, è possibile aggiungere **`"x"`** a **`"w"`** o **`"w+"`** per provocare l'esito negativo della funzione se il file esiste, anziché sovrascriverlo.

Oltre ai valori precedenti, è possibile includere i caratteri seguenti in *`mode`* per specificare la modalità di conversione per i caratteri di nuova riga:

|*`mode`* modificatore|Modalità di conversione|
|-|-|
| **`t`** | Aprire in modalità testo (convertita). |
| **`b`** | Apri in modalità binaria (non convertita); le traduzioni che includono caratteri di ritorno a capo e avanzamento riga vengono eliminati. |

In modalità testo (convertito), `CTRL+Z` viene interpretato come un carattere di fine file nell'input. Nei file aperti per la lettura/scrittura con **`"a+"`** , **`fopen_s`** Verifica la presenza di una `CTRL+Z` alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso di [`fseek`](fseek-fseeki64.md) e **`ftell`** per spostarsi all'interno di un file che termina con `CTRL+Z` , può causare un [`fseek`](fseek-fseeki64.md) comportamento non corretto in prossimità della fine del file.

Inoltre, in modalità testo, le combinazioni di ritorno a capo/avanzamento riga vengono convertite in feed a riga singola nell'input e i caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo/avanzamento riga nell'output. Quando una funzione Unicode di I/O flusso viene eseguita in modalità testo (impostazione predefinita), si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte. Le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla **`mbtowc`** funzione. Per lo stesso motivo, le funzioni Unicode di output flusso convertono i caratteri wide in caratteri multibyte, come se fosse una chiamata alla **`wctomb`** funzione.

Se **`t`** o **`b`** non è specificato in *`mode`* , la modalità di conversione predefinita è definita dalla variabile globale [_fmode](../../c-runtime-library/fmode.md). Se **`t`** o **`b`** è preceduto dall'argomento, la funzione ha esito negativo e restituisce **`NULL`** .

Per altre informazioni sull'uso delle modalità testo e binaria in formato Unicode e I/O flusso multibyte, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).

|*`mode`* modificatore|Comportamento|
|-|-|
| **`c`** | Abilitare il flag commit per il *nome file* associato, in modo che il contenuto del buffer di file venga scritto direttamente su disco se **`fflush`** **`_flushall`** viene chiamato o. |
| **`n`** | Reimpostare il flag di commit per il *nome file* associato su "no-commit". Questo è il valore predefinito. Esegue inoltre l'override del flag commit globale se il programma viene collegato a COMMODE.OBJ. L'impostazione predefinita del flag commit globale è "no-commit", a meno che il programma venga collegato in modo esplicito a COMMODE.OBJ (vedere [Link Options](../../c-runtime-library/link-options.md)). |
| **`n`** | Specifica che il file non viene ereditato dai processi figlio. |
| **`S`** | Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco. |
| **`R`** | Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco. |
| **`t`** | Specifica un file come temporaneo. Se possibile, non viene scaricato su disco. |
| **`D`** | Specifica un file come temporaneo. Viene eliminato quando viene chiuso l'ultimo puntatore del file. |
| **`ccs=`**_codifica_ | Specifica il set di caratteri codificati da usare (uno tra **`UTF-8`** , **`UTF-16LE`** o **`UNICODE`** ) per questo file. Lasciare non specificato se si vuole la codifica ANSI. |

I caratteri validi per la *`mode`* stringa usata in **`fopen_s`** e [`_fdopen`](fdopen-wfdopen.md) corrispondono agli *`oflag`* argomenti usati in [`_open`](open-wopen.md) e [`_sopen`](sopen-wsopen.md) , come indicato di seguito.

|Caratteri nella *`mode`* stringa|*`oflag`* Valore equivalente per`_open`/`_sopen`|
|-------------------------------|----------------------------------------------------|
|**`a`**|**`_O_WRONLY`** &#124; **`_O_APPEND`** (in genere **`_O_WRONLY`** &#124; **`_O_CREAT`** &#124; **`_O_APPEND`** )|
|**`a+`**|**`_O_RDWR`** &#124; **`_O_APPEND`** (in genere **`_O_RDWR`** &#124; **`_O_APPEND`** &#124; **`_O_CREAT`** )|
|**`R`**|**`_O_RDONLY`**|
|**`r+`**|**`_O_RDWR`**|
|**`w`**|**`_O_WRONLY`** (in genere **`_O_WRONLY`** &#124; **`_O_CREAT`** &#124; **_O_TRUNC**)|
|**`w+`**|**`_O_RDWR`** (in genere **`_O_RDWR`** &#124; **`_O_CREAT`** &#124; **_O_TRUNC**)|
|**`b`**|**`_O_BINARY`**|
|**`t`**|**`_O_TEXT`**|
|**`c`**|nessuno|
|**`n`**|nessuno|
|**`S`**|**`_O_SEQUENTIAL`**|
|**`R`**|**`_O_RANDOM`**|
|**`t`**|**`_O_SHORTLIVED`**|
|**`D`**|**`_O_TEMPORARY`**|
|**`ccs=UNICODE`**|**`_O_WTEXT`**|
|**`ccs=UTF-8`**|**`_O_UTF8`**|
|**`ccs=UTF-16LE`**|**`_O_UTF16`**|

Se si usa **`rb`** la modalità, i file Win32 con mapping della memoria possono anche essere un'opzione se non è necessario trasferire il codice, si prevede di leggere gran parte del file o non si è interessati alle prestazioni della rete.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**`fopen_s`**|`<stdio.h>`|
|**`_wfopen_s`**|`<stdio.h>` o `<wchar.h>`|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

Le **`c`** **`n`** Opzioni, e **`t`** *`mode`* sono estensioni Microsoft per **`fopen_s`** e [`_fdopen`](fdopen-wfdopen.md) e non devono essere usate quando si desidera la portabilità ANSI.

## <a name="example"></a>Esempio

```C
// crt_fopen_s.c
// This program opens two files. It uses
// fclose to close the first file and
// _fcloseall to close all remaining files.

#include <stdio.h>

FILE *stream, *stream2;

int main( void )
{
   errno_t err;

   // Open for read (will fail if file "crt_fopen_s.c" doesn't exist)
   err  = fopen_s( &stream, "crt_fopen_s.c", "r" );
   if( err == 0 )
   {
      printf( "The file 'crt_fopen_s.c' was opened\n" );
   }
   else
   {
      printf( "The file 'crt_fopen_s.c' was not opened\n" );
   }

   // Open for write
   err = fopen_s( &stream2, "data2", "w+" );
   if( err == 0 )
   {
      printf( "The file 'data2' was opened\n" );
   }
   else
   {
      printf( "The file 'data2' was not opened\n" );
   }

   // Close stream if it isn't NULL
   if( stream )
   {
      err = fclose( stream );
      if ( err == 0 )
      {
         printf( "The file 'crt_fopen_s.c' was closed\n" );
      }
      else
      {
         printf( "The file 'crt_fopen_s.c' was not closed\n" );
      }
   }

   // All other files are closed:
   int numclosed = _fcloseall( );
   printf( "Number of files closed by _fcloseall: %u\n", numclosed );
}
```

```Output
The file 'crt_fopen_s.c' was opened
The file 'data2' was opened
Number of files closed by _fcloseall: 1
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)\
[`fclose, _fcloseall`](fclose-fcloseall.md)\
[`_fdopen, _wfdopen`](fdopen-wfdopen.md)\
[`ferror`](ferror.md)\
[`_fileno`](fileno.md)\
[`freopen, _wfreopen`](freopen-wfreopen.md)\
[`_open, _wopen`](open-wopen.md)\
[`_setmode`](setmode.md)
