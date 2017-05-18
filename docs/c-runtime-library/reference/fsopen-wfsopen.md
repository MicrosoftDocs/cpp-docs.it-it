---
title: _fsopen, _wfsopen | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wfsopen
- _fsopen
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
- wfsopen
- fsopen
- tfsopen
- _tfsopen
- _wfsopen
- _fsopen
dev_langs:
- C++
helpviewer_keywords:
- opening files, streams
- fsopen function
- tfsopen function
- wfsopen function
- _fsopen function
- files [C++], opening
- _tfsopen function
- _wfsopen function
- file sharing [C++]
ms.assetid: 5e4502ab-48a9-4bee-a263-ebac8d638dec
caps.latest.revision: 20
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
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: c53bdd4bdd5d6707e6da15def20b6375dcf6e0dd
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="fsopen-wfsopen"></a>_fsopen, _wfsopen
Apre un flusso con la condivisione di file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
FILE *_fsopen(   
   const char *filename,  
   const char *mode,  
   int shflag   
);  
FILE *_wfsopen(   
   const wchar_t *filename,  
   const wchar_t *mode,  
   int shflag   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `filename`  
 Nome del file da aprire.  
  
 `mode`  
 Tipo di accesso consentito.  
  
 `shflag`  
 Tipo di condivisione consentita.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore al flusso. Un valore di puntatore Null indica un errore. Se `filename` o `mode` è `NULL` o una stringa vuota, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `NULL` e impostano `errno` su `EINVAL`.  
  
 Per altre informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `_fsopen` apre il file specificato in base al `filename` come un flusso e prepara il file per una successiva lettura o scrittura condivisa, come definito dal modo e dagli argomenti `shflag`. `_wfsopen` è una versione a caratteri wide di `_fsopen`. Gli argomenti per `filename` e `mode` per `_wfsopen` sono stringhe a caratteri wide. In caso contrario, `_wfsopen` e `_fsopen` si comportano in modo identico.  
  
 La stringa di caratteri `mode` specifica il tipo di accesso richiesto per il file, come mostrato nella tabella seguente.  
  
|Termine|Definizione|  
|----------|----------------|  
|`"r"`|Viene aperto per la lettura. Se il file non esiste o non viene trovato, la chiamata a `_fsopen` avrà esito negativo.|  
|`"w"`|Apre un file vuoto per la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.|  
|`"a"`|Viene aperto in scrittura alla fine del file (aggiunta); crea prima il file se non esiste.|  
|`"r+"`|Viene aperto per la lettura e la scrittura. Il file deve esistere.|  
|`"w+"`|Apre un file vuoto per la lettura e la scrittura. Se il file specificato esiste, il contenuto viene eliminato in modo permanente.|  
|`"a+"`|Viene aperto in lettura e aggiunta; crea prima il file se non esiste.|  
  
 Usa i tipi `"w"` e `"w+"` con cautela, poiché possono distruggere i file esistenti.  
  
 Quando un file viene aperto con il tipo di accesso `"a"` o `"a+"`, tutte le operazioni di scrittura si verificano alla fine del file. Il puntatore del file può essere riposizionato usando `fseek` o `rewind`, ma viene sempre spostato di nuovo alla fine del file prima dell'esecuzione di qualsiasi operazione di scrittura. Di conseguenza, i dati esistenti non possono essere sovrascritti. Quando il tipo di accesso `"r+"`, `"w+"` o `"a+"` viene specificato, sono consentite sia la lettura che la scrittura (il file viene definito aperto per l'aggiornamento). Tuttavia, quando si passa da lettura a scrittura, deve esserci un'operazione [fsetpos](../../c-runtime-library/reference/fsetpos.md), [fseek](../../c-runtime-library/reference/fseek-fseeki64.md) o [rewind](../../c-runtime-library/reference/rewind.md) intermedia. È possibile specificare la posizione corrente per l'operazione `fsetpos` o `fseek`, se necessario. Oltre ai valori specificati sopra, è possibile includere uno dei caratteri seguenti in `mode` per specificare la modalità di conversione per le nuove righe e per la gestione file.  
  
