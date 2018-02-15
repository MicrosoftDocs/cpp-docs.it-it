---
title: fopen, _wfopen | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- opening files, for file I/O
- wfopen function
- tfopen function
- _tfopen function
- _wfopen function
- files [C++], opening
- fopen function
ms.assetid: e868993f-738c-4920-b5e4-d8f2f41f933d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5619aa0db0c7905ec62fef31f5aa0cc25fae8924
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="fopen-wfopen"></a>fopen, _wfopen
Apre un file. Sono disponibili versioni più sicure di queste funzioni che eseguono la convalida di parametri aggiuntivi e restituiscono codici di errore. Vedere [fopen_s, _wfopen_s](../../c-runtime-library/reference/fopen-s-wfopen-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
FILE *fopen(   
   const char *filename,  
   const char *mode   
);  
FILE *_wfopen(   
   const wchar_t *filename,  
   const wchar_t *mode   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `filename`  
 Nome file.  
  
 `mode`  
 Tipo di accesso abilitato.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore al file aperto. Un valore di puntatore Null indica un errore. Se `filename` o `mode` è `NULL` o una stringa vuota, queste funzioni attivano il gestore di parametri non valido, come descritto in [Parameter Validation](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `NULL` e impostano `errno` su `EINVAL`.  
  
 Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).  
  
## <a name="remarks"></a>Note  
 La funzione `fopen` apre il file specificato da `filename`. Per impostazione predefinita, una stringa narrow `filename` viene interpretata usando la codepage ANSI (CP_ACP). Nelle applicazioni per Windows Desktop può essere modificata nella codepage OEM (CP_OEMCP) usando la funzione [SetFileApisToOEM](https://msdn.microsoft.com/library/windows/desktop/aa365534\(v=vs.85\).aspx) . È possibile usare la funzione [AreFileApisANSI](https://msdn.microsoft.com/library/windows/desktop/aa363781\(v=vs.85\).aspx) per determinare se `filename` viene interpretato con la codepage ANSI o con quella OEM predefinita di sistema. `_wfopen` è una versione a caratteri "wide" di `fopen`. Gli argomenti per `_wfopen` sono stringhe a caratteri "wide". In caso contrario, `_wfopen` e `fopen` si comportano in modo identico. L'uso solo di `_wfopen` non ha effetto sul set di caratteri codificati usato nel flusso di file.  
  
 `fopen` accetta percorsi validi nel file system in corrispondenza del punto di esecuzione. `fopen` accetta percorsi UNC o percorsi in cui vengono usate unità di rete mappate a condizione che il sistema che esegue il codice abbia accesso alla condivisione o un'unità mappata al momento dell'esecuzione. Quando si creano i percorsi per `fopen`, verificare che le unità, i percorsi o le condivisioni di rete saranno disponibili nell'ambiente di esecuzione. È possibile usare barre (/) o barre rovesciate (\\) come separatori di directory in un percorso.  
  
 Controllare sempre il valore restituito per verificare se il puntatore è NULL prima di eseguire qualsiasi altra operazione sul file. Se si verifica un errore, la variabile globale `errno` viene impostata e può essere usata per ottenere informazioni specifiche sugli errori. Per altre informazioni, vedere [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (errno, _doserrno, _sys_errlist e _sys_nerr).  
  
## <a name="unicode-support"></a>Supporto per Unicode  
 `fopen` supporta flussi di file di Unicode. Per aprire un file Unicode, passare un flag `ccs` che specifica la codifica voluta a `fopen`, come segue.  
  
 `FILE *fp = fopen("newfile.txt", "rt+, ccs=encoding");`  
  
 I valori consentiti di `encoding` sono `UNICODE`, `UTF-8`e `UTF-16LE`.  
  
 Quando un file viene aperto in modalità Unicode, le funzioni di input traducono i dati letti dal file in dati UTF-16 archiviati come tipo `wchar_t`. Le funzioni che scrivono in un file aperto in modalità Unicode prevedono buffer contenenti dati UTF-16 archiviati come tipo `wchar_t`. Se il file è codificato come UTF-8, i dati UTF-16 vengono tradotti in UTF-8 alla scrittura e il contenuto del file codificato in UTF-8 viene tradotto in UTF-16 alla lettura. Un tentativo di lettura o scrittura di un numero dispari di byte in modalità Unicode causerà un errore di [convalida del parametro](../../c-runtime-library/parameter-validation.md) . Per leggere o scrivere dati archiviati nel programma come UTF-8, usare una modalità file di testo o binaria al posto della modalità Unicode. Eventuali traduzioni della codifica vanno gestite dall'utente.  
  
 Se il file esiste già e viene aperto per la lettura o l'aggiunta, l'indicatore ordine byte (BOM), se presente nel file, determina la codifica. La codifica dell'indicatore ordine byte ha la precedenza sulla codifica specificata dal flag `ccs` . La codifica `ccs` viene usata solo se nessun indicatore ordine byte è presente o il file è nuovo.  
  
> [!NOTE]
>  Il rilevamento di indicatori ordine byte si applica solo ai file aperti in modalità Unicode (ovvero passando il flag `ccs` ).  
  
 Nella tabella seguente vengono riepilogate le modalità usate per vari flag `ccs` forniti a `fopen` e agli indicatori per l'ordine dei byte nel file.  
  
### <a name="encodings-used-based-on-ccs-flag-and-bom"></a>Codifiche usate in base a flag ccs e indicatore ordine byte  
  
|Flag di`ccs` |Nessun indicatore ordine byte (o file nuovo)|Indicatore ordine byte (BOM): UTF-8|Indicatore ordine byte (BOM): UTF-16|  
|----------------|----------------------------|-----------------|------------------|  
|`UNICODE`|`UTF-16LE`|`UTF-8`|`UTF-16LE`|  
|`UTF-8`|`UTF-8`|`UTF-8`|`UTF-16LE`|  
|`UTF-16LE`|`UTF-16LE`|`UTF-8`|`UTF-16LE`|  
  
 I file aperti per la scrittura in modalità Unicode dispongono di un indicatore ordine byte scritto automaticamente in tali file.  
  
 Se `mode` è "`a, ccs=<encoding>`", `fopen` prova prima di tutto ad aprire il file usando l'accesso sia in lettura che in scrittura. Se questa operazione ha esito positivo, la funzione legge l'indicatore ordine byte per determinare la codifica del file. Se l'operazione non riesce, la funzione usa la codifica predefinita per il file. In entrambi i casi `fopen` riaprirà il file con l'accesso di sola scrittura. Si applica solo alla modalità `a` , non alla modalità `a+` .  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tfopen`|`fopen`|`fopen`|`_wfopen`|  
  
 La stringa di caratteri `mode` specifica il tipo di accesso richiesto per il file, come segue.  
  
 `"r"`  
 Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata a `fopen` avrà esito negativo.  
  
 `"w"`  
 Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.  
  
 `"a"`  
 Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore di fine file (EOF) prima che nuovi dati vengano scritti sul file. Creare il file se è inesistente.  
  
 `"r+"`  
 Viene aperto per la lettura e la scrittura. Il file deve esistere.  
  
 `"w+"`  
 Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente.  
  
 `"a+"`  
 Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore di EOF prima che nuovi dati vengano scritti sul file. Il marcatore EOF non viene ripristinato dopo il completamento della scrittura. Creare il file se è inesistente.  
  
 Quando un file viene aperto usando il tipo di accesso `"a"` o il tipo di accesso `"a+"` , tutte le operazioni di scrittura si verificano alla fine del file. Il puntatore del file può essere riposizionato usando `fseek` o `rewind`, ma viene sempre spostato di nuovo alla fine del file prima dell'esecuzione di qualsiasi operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti.  
  
 La modalità `"a"` non rimuove il marcatore EOF prima dell'aggiunta al file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non i eventualmente aggiunti al file. La modalità `"a+"` rimuove il marcatore EOF prima dell'aggiunta al file. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. La modalità `"a+"` è necessaria per l'aggiunta a un file di flusso terminato con il marcatore EOF CTRL+Z.  
  
 Quando il tipo di accesso `"r+"`, `"w+"`o `"a+"` viene specificato, sono consentite sia la lettura che la scrittura (il file viene definito aperto per "l'aggiornamento"). Tuttavia, quando si passa dalla lettura alla scrittura, l'operazione di input deve rilevare un marcatore EOF. Se non esiste alcun EOF, è necessario usare una nuova chiamata a una funzione di posizionamento dei file. Le funzioni di posizionamento dei file sono `fsetpos`, `fseek`e `rewind`. Quando si passa dalla scrittura alla lettura, è necessario usare una nuova chiamata a `fflush` o a una funzione di posizionamento dei file.  
  
 Oltre ai valori iniziali, è possibile aggiungere i caratteri seguenti a `mode` per specificare la modalità di conversione per i caratteri di nuova riga.  
  
 `t`  
 Aprire in modalità testo (convertita). In questa modalità l'input di CTRL+Z viene interpretato come carattere EOF. Nei file aperti per la lettura/scrittura con `"a+"`, `fopen` verifica la presenza della combinazione CTRL+Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso di `fseek` e `ftell` per spostarsi all'interno di un file che termina con CTRL+Z può causare un comportamento non corretto di `fseek` in prossimità della fine del file.  
  
 In modalità testo, combinazioni di ritorno a capo-avanzamento di riga restituito vengono convertite in singoli avanzamenti di riga nell'input e caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo-avanzamento di riga restituito nell'output. Quando una funzione Unicode di I/O flusso viene eseguita in modalità testo (impostazione predefinita), si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte. Di conseguenza, le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla funzione `mbtowc` . Per qualche motivo, le funzioni Unicode di output flusso convertono i caratteri "wide" in caratteri multibyte, come se fosse una chiamata alla funzione `wctomb` .  
  
 `b`  
 Aprire in modalità binaria (non convertita). Le conversioni che includono caratteri di ritorno a capo e avanzamento riga vengono eliminate.  
  
 Se `t` o `b` non è specificato in `mode`, la modalità di traduzione predefinita è definita dalla variabile globale [_fmode](../../c-runtime-library/fmode.md). Se `t` o `b` è il prefisso dell'argomento, la funzione ha esito negativo e restituisce `NULL`.  
  
 Per altre informazioni su come usare le modalità binaria e di testo in formato Unicode e I/O flusso multibyte, vedere [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [Unicode Stream I/O in Text and Binary Modes](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).  
  
 `c`  
 Abilitare il flag commit per `filename` associato, in modo da scrivere il contenuto del buffer di file direttamente su disco se viene chiamato `fflush` o `_flushall` .  
  
 `n`  
 Reimpostare il flag commit per `filename` associato su "no-commit". Questa è l'impostazione predefinita. Esegue inoltre l'override del flag commit globale se il programma viene collegato a COMMODE.OBJ. L'impostazione predefinita del flag commit globale è "no-commit", a meno che il programma venga collegato in modo esplicito a COMMODE.OBJ (vedere [Link Options](../../c-runtime-library/link-options.md)).  
  
 `N`  
 Specifica che il file non viene ereditato dai processi figlio.  
  
 `S`  
 Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco.  
  
 `R`  
 Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco.  
  
 `T`  
 Specifica un file come temporaneo. Se possibile, non viene scaricato su disco.  
  
 `D`  
 Specifica un file come temporaneo. Viene eliminato quando viene chiuso l'ultimo puntatore del file.  
  
 `ccs=ENCODING`  
 Specifica il set di caratteri codificati da usare (`UTF-8`, `UTF-16LE`o `UNICODE`) per il file. Lasciare non specificato se si vuole la codifica ANSI.  
  
 I caratteri validi per la stringa `mode` usata in `fopen` e `_fdopen` corrispondono ad argomenti `oflag` usati in [_open](../../c-runtime-library/reference/open-wopen.md) e [_sopen](../../c-runtime-library/reference/sopen-wsopen.md), come segue.  
  
|Caratteri nella stringa mode|Valore `oflag` equivalente per `_open`/`_sopen`|  
|-------------------------------|----------------------------------------------------|  
|`a`|`_O_WRONLY &#124; _O_APPEND` (in genere `_O_WRONLY &#124; _O_CREAT &#124; _O_APPEND`)|  
|`a+`|`_O_RDWR &#124; _O_APPEND` (in genere `_O_RDWR &#124; _O_APPEND &#124; _O_CREAT` )|  
|`r`|`_O_RDONLY`|  
|`r+`|`_O_RDWR`|  
|`w`|`_O_WRONLY` (in genere `_O_WRONLY &#124; _O_CREAT &#124; _O_TRUNC`)|  
|`w+`|`_O_RDWR` (in genere `_O_RDWR &#124; _O_CREAT &#124; _O_TRUNC`)|  
|`b`|`_O_BINARY`|  
|`t`|`_O_TEXT`|  
|`c`|Nessuno|  
|`n`|Nessuno|  
|`S`|`_O_SEQUENTIAL`|  
|`R`|`_O_RANDOM`|  
|`T`|`_O_SHORTLIVED`|  
|`D`|`_O_TEMPORARY`|  
|`ccs=UNICODE`|`_O_WTEXT`|  
|`ccs=UTF-8`|`_O_UTF8`|  
|`ccs=UTF-16LE`|`_O_UTF16`|  
  
 Se si usa la modalità `rb` , non è necessario trasferire il codice e si vuole leggere la maggior parte di un file di grandi dimensioni o le prestazioni di rete non costituiscono un problema, è inoltre consigliabile considerare se usare come opzione file Win32 mappati in memoria.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fopen`|\<stdio.h>|  
|`_wfopen`|\<stdio.h> o \<wchar.h>|  
  
 `_wfopen` è un'estensione Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).  
  
 Le opzioni `c`, `n`, `t`, `S`, `R`, `T`e `D` `mode` sono estensioni Microsoft per `fopen` e `_fdopen` e should not be used where ANSI portability is desired.  
  
## <a name="example"></a>Esempio  
 Il seguente programma apre due file.  Usa `fclose` per chiudere il primo file e `_fcloseall` per chiudere tutti i file rimanenti.  
  
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
  
## <a name="example"></a>Esempio  
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
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [fclose, _fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [_fdopen, _wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [_fileno](../../c-runtime-library/reference/fileno.md)   
 [freopen, _wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_setmode](../../c-runtime-library/reference/setmode.md)   
 [_sopen, _wsopen](../../c-runtime-library/reference/sopen-wsopen.md)