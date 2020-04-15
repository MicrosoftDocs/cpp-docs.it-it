---
title: fopen, _wfopen
ms.date: 4/2/2020
api_name:
- _wfopen
- fopen
- _o__wfopen
- _o_fopen
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
- fopen
- _wfopen
- _tfopen
- corecrt_wstdio/_wfopen
- stdio/fopen
helpviewer_keywords:
- opening files, for file I/O
- wfopen function
- tfopen function
- _tfopen function
- _wfopen function
- files [C++], opening
- fopen function
ms.assetid: e868993f-738c-4920-b5e4-d8f2f41f933d
ms.openlocfilehash: 4b9fa6542996b2c16128a841e2611b85e995be2a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81346414"
---
# <a name="fopen-_wfopen"></a>fopen, _wfopen

Apre un file. Sono disponibili versioni più sicure di queste funzioni che eseguono la convalida di parametri aggiuntivi e restituiscono codici di errore. Vedere [fopen_s, _wfopen_s](fopen-s-wfopen-s.md).

## <a name="syntax"></a>Sintassi

```C
FILE *fopen(
   const char *filename,
   const char *mode
);
FILE *_wfopen(
   const wchar_t *filename,
   const wchar_t *mode
);
```

### <a name="parameters"></a>Parametri

*Filename*<br/>
Nome file.

*Modalità*<br/>
Tipo di accesso abilitato.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al file aperto. Un valore di puntatore Null indica un errore. Se *filename* o *mode* è **NULL** o una stringa vuota, queste funzioni attivano il gestore di parametri non validi, descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **NULL** e impostano **errno** su **EINVAL**.

Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **fopen** apre il file specificato da *filename*. Per impostazione predefinita, una stringa *di nome file* stretta viene interpretata utilizzando la tabella codici ANSI (CP_ACP). Nelle applicazioni per Windows Desktop può essere modificata nella codepage OEM (CP_OEMCP) usando la funzione [SetFileApisToOEM](/windows/win32/api/fileapi/nf-fileapi-setfileapistooem) . È possibile utilizzare la funzione [AreFileApisANSI](/windows/win32/api/fileapi/nf-fileapi-arefileapisansi) per determinare se *filename* viene interpretato utilizzando ANSI o la tabella codici OEM predefinita del sistema. **_wfopen** è una versione a caratteri wide di **fopen**; gli argomenti per **_wfopen** sono stringhe di caratteri wide. In caso contrario, **_wfopen** e **fopen** si comportano in modo identico. L'utilizzo di **_wfopen** non influisce sul set di caratteri codificati utilizzato nel flusso di file.

**fopen** accetta percorsi validi nel file system al momento dell'esecuzione; **fopen** accetta percorsi UNC e percorsi che coinvolgono unità di rete mappate, purché il sistema che esegue il codice abbia accesso all'unità di condivisione o mappata al momento dell'esecuzione. Quando si creano percorsi per **fopen**, assicurarsi che unità, percorsi o condivisioni di rete siano disponibili nell'ambiente di esecuzione. È possibile usare barre (/) o barre rovesciate (\\) come separatori di directory in un percorso.

Controllare sempre il valore restituito per verificare se il puntatore è NULL prima di eseguire qualsiasi altra operazione sul file. Se si verifica un errore, la variabile globale **errno** viene impostata e può essere utilizzata per ottenere informazioni specifiche sull'errore. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="unicode-support"></a>Supporto Unicode

**fopen** supporta i flussi di file Unicode. Per aprire un file Unicode, passare un flag **ccs** che specifica la codifica desiderata per **fopen**, come indicato di seguito.

