---
title: _fdopen, _wfdopen | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _fdopen
- _wfdopen
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
apitype: DLLExport
f1_keywords:
- _tfdopen
- _fdopen
- _wfdopen
- wfdopen
- tfdopen
dev_langs:
- C++
helpviewer_keywords:
- wfdopen function
- _fdopen function
- _wfdopen function
- tfdopen function
- fdopen function
- _tfdopen function
- streams, associating with files
ms.assetid: 262757ff-1e09-4472-a5b6-4325fc28f971
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 3efc15f9d9fa6544ad7af2c3809ee6562b7f36e0
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="fdopen-wfdopen"></a>_fdopen, _wfdopen
Associa un flusso a un file che è stato precedentemente aperto per I/O di basso livello.  
  
## <a name="syntax"></a>Sintassi  
  
```  
FILE *_fdopen(    
   int fd,  
   const char *mode   
);  
FILE *_wfdopen(   
   int fd,  
   const wchar_t *mode   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `fd`  
 Descrittore di file del file aperto.  
  
 `mode`  
 Tipo di accesso ai file.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore al flusso aperto. Un valore di puntatore Null indica un errore. Quando si verifica un errore, viene richiamato il gestore dei parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EBADF`, che indica un descrittore del file non valido, o su `EINVAL`, che indica che `mode` era un puntatore null.  
  
 Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `_fdopen` associa un flusso di I/O al file identificato da `fd` e pertanto consente che un file aperto per I/O di basso livello sia memorizzato nel buffer e formattato. `_wfdopen` è una versione a caratteri wide di `_fdopen`; l'argomento `mode` in `_wfdopen` è una stringa di caratteri wide. In caso contrario, `_wfdopen` e `_fdopen` si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tfdopen`|`_fdopen`|`_fdopen`|`_wfdopen`|  
  
 La stringa di caratteri `mode` specifica il tipo di file e di accesso ai file.  
  
 La stringa di caratteri `mode` specifica il tipo di accesso richiesto per il file, come mostrato nella tabella seguente.  
  
 `"r"`  
 Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata a `fopen` avrà esito negativo.  
  
 `"w"`  
 Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.  
  
 `"a"`  
 Verrà aperto per la scrittura alla fine del file (aggiunta). Creare il file se è inesistente.  
  
 `"r+"`  
 Viene aperto per la lettura e la scrittura. Il file deve esistere.  
  
 `"w+"`  
 Apre un file vuoto per la lettura e la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.  
  
 `"a+"`  
 Viene aperto per la lettura e l'aggiunta. Creare il file se è inesistente.  
  
 Quando un file viene aperto con il tipo di accesso `"a"` o `"a+"`, tutte le operazioni di scrittura si verificano alla fine del file. Il puntatore del file può essere riposizionato usando `fseek` o `rewind`, ma viene sempre spostato di nuovo alla fine del file prima dell'esecuzione di qualsiasi operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti. Quando il tipo di accesso `"r+"`, `"w+"` o `"a+"` viene specificato, sono consentite sia la lettura che la scrittura (il file viene definito aperto per "l'aggiornamento"). Tuttavia, quando si passa da lettura a scrittura, deve esserci una nuova operazione `fflush`, `fsetpos`, `fseek` o `rewind`. È possibile specificare la posizione corrente per l'operazione `fsetpos` o `fseek`, se si desidera.  
  
 Oltre ai valori specificati sopra, è anche possibile includere i caratteri seguenti in `mode` per specificare la modalità di conversione per i caratteri di nuova riga.  
  
 `t`  
 Aprire in modalità testo (convertita). In questa modalità, le combinazioni di ritorno a capo-avanzamento di riga (CR-LF) vengono convertite in un avanzamento riga (LF) al momento dell'input e i caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo-avanzamento di riga (CR-LF) al momento dell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura/scrittura, `fopen` verifica la presenza della combinazione CTRL+Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'utilizzo delle funzioni `fseek` e `ftell` per spostarsi all'interno di un file che termina con CTRL+Z potrebbe causare un comportamento non corretto di `fseek` in prossimità della fine del file.  
  
 `b`  
 Aprire in modalità binaria (non convertita). Tutte le conversioni dalla modalità `t` vengono eliminate.  
  
 `c`  
 Abilitare il flag commit per `filename` associato, in modo da scrivere il contenuto del buffer di file direttamente su disco se viene chiamato `fflush` o `_flushall` .  
  
 `n`  
 Reimpostare il flag commit per `filename` associato su "no-commit". Questa è l'impostazione predefinita. Esegue inoltre l'override del flag commit globale se il programma viene collegato a Commode.obj. L'impostazione predefinita del flag commit globale è "no-commit", a meno che il programma venga collegato in modo esplicito a Commode.obj.  
  
 Le opzioni `t`, `c` e `n` `mode` sono estensioni Microsoft per `fopen` e `_fdopen`. Non usarle se si desidera mantenere la portabilità ANSI.  
  
 Se `t` o `b` non è specificato in `mode`, la modalità di traduzione predefinita viene definita dalla variabile globale [_fmode](../../c-runtime-library/fmode.md). Se `t` o `b` è il prefisso dell'argomento, la funzione ha esito negativo e restituisce `NULL`. Per una discussione sulle modalità testo e binaria, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).  
  
 I caratteri validi per la stringa `mode` usata in `fopen` e `_fdopen` corrispondono ad argomenti `oflag` usati in [_open](../../c-runtime-library/reference/open-wopen.md) e [_sopen](../../c-runtime-library/reference/sopen-wsopen.md), come segue.  
  
|Caratteri nella stringa `mode`|Valore `oflag` equivalente per `_open`/`_sopen`|  
|---------------------------------|---------------------------------------------------|  
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
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_fdopen`|\<stdio.h>|  
|`_wfdopen`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fdopen.c  
// This program opens a file by using low-level  
// I/O, then uses _fdopen to switch to stream  
// access. It counts the lines in the file.  
  
#include <stdlib.h>  
#include <stdio.h>  
#include <fcntl.h>  
#include <io.h>  
#include <share.h>  
  
int main( void )  
{  
   FILE *stream;  
   int  fd, count = 0;  
   char inbuf[128];  
  
   // Open a file.  
   if( _sopen_s( &fd, "crt_fdopen.txt", _O_RDONLY, _SH_DENYNO, 0 ) )  
      exit( 1 );  
  
   // Get stream from file descriptor.  
   if( (stream = _fdopen( fd, "r" )) == NULL )  
      exit( 1 );  
  
   while( fgets( inbuf, 128, stream ) != NULL )  
      count++;  
  
   // After _fdopen, close by using fclose, not _close.  
   fclose( stream );  
   printf( "Lines in file: %d\n", count );  
}  
```  
  
## <a name="input-crtfdopentxt"></a>Input: crt_fdopen.txt  
  
```  
Line one  
Line two  
```  
  
### <a name="output"></a>Output  
  
```  
Lines in file: 2  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [_dup, _dup2](../../c-runtime-library/reference/dup-dup2.md)   
 [fclose, _fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, _wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)
