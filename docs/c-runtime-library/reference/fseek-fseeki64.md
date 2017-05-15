---
title: fseek, _fseeki64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _fseeki64
- fseek
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
- fseek
- _fseeki64
dev_langs:
- C++
helpviewer_keywords:
- _fseeki64 function
- fseeki64 function
- fseek function
- file pointers [C++], moving
- file pointers [C++]
- seek file pointers
ms.assetid: f6bb1f8b-891c-426e-9e14-0e7e5c62df70
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
ms.openlocfilehash: 0d0c0bf620f1b89b9decceed3db9434dae4f9437
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="fseek-fseeki64"></a>fseek, _fseeki64
Sposta il puntatore del file in una posizione specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int fseek(   
   FILE *stream,  
   long offset,  
   int origin   
);  
int _fseeki64(   
   FILE *stream,  
   __int64 offset,  
   int origin   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
 `offset`  
 Numero di byte da `origin`.  
  
 `origin`  
 Posizione iniziale.  
  
## <a name="return-value"></a>Valore restituito  
 Se l'esito è positivo, `fseek` e `_fseeki64` restituiscono 0. In caso contrario, viene restituito un valore diverso da zero. Nei dispositivi che non supportano la ricerca, il valore restituito è indefinito. Se `stream` è un puntatore Null o se `origin` non è uno dei valori consentiti descritti di seguito, `fseek` e `_fseeki64` richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono -1.  
  
## <a name="remarks"></a>Note  
 Il `fseek` e `_fseeki64` funzioni passa il puntatore del file (se presente) associato `stream` in un percorso nuovo `offset` byte da `origin`. L'operazione successiva nel flusso viene eseguita nella nuova posizione. In un flusso aperto per l'aggiornamento, l'operazione successiva può essere un'operazione di lettura o scrittura. L'argomento origin deve essere una delle costanti seguenti, definite in STDIO.H:  
  
 `SEEK_CUR`  
 Posizione corrente del puntatore del file.  
  
 `SEEK_END`  
 Fine del file.  
  
 `SEEK_SET`  
 Inizio del file.  
  
 È possibile usare `fseek` e `_fseeki64` per riposizionare il puntatore in qualsiasi punto in un file. Il puntatore può essere posizionato anche oltre la fine del file. `fseek`e `_fseeki64` Cancella l'indicatore di fine del file e Annulla l'effetto di eventuali prima `ungetc` chiama contro `stream`.  
  
 Quando un file viene aperto per l'accodamento dei dati, la posizione corrente nel file è determinata dall'ultima operazione di I/O e non dalla posizione in cui si verificherà la scrittura successiva. Se non è ancora stata eseguita alcuna operazione di I/O su un file aperto per l'accodamento, la posizione nel file è l'inizio del file.  
  
 Per i flussi aperti in modalità testo, `fseek` e `_fseeki64` hanno un utilizzo limitato, perché possono causare traduzioni di ritorno a capo-avanzamento di riga restituito `fseek` e `_fseeki64` per produrre risultati imprevisti. L'unico `fseek` e `_fseeki64` operazioni funzionare su flussi aperti in modalità testo sono:  
  
-   Ricerca con offset 0 rispetto a qualsiasi valore di origine.  
  
-   La ricerca dall'inizio del file con un valore di offset restituito da una chiamata a `ftell` quando si utilizza `fseek` o `_ftelli64` quando si utilizza `_fseeki64`.  
  
 In modalità testo, inoltre, CTRL+Z viene interpretato nell'input come un carattere di fine file. Nei file aperti per la lettura/scrittura, `fopen` e tutte le routine correlate verificano la presenza della combinazione CTRL+Z alla fine del file e la rimuovono, se possibile. Questa operazione viene eseguita perché l'uso di `fseek` e `ftell` o `_fseeki64` e `_ftelli64` per spostarsi all'interno di un file che termina con CTRL+Z può causare un comportamento non corretto di `fseek` o `_fseeki64` in prossimità della fine del file.  
  
 Quando CRT apre un file che inizia con un BOM (Byte Order Mark), il puntatore del file viene posizionato dopo il BOM, ovvero all'inizio del contenuto effettivo del file. Se è necessario usare `fseek` per spostarsi all'inizio del file, usare `ftell` per ottenere la posizione iniziale e specificare tale posizione per `fseek`, invece della posizione 0.  
  
 Questa funzione blocca altri thread durante l'esecuzione e pertanto è thread-safe. Per una versione che non blocca i thread, vedere [_fseek_nolock, _fseeki64_nolock](../../c-runtime-library/reference/fseek-nolock-fseeki64-nolock.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fseek`|\<stdio.h>|  
|`_fseeki64`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fseek.c  
// This program opens the file FSEEK.OUT and  
// moves the pointer to the file's beginning.  
  
#include <stdio.h>  
  
int main( void )  
{  
   FILE *stream;  
   char line[81];  
   int  result;  
  
   if ( fopen_s( &stream, "fseek.out", "w+" ) != 0 )  
   {  
      printf( "The file fseek.out was not opened\n" );  
      return -1;  
   }  
   fprintf( stream, "The fseek begins here: "  
                    "This is the file 'fseek.out'.\n" );  
   result = fseek( stream, 23L, SEEK_SET);  
   if( result )  
      perror( "Fseek failed" );  
   else  
   {  
      printf( "File pointer is set to middle of first line.\n" );  
      fgets( line, 80, stream );  
      printf( "%s", line );  
    }  
   fclose( stream );  
}  
```  
  
```Output  
File pointer is set to middle of first line.  
This is the file 'fseek.out'.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [ftell, _ftelli64](../../c-runtime-library/reference/ftell-ftelli64.md)   
 [_lseek, _lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)   
 [rewind](../../c-runtime-library/reference/rewind.md)
