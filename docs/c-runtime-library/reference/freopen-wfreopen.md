---
title: freopen, _wfreopen | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- freopen
- _wfreopen
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
- _wfreopen
- _tfreopen
- freopen
dev_langs:
- C++
helpviewer_keywords:
- _wfreopen function
- file pointers [C++], reassigning
- _tfreopen function
- freopen function
- tfreopen function
- wfreopen function
ms.assetid: de4b73f8-1043-4d62-98ee-30d2022da885
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 49f1e2cd11606d2ebe53281a9d2f1d27533b4068
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="freopen-wfreopen"></a>freopen, _wfreopen
Riassegna un puntatore del file. Sono disponibili versioni più sicure di queste funzioni. Vedere [freopen_s, _wfreopen_s](../../c-runtime-library/reference/freopen-s-wfreopen-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
FILE *freopen(   
   const char *path,  
   const char *mode,  
   FILE *stream   
);  
FILE *_wfreopen(   
   const wchar_t *path,  
   const wchar_t *mode,  
   FILE *stream   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `path`  
 Percorso del nuovo file.  
  
 `mode`  
 Tipo di accesso consentito.  
  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore al nuovo file aperto. Se si verifica un errore, il file originale viene chiuso e la funzione restituisce un valore del puntatore `NULL`. Se `path`, `mode` o `stream` è un puntatore Null o se `filename` è una stringa vuota, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono `NULL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Sono disponibili versioni più sicure di queste funzioni, vedere [freopen_s, _wfreopen_s](../../c-runtime-library/reference/freopen-s-wfreopen-s.md).  
  
 Il `freopen` funzione chiude il file attualmente associato `stream` e riassegna `stream` per il file specificato da `path`. `_wfreopen` è una versione a caratteri wide di `_freopen`. Gli argomenti per `path` e `mode` per `_wfreopen` sono stringhe a caratteri wide. In caso contrario, `_wfreopen` e `_freopen` si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tfreopen`|`freopen`|`freopen`|`_wfreopen`|  
  
 `freopen` è in genere usato per reindirizzare i file già aperti `stdin`, `stdout` e `stderr` ai file specificati dall'utente. Il nuovo file associato `stream` viene aperto con `mode`, che è una stringa di caratteri che specifica il tipo di accesso richiesto per il file, come indicato di seguito:  
  
 `"r"`  
 Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata a `freopen` avrà esito negativo.  
  
 `"w"`  
 Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.  
  
 `"a"`  
 Viene aperto per la scrittura alla fine del file (aggiunta) senza rimuovere il marcatore EOF prima della scrittura di nuovi dati sul file; crea prima il file se non esiste.  
  
 `"r+"`  
 Viene aperto per la lettura e la scrittura. Il file deve esistere.  
  
 `"w+"`  
 Apre un file vuoto per la lettura e la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.  
  
 `"a+"`  
 Apre per operazioni di lettura e aggiunta; l'operazione di aggiunta comporta la rimozione del marcatore EOF prima che nuovi dati vengano scritti sul file e il marcatore EOF venga ripristinato dopo il completamento della scrittura; crea prima il file se non esiste.  
  
 Usa i tipi `"w"` e `"w+"` con cautela, poiché possono distruggere i file esistenti.  
  
 Quando un file viene aperto con il tipo di accesso `"a"` o `"a+"`, tutte le operazioni di scrittura si verificano alla fine del file. Sebbene il puntatore del file possa essere riposizionato usando `fseek` o `rewind`, viene sempre spostato di nuovo alla fine del file prima dell'esecuzione di qualsiasi operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti.  
  
 La modalità `"a"` non rimuove il marcatore EOF prima dell'aggiunta del file. Una volta eseguita l'aggiunta, con il comando MS-DOS TYPE vengono visualizzati solo i dati fino al marcatore EOF originale e non i eventualmente aggiunti al file. La modalità `"a+"` rimuove il marcatore EOF prima di aggiungere il file. Dopo l'aggiunta, il comando MS-DOS TYPE visualizza tutti i dati nel file. La modalità `"a+"` è necessaria per l'aggiunta a un file di flusso terminato con il marcatore EOF CTRL+Z.  
  
 Quando il tipo di accesso `"r+"`, `"w+"` o `"a+"` viene specificato, sono consentite sia la lettura che la scrittura (il file viene definito aperto per "l'aggiornamento"). Tuttavia, quando si passa da lettura a scrittura, deve esserci un'operazione [fsetpos](../../c-runtime-library/reference/fsetpos.md), [fseek](../../c-runtime-library/reference/fseek-fseeki64.md) o [rewind](../../c-runtime-library/reference/rewind.md) intermedia. È possibile specificare la posizione corrente per l'operazione `fsetpos` o `fseek`, se necessario. Oltre ai valori specificati sopra, è possibile includere uno dei caratteri seguenti nella stringa `mode` per specificare la modalità di conversione per le nuove righe.  
  
 `t`  
 Aprire in testo (convertita) modalità; combinazioni di ritorno a capo ritorno-avanzamento riga (CR-LF) vengono convertite in caratteri singoli avanzamenti di riga (LF) un input; I caratteri vengono convertiti in combinazioni CR-LF nell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura o per la lettura e scrittura con `"a+"` la libreria di runtime verifica la presenza di una combinazione CTRL+Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso di `fseek` e `ftell` per spostarsi all'interno di un file può causare un comportamento non corretto di `fseek` in prossimità della fine del file. L'opzione `t` è un'estensione Microsoft che non deve essere usata dove si desidera la portabilità ANSI.  
  
 `b`  
 Apre in modalità binaria (nessuna conversione); le conversioni sopra indicate vengono eliminate.  
  
 Se `t` o `b` non è specificato in `mode`, la modalità di traduzione predefinita è definita dalla variabile globale [_fmode](../../c-runtime-library/fmode.md). Se `t` o `b` è il prefisso dell'argomento, la funzione ha esito negativo e restituisce `NULL`.  
  
 Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`freopen`|\<stdio.h>|  
|`_wfreopen`|\<stdio.h> o \<wchar.h>|  
  
 La console non è supportata nelle app di piattaforma UWP (Universal Windows). L'handle del flusso standard associati con la console,`stdin`, `stdout`, e `stderr`, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_freopen.c  
// compile with: /W3  
// This program reassigns stderr to the file  
// named FREOPEN.OUT and writes a line to that file.  
#include <stdio.h>  
#include <stdlib.h>  
  
FILE *stream;  
  
int main( void )  
{  
   // Reassign "stderr" to "freopen.out":   
   stream = freopen( "freopen.out", "w", stderr ); // C4996  
   // Note: freopen is deprecated; consider using freopen_s instead  
  
   if( stream == NULL )  
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
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fclose, _fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [_fdopen, _wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [_fileno](../../c-runtime-library/reference/fileno.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_setmode](../../c-runtime-library/reference/setmode.md)