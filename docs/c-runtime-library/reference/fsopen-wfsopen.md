---
title: _fsopen, _wfsopen
ms.date: 4/2/2020
api_name:
- _wfsopen
- _fsopen
- _o__fsopen
- _o__wfsopen
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
- wfsopen
- fsopen
- tfsopen
- _tfsopen
- _wfsopen
- _fsopen
helpviewer_keywords:
- opening files, streams
- fsopen function
- tfsopen function
- wfsopen function
- _fsopen function
- files [C++], opening
- _tfsopen function
- _wfsopen function
- file sharing [C++]
ms.assetid: 5e4502ab-48a9-4bee-a263-ebac8d638dec
ms.openlocfilehash: 49907808729375e3bea18a5f4bbf204852e0072a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81345693"
---
# <a name="_fsopen-_wfsopen"></a>_fsopen, _wfsopen

Apre un flusso con la condivisione di file.

## <a name="syntax"></a>Sintassi

```C
FILE *_fsopen(
   const char *filename,
   const char *mode,
   int shflag
);
FILE *_wfsopen(
   const wchar_t *filename,
   const wchar_t *mode,
   int shflag
);
```

### <a name="parameters"></a>Parametri

*Filename*<br/>
Nome del file da aprire.

*Modalità*<br/>
Tipo di accesso consentito.

*shflag*<br/>
Tipo di condivisione consentita.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al flusso. Un valore di puntatore Null indica un errore. Se *filename* o *mode* è **NULL** o una stringa vuota, queste funzioni richiamano il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **NULL** e impostano **errno** su **EINVAL**.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_fsopen** apre il file specificato da *filename* come flusso e prepara il file per la successiva lettura o scrittura condivisa, come definito dagli argomenti mode e *shflag.* **_wfsopen** è una versione a caratteri wide di **_fsopen**; gli argomenti *filename* e *mode* per **_wfsopen** sono stringhe di caratteri wide. **_wfsopen** e **_fsopen** si comportano in modo identico in caso contrario.

La *modalità* stringa di caratteri specifica il tipo di accesso richiesto per il file, come illustrato nella tabella seguente.

|Termine|Definizione|
|----------|----------------|
|**"r"**|Viene aperto per la lettura. Se il file non esiste o non viene trovato, la **chiamata _fsopen** ha esito negativo.|
|**"w"**|Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.|
|**"a"**|Viene aperto in scrittura alla fine del file (aggiunta); crea prima il file se non esiste.|
|**"r"**|Viene aperto per la lettura e la scrittura. Il file deve esistere.|
|**"w" (w)**|Apre un file vuoto per la lettura e la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.|
|**"A"**|Viene aperto in lettura e aggiunta; crea prima il file se non esiste.|

Utilizzare i tipi **"w"** e **"w"** con attenzione, in quanto possono distruggere i file esistenti.

Quando un file viene aperto con il tipo di accesso **"a"** o **"a"** , tutte le operazioni di scrittura si verificano alla fine del file. Il puntatore del file può essere riposizionato utilizzando [fseek](fseek-fseeki64.md) o [rewind](rewind.md), ma viene sempre spostato alla fine del file prima che venga eseguita qualsiasi operazione di scrittura. Pertanto, i dati esistenti non possono essere sovrascritti. Quando viene specificato il tipo di accesso **"r"**, **"w"** o **"a"** , sono consentite sia la lettura che la scrittura (il file viene detto aperto per l'aggiornamento). Tuttavia, quando si passa da lettura a scrittura, deve esserci un'operazione [fsetpos](fsetpos.md), [fseek](fseek-fseeki64.md) o [rewind](rewind.md) intermedia. La posizione corrente può essere specificata per l'operazione [fsetpos](fsetpos.md) o [fseek,](fseek-fseeki64.md) se lo si desidera. Oltre ai valori sopra, uno dei seguenti caratteri può essere incluso in *modalità* per specificare la modalità di conversione per le nuove righe e per la gestione dei file.

|Termine|Definizione|
|----------|----------------|
|**T**|Apre un file in modalità testo (convertito). In questa modalità, le combinazioni ritorno a capo-avanzamento riga (CR-LF) vengono convertite in avanzamenti riga singola (LF) all'input e i caratteri LF vengono convertiti in combinazioni CR-LF nell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura o la lettura/scrittura, **_fsopen** verifica la presenza di un tasto CTRL alla fine del file e lo rimuove, se possibile. Questa operazione viene eseguita in quanto l'utilizzo di [fseek](fseek-fseeki64.md) e [ftell](ftell-ftelli64.md) per spostarsi all'interno di un file che termina con un CTRL , potrebbe causare il [corretto composizionio](fseek-fseeki64.md) verso la fine del file.|
|**B**|Apre un file in modalità binaria (nessuna conversione); le conversioni sopra indicate vengono eliminate.|
|**S**|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco.|
|**R**|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco.|
|**T**|Specifica un file come temporaneo. Se possibile, non viene scaricato su disco.|
|**D**|Specifica un file come temporaneo. Viene eliminato quando viene chiuso l'ultimo puntatore del file.|

Se **t** o **b** non è specificato in *mode*, la modalità di conversione è definita dalla variabile globale **_fmode** della modalità predefinita. Se **t** o **b** è preceduto dall'argomento , la funzione ha esito negativo e restituisce **NULL**. Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

L'argomento *shflag* è un'espressione costante costituita da una delle costanti manifesto seguenti, definita in Share.h.

|Termine|Definizione|
|----------|----------------|
|**_SH_COMPAT**|Imposta la modalità di compatibilità per applicazioni a 16 bit.|
|**_SH_DENYNO**|Consente l'accesso in lettura e scrittura.|
|**_SH_DENYRD**|Nega l'accesso in lettura al file.|
|**_SH_DENYRW**|Nega l'accesso in lettura e scrittura al file.|
|**_SH_DENYWR**|Nega l'accesso in scrittura al file.|

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tfsopen**|**_fsopen**|**_fsopen**|**_wfsopen**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazioni facoltative|
|--------------|---------------------|----------------------|
|**_fsopen**|\<stdio.h>|\<share.h><br /><br /> Per la costante manifesto per il parametro *shflag.*|
|**_wfsopen**|\<stdio.h> o \<wchar.h>|\<share.h><br /><br /> Per la costante manifesto per il parametro *shflag.*|

## <a name="example"></a>Esempio

```C
// crt_fsopen.c

#include <stdio.h>
#include <stdlib.h>
#include <share.h>

int main( void )
{
   FILE *stream;

   // Open output file for writing. Using _fsopen allows us to
   // ensure that no one else writes to the file while we are
   // writing to it.
    //
   if( (stream = _fsopen( "outfile", "wt", _SH_DENYWR )) != NULL )
   {
      fprintf( stream, "No one else in the network can write "
                       "to this file until we are done.\n" );
      fclose( stream );
   }
   // Now others can write to the file while we read it.
   system( "type outfile" );
}
```

```Output
No one else in the network can write to this file until we are done.
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[ferror](ferror.md)<br/>
[_fileno](fileno.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmode](setmode.md)<br/>
[_sopen, _wsopen](sopen-wsopen.md)<br/>