|Termine|Definizione|  
|----------|----------------|  
|`t`|Apre un file in modalità testo (convertito). In questa modalità, combinazioni di ritorno a capo return-line feed (CR-LF) vengono convertite in singolo avanzamento riga (LF) nell'input e i caratteri vengono convertiti in combinazioni CR-LF nell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura o lettura/scrittura, `_fsopen` verifica la presenza di una combinazione CTRL+Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'uso di `fseek` e `ftell` per spostarsi all'interno di un file che termina con una combinazione CTRL+Z può causare un comportamento non corretto di `fseek` in prossimità della fine del file.|  
|`b`|Apre un file in modalità binaria (nessuna conversione); le conversioni sopra indicate vengono eliminate.|  
|`S`|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso sequenziale dal disco.|  
|`R`|Specifica che la memorizzazione nella cache è ottimizzata, ma non limitata, per l'accesso casuale dal disco.|  
|`T`|Specifica un file come temporaneo. Se possibile, non viene scaricato su disco.|  
|`D`|Specifica un file come temporaneo. Viene eliminato quando viene chiuso l'ultimo puntatore del file.|  
  
 Se `t` o `b` non è specificato in `mode`, la modalità di traduzione predefinita è definita dalla variabile `_fmode` della modalità predefinita. Se `t` o `b` è il prefisso dell'argomento, la funzione ha esito negativo e restituisce `NULL`. Per una discussione sulle modalità testo e binaria, vedere [I/O file in modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md).  
  
 L'argomento `shflag` è un'espressione costante costituita da una delle costanti manifesto seguenti, definite in Share.h.  
  
|Termine|Definizione|  
|----------|----------------|  
|`_SH_COMPAT`|Imposta la modalità di compatibilità per applicazioni a 16 bit.|  
|`_SH_DENYNO`|Consente l'accesso in lettura e scrittura.|  
|`_SH_DENYRD`|Nega l'accesso in lettura al file.|  
|`_SH_DENYRW`|Nega l'accesso in lettura e scrittura al file.|  
|`_SH_DENYWR`|Nega l'accesso in scrittura al file.|  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tfsopen`|`_fsopen`|`_fsopen`|`_wfsopen`|  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|Intestazioni facoltative|  
|--------------|---------------------|----------------------|  
|`_fsopen`|\<stdio.h>|\<share.h><br /><br /> Per la costante manifesto per il parametro `shflag`.|  
|`_wfsopen`|\<stdio.h> o \<wchar.h>|\<share.h><br /><br /> Per la costante manifesto per il parametro `shflag`.|  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fsopen.c  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <share.h>  
  
int main( void )  
{  
   FILE *stream;  
  
   // Open output file for writing. Using _fsopen allows us to  
   // ensure that no one else writes to the file while we are  
   // writing to it.  
    //  
   if( (stream = _fsopen( "outfile", "wt", _SH_DENYWR )) != NULL )  
   {  
      fprintf( stream, "No one else in the network can write "  
                       "to this file until we are done.\n" );  
      fclose( stream );  
   }  
   // Now others can write to the file while we read it.  
   system( "type outfile" );  
}  
```  
  
```Output  
No one else in the network can write to this file until we are done.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fclose, _fcloseall](../../c-runtime-library/reference/fclose-fcloseall.md)   
 [_fdopen, _wfdopen](../../c-runtime-library/reference/fdopen-wfdopen.md)   
 [ferror](../../c-runtime-library/reference/ferror.md)   
 [_fileno](../../c-runtime-library/reference/fileno.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, _wfreopen](../../c-runtime-library/reference/freopen-wfreopen.md)   
 [_open, _wopen](../../c-runtime-library/reference/open-wopen.md)   
 [_setmode](../../c-runtime-library/reference/setmode.md)   
 [_sopen, _wsopen](../../c-runtime-library/reference/sopen-wsopen.md)
