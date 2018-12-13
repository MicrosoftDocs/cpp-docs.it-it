---
title: fopen, _wfopen
ms.date: 11/04/2016
apiname:
- _wfopen
- fopen
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
ms.openlocfilehash: 1397f3b3513fc9a3e93a69841a93b40c16e490cf
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51333228"
---
# <a name="fopen-wfopen"></a>fopen, _wfopen

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

*filename*<br/>
Nome file.

*mode*<br/>
Tipo di accesso abilitato.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al file aperto. Un valore di puntatore Null indica un errore. Se *nomefile* oppure *modalità* viene **NULL** o una stringa vuota, queste funzioni attivano il gestore di parametri non validi, come descritto in [parametro Convalida](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **NULL** e impostare **errno** al **EINVAL**.

Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="remarks"></a>Note

Il **fopen** funzione apre il file specificato da *filename*. Per impostazione predefinita, una stretta *filename* stringa viene interpretata usando la codepage ANSI (CP_ACP). Nelle applicazioni per Windows Desktop può essere modificata nella codepage OEM (CP_OEMCP) usando la funzione [SetFileApisToOEM](/windows/desktop/api/fileapi/nf-fileapi-setfileapistooem) . È possibile usare la [AreFileApisANSI](/windows/desktop/api/fileapi/nf-fileapi-arefileapisansi) funzione per determinare se *filename* viene interpretato con la versione ANSI o la tabella codici OEM predefinita di sistema. **wfopen** è una versione a caratteri wide di **fopen**; gli argomenti **wfopen** sono stringhe a caratteri wide. In caso contrario, **wfopen** e **fopen** si comportano in modo identico. Utilizza solo **wfopen** non influisce sul set di caratteri codificati usato nel flusso di file.

**fopen** accetta percorsi validi nel file system al momento dell'esecuzione; **fopen** accetta percorsi UNC e percorsi che coinvolgono le unità di rete mappate, purché il sistema che esegue il codice abbia accesso alla condivisione o un'unità mappata al momento dell'esecuzione. Quando si creano i percorsi per **fopen**, assicurarsi che le unità, i percorsi o le condivisioni di rete saranno disponibili nell'ambiente di esecuzione. È possibile usare barre (/) o barre rovesciate (\\) come separatori di directory in un percorso.

Controllare sempre il valore restituito per verificare se il puntatore è NULL prima di eseguire qualsiasi altra operazione sul file. Se si verifica un errore, la variabile globale **errno** è impostata e può essere usato per ottenere informazioni specifiche sull'errore. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="unicode-support"></a>Supporto per Unicode

**fopen** supporta flussi di file Unicode. Per aprire un file Unicode, passare un **ccs** flag che specifica la codifica voluta a **fopen**, come indicato di seguito.

> **FILE *fp = fopen ("NewFile. txt", "ccs rt +, =**_codifica_**");**

I valori consentiti di *codifica* vengono **UNICODE**, **UTF-8**, e **UTF-16LE**.

Quando un file viene aperto in modalità Unicode, le funzioni di input traducono i dati vengono letti dal file in dati UTF-16 archiviati come tipo **wchar_t**. Le funzioni che scrivono in un file aperto in modalità Unicode prevedono buffer contenenti dati UTF-16 archiviati come tipo **wchar_t**. Se il file è codificato come UTF-8, i dati UTF-16 vengono tradotti in UTF-8 alla scrittura e il contenuto del file codificato in UTF-8 viene tradotto in UTF-16 alla lettura. Un tentativo di lettura o scrittura di un numero dispari di byte in modalità Unicode causerà un errore di [convalida del parametro](../../c-runtime-library/parameter-validation.md) . Per leggere o scrivere dati archiviati nel programma come UTF-8, usare una modalità file di testo o binaria al posto della modalità Unicode. Eventuali traduzioni della codifica vanno gestite dall'utente.

Se il file esiste già e viene aperto per la lettura o l'aggiunta, l'indicatore ordine byte (BOM), se presente nel file, determina la codifica. La codifica di indicatore ordine byte ha la precedenza sulla codifica specificata per il **ccs** flag. Il **ccs** codifica viene utilizzata solo quando non è presente alcun BOM o il file è un nuovo file.

> [!NOTE]
> Rilevamento di indicatore ordine byte si applica solo ai file che vengono aperti in modalità Unicode (ovvero passando il **ccs** flag).

Nella tabella seguente vengono riepilogate le modalità usate per vari **ccs** flag specificati **fopen** e Byte Order Mark nel file.

### <a name="encodings-used-based-on-ccs-flag-and-bom"></a>Codifiche usate in base a flag ccs e indicatore ordine byte

|flag CCS|Nessun indicatore ordine byte (o file nuovo)|Indicatore ordine byte (BOM): UTF-8|Indicatore ordine byte (BOM): UTF-16|
|----------------|----------------------------|-----------------|------------------|
|**UNICODE**|**UTF-16LE**|**UTF-8**|**UTF-16LE**|
|**UTF-8**|**UTF-8**|**UTF-8**|**UTF-16LE**|
|**UTF-16LE**|**UTF-16LE**|**UTF-8**|**UTF-16LE**|

I file aperti per la scrittura in modalità Unicode dispongono di un indicatore ordine byte scritto automaticamente in tali file.

Se *modalità* viene **", ccs =**_codifica_**"**, **fopen** tenta innanzitutto di aprire il file utilizzando sia in lettura e accesso in scrittura. Se questa operazione ha esito positivo, la funzione legge l'indicatore ordine byte per determinare la codifica del file. Se l'operazione non riesce, la funzione usa la codifica predefinita per il file. In entrambi i casi **fopen** verrà quindi riaprire il file con accesso in sola lettura. (Si applica a **"a"** modalità unico, non **"a +"** modalità.)

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tfopen**|**fopen**|**fopen**|**_wfopen**|

La stringa di caratteri *modalità* specifica il tipo di accesso richiesto per il file, come indicato di seguito.

|*mode*|Accedi a|
|-|-|
| **"r"** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, il **fopen** chiamata ha esito negativo. |
| **"w"** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **"a"** | Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se è inesistente. |
| **"r+"** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **"w+"** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **"a+"** | Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se è inesistente. |

Quando un file viene aperto usando il **"a"** tipo di accesso o il **"a +"** accedere a tipo, tutte le operazioni vengono eseguite alla fine del file di scrittura. Il puntatore del file può essere riposizionato usando [fseek](fseek-fseeki64.md) oppure [rewind](rewind.md), ma viene sempre spostato di nuovo alla fine del file prima di qualsiasi operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti.

Il **"a"** modalità non rimuove il marcatore EOF prima dell'aggiunta al file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non i eventualmente aggiunti al file. Prima dell'aggiunta al file, il **"a +"** modalità rimuove il marcatore EOF. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. Il **"a +"** modalità è necessaria per l'aggiunta a un file di flusso terminato con il marcatore EOF CTRL + Z.

Quando la **"r +"**, **"w +"**, o **"a +"** viene specificato il tipo di accesso, sono abilitate sia la lettura e scrittura (il file viene definito aperto per "update"). Tuttavia, quando si passa dalla lettura alla scrittura, l'operazione di input deve rilevare un marcatore EOF. Se non esiste alcun EOF, è necessario usare una nuova chiamata a una funzione di posizionamento dei file. Le funzioni di posizionamento dei file sono **fsetpos**, [fseek](fseek-fseeki64.md), e [rewind](rewind.md). Quando si passa dalla scrittura alla lettura, è necessario usare una nuova chiamata a **fflush** o a un funzione di posizionamento dei file.

Oltre ai valori precedenti, i caratteri seguenti possono essere accodati a *modalità* per specificare la modalità di conversione per caratteri di nuova riga.

|*modalità* modificatore|Modalità di conversione|
|-|-|
| **t** | Aprire in modalità testo (convertita). |
| **b** | Aprire in modalità binaria (non convertita). Le conversioni che includono caratteri di ritorno a capo e avanzamento riga vengono eliminate. |

In modalità testo, CTRL + Z viene interpretato come carattere EOF nell'input. Nei file aperti per la lettura/scrittura usando **"a +"**, **fopen** cercato CTRL + Z alla fine del file e la rimuove, se è possibile. Ciò avviene perché l'uso [fseek](fseek-fseeki64.md) e **ftell** per spostarsi all'interno di un file che termina con CTRL + Z può causare [fseek](fseek-fseeki64.md) si comporti in modo non corretto verso la fine del file.

In modalità testo, le combinazioni di ritorno a capo con avanzamento di riga vengono convertite in caratteri di avanzamento riga singola input e caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo con avanzamento di riga nell'output. Quando una funzione Unicode di I/O flusso viene eseguita in modalità testo (impostazione predefinita), si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte. Di conseguenza, le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla funzione **mbtowc**. Per lo stesso motivo, le funzioni Unicode di output flusso convertono i caratteri wide in caratteri multibyte, come se fosse stata chiamata la funzione **wctomb**.

Se **t** oppure **b** non è specificato in *modalità*, la modalità di traduzione predefinita è definita dalla variabile globale [fmode](../../c-runtime-library/fmode.md). Se **t** oppure **b** viene anteposto a argomento, la funzione ha esito negativo e restituisce **NULL**.

Per altre informazioni su come usare le modalità binaria e di testo in formato Unicode e I/O flusso multibyte, vedere [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).

Le opzioni seguenti possono essere aggiunte a *modalità* per specificare comportamenti aggiuntivi.

|*modalità* modificatore|Comportamento|
|-|-|
| **c** | Abilitare il flag commit per la proprietà associata *nomefile* in modo che il contenuto del buffer di file viene scritti direttamente su disco se **fflush** oppure **FlushAll** viene chiamato. |
| **n** | Reimpostare il flag commit per la proprietà associata *filename* per "no-commit". Questa è l'impostazione predefinita. Esegue inoltre l'override del flag commit globale se il programma viene collegato a COMMODE.OBJ. L'impostazione predefinita del flag commit globale è "no-commit", a meno che il programma venga collegato in modo esplicito a COMMODE.OBJ (vedere [Link Options](../../c-runtime-library/link-options.md)). |
| **N** | Specifica che il file non viene ereditato dai processi figlio. |
| **S** | Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco. |
| **R** | Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco. |
| **T** | Specifica un file come temporaneo. Se possibile, non viene scaricato su disco. |
| **D** | Specifica un file come temporaneo. Viene eliminato quando viene chiuso l'ultimo puntatore del file. |
| **CCS =**_codifica_ | Specifica il set di utilizzare caratteri con codificato (uno dei **UTF-8**, **UTF-16LE**, o **UNICODE**) per questo file. Lasciare non specificato se si vuole la codifica ANSI. |

Caratteri validi per il *modalità* stringa usata nella **fopen** e **fdopen** corrispondono alle *oflag* argomenti utilizzati in [Open](open-wopen.md) e [sopen](sopen-wsopen.md), come indicato di seguito.

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

Se si usa **rb** modalità, non è necessario convertire il codice e se si prevede di leggere la maggior parte di un file di grandi dimensioni o non desidera massimizzare le prestazioni di rete, è opportuno considerare anche se per l'utilizzo della memoria file Win32 mappati in come opzione.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fopen**|\<stdio.h>|
|**_wfopen**|\<stdio.h> o \<wchar.h>|

**wfopen** è un'estensione Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

Il **c**, **n**, **t**, **S**, **R**, **T**, e **1!d**  *modalità* opzioni sono estensioni Microsoft per **fopen** e **fdopen** e non deve essere utilizzata quando viene richiesta la portabilità ANSI.

## <a name="example-1"></a>Esempio 1

Il seguente programma apre due file.  Viene utilizzato **fclose** per chiudere il primo file e **fcloseall** per chiudere tutti i file rimanenti.

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
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[fclose, _fcloseall](fclose-fcloseall.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[ferror](ferror.md)<br/>
[_fileno](fileno.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmode](setmode.md)<br/>
[_sopen, _wsopen](sopen-wsopen.md)<br/>
