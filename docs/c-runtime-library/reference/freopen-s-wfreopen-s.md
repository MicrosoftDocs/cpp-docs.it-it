---
title: freopen_s, _wfreopen_s
ms.date: 11/04/2016
apiname:
- _wfreopen_s
- freopen_s
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
ms.assetid: ad25a4da-6ad4-476b-a86d-660b221ca84d
ms.openlocfilehash: 2cdc16f21882c32933868000c6fd1d66accc74b8
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51326512"
---
# <a name="freopens-wfreopens"></a>freopen_s, _wfreopen_s

Riassegna un puntatore del file. Queste versioni di [freopen, _wfreopen](freopen-wfreopen.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t freopen(
   FILE** pFile,
   const char *path,
   const char *mode,
   FILE *stream
);
errno_t _wfreopen(
   FILE** pFile,
   const wchar_t *path,
   const wchar_t *mode,
   FILE *stream
);
```

### <a name="parameters"></a>Parametri

*pFile*<br/>
Un puntatore al puntatore del file che deve essere fornito dalla chiamata.

*path*<br/>
Percorso del nuovo file.

*mode*<br/>
Tipo di accesso consentito.

*flusso*<br/>
Puntatore alla struttura **FILE**.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un codice di errore. Se si verifica un errore, il file originale viene chiuso.

## <a name="remarks"></a>Note

Il **freopen_s** funzione chiude il file attualmente associato *stream* e riassegna *flusso* per il file specificato da *percorso* . **wfreopen_s** è una versione a caratteri wide di **_freopen_s**; gli *path* e *modalità* argomenti **wfreopen_s** sono stringhe a caratteri Wide. **wfreopen_s** e **_freopen_s** hanno lo stesso comportamento in caso contrario.

Se una qualsiasi delle *pFile*, *percorso*, *modalità*, oppure *flusso* sono **NULL**, oppure se *percorso* è una stringa vuota, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** al **EINVAL** e restituiti **EINVAL**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tfreopen_s**|**freopen_s**|**freopen_s**|**_wfreopen_s**|

**freopen_s** viene in genere usato per reindirizzare i file già aperti **stdin**, **stdout**, e **stderr** ai file specificati dall'utente. Il nuovo file associato *stream* viene aperto con *modalità*, che è una stringa di caratteri che specifica il tipo di accesso richiesto per il file, come indicato di seguito:

|*mode*|Accedi a|
|-|-|
| **"r"** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, il **freopen_s** chiamata ha esito negativo. |
| **"w"** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **"a"** | Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se è inesistente. |
| **"r+"** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **"w+"** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **"a+"** | Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se è inesistente. |

Usare la **"w"** e **"w +"** tipi con cautela, poiché possono distruggere i file esistenti.

Quando un file viene aperto con il **"a"** oppure **"a +"** accedere a tipo, tutte le operazioni si verificano alla fine del file di scrittura. Anche se il puntatore del file possa essere riposizionato usando [fseek](fseek-fseeki64.md) oppure [rewind](rewind.md), il puntatore del file viene sempre spostato di nuovo alla fine del file prima di qualsiasi operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti.

Il **"a"** modalità non rimuove il marcatore EOF prima dell'aggiunta del file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non i eventualmente aggiunti al file. Il **"a +"** modalità rimuove il marcatore EOF prima dell'aggiunta del file. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. Il **"a +"** modalità è necessaria per l'aggiunta a un file di flusso terminato con il marcatore EOF CTRL + Z.

Quando la **"r +"**, **"w +"**, o **"a +"** viene specificato il tipo di accesso, sono consentite sia la lettura e scrittura (il file viene definito aperto per "update"). Tuttavia, quando si passa da lettura a scrittura, deve esserci un'operazione [fsetpos](fsetpos.md), [fseek](fseek-fseeki64.md) o [rewind](rewind.md) intermedia. La posizione corrente può essere specificata per il [fsetpos](fsetpos.md) oppure [fseek](fseek-fseeki64.md) operazione, se lo si desidera. Oltre ai valori specificati sopra, uno dei caratteri seguenti può essere inclusi nella *modalità* stringa per specificare la modalità di conversione per le nuove righe.

|*modalità* modificatore|Modalità di conversione|
|-|-|
| **t** | Aprire in modalità testo (convertita). |
| **b** | Aprire in modalità binaria (non convertita). Le conversioni che includono caratteri di ritorno a capo e avanzamento riga vengono eliminate. |

In modalità testo (convertita), le combinazioni di ritorno a capo con avanzamento di riga (CR-LF) vengono convertite in caratteri di singolo avanzamento riga (LF) in input. I caratteri vengono convertiti in combinazioni di CR-LF nell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura o di lettura e scrittura con **"a +"**, la libreria di runtime verifica la presenza di una combinazione CTRL + Z alla fine del file e rimuove, se possibile. Ciò avviene perché l'uso [fseek](fseek-fseeki64.md) e [ftell](ftell-ftelli64.md) per spostarsi all'interno di un file può causare [fseek](fseek-fseeki64.md) a un comportamento non corretto verso la fine del file. Il **t** opzione è un'estensione Microsoft che non deve essere usata in cui è richiesta la portabilità ANSI.

Se **t** oppure **b** non è specificato in *modalità*, la modalità di traduzione predefinita è definita dalla variabile globale [fmode](../../c-runtime-library/fmode.md). Se **t** oppure **b** viene anteposto a argomento, la funzione ha esito negativo e restituisce **NULL**.

Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**freopen_s**|\<stdio.h>|
|**_wfreopen_s**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle App Universal Windows Platform (UWP). L'handle del flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[_fileno](fileno.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmode](setmode.md)<br/>
