---
title: _fsopen, _wfsopen
ms.date: 11/04/2016
apiname:
- _wfsopen
- _fsopen
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
ms.openlocfilehash: 197a4f690a6626edbfec27ea4abef1999b6cedaf
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50677487"
---
# <a name="fsopen-wfsopen"></a>_fsopen, _wfsopen

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

*filename*<br/>
Nome del file da aprire.

*mode*<br/>
Tipo di accesso consentito.

*shflag*<br/>
Tipo di condivisione consentita.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al flusso. Un valore di puntatore Null indica un errore. Se *nomefile* oppure *modalità* viene **NULL** o una stringa vuota, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri ](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **NULL** e impostare **errno** al **EINVAL**.

Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **fsopen** funzione si apre il file specificato da *filename* sotto forma di flusso e prepara il file per la successiva lettura o scrittura condivisa, come definito dal modo e *shflag*argomenti. **wfsopen** è una versione a caratteri wide di **fsopen**; gli *nomefile* e *modalità* argomenti **wfsopen** sono stringhe a caratteri Wide. **wfsopen** e **fsopen** hanno lo stesso comportamento in caso contrario.

La stringa di caratteri *modalità* specifica il tipo di accesso richiesto per il file, come illustrato nella tabella seguente.

|Termine|Definizione|
|----------|----------------|
|**"r"**|Viene aperto per la lettura. Se il file non esiste o non viene trovato, il **fsopen** chiamata ha esito negativo.|
|**"w"**|Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.|
|**"a"**|Viene aperto in scrittura alla fine del file (aggiunta); crea prima il file se non esiste.|
|**"r+"**|Viene aperto per la lettura e la scrittura. Il file deve esistere.|
|**"w+"**|Apre un file vuoto per la lettura e la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.|
|**"a+"**|Viene aperto in lettura e aggiunta; crea prima il file se non esiste.|

Usare la **"w"** e **"w +"** tipi con cautela, poiché possono distruggere i file esistenti.

Quando un file viene aperto con il **"a"** oppure **"a +"** accedere a tipo, tutte le operazioni vengono eseguite alla fine del file di scrittura. Il puntatore del file possa essere riposizionato usando [fseek](fseek-fseeki64.md) oppure [rewind](rewind.md), ma viene sempre spostato di nuovo alla fine del file prima di qualsiasi operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti. Quando la **"r +"**, **"w +"**, o **"a +"** viene specificato il tipo di accesso, sono consentite sia la lettura e scrittura (il file viene definito aperto per l'aggiornamento). Tuttavia, quando si passa da lettura a scrittura, deve esserci un'operazione [fsetpos](fsetpos.md), [fseek](fseek-fseeki64.md) o [rewind](rewind.md) intermedia. La posizione corrente può essere specificata per il [fsetpos](fsetpos.md) oppure [fseek](fseek-fseeki64.md) operazione, se lo si desidera. Oltre ai valori specificati sopra, uno dei caratteri seguenti può essere inclusi in *modalità* per specificare la modalità di conversione per le nuove righe e per la gestione dei file.

|Termine|Definizione|
|----------|----------------|
|**t**|Apre un file in modalità testo (convertito). In questa modalità, combinazioni di ritorno a capo return-line feed (CR-LF) vengono convertite in singola riga (LF) nell'input e i caratteri vengono convertiti in combinazioni di CR-LF nell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura o lettura/scrittura **fsopen** cercato CTRL + Z alla fine del file e la rimuove, se possibile. Ciò avviene perché l'uso [fseek](fseek-fseeki64.md) e [ftell](ftell-ftelli64.md) per spostarsi all'interno di un file che termina con CTRL + Z può causare [fseek](fseek-fseeki64.md) a un comportamento non corretto verso la fine del file.|
|**b**|Apre un file in modalità binaria (nessuna conversione); le conversioni sopra indicate vengono eliminate.|
|**S**|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco.|
|**R**|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco.|
|**T**|Specifica un file come temporaneo. Se possibile, non viene scaricato su disco.|
|**D**|Specifica un file come temporaneo. Viene eliminato quando viene chiuso l'ultimo puntatore del file.|

Se **t** o **b** non è specificato in *mode*, la modalità di conversione è definita dalla variabile globale **_fmode** della modalità predefinita. Se **t** oppure **b** viene anteposto a argomento, la funzione ha esito negativo e restituisce **NULL**. Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

L'argomento *shflag* è un'espressione costante costituita da una delle costanti manifesto seguenti, definite in Share. h.

|Termine|Definizione|
|----------|----------------|
|**SH_COMPAT**|Imposta la modalità di compatibilità per applicazioni a 16 bit.|
|**SH_DENYNO**|Consente l'accesso in lettura e scrittura.|
|**SH_DENYRD**|Nega l'accesso in lettura al file.|
|**SH_DENYRW**|Nega l'accesso in lettura e scrittura al file.|
|**SH_DENYWR**|Nega l'accesso in scrittura al file.|

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tfsopen**|**_fsopen**|**_fsopen**|**_wfsopen**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|Intestazioni facoltative|
|--------------|---------------------|----------------------|
|**_fsopen**|\<stdio.h>|\<share.h><br /><br /> Per la costante manifesto *shflag* parametro.|
|**_wfsopen**|\<stdio.h> o \<wchar.h>|\<share.h><br /><br /> Per la costante manifesto *shflag* parametro.|

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
