---
title: _mbsnbset, _mbsnbset_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _mbsnbset
- _mbsnbset_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- mbsnbset
- mbsnbset_l
- _mbsnbset
- _mbsnbset_l
dev_langs: C++
helpviewer_keywords:
- tcsnset function
- _tcsnset_l function
- _mbsnbset function
- _tcsnset function
- _mbsnbset_l function
- mbsnbset_l function
- tcsnset_l function
- mbsnbset function
ms.assetid: 8e46ef75-9a56-42d2-a522-a08450c67c19
caps.latest.revision: "24"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d1b0fb832c9bcfd254dacaab604de865dac454ba
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="mbsnbset-mbsnbsetl"></a>_mbsnbset, _mbsnbset_l
Imposta i primi `n` byte di una stringa di caratteri multibyte su un carattere specificato. Sono disponibili versioni più sicure di queste funzioni. Vedere [_mbsnbset_s, _mbsnbset_s_l](../../c-runtime-library/reference/mbsnbset-s-mbsnbset-s-l.md).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned char *_mbsnbset(  
   unsigned char *str,  
   unsigned int c,  
   size_t count   
);  
unsigned char *_mbsnbset_l(  
   unsigned char *str,  
   unsigned int c,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `str`  
 Stringa da modificare.  
  
 `c`  
 Impostazione di caratteri a un byte singolo o multibyte.  
  
 `count`  
 Numero di byte da impostare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 `_mbsnbset` restituisce un puntatore alla stringa modificata.  
  
## <a name="remarks"></a>Note  
 Le funzioni `_mbsnbset` e `_mbsnbset_l` impostano al massimo i primi `count` byte di `str` su `c`. Se `count` è maggiore della lunghezza di `str`, la lunghezza di `str` viene usata invece di `count`. Se `c` è un carattere multibyte e non può essere interamente impostato nell'ultimo byte specificato da `count`, l'ultimo byte viene riempito con un carattere vuoto. `_mbsnbset`e `_mbsnbset_l` non viene inserita una terminazione null alla fine di `str`.  
  
 `_mbsnbset`e `_mbsnbset_l` è simile a `_mbsnset`, ad eccezione del fatto che imposta `count` byte anziché `count` caratteri `c`.  
  
 Se `str` è `NULL` o `count` è zero, questa funzione genera un'eccezione di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`. Inoltre, se `c` non è un carattere multibyte valido, `errno` viene impostato su `EINVAL` e in alternativa viene usato uno spazio.  
  
 La configurazione dell'impostazione della categoria `LC_CTYPE` delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). La versione `_mbsnbset` di questa funzione usa le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. La versione `_mbsnbset_l` è identica, ad eccezione del fatto che usa il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 **Nota sulla sicurezza** Questa API è esposta a una potenziale minaccia dovuta a un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcsnset`|`_strnset`|`_mbsnbset`|`_wcsnset`|  
|`_tcsnset_l`|`_strnset_l`|`_mbsnbset_l`|`_wcsnset_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_mbsnbset`|\<mbstring.h>|  
|`_mbsnbset_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_mbsnbset.c  
// compile with: /W3  
#include <mbstring.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char string[15] = "This is a test";  
   /* Set not more than 4 bytes of string to be *'s */  
   printf( "Before: %s\n", string );  
   _mbsnbset( string, '*', 4 ); // C4996  
   // Note; _mbsnbset is deprecated; consider _mbsnbset_s  
   printf( "After:  %s\n", string );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
Before: This is a test  
After:  **** is a test  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [_mbsnbcat, _mbsnbcat_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)   
 [_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](../../c-runtime-library/reference/strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)   
 [_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../../c-runtime-library/reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)