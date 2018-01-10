---
title: wcstombs, _wcstombs_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- wcstombs
- _wcstombs_l
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- wcstombs
- _wcstombs_l
dev_langs: C++
helpviewer_keywords:
- _wcstombs_l function
- wcstombs function
- string conversion, wide characters
- wide characters, converting
- wcstombs_l function
- characters, converting
- string conversion, multibyte character strings
ms.assetid: 91234252-9ea1-423a-af99-e9d0ce4a40e3
caps.latest.revision: "30"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4ee05d4e8c8b36d92794293679992cb2c5ad5c36
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="wcstombs-wcstombsl"></a>wcstombs, _wcstombs_l
Converte una sequenza di caratteri wide in una sequenza di caratteri multibyte corrispondente. Sono disponibili versioni più sicure di queste funzioni. Vedere [wcstombs_s, _wcstombs_s_l](../../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t wcstombs(  
   char *mbstr,  
   const wchar_t *wcstr,  
   size_t count   
);  
size_t _wcstombs_l(  
   char *mbstr,  
   const wchar_t *wcstr,  
   size_t count,  
   _locale_t locale  
);  
template <size_t size>  
size_t wcstombs(  
   char (&mbstr)[size],  
   const wchar_t *wcstr,  
   size_t count   
); // C++ only  
template <size_t size>  
size_t _wcstombs_l(  
   char (&mbstr)[size],  
   const wchar_t *wcstr,  
   size_t count,  
   _locale_t locale  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 `mbstr`  
 Indirizzo di una sequenza di caratteri multibyte.  
  
 `wcstr`  
 Indirizzo di una sequenza di caratteri wide.  
  
 `count`  
 Numero massimo di byte che possono essere archiviati nella stringa di output multibyte.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Se `wcstombs` converte correttamente la stringa multibyte, restituisce il numero di byte scritti nella stringa di output multibyte, escluso il carattere `NULL` di terminazione (se presente). Se l'argomento `mbstr` è `NULL`, `wcstombs` restituisce le dimensioni necessarie in byte della stringa di destinazione. Se `wcstombs` rileva un carattere "wide" non è possibile convertire un carattere multibyte, restituisce -1 cast al tipo `size_t` e imposta `errno` a `EILSEQ`.  
  
## <a name="remarks"></a>Note  
 La funzione `wcstombs` converte la stringa di caratteri wide a cui punta `wcstr` nei caratteri multibyte corrispondenti e archivia il risultato nella matrice `mbstr`. Il parametro `count` indica il numero massimo di byte che possono essere archiviati nella stringa di output multibyte, ovvero le dimensioni di `mbstr`. In generale, non è possibile sapere quanti byte saranno necessari durante la conversione di stringa di caratteri wide. Alcuni caratteri wide richiederanno un solo byte nella stringa di output, altri due. Se sono presenti due byte nella stringa di output multibyte per ogni carattere wide nella stringa di input (incluso il carattere wide `NULL`), lo spazio disponibile sarà sicuramente sufficiente per il risultato.  
  
 Se `wcstombs` rileva il carattere Null wide (L'\0') in corrispondenza di `count` o prima, lo converte in 0 a 8 bit e si arresta. Pertanto, la stringa di caratteri multibyte in `mbstr` termina con Null solo se `wcstombs` rileva un carattere wide Null durante la conversione. Se le sequenze a cui punta `wcstr` e `mbstr` si sovrappongono, il comportamento di `wcstombs` non è definito.  
  
 Se l'argomento `mbstr` è `NULL`, `wcstombs` restituisce le dimensioni necessarie in byte della stringa di destinazione.  
  
 `wcstombs` convalida i propri parametri. Se `wcstr` è `NULL`, o se `count` è maggiore di `INT_MAX`, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, la funzione imposta `errno` su `EINVAL` e restituisce -1.  
  
 `wcstombs` usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. La funzione `_wcstombs_l` è identica, ma usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
 In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`wcstombs`|\<stdlib.h>|  
|`_wcstombs_l`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Questo programma illustra il comportamento della funzione `wcstombs`.  
  
```  
// crt_wcstombs.c  
// compile with: /W3  
// This example demonstrates the use  
// of wcstombs, which converts a string  
// of wide characters to a string of   
// multibyte characters.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
#define BUFFER_SIZE 100  
  
int main( void )  
{  
    size_t  count;  
    char    *pMBBuffer = (char *)malloc( BUFFER_SIZE );  
    wchar_t *pWCBuffer = L"Hello, world.";  
  
    printf("Convert wide-character string:\n" );  
  
    count = wcstombs(pMBBuffer, pWCBuffer, BUFFER_SIZE ); // C4996  
    // Note: wcstombs is deprecated; consider using wcstombs_s instead  
    printf("   Characters converted: %u\n",  
            count );  
    printf("    Multibyte character: %s\n\n",  
           pMBBuffer );  
  
    free(pMBBuffer);  
}  
```  
  
```Output  
Convert wide-character string:  
   Characters converted: 13  
    Multibyte character: Hello, world.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [mbstowcs, _mbstowcs_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)   
 [WideCharToMultiByte](http://msdn.microsoft.com/library/windows/desktop/dd374130)