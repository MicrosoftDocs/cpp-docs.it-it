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
ms.openlocfilehash: e4ccce3c4a4fe1e327b7830ef03f6ab69f2d7814
ms.sourcegitcommit: 878a164fe6d550ca81ab87d8425c8d3cd52fe384
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/22/2019
ms.locfileid: "68376212"
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

|*pFile*|*filename*|*mode*|Valore restituito|Contenuto di *Pfile*|
|-------------|----------------|------------|------------------|------------------------|
|**NULL**|qualsiasi|qualsiasi|**EINVAL**|non modificato|
|qualsiasi|**NULL**|qualsiasi|**EINVAL**|non modificato|
|qualsiasi|qualsiasi|**NULL**|**EINVAL**|non modificato|

## <a name="remarks"></a>Note

I file aperti da **fopen_s** e **_wfopen_s** non sono condivisibili. Se è necessario che un file sia condivisibile, usare [_fsopen, _wfsopen](fsopen-wfsopen.md) con la costante di modalità di condivisione appropriata, ad esempio **_SH_DENYNO** per la condivisione in lettura/scrittura.

La funzione **fopen_s** apre il file specificato da *filename*. **_wfopen_s** è una versione a caratteri wide di **fopen_s**; gli argomenti di **_wfopen_s** sono stringhe a caratteri wide. **_wfopen_s** e **fopen_s** si comportano in modo identico.

**fopen_s** accetta percorsi validi nel file System al momento dell'esecuzione. I percorsi UNC e i percorsi che coinvolgono le unità di rete mappate vengono accettati da **fopen_s** , purché il sistema che esegue il codice abbia accesso alla condivisione o all'unità di rete mappata al momento dell'esecuzione. Quando si costruiscono i percorsi per **fopen_s**, non creare presupposti sulla disponibilità di unità, percorsi o condivisioni di rete nell'ambiente di esecuzione. È possibile usare barre (/) o barre rovesciate (\\) come separatori di directory in un percorso.

Queste funzioni convalidano i relativi parametri. Se *Pfile*, *filename*o *mode* è un puntatore null, queste funzioni generano un'eccezione di parametro non valido, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Controllare sempre il valore restituito per verificare se la funzione è stata completata prima di eseguire eventuali altre operazioni sul file. Se si verifica un errore, viene restituito il codice di errore e viene impostata la variabile globale **errno** . Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).

## <a name="unicode-support"></a>Supporto Unicode

**fopen_s** supporta i flussi di file Unicode. Per aprire un file Unicode nuovo o esistente, passare un flag *CCS* che specifichi la codifica desiderata per **fopen_s**:

**fopen_s(&fp, "newfile.txt", "rw, ccs=** _encoding_ **");**

I valori consentiti per la *codifica* sono **Unicode**, **UTF-8**e **UTF-16LE**. Se non viene specificato alcun valore per la *codifica*, **fopen_s** usa la codifica ANSI.

Se il file esiste già e viene aperto per la lettura o l'aggiunta, indicatore per l'ordine dei byte (BOM, Byte Order Mark), se presente nel file, determina la codifica. La codifica DBA ha la precedenza sulla codifica specificata dal flag *CCS* . La codifica *CCS* viene utilizzata solo se non è presente alcun BOM o se il file è un nuovo file.

> [!NOTE]
> Il rilevamento DBA si applica solo ai file aperti in modalità Unicode; ovvero passando il flag *CCS* .

Nella tabella seguente sono riepilogate le modalità per diversi flag *CCS* assegnati a **fopen_s** e per i byte order Marks nel file.

### <a name="encodings-used-based-on-ccs-flag-and-bom"></a>Codifiche usate in base a flag ccs e indicatore ordine byte

|flag CCS|Nessun indicatore ordine byte (o file nuovo)|BOM UTF-8|BOM UTF-16|
|----------------|----------------------------|-----------------|------------------|
|**UNICODE**|**UTF-16LE**|**UTF-8**|**UTF-16LE**|
|**UTF-8**|**UTF-8**|**UTF-8**|**UTF-16LE**|
|**UTF-16LE**|**UTF-16LE**|**UTF-8**|**UTF-16LE**|

I file aperti per la scrittura in modalità Unicode dispongono di un indicatore per l'ordine dei byte scritto automaticamente in tali file.

Se *mode* è **"a, CCS =** _Encoding_ **"** , **fopen_s** tenta innanzitutto di aprire il file con accesso in lettura e in scrittura. Se ha esito positivo, la funzione legge l'indicatore per l'ordine dei byte per determinare la codifica del file. In caso contrario, la funzione usa la codifica predefinita per il file. In entrambi i casi, **fopen_s** apre nuovamente il file con accesso in sola scrittura. (Si applica solo a **una** modalità, non **a +** ).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tfopen_s**|**fopen_s**|**fopen_s**|**_wfopen_s**|

La *modalità* stringa di caratteri specifica il tipo di accesso richiesto per il file, come indicato di seguito.

|*mode*|Accesso|
|-|-|
| **"r"** | Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata a **fopen_s** ha esito negativo. |
| **"w"** | Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente. |
| **"a"** | Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se è inesistente. |
| **"r+"** | Viene aperto per la lettura e la scrittura. Il file deve esistere. |
| **"w+"** | Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente. |
| **"a+"** | Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se è inesistente. |

