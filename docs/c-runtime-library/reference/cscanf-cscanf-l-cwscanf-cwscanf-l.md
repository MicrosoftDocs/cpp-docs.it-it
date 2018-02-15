---
title: _cscanf, _cscanf_l, _cwscanf, _cwscanf_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _cscanf_l
- _cscanf
- _cwscanf
- _cwscanf_l
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
- _cwscanf
- cwscanf_l
- tcscanf_l
- _tcscanf_l
- _cscanf
- _cscanf_l
- tcscanf
- cwscanf
- _cwscanf_l
- cscanf_l
- _tcscanf
dev_langs:
- C++
helpviewer_keywords:
- _cwscanf function
- data [C++], reading from the console
- cscanf_l function
- tcscanf function
- _cscanf_l function
- cwscanf function
- _tcscanf_l function
- _cscanf function
- _tcscanf function
- cwscanf_l function
- tcscanf_l function
- reading data [C++], from the console
- _cwscanf_l function
ms.assetid: dbfe7547-b577-4567-a1cb-893fa640e669
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 341cc89c1cc73552bfa5c0da79bd75e7bea65ce0
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cscanf-cscanfl-cwscanf-cwscanfl"></a>_cscanf, _cscanf_l, _cwscanf, _cwscanf_l
Legge i dati formattati dalla console. Sono disponibili versioni più sicure di queste funzioni. Vedere [_cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l](../../c-runtime-library/reference/cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _cscanf(   
   const char *format [,  
   argument] ...   
);  
int _cscanf_l(   
   const char *format,  
   locale_t locale [,  
   argument] ...   
);  
int _cwscanf(   
   const wchar_t *format [,  
   argument] ...   
);  
int _cwscanf_l(   
   const wchar_t *format,  
   locale_t locale [,  
   argument] ...   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `format`  
 Stringa di controllo del formato.  
  
 `argument`  
 Parametri facoltativi.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Numero di campi che sono stati convertiti ed assegnati correttamente. Il valore restituito non include i campi che sono stati letti ma non assegnati. Il valore restituito è `EOF` per un tentativo di lettura alla fine del file. Ciò può verificarsi quando viene reindirizzato l'input da tastiera al livello di riga di comando del sistema operativo. Un valore restituito pari a 0 indica che nessun campo è stato assegnato.  
  
## <a name="remarks"></a>Note  
 La funzione `_cscanf` legge i dati direttamente dalla console nei percorsi specificati da `argument`. La funzione [_getche](../../c-runtime-library/reference/getch-getwch.md) viene usata per leggere i caratteri. Ogni parametro facoltativo deve essere un puntatore a una variabile con un tipo corrispondente a un identificatore di tipo in `format`. Il formato controlla l'interpretazione dei campi di input e ha lo stesso formato e la stessa funzione del parametro `format` per la funzione [scanf](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md). Anche se `_cscanf` restituisce in genere il carattere di input, non esegue questa operazione se l'ultima chiamata era per `_ungetch`.  
  
 Questa funzione convalida i relativi parametri. Se format è NULL, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `EOF`.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione per il fatto che usano il parametro delle impostazioni locali passato al posto di quelle del thread corrente.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcscanf`|`_cscanf`|`_cscanf`|`_cwscanf`|  
|`_tcscanf_l`|`_cscanf_l`|`_cscanf_l`|`_cwscanf_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_cscanf`,`_cscanf_l`|\<conio.h>|  
|`_cwscanf`, `_cwscanf_l`|\<conio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_cscanf.c  
// compile with: /c /W3  
/* This program prompts for a string  
 * and uses _cscanf to read in the response.  
 * Then _cscanf returns the number of items  
 * matched, and the program displays that number.  
 */  
  
#include <stdio.h>  
#include <conio.h>  
  
int main( void )  
{  
   int   result, i[3];  
  
   _cprintf_s( "Enter three integers: ");  
   result = _cscanf( "%i %i %i", &i[0], &i[1], &i[2] ); // C4996  
   // Note: _cscanf is deprecated; consider using _cscanf_s instead  
   _cprintf_s( "\r\nYou entered " );  
   while( result-- )  
      _cprintf_s( "%i ", i[result] );  
   _cprintf_s( "\r\n" );  
}  
```  
  
## <a name="input"></a>Input  
  
```  
1 2 3  
```  
  
## <a name="output"></a>Output  
  
```  
Enter three integers: 1 2 3  
You entered 3 2 1  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Console e porta I/O](../../c-runtime-library/console-and-port-i-o.md)   
 [_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)   
 [fscanf, _fscanf_l, fwscanf, _fwscanf_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)   
 [sscanf, _sscanf_l, swscanf, _swscanf_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)