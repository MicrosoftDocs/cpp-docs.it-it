---
title: fgets, fgetws | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- fgets
- fgetws
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
- _fgetts
- fgetws
- fgets
dev_langs:
- C++
helpviewer_keywords:
- _fgetts function
- streams, getting strings from
- streams, reading from
- fgets function
- fgetws function
- fgetts function
ms.assetid: ad549bb5-df98-4ccd-a53f-95114e60c4fc
caps.latest.revision: 15
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
ms.openlocfilehash: 4012de79c3de0a27837813ddddf8b7e1aec4fac7
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="fgets-fgetws"></a>fgets, fgetws
Ottenere una stringa da un flusso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *fgets(   
   char *str,  
   int n,  
   FILE *stream   
);  
wchar_t *fgetws(   
   wchar_t *str,  
   int n,  
   FILE *stream   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `str`  
 Percorso di archiviazione per i dati.  
  
 `n`  
 Numero massimo di caratteri da leggere.  
  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce `str`. `NULL` viene restituito per indicare una condizione di errore o di fine file. Utilizzare `feof` o `ferror` per determinare se si è verificato un errore. Se `str` o `stream` è un puntatore null o `n` è minore o uguale a zero, questa funzione richiama il gestore dei parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `fgets` legge una stringa dall'argomento `stream` di input e la memorizza in `str`. `fgets`legge caratteri dalla posizione corrente del flusso, incluso il primo carattere di nuova riga alla fine del flusso o fino a quando il numero di caratteri letti è uguale a `n` - 1, verifica per primo. Il risultato memorizzato in `str` viene accodato con un carattere null. Il carattere di nuova riga, se letto, viene incluso nella stringa.  
  
 `fgetws` è una versione a caratteri wide di `fgets`.  
  
 `fgetws` legge l'argomento a caratteri wide `str` come una stringa di caratteri multibyte o una stringa di caratteri wide a seconda di come `stream` venga aperto, in modalità testo oppure in modalità binaria, rispettivamente. Per altre informazioni sull'uso delle modalità testo e binaria in formato Unicode e I/O flusso multibyte, vedere [I/O file modalità testo e binaria](../../c-runtime-library/text-and-binary-mode-file-i-o.md) e [I/O flusso Unicode in modalità testo e binaria](../../c-runtime-library/unicode-stream-i-o-in-text-and-binary-modes.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_fgetts`|`fgets`|`fgets`|`fgetws`|  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`fgets`|\<stdio.h>|  
|`fgetws`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_fgets.c  
// This program uses fgets to display  
// a line from a file on the screen.  
//  
  
#include <stdio.h>  
  
int main( void )  
{  
   FILE *stream;  
   char line[100];  
  
   if( fopen_s( &stream, "crt_fgets.txt", "r" ) == 0 )  
   {  
      if( fgets( line, 100, stream ) == NULL)  
         printf( "fgets error\n" );  
      else  
         printf( "%s", line);  
      fclose( stream );  
   }  
}  
```  
  
## <a name="input-crtfgetstxt"></a>Input: crt_fgets.txt  
  
```  
Line one.  
Line two.  
```  
  
### <a name="output"></a>Output  
  
```  
Line one.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fputs, fputws](../../c-runtime-library/reference/fputs-fputws.md)   
 [gets, _getws](../../c-runtime-library/gets-getws.md)   
 [puts, _putws](../../c-runtime-library/reference/puts-putws.md)
