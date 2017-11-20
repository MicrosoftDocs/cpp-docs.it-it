---
title: fopen_s, _wfopen_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
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
dev_langs: C++
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
caps.latest.revision: "41"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 49a884b8ae4ea34c02a0ca57563077add4d9d6fa
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="fopens-wfopens"></a>fopen_s, _wfopen_s
Apre un file. Queste versioni di [fopen, wfopen](../../c-runtime-library/reference/fopen-wfopen.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
  
#### <a name="parameters"></a>Parametri  
 [out] `pFile`  
 Puntatore al puntatore del file che riceverà il puntatore al file aperto.  
  
 [in] `filename`  
 Filename.  
  
 [in] `mode`  
 Tipo di accesso consentito.  
  
## <a name="return-value"></a>Valore restituito  
 Zero se con esito positivo; un codice di errore in caso di errore. Per altre informazioni su questi codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
### <a name="error-conditions"></a>Condizioni di errore  
  
|`pFile`|`filename`|`mode`|Valore restituito|Contenuto di `pFile`|  
|-------------|----------------|------------|------------------|------------------------|  
|`NULL`|any|qualsiasi|`EINVAL`|non modificato|  
|any|`NULL`|qualsiasi|`EINVAL`|non modificato|  
|any|any|NULL|`EINVAL`|non modificato|  
  
## <a name="remarks"></a>Note  
 I file aperti da `fopen_s` e da `_wfopen_s` non sono condivisibili. Se è necessario che un file sia condivisibile, usare [_fsopen, _wfsopen](../../c-runtime-library/reference/fsopen-wfsopen.md) con la costante di modalità di condivisione appropriata, ad esempio `_SH_DENYNO` per la condivisione in lettura/scrittura.  
  
 La funzione `fopen_s` apre il file specificato da `filename`. `_wfopen_s` è una versione a caratteri "wide" di `fopen_s`. Gli argomenti per `_wfopen_s` sono stringhe a caratteri "wide". In caso contrario, `_wfopen_s` e `fopen_s` si comportano in modo identico.  
  
 `fopen_s` accetta percorsi validi nel file system in corrispondenza del punto di esecuzione. Percorsi UNC e percorsi che coinvolgono le unità di rete mappate vengono accettati da `fopen_s` a condizione che il sistema che esegue il codice abbia accesso alla condivisione o a un'unità di rete mappata al momento dell'esecuzione. Quando si creano i percorsi per `fopen_s`, non dare per scontato che le unità, i percorsi o le condivisioni di rete saranno disponibili nell'ambiente di esecuzione. È possibile usare barre (/) o barre rovesciate (\\) come separatori di directory in un percorso.  
  
 Queste funzioni convalidano i relativi parametri. Se `pFile`, `filename` o `mode` è un puntatore Null, queste funzioni generano un'eccezione di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Controllare sempre il valore restituito per verificare se la funzione è stata completata prima di eseguire eventuali altre operazioni sul file. Se si verifica un errore, viene restituito il codice di errore e la variabile globale `errno` viene impostata. Per altre informazioni vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="unicode-support"></a>Supporto Unicode  
 `fopen_s` supporta flussi di file di Unicode. Per aprire un file Unicode nuovo e esistente, passare un flag `ccs` che specifica la codifica voluta a `fopen_s`:  
  
 `fopen_s(&fp, "newfile.txt", "rw, ccs=`*codifica*`");`  
  
 I valori consentiti di *codifica* sono `UNICODE`, `UTF-8`, e `UTF-16LE`. Se si è specificato alcun valore per *codifica*, `fopen_s` Usa la codifica ANSI.  
  
 Se il file esiste già e viene aperto per la lettura o l'aggiunta, indicatore per l'ordine dei byte (BOM, Byte Order Mark), se presente nel file, determina la codifica. La codifica dell'indicatore per l'ordine dei byte ha la precedenza sulla codifica specificata dal flag `ccs`. La codifica `ccs` viene usata solo se nessun indicatore per l'ordine dei byte è presente o il file è nuovo.  
  
> [!NOTE]
>  Il rilevamento di indicatori per l'ordine dei byte si applica solo ai file aperti in modalità Unicode (ovvero passando il flag `ccs`).  
  
 Nella tabella seguente vengono riepilogate le modalità usate per vari flag `ccs` forniti a `fopen_s` e per gli indicatori per l'ordine dei byte nel file.  
  
### <a name="encodings-used-based-on-ccs-flag-and-bom"></a>Codifiche usate in base a flag ccs e indicatore ordine byte  
  
|Flag di`ccs` |Nessun indicatore ordine byte (o file nuovo)|Indicatore ordine byte (BOM): UTF-8|Indicatore ordine byte (BOM): UTF-16|  
|----------------|----------------------------|-----------------|------------------|  
|`UNICODE`|`UTF-16LE`|`UTF-8`|`UTF-16LE`|  
|`UTF-8`|`UTF-8`|`UTF-8`|`UTF-16LE`|  
|`UTF-16LE`|`UTF-16LE`|`UTF-8`|`UTF-16LE`|  
  
 I file aperti per la scrittura in modalità Unicode dispongono di un indicatore per l'ordine dei byte scritto automaticamente in tali file.  
  
 Se `mode` è ", a ccs =*codifica*", `fopen_s` tenta innanzitutto di aprire il file con accesso in lettura e scrittura. Se ha esito positivo, la funzione legge l'indicatore per l'ordine dei byte per determinare la codifica del file. In caso contrario, la funzione usa la codifica predefinita per il file. In entrambi i casi, `fopen_s` riaprirà quindi il file con accesso di sola scrittura. Si applica solo alla modalità `a`, non alla modalità `a+`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tfopen_s`|`fopen_s`|`fopen_s`|`_wfopen_s`|  
  
 La stringa di caratteri `mode` specifica il tipo di accesso richiesto per il file, come illustrato di seguito.  
  
 `"r"`  
 Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata a `fopen_s` avrà esito negativo.  
  
 `"w"`  
 Apre un file vuoto per la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente.  
  
 `"a"`  
 Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore EOF prima della scrittura di nuovi dati sul file. Creare il file se non esiste.  
  
 `"r+"`  
 Viene aperto per la lettura e la scrittura. Il file deve esistere.  
  
 `"w+"`  
 Apre un file vuoto per la lettura e la scrittura. Se il file esiste, il contenuto viene eliminato in modo permanente.  
  
 `"a+"`  
 Viene aperto per la lettura e l'aggiunta. L'operazione di aggiunta comporta la rimozione del marcatore EOF prima che nuovi dati vengano scritti sul file e il marcatore EOF viene ripristinato dopo il completamento della scrittura. Creare il file se non esiste.  
  
 Quando un file viene aperto con il tipo di accesso `"a"` o `"a+"`, tutte le operazioni di scrittura vengono eseguite alla fine del file. Il puntatore del file può essere riposizionato usando `fseek` o `rewind`, ma viene sempre spostato di nuovo alla fine del file prima dell'esecuzione di eventuali operazioni di scrittura in modo che non sia possibile sovrascrivere dati esistenti.  
  
 La modalità `"a"` non rimuove il marcatore EOF prima dell'aggiunta del file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non eventuali dati aggiunti al file. La modalità `"a+"` rimuove il marcatore EOF prima di aggiungere il file. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. La modalità `"a+"` è necessaria per l'aggiunta a un file di flusso terminato usando il marcatore EOF CTRL+Z.  
  
 Quando il `"r+"`, `"w+",` o `"a+"` viene specificato il tipo di accesso, la lettura e scrittura sono consentite. Il file viene definito aperto per "l'aggiornamento". Tuttavia, quando si passa dalla lettura alla scrittura, l'operazione di input deve rilevare un marcatore EOF. Se non esiste alcun EOF, è necessario usare una nuova chiamata a una funzione di posizionamento di file. Le funzioni di posizionamento di file sono `fsetpos`, `fseek` e `rewind`. Quando si passa dalla scrittura alla lettura, è necessario usare una nuova chiamata a `fflush` o a una funzione di posizionamento di file.  
  
 Oltre ai valori specificati sopra, è anche possibile includere i caratteri seguenti in `mode` per specificare la modalità di conversione per i caratteri di nuova riga:  
  
 `t`  
 Aprire in modalità testo (convertita). In questo modo, CTRL+Z viene interpretato nell'input come un carattere di fine file. Nei file aperti per la lettura/scrittura con `"a+"`, `fopen_s` verifica la presenza della combinazione CTRL+Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso di `fseek` e `ftell` per spostarsi all'interno di un file che termina con CTRL+Z può causare un comportamento non corretto di `fseek` in prossimità della fine del file.  
  
 Inoltre, in modalità testo, combinazioni di ritorno a capo-avanzamento di riga restituito vengono convertite in singoli avanzamenti di riga nell'input e caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo-avanzamento di riga restituito nell'output. Quando una funzione Unicode di I/O flusso viene eseguita in modalità testo (impostazione predefinita), si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte. Di conseguenza, le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla funzione `mbtowc` . Per qualche motivo, le funzioni Unicode di output flusso convertono i caratteri "wide" in caratteri multibyte, come se fosse una chiamata alla funzione `wctomb` .  
  
 `b`  
 Aprire in modalità binaria (non convertita). Le conversioni che includono caratteri di ritorno a capo e avanzamento riga vengono eliminate.  
  
 Se `t` o `b` non è specificato in `mode`, la modalità di traduzione predefinita è definita dalla variabile globale [_fmode](../../c-runtime-library/fmode.md). Se `t` o `b` è il prefisso dell'argomento, la funzione ha esito negativo e restituisce `NULL`.  
  
 Per altre informazioni sull'uso delle modalità testo e binaria per I/O di flusso Unicode e multibyte, vedere [I/O file in modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).  
  
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
 Specificare il set di caratteri da usare (UTF-8, UTF-16LE e UNICODE) per questo file. Lasciarlo non specificato se si vuole la codifica ANSI.  
  
 I caratteri validi per la stringa `mode` usata in `fopen_s` e `_fdopen` corrispondono agli argomenti `oflag` usati in [_open](../../c-runtime-library/reference/open-wopen.md) e [_sopen](../../c-runtime-library/reference/sopen-wsopen.md), come segue.  
  
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
  
 Se si usa `rb`, non sarà necessario trasferire il codice e non si dovrà prevedere la lettura di una grande quantità di file e/o non ci si dovrà preoccupare delle prestazioni della rete, i file Win32 mappati in memoria potrebbero essere anche un'opzione.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fopen_s`|\<stdio.h>|  
|`_wfopen_s`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
 Le opzioni `c`, `n` e `t` `mode` sono estensioni Microsoft per `fopen_s` e `_fdopen` e non devono essere usate quando è richiesta la portabilità ANSI.  
  
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
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fclose, _fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [_fdopen, _wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [_fileno](../../c-runtime-library/reference/fileno.md)   
 [freopen, _wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_setmode](../../c-runtime-library/reference/setmode.md)