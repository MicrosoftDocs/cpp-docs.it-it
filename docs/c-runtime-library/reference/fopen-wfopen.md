---
title: fopen, _wfopen
ms.date: 11/04/2016
api_name:
- _wfopen
- fopen
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
ms.openlocfilehash: 0e50854cf35dd58f7f59f67ed861247b51fd4541
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957045"
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

*filename*<br/>
Nome file.

*mode*<br/>
Tipo di accesso abilitato.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al file aperto. Un valore di puntatore Null indica un errore. Se *filename* o *mode* è **null** o una stringa vuota, queste funzioni attivano il gestore di parametri non validi, descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **null** e impostano **errno** su **EINVAL**.

Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="remarks"></a>Note

La funzione fopen apre il file specificato da *filename*. Per impostazione predefinita, una stringa di *nome file* Narrow viene interpretata usando la tabella codici ANSI (CP_ACP). Nelle applicazioni per Windows Desktop può essere modificata nella codepage OEM (CP_OEMCP) usando la funzione [SetFileApisToOEM](/windows/win32/api/fileapi/nf-fileapi-setfileapistooem) . È possibile utilizzare la funzione [AreFileApisANSI](/windows/win32/api/fileapi/nf-fileapi-arefileapisansi) per determinare se *filename* viene interpretato utilizzando ANSI o la tabella codici OEM predefinita del sistema. **_wfopen** è una versione a caratteri wide di **fopen**; gli argomenti di **_wfopen** sono stringhe a caratteri wide. In caso contrario, **_wfopen** e **fopen** si comportano in modo identico. L'uso di **_wfopen** non influisce sul set di caratteri codificati usato nel flusso di file.

**fopen** accetta percorsi validi nella file System al momento dell'esecuzione. **fopen** accetta percorsi UNC e percorsi che coinvolgono unità di rete mappate purché il sistema che esegue il codice abbia accesso alla condivisione o all'unità mappata al momento dell'esecuzione. Quando si costruiscono ipercorsi per fopen, assicurarsi che le unità, i percorsi o le condivisioni di rete saranno disponibili nell'ambiente di esecuzione. È possibile usare barre (/) o barre rovesciate (\\) come separatori di directory in un percorso.

Controllare sempre il valore restituito per verificare se il puntatore è NULL prima di eseguire qualsiasi altra operazione sul file. Se si verifica un errore, la variabile globale **errno** viene impostata e può essere usata per ottenere informazioni specifiche sull'errore. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="unicode-support"></a>Supporto per Unicode

**fopen** supporta i flussi di file Unicode. Per aprire un file Unicode, passare un flag **CCS** che specifichi la codifica desiderata per **fopen**, come indicato di seguito.

> **FILE \*fp = fopen("newfile.txt", "rt+, ccs=** _encoding_ **");**

I valori consentiti per la *codifica* sono **Unicode**, **UTF-8**e **UTF-16LE**.

Quando un file viene aperto in modalità Unicode, le funzioni di input traducono i dati letti dal file in dati UTF-16 archiviati come tipo **wchar_t**. Le funzioni che scrivono in un file aperto in modalità Unicode prevedono buffer contenenti dati UTF-16 archiviati come tipo **wchar_t**. Se il file è codificato come UTF-8, i dati UTF-16 vengono tradotti in UTF-8 alla scrittura e il contenuto del file codificato in UTF-8 viene tradotto in UTF-16 alla lettura. Un tentativo di lettura o scrittura di un numero dispari di byte in modalità Unicode causerà un errore di [convalida del parametro](../../c-runtime-library/parameter-validation.md) . Per leggere o scrivere dati archiviati nel programma come UTF-8, usare una modalità file di testo o binaria al posto della modalità Unicode. Eventuali traduzioni della codifica vanno gestite dall'utente.

Se il file esiste già e viene aperto per la lettura o l'aggiunta, l'indicatore ordine byte (BOM), se presente nel file, determina la codifica. La codifica DBA ha la precedenza sulla codifica specificata dal flag **CCS** . La codifica **CCS** viene utilizzata solo se non è presente alcun BOM o se il file è un nuovo file.

> [!NOTE]
> Il rilevamento DBA si applica solo ai file aperti in modalità Unicode (ovvero passando il flag **CCS** ).

Nella tabella seguente sono riepilogate le modalità usate per vari flag **CCS** assegnati a **fopen** e ai byte order Marks nel file.