> **FILE \*fp : fopen("newfile.txt", "rt, ccs"**_codifica_**");**

I valori consentiti di *codifica* sono **UNICODE**, **UTF-8**e **UTF-16LE**.

Quando un file viene aperto in modalità Unicode, le funzioni di input convertono i dati letti dal file in dati UTF-16 memorizzati come tipo **wchar_t**. Le funzioni che scrivono in un file aperto in modalità Unicode prevedono buffer che contengono dati UTF-16 archiviati come tipo **wchar_t**. Se il file è codificato come UTF-8, i dati UTF-16 vengono tradotti in UTF-8 alla scrittura e il contenuto del file codificato in UTF-8 viene tradotto in UTF-16 alla lettura. Un tentativo di leggere o scrivere un numero dispari di byte in modalità Unicode causa un errore di convalida del [parametro.](../../c-runtime-library/parameter-validation.md) Per leggere o scrivere dati archiviati nel programma come UTF-8, usare una modalità file di testo o binaria al posto della modalità Unicode. Eventuali traduzioni della codifica vanno gestite dall'utente.

Se il file esiste già e viene aperto per la lettura o l'aggiunta, l'indicatore ordine byte (BOM), se presente nel file, determina la codifica. La codifica BOM ha la precedenza sulla codifica specificata dal flag **ccs.** La codifica **ccs** viene utilizzata solo quando non è presente alcun BOM o il file è un nuovo file.

> [!NOTE]
> Il rilevamento della distinta componenti si applica solo ai file aperti in modalità Unicode, ovvero passando il flag **ccs.**

Nella tabella seguente sono riepilogate le modalità utilizzate per i vari flag **ccs** assegnati a **fopen** e byte order Marks nel file.

### <a name="encodings-used-based-on-ccs-flag-and-bom"></a>Codifiche usate in base a flag ccs e indicatore ordine byte

|bandiera ccs|Nessun indicatore ordine byte (o file nuovo)|Indicatore ordine byte (BOM): UTF-8|Indicatore ordine byte (BOM): UTF-16|
|----------------|----------------------------|-----------------|------------------|
|**Unicode**|**UTF-16LE**|**UTF-8**|**UTF-16LE**|
|**UTF-8**|**UTF-8**|**UTF-8**|**UTF-16LE**|
|**UTF-16LE**|**UTF-16LE**|**UTF-8**|**UTF-16LE**|

I file aperti per la scrittura in modalità Unicode dispongono di un indicatore ordine byte scritto automaticamente in tali file.

Se *mode* è **"a, ccs "**_encoding_**"**, **fopen** tenta innanzitutto di aprire il file utilizzando sia l'accesso in lettura che in scrittura. Se questa operazione ha esito positivo, la funzione legge l'indicatore ordine byte per determinare la codifica del file. Se l'operazione non riesce, la funzione usa la codifica predefinita per il file. In entrambi i casi, **fopen** riaprirà il file utilizzando l'accesso in sola scrittura. (Questo vale solo per la modalità **"a",** non per la modalità **"a"** .)

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tfopen**|**fopen**|**fopen**|**_wfopen**|

La *modalità* stringa di caratteri specifica il tipo di accesso richiesto per il file, come indicato di seguito.

|*Modalità*|Accesso|
|-|-|
| **"r"** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata **fopen** ha esito negativo. |
| **"w"** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **"a"** | Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se è inesistente. |
| **"r"** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **"w" (w)** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **"A"** | Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se è inesistente. |

Quando un file viene aperto utilizzando il tipo di accesso **"a"** o il tipo di accesso **"a"** , tutte le operazioni di scrittura si verificano alla fine del file. Il puntatore del file può essere riposizionato utilizzando [fseek](fseek-fseeki64.md) o [rewind](rewind.md), ma viene sempre spostato alla fine del file prima che venga eseguita qualsiasi operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti.

La modalità **"a"** non rimuove il marcatore EOF prima di aggiungerlo al file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non i eventualmente aggiunti al file. Prima di aggiungersi al file, la modalità **"a"** rimuove il marcatore EOF. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. Per **"a+"** l'aggiunta a un file di flusso che viene terminato con il marcatore EOF CTRL.

Quando viene specificato il tipo di accesso **"r"**, **"w"** o **"a"** , sono abilitate sia la lettura che la scrittura (il file viene detto aperto per "aggiornamento"). Tuttavia, quando si passa dalla lettura alla scrittura, l'operazione di input deve rilevare un marcatore EOF. Se non esiste alcun EOF, è necessario usare una nuova chiamata a una funzione di posizionamento dei file. Le funzioni di posizionamento dei file sono **fsetpos**, [fseek](fseek-fseeki64.md)e [rewind](rewind.md). Quando si passa dalla scrittura alla lettura, è necessario utilizzare una chiamata intermedia a **fflush** o a una funzione di posizionamento dei file.

Oltre ai valori precedenti, i seguenti caratteri possono essere aggiunti alla *modalità* per specificare la modalità di conversione per i caratteri di nuova riga.

|modificatore *di modalità*|Modalità di traduzione|
|-|-|
| **T** | Aprire in modalità testo (convertita). |
| **B** | Aperto in modalità binaria (non tradotta); le traduzioni che coinvolgono i caratteri di ritorno a capo e avanzamento riga vengono soppresse. |

In modalità testo, CTRL è interpretato come un carattere EOF all'input. Nei file che vengono aperti per la lettura/scrittura utilizzando **"a"**, **fopen** verifica la presenza di un ctrl alla fine del file e lo rimuove, se possibile. Questa operazione viene eseguita in quanto l'utilizzo di [fseek](fseek-fseeki64.md) e **ftell** per spostarsi all'interno di un file che termina con CTRL , può causare il corretto [composizionio](fseek-fseeki64.md) di fseek verso la fine del file.

In modalità testo, le combinazioni ritorno a capo-avanzamento riga vengono convertite in feed di riga singola all'input e i caratteri di avanzamento riga vengono convertiti in combinazioni di avanzamento riga di ritorno a capo nell'output. Quando una funzione Unicode di I/O flusso viene eseguita in modalità testo (impostazione predefinita), si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte. Di conseguenza, le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla funzione **mbtowc**. Per lo stesso motivo, le funzioni Unicode di output flusso convertono i caratteri wide in caratteri multibyte, come se fosse stata chiamata la funzione **wctomb**.

Se **t** o **b** non viene specificato in *modalità*, la modalità di conversione predefinita è definita dalla variabile globale [_fmode](../../c-runtime-library/fmode.md). Se **t** o **b** è preceduto dall'argomento , la funzione ha esito negativo e restituisce **NULL**.

Per altre informazioni su come usare le modalità binaria e di testo in formato Unicode e I/O flusso multibyte, vedere [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [Unicode Stream I/O in Text and Binary Modes](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).

Le seguenti opzioni possono essere aggiunte alla *modalità* per specificare comportamenti aggiuntivi.

|modificatore *di modalità*|Comportamento|
|-|-|
| **C** | Abilitare il flag di commit per il *nome file* associato in modo che il contenuto del buffer di file venga scritto direttamente su disco se viene chiamato **fflush** o **_flushall.** |
| **N** | Reimpostare il flag di commit per il *nome file* associato su "no-commit". Questa è la modalità predefinita. Esegue inoltre l'override del flag commit globale se il programma viene collegato a COMMODE.OBJ. L'impostazione predefinita del flag commit globale è "no-commit", a meno che il programma venga collegato in modo esplicito a COMMODE.OBJ (vedere [Link Options](../../c-runtime-library/link-options.md)). |
| **N** | Specifica che il file non viene ereditato dai processi figlio. |
| **S** | Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco. |
| **R** | Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco. |
| **T** | Specifica un file come temporaneo. Se possibile, non viene scaricato su disco. |
| **D** | Specifica un file come temporaneo. Viene eliminato quando viene chiuso l'ultimo puntatore del file. |
| _Codifica_ **ccs** | Specifica il set di caratteri codificati da utilizzare (uno di **UTF-8**, **UTF-16LE**o **UNICODE**) per questo file. Lasciare non specificato se si vuole la codifica ANSI. |

I caratteri validi per la stringa di *modalità* utilizzata in **fopen** e **_fdopen** corrispondono agli argomenti *oflag* utilizzati in [_open](open-wopen.md) e [_sopen](sopen-wsopen.md), come indicato di seguito.

|Caratteri nella stringa *di modalità*|Valore *oflag* \_equivalente\_per open/sopen|
|-------------------------------|----------------------------------------------------|
|**Un**|**\_O\_WRONLY** &#124; ** \_O APPEND\_** (di solito ** \_O\_WRONLY** &#124; ** \_O\_CREAT** &#124; ** \_O\_APPEND**)|
|**a'**|**\_O\_RDWR** &#124; ** \_\_O APPEND** (di solito ** \_O\_RDWR** &#124; ** \_O\_APPEND** &#124; ** \_O\_CREAT** )|
|**R**|**\_O\_RDONLY**|
|**r.**|**\_O\_RDWR**|
|**W**|**\_O\_WRONLY** (di solito ** \_O\_WRONLY** &#124; ** \_O\_CREAT** &#124; ** \_O\_TRUNC**)|
|**W.**|**\_O\_RDWR** (di solito ** \_O\_RDWR** &#124; ** \_O\_CREAT** &#124; ** \_O\_TRUNC**)|
|**B**|**\_O\_BINARIO**|
|**T**|**\_O\_TESTO**|
|**C**|nessuno|
|**N**|nessuno|
|**S**|**\_O\_SEQUENTIALE**|
|**R**|**\_O\_RANDOM**|
|**T**|**\_O\_SHORTLIVED**|
|**D**|**\_O\_TEMPORARIO**|
|**icn i nomi (UNICODE)**|**\_O\_TestoWTEXT (Testo/ WTEXT)**|
|**CCs-UTF-8**|**\_O\_UTF8**|
|**ccs-UTF-16LE**|**\_O\_UTF16**|

Se si utilizza la modalità **rb,** non è necessario eseguire il porting del codice e se si prevede di leggere la maggior parte di un file di grandi dimensioni o non si è interessati alle prestazioni di rete, è anche possibile considerare se utilizzare i file Win32 mappati in memoria come opzione.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fopen**|\<stdio.h>|
|**_wfopen**|\<stdio.h> o \<wchar.h>|

**_wfopen** è un'estensione Microsoft._wfopen is a Microsoft extension. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

Le opzioni della *modalità* **c**, **n**, **t**, **S**, **R,** **T**e **D** sono estensioni Microsoft per **fopen** e **_fdopen** e non devono essere utilizzate dove si desidera eseguire la portabilità ANSI.

## <a name="example-1"></a>Esempio 1

Il seguente programma apre due file.  Utilizza **fclose** per chiudere il primo file e **_fcloseall** per chiudere tutti i file rimanenti.

```C
// crt_fopen.c
// compile with: /W3
// This program opens two files. It uses
// fclose to close the first file and
// _fcloseall to close all remaining files.

#include <stdio.h>

FILE *stream, *stream2;

int main( void )
{
   int numclosed;

   // Open for read (will fail if file "crt_fopen.c" does not exist)
   if( (stream  = fopen( "crt_fopen.c", "r" )) == NULL ) // C4996
   // Note: fopen is deprecated; consider using fopen_s instead
      printf( "The file 'crt_fopen.c' was not opened\n" );
   else
      printf( "The file 'crt_fopen.c' was opened\n" );

   // Open for write
   if( (stream2 = fopen( "data2", "w+" )) == NULL ) // C4996
      printf( "The file 'data2' was not opened\n" );
   else
      printf( "The file 'data2' was opened\n" );

   // Close stream if it is not NULL
   if( stream)
   {
      if ( fclose( stream ) )
      {
         printf( "The file 'crt_fopen.c' was not closed\n" );
      }
   }

   // All other files are closed:
   numclosed = _fcloseall( );
   printf( "Number of files closed by _fcloseall: %u\n", numclosed );
}
```

```Output
The file 'crt_fopen.c' was opened
The file 'data2' was opened
Number of files closed by _fcloseall: 1
```

## <a name="example-2"></a>Esempio 2

Il seguente programma crea un file (o ne sovrascrive uno se esistente), in modalità testo con codifica Unicode.  Scrive quindi due stringhe nel file e chiude il file. L'output è un file denominato _wfopen_test.xml, contenente i dati della sezione di output.

```C
// crt__wfopen.c
// compile with: /W3
// This program creates a file (or overwrites one if
// it exists), in text mode using Unicode encoding.
// It then writes two strings into the file
// and then closes the file.

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <wchar.h>

#define BUFFER_SIZE 50

int main(int argc, char** argv)
{
    wchar_t str[BUFFER_SIZE];
    size_t  strSize;
    FILE*   fileHandle;

    // Create an the xml file in text and Unicode encoding mode.
    if ((fileHandle = _wfopen( L"_wfopen_test.xml",L"wt+,ccs=UNICODE")) == NULL) // C4996
    // Note: _wfopen is deprecated; consider using _wfopen_s instead
    {
        wprintf(L"_wfopen failed!\n");
        return(0);
    }

    // Write a string into the file.
    wcscpy_s(str, sizeof(str)/sizeof(wchar_t), L"<xmlTag>\n");
    strSize = wcslen(str);
    if (fwrite(str, sizeof(wchar_t), strSize, fileHandle) != strSize)
    {
        wprintf(L"fwrite failed!\n");
    }

    // Write a string into the file.
    wcscpy_s(str, sizeof(str)/sizeof(wchar_t), L"</xmlTag>");
    strSize = wcslen(str);
    if (fwrite(str, sizeof(wchar_t), strSize, fileHandle) != strSize)
    {
        wprintf(L"fwrite failed!\n");
    }

    // Close the file.
    if (fclose(fileHandle))
    {
        wprintf(L"fclose failed!\n");
    }
    return 0;
}
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[ferror](ferror.md)<br/>
[_fileno](fileno.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmode](setmode.md)<br/>
[_sopen, _wsopen](sopen-wsopen.md)<br/>
