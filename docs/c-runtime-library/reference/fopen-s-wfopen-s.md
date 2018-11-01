---
title: fopen_s, _wfopen_s
ms.date: 11/04/2016
apiname:
- _wfopen_s
- fopen_s
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
ms.assetid: c534857e-39ee-4a3f-bd26-dfe551ac96c3
ms.openlocfilehash: b5ac5203f2246a7ede31bcbc9a34c4632772a14c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50636111"
---
# <a name="fopens-wfopens"></a>fopen_s, _wfopen_s

Apre un file. Queste versioni di [fopen, wfopen](fopen-wfopen.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

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

*pFile*<br/>
Puntatore al puntatore del file che riceverà il puntatore al file aperto.

*filename*<br/>
Filename.

*mode*<br/>
Tipo di accesso consentito.

## <a name="return-value"></a>Valore restituito

Zero se con esito positivo; un codice di errore in caso di errore. Per altre informazioni su questi codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

### <a name="error-conditions"></a>Condizioni di errore

|*pFile*|*filename*|*mode*|Valore restituito|Contenuto di *pFile*|
|-------------|----------------|------------|------------------|------------------------|
|**NULL**|qualsiasi|qualsiasi|**EINVAL**|non modificato|
|qualsiasi|**NULL**|qualsiasi|**EINVAL**|non modificato|
|qualsiasi|qualsiasi|**NULL**|**EINVAL**|non modificato|

## <a name="remarks"></a>Note

I file aperti **fopen_s** e **wfopen_s** non sono condivisibili. Se è necessario che un file sia condivisibile, usare [fsopen, wfsopen](fsopen-wfsopen.md) con la costante di modalità di condivisione appropriata, ad esempio **sh_denyno** per la condivisione di lettura/scrittura.

Il **fopen_s** funzione apre il file specificato da *filename*. **wfopen_s** è una versione a caratteri wide di **fopen_s**; gli argomenti **wfopen_s** sono stringhe a caratteri wide. **wfopen_s** e **fopen_s** hanno lo stesso comportamento in caso contrario.

**fopen_s** accetta percorsi validi nel file system al momento dell'esecuzione; I percorsi UNC e percorsi che coinvolgono le unità di rete mappate vengono accettati da **fopen_s** , purché il sistema che esegue il codice abbia accesso alla condivisione o il mapping di unità di rete durante la fase di esecuzione. Quando si creano i percorsi per **fopen_s**, non fare ipotesi sulla disponibilità di unità, i percorsi o le condivisioni di rete nell'ambiente di esecuzione. È possibile usare barre (/) o barre rovesciate (\\) come separatori di directory in un percorso.

Queste funzioni convalidano i relativi parametri. Se *pFile*, *filename*, o *modalità* è un puntatore null, queste funzioni generano un'eccezione di parametri non validi, come descritto in [convalida dei parametri ](../../c-runtime-library/parameter-validation.md).

Controllare sempre il valore restituito per verificare se la funzione è stata completata prima di eseguire eventuali altre operazioni sul file. Se si verifica un errore, viene restituito il codice di errore e la variabile globale **errno** è impostata. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="unicode-support"></a>Supporto Unicode

**fopen_s** supporta flussi di file Unicode. Per aprire un file Unicode nuovo o esistente, passare un *ccs* flag che specifica la codifica voluta a **fopen_s**:

**fopen_s (& fp, "NewFile. txt", "rw, ccs =**_codifica_**");**

I valori consentiti di *codifica* vengono **UNICODE**, **UTF-8**, e **UTF-16LE**. Se si è specificato alcun valore per *codifica*, **fopen_s** Usa la codifica ANSI.

Se il file esiste già e viene aperto per la lettura o l'aggiunta, indicatore per l'ordine dei byte (BOM, Byte Order Mark), se presente nel file, determina la codifica. La codifica di indicatore ordine byte ha la precedenza sulla codifica specificata per il *ccs* flag. Il *ccs* codifica viene utilizzata solo quando nessun indicatore ordine byte è presente o se il file è un nuovo file.

> [!NOTE]
> Rilevamento indicatore ordine byte si applica solo ai file che vengono aperti in modalità Unicode. vale a dire, passando il *ccs* flag.

Nella tabella seguente vengono riepilogate le modalità per vari *ccs* flag assegnate **fopen_s** e per i Byte Order Mark nel file.

### <a name="encodings-used-based-on-ccs-flag-and-bom"></a>Codifiche usate in base a flag ccs e indicatore ordine byte

|flag CCS|Nessun indicatore ordine byte (o file nuovo)|Indicatore ordine byte (BOM): UTF-8|Indicatore ordine byte (BOM): UTF-16|
|----------------|----------------------------|-----------------|------------------|
|**UNICODE**|**UTF-16LE**|**UTF-8**|**UTF-16LE**|
|**UTF-8**|**UTF-8**|**UTF-8**|**UTF-16LE**|
|**UTF-16LE**|**UTF-16LE**|**UTF-8**|**UTF-16LE**|

I file aperti per la scrittura in modalità Unicode dispongono di un indicatore per l'ordine dei byte scritto automaticamente in tali file.

Se *modalità* viene **", ccs =**_codifica_**"**, **fopen_s** tenta innanzitutto di aprire il file con sia in lettura accesso e accesso in scrittura. Se ha esito positivo, la funzione legge l'indicatore per l'ordine dei byte per determinare la codifica del file. In caso contrario, la funzione usa la codifica predefinita per il file. In entrambi i casi **fopen_s** riaprirà quindi il file con accesso in sola lettura. (Si applica a **una** non solo, modalità **+**.)

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tfopen_s**|**fopen_s**|**fopen_s**|**_wfopen_s**|

La stringa di caratteri *modalità* specifica il tipo di accesso richiesto per il file, come indicato di seguito.

|*mode*|Accedi a|
|-|-|
**"r"**|Viene aperto per la lettura. Se il file non esiste o non viene trovato, il **fopen_s** chiamata ha esito negativo.
**"w"**|Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.
**"a"**|Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se è inesistente.
**"r+"**|Viene aperto per la lettura e la scrittura. Il file deve esistere.
**"w+"**|Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente.
**"a+"**|Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se è inesistente.

Quando un file viene aperto usando il **"a"** oppure **"a +"** accedere a tipo, tutte le operazioni vengono eseguite alla fine del file di scrittura. Il puntatore del file può essere riposizionato usando [fseek](fseek-fseeki64.md) oppure [rewind](rewind.md), ma viene sempre spostato di nuovo alla fine del file prima di qualsiasi operazione di scrittura in modo che i dati esistenti non possono essere sovrascritto.

Il **"a"** modalità non rimuove il marcatore EOF prima dell'aggiunta del file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non eventuali dati aggiunti al file. Il **"a +"** modalità rimuove il marcatore EOF prima dell'aggiunta del file. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. Il **"a +"** modalità è necessaria per l'aggiunta a un file di flusso terminato usando il marcatore EOF CTRL + Z.

Quando la **"r +"**, **"w +"**, o **"a +"** viene specificato il tipo di accesso, sono consentite sia la lettura e scrittura. Il file viene definito aperto per "l'aggiornamento". Tuttavia, quando si passa dalla lettura alla scrittura, l'operazione di input deve rilevare un marcatore EOF. Se non esiste alcun EOF, è necessario usare una nuova chiamata a una funzione di posizionamento di file. Le funzioni di posizionamento di file sono **fsetpos**, [fseek](fseek-fseeki64.md), e [rewind](rewind.md). Quando si passa dalla scrittura alla lettura, è necessario usare una nuova chiamata a **fflush** o a una funzione di posizionamento di file.

Oltre ai valori specificati sopra, è possano includere i caratteri seguenti *modalità* per specificare la modalità di conversione per caratteri di nuova riga:

|*modalità* modificatore|Modalità di conversione|
|-|-|
**t**|Aprire in modalità testo (convertita).
**b**|Aprire in modalità binaria (non convertita). Le conversioni che includono caratteri di ritorno a capo e avanzamento riga vengono eliminate.

In modalità testo (convertita), CTRL + Z viene interpretato come carattere di fine del file input. Nei file aperti per la lettura/scrittura con **"a +"**, **fopen_s** cercato CTRL + Z alla fine del file e la rimuove, se possibile. Ciò avviene perché l'uso [fseek](fseek-fseeki64.md) e **ftell** per spostarsi all'interno di un file che termina con CTRL + Z, può causare [fseek](fseek-fseeki64.md) a un comportamento non corretto verso la fine del file.

Inoltre, in modalità testo, le combinazioni di ritorno a capo con avanzamento di riga vengono convertite in caratteri di avanzamento riga singola input e caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo con avanzamento di riga nell'output. Quando una funzione Unicode di I/O flusso viene eseguita in modalità testo (impostazione predefinita), si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte. Di conseguenza, le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla funzione **mbtowc**. Per lo stesso motivo, le funzioni Unicode di output flusso convertono i caratteri wide in caratteri multibyte, come se fosse stata chiamata la funzione **wctomb**.

Se **t** oppure **b** non è specificato in *modalità*, la modalità di traduzione predefinita è definita dalla variabile globale [fmode](../../c-runtime-library/fmode.md). Se **t** oppure **b** viene anteposto a argomento, la funzione ha esito negativo e restituisce **NULL**.

Per altre informazioni sull'uso delle modalità testo e binaria in formato Unicode e I/O flusso multibyte, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).

|*modalità* modificatore|Comportamento|
|-|-|
**c**|Abilitare il flag commit per la proprietà associata *nomefile* in modo che il contenuto del buffer di file viene scritti direttamente su disco se **fflush** oppure **FlushAll** viene chiamato.
**n**|Reimpostare il flag commit per la proprietà associata *filename* per "no-commit". Questa è l'impostazione predefinita. Esegue inoltre l'override del flag commit globale se il programma viene collegato a COMMODE.OBJ. L'impostazione predefinita del flag commit globale è "no-commit", a meno che il programma venga collegato in modo esplicito a COMMODE.OBJ (vedere [Link Options](../../c-runtime-library/link-options.md)).
**N**|Specifica che il file non viene ereditato dai processi figlio.
**S**|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco.
**R**|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco.
**T**|Specifica un file come temporaneo. Se possibile, non viene scaricato su disco.
**D**|Specifica un file come temporaneo. Viene eliminato quando viene chiuso l'ultimo puntatore del file.
**CCS =**_codifica_|Specifica il set di utilizzare caratteri con codificato (uno dei **UTF-8**, **UTF-16LE**, o **UNICODE**) per questo file. Lasciare non specificato se si vuole la codifica ANSI.

I caratteri validi per il *modalità* stringa usata nella **fopen_s** e [fdopen](fdopen-wfdopen.md) corrispondono alle *oflag* argomenti utilizzati in [_ Aprire](open-wopen.md) e [sopen](sopen-wsopen.md), come indicato di seguito.

|I caratteri *modalità* stringa|Equivalente *oflag* valore per sopen|
|-------------------------------|----------------------------------------------------|
|**a**|**O_wronly** &#124; **o_append** (in genere **o_wronly** &#124; **o_creat** &#124;* * o_append * *)|
|**+**|**O_rdwr** &#124; **o_append** (in genere **o_rdwr** &#124; **o_append** &#124; **o_creat** )|
|**r**|**_O_RDONLY**|
|**r +**|**O_RDWR**|
|**w**|**O_wronly** (in genere **o_wronly** &#124; **o_creat** &#124;* * o_trunc * *)|
|**w +**|**O_rdwr** (in genere **o_rdwr** &#124; **o_creat** &#124; **o_trunc**)|
|**b**|**O_BINARY**|
|**t**|**_O_TEXT**|
|**c**|nessuno|
|**n**|nessuno|
|**S**|**_O_SEQUENTIAL**|
|**R**|**_O_RANDOM**|
|**T**|**_O_SHORTLIVED**|
|**D**|**_O_TEMPORARY**|
|**CCS = UNICODE**|**_O_WTEXT**|
|**CCS = UTF-8**|**O_UTF8**|
|**CCS = UTF-16LE**|**O_UTF16**|

Se si usa **rb** modalità, non sarà necessario trasferire il codice e prevedono la lettura di molti file e/o non è rilevante sulle prestazioni di rete, i file Win32 mappati alla memoria potrebbero anche essere un'opzione.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fopen_s**|\<stdio.h>|
|**_wfopen_s**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

Il **c**, **n**, e **t** *modalità* opzioni sono estensioni Microsoft per **fopen_s** e[fdopen](fdopen-wfdopen.md) e non deve essere utilizzata quando viene richiesta la portabilità ANSI.

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

   // Open for read (will fail if file "crt_fopen_s.c" does not exist)
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

   // Close stream if it is not NULL
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

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[ferror](ferror.md)<br/>
[_fileno](fileno.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmode](setmode.md)<br/>