### <a name="encodings-used-based-on-ccs-flag-and-bom"></a>Codifiche usate in base a flag ccs e indicatore ordine byte

|flag CCS|Nessun indicatore ordine byte (o file nuovo)|BOM UTF-8|BOM UTF-16|
|----------------|----------------------------|-----------------|------------------|
|**UNICODE**|**UTF-16LE**|**UTF-8**|**UTF-16LE**|
|**UTF-8**|**UTF-8**|**UTF-8**|**UTF-16LE**|
|**UTF-16LE**|**UTF-16LE**|**UTF-8**|**UTF-16LE**|

I file aperti per la scrittura in modalità Unicode dispongono di un indicatore ordine byte scritto automaticamente in tali file.

Se *mode* è **"a, CCS =** _Encoding_ **"** , **fopen** tenta innanzitutto di aprire il file usando l'accesso sia in lettura che in scrittura. Se questa operazione ha esito positivo, la funzione legge l'indicatore ordine byte per determinare la codifica del file. Se l'operazione non riesce, la funzione usa la codifica predefinita per il file. In entrambi i casi , fopen riaprirà il file usando l'accesso di sola scrittura. (Si applica solo alla modalità " **a"** , non alla modalità **"a +"** ).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tfopen**|**fopen**|**fopen**|**_wfopen**|

La *modalità* stringa di caratteri specifica il tipo di accesso richiesto per il file, come indicato di seguito.

|*mode*|Accesso|
|-|-|
| **"r"** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata di fopen ha esito negativo. |
| **"w"** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **"a"** | Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se è inesistente. |
| **"r+"** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **"w+"** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **"a+"** | Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se è inesistente. |

Quando un file viene aperto usando il tipo di accesso " **a"** o il tipo di accesso **"a +"** , tutte le operazioni di scrittura si verificano alla fine del file. Il puntatore del file può essere riposizionato utilizzando [fseek](fseek-fseeki64.md) o [Rewind](rewind.md), ma viene sempre spostato di nuovo alla fine del file prima dell'esecuzione di qualsiasi operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti.

La modalità **"a"** non rimuove il marcatore EOF prima dell'aggiunta al file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non i eventualmente aggiunti al file. Prima che venga aggiunto al file, la modalità **"a +"** rimuove il marcatore EOF. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. La modalità **"a +"** è necessaria per l'aggiunta a un file di flusso terminato con il marcatore EOF CTRL + Z.

Quando viene specificato il tipo di accesso **"r +"** , **"w +"** o **"a +"** , sono abilitate sia la lettura che la scrittura (il file viene definito aperto per "aggiornare"). Tuttavia, quando si passa dalla lettura alla scrittura, l'operazione di input deve rilevare un marcatore EOF. Se non esiste alcun EOF, è necessario usare una nuova chiamata a una funzione di posizionamento dei file. Le funzioni di posizionamento dei file sono **fsetpos**, [fseek](fseek-fseeki64.md)e [Rewind](rewind.md). Quando si passa dalla scrittura alla lettura, è necessario utilizzare una chiamata a **fflush** o a una funzione di posizionamento dei file.

Oltre ai valori precedenti, è possibile aggiungere i caratteri seguenti alla *modalità* per specificare la modalità di conversione per i caratteri di nuova riga.

|modificatore di *modalità*|Modalità di conversione|
|-|-|
| **t** | Aprire in modalità testo (convertita). |
| **b** | Apri in modalità binaria (non convertita); le traduzioni che includono caratteri di ritorno a capo e avanzamento riga vengono eliminati. |

In modalità testo, CTRL + Z viene interpretato come carattere EOF nell'input. Nei file aperti per la lettura/scrittura tramite **"a +"** , fopen verifica la presenza di una combinazione CTRL + Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso di [fseek](fseek-fseeki64.md) e **ftell** per spostarsi all'interno di un file che termina con CTRL + Z può causare un comportamento non corretto di [fseek](fseek-fseeki64.md) in prossimità della fine del file.

In modalità testo, le combinazioni di ritorno a capo e avanzamento riga vengono convertite in feed a riga singola nell'input e i caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo/avanzamento riga nell'output. Quando una funzione Unicode di I/O flusso viene eseguita in modalità testo (impostazione predefinita), si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte. Di conseguenza, le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla funzione **mbtowc**. Per lo stesso motivo, le funzioni Unicode di output flusso convertono i caratteri wide in caratteri multibyte, come se fosse stata chiamata la funzione **wctomb**.