Quando un file viene aperto usando il tipo di accesso **"a"** o **"a +"** , tutte le operazioni di scrittura si verificano alla fine del file. Il puntatore del file può essere riposizionato utilizzando [fseek](fseek-fseeki64.md) o [Rewind](rewind.md), ma viene sempre spostato di nuovo alla fine del file prima che venga eseguita un'operazione di scrittura in modo che i dati esistenti non possano essere sovrascritti.

La modalità **"a"** non rimuove il marcatore EOF prima dell'aggiunta al file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non eventuali dati aggiunti al file. La modalità **"a +"** rimuove il marcatore EOF prima dell'aggiunta al file. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. La modalità **"a +"** è necessaria per l'aggiunta a un file di flusso terminato usando il marcatore EOF CTRL + Z.

Quando viene specificato il tipo di accesso **"r +"** , **"w +"** o **"a +"** , sono consentite sia la lettura che la scrittura. Il file viene definito aperto per "l'aggiornamento". Tuttavia, quando si passa dalla lettura alla scrittura, l'operazione di input deve rilevare un marcatore EOF. Se non esiste alcun EOF, è necessario usare una nuova chiamata a una funzione di posizionamento di file. Le funzioni di posizionamento dei file sono **fsetpos**, [fseek](fseek-fseeki64.md)e [Rewind](rewind.md). Quando si passa dalla scrittura alla lettura, è necessario usare una chiamata a **fflush** o a una funzione di posizionamento dei file.

Oltre ai valori precedenti, è possibile includere i caratteri seguenti in *modalità* per specificare la modalità di conversione per i caratteri di nuova riga:

|modificatore di *modalità*|Modalità di conversione|
|-|-|
| **t** | Aprire in modalità testo (convertita). |
| **b** | Apri in modalità binaria (non convertita); le traduzioni che includono caratteri di ritorno a capo e avanzamento riga vengono eliminati. |

In modalità testo (convertito), CTRL + Z viene interpretato come un carattere di fine file nell'input. Nei file aperti per la lettura/scrittura con **"a +"** , **fopen_s** verifica la presenza della combinazione CTRL + Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso di [fseek](fseek-fseeki64.md) e **ftell** per spostarsi all'interno di un file che termina con CTRL + Z può causare un comportamento non corretto di [fseek](fseek-fseeki64.md) in prossimità della fine del file.

Inoltre, in modalità testo, le combinazioni di feed di ritorno a capo e avanzamento riga vengono convertite in feed a riga singola nell'input e i caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo/avanzamento riga nell'output. Quando una funzione Unicode di I/O flusso viene eseguita in modalità testo (impostazione predefinita), si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte. Di conseguenza, le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla funzione **mbtowc**. Per lo stesso motivo, le funzioni Unicode di output flusso convertono i caratteri wide in caratteri multibyte, come se fosse stata chiamata la funzione **wctomb**.

Se **t** o **b** non è specificato in *modalità*, la modalità di conversione predefinita è definita dalla variabile globale [_fmode](../../c-runtime-library/fmode.md). Se **t** o **b** è preceduto dall'argomento, la funzione ha esito negativo e restituisce **null**.

Per altre informazioni sull'uso delle modalità testo e binaria in formato Unicode e I/O flusso multibyte, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).

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

I caratteri validi per la stringa della *modalità* utilizzata in **fopen_s** e [_fdopen](fdopen-wfdopen.md) corrispondono agli argomenti *Oflag* utilizzati in [_open](open-wopen.md) e [_sopen](sopen-wsopen.md), come indicato di seguito.

|Caratteri nella stringa della *modalità*|Valore *Oflag* equivalente per _open/_sopen|
|-------------------------------|----------------------------------------------------|
|**a**|**_O_WRONLY** &#124; **_O_APPEND** (usually **_O_WRONLY** &#124; **_O_CREAT** &#124;** _O_APPEND**)|
|**a+**|**_O_RDWR** &#124; **_O_APPEND** (usually **_O_RDWR** &#124; **_O_APPEND** &#124; **_O_CREAT** )|
|**r**|**_O_RDONLY**|
|**r+**|**_O_RDWR**|
|**w**|**_O_WRONLY** (usually **_O_WRONLY** &#124; **_O_CREAT** &#124;** _O_TRUNC**)|
|**w +**|**_O_RDWR** (usually **_O_RDWR** &#124; **_O_CREAT** &#124; **_O_TRUNC**)|
|**b**|**_O_BINARY**|
|**t**|**_O_TEXT**|
|**c**|Nessuna|
|**n**|Nessuna|
|**S**|**_O_SEQUENTIAL**|
|**R**|**_O_RANDOM**|
|**T**|**_O_SHORTLIVED**|
|**D**|**_O_TEMPORARY**|
|**ccs=UNICODE**|**_O_WTEXT**|
|**ccs=UTF-8**|**_O_UTF8**|
|**ccs=UTF-16LE**|**_O_UTF16**|

Se si usa la modalità **RB** , non è necessario trasferire il codice e si prevede di leggere una grande quantità di file e/o non si è interessati alle prestazioni di rete, i file Win32 con mapping della memoria potrebbero essere anche un'opzione.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fopen_s**|\<stdio.h>|
|**_wfopen_s**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

Le opzioni di *modalità* **c**, **n**e **t** sono estensioni Microsoft per **fopen_s** e [_fdopen](fdopen-wfdopen.md) e non devono essere usate per la portabilità ANSI desiderata.

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