Se **t** o **b** non è specificato in *modalità*, la modalità di conversione predefinita è definita dalla variabile globale [_fmode](../../c-runtime-library/fmode.md). Se **t** o **b** è preceduto dall'argomento, la funzione ha esito negativo e restituisce **null**.

Per altre informazioni su come usare le modalità binaria e di testo in formato Unicode e I/O flusso multibyte, vedere [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).

Le opzioni seguenti possono essere aggiunte alla *modalità* per specificare comportamenti aggiuntivi.

|modificatore di *modalità*|Comportamento|
|-|-|
| **c** | Abilitare il flag commit per il *nome file* associato, in modo che il contenuto del buffer di file venga scritto direttamente su disco se viene chiamato **fflush** o **_flushall** . |
| **n** | Reimpostare il flag di commit per il *nome file* associato su "no-commit". Questa è l'impostazione predefinita. Esegue inoltre l'override del flag commit globale se il programma viene collegato a COMMODE.OBJ. L'impostazione predefinita del flag commit globale è "no-commit", a meno che il programma venga collegato in modo esplicito a COMMODE.OBJ (vedere [Link Options](../../c-runtime-library/link-options.md)). |
| **N** | Specifica che il file non viene ereditato dai processi figlio. |
| **S** | Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco. |
| **R** | Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco. |
| **T** | Specifica un file come temporaneo. Se possibile, non viene scaricato su disco. |
| **D** | Specifica un file come temporaneo. Viene eliminato quando viene chiuso l'ultimo puntatore del file. |
| **CCS =** _codifica_ | Specifica il set di caratteri codificati da usare (uno dei file **UTF-8**, **UTF-16LE**o **Unicode**) per questo file. Lasciare non specificato se si vuole la codifica ANSI. |

I caratteri validi per la stringa della *modalità* utilizzata in **fopen** e **_fdopen** corrispondono agli argomenti *Oflag* utilizzati in [_open](open-wopen.md) e [_sopen](sopen-wsopen.md), come indicato di seguito.

|Caratteri nella stringa della *modalità*|Valore *Oflag* equivalente per \_Open/\_sopen|
|-------------------------------|----------------------------------------------------|
|**a**|**\_O\_WRONLY** &#124; &#124; **oappend\_(in genere o WRONLY o creat \_**  **\_\_** &#124;  **\_\_**  **\_ O\_Accodamento**)|
|**a+**|**\_O\_RDWR** &#124; &#124; **oappend\_(in genere o RDWR o Append \_**  **\_\_** &#124;  **\_\_**  **\_ O\_creare** )|
|**r**|**\_O\_RDONLY**|
|**r+**|**\_O\_RDWR**|
|**w**|**\_O\_WRONLY** (in  **\_genereo\_WRONLY** &#124; &#124; **oCreate\_o tronca) \_** **\_ \_**|
|**w +**|**\_O\_RDWR** (in  **\_genereo\_RDWR** &#124; &#124; **oCreate\_o tronca) \_** **\_ \_**|
|**b**|**\_BINARIO\_O**|
|**t**|**\_O\_TEXT**|
|**c**|Nessuna|
|**n**|Nessuna|
|**S**|**\_O\_SEQUENZIALE**|
|**R**|**\_O\_CASUALE**|
|**T**|**\_O\_BREVE DURATA**|
|**D**|**\_O\_TEMPORANEA**|
|**ccs=UNICODE**|**\_O\_WTEXT**|
|**ccs=UTF-8**|**\_O\_UTF8**|
|**ccs=UTF-16LE**|**\_O\_UTF16**|

Se si usa la modalità **RB** , non è necessario trasferire il codice e, se si prevede di leggere la maggior parte di un file di grandi dimensioni o non si è interessati alle prestazioni di rete, è anche possibile valutare se usare i file Win32 con mapping della memoria come opzione.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fopen**|\<stdio.h>|
|**_wfopen**|\<stdio.h> o \<wchar.h>|

**_wfopen** è un'estensione Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

Le opzioni della *modalità* **c**, **n**, **t**, **S**, **R**, **t**e **D** sono estensioni Microsoft per **fopen** e **_fdopen** e non devono essere usate per la portabilità ANSI desiderata.

## <a name="example-1"></a>Esempio 1

Il seguente programma apre due file.  USA **fclose** per chiudere il primo file e **_fcloseall** per chiudere tutti i file rimanenti.

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
