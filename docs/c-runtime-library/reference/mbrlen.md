---
title: mbrlen | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- mbrlen
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
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- mbrlen
dev_langs:
- C++
helpviewer_keywords:
- mbrlen function
ms.assetid: dde8dee9-e091-4c4c-81b3-639808885ae1
caps.latest.revision: 16
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
ms.openlocfilehash: a89b6d426d20d9af3f93bec1ec004ab5d7c70fe0
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="mbrlen"></a>mbrlen
Determina il numero di byte necessari per completare un carattere multibyte nelle impostazioni locali correnti, con la possibilità di ricominciare nel mezzo di un carattere multibyte.  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t mbrlen(  
   const char * str,  
   size_t count,  
   mbstate_t * mbstate  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `str`  
 Puntatore al byte successivo da controllare in una stringa di caratteri multibyte.  
  
 `count`  
 Numero massimo di byte da controllare.  
  
 `mbstate`  
 Puntatore allo stato di spostamento corrente del byte iniziale di `str`.  
  
## <a name="return-value"></a>Valore restituito  
 Uno dei valori seguenti:  
  
 0  
 I successivi `count` byte o un numero inferiore completano il carattere multibyte che rappresenta il carattere wide Null.  
  
 Da 1 a `count` incluso  
 I successivi `count` byte o un numero inferiore completano un carattere multibyte valido. Il valore restituito è il numero di byte che completa il carattere multibyte.  
  
 (size_t)(-2)  
 I successivi `count` byte contribuiscono a un carattere multibyte incompleto ma potenzialmente valido e tutti i `count` byte sono stati elaborati.  
  
 (size_t)(-1)  
 Si è verificato un errore di codifica. I successivi `count` byte o un numero inferiore non contribuiscono a un carattere multibyte valido e completo. In tal caso, `errno` viene impostato su EILSEQ e non viene specificato lo stato di conversione in `mbstate`.  
  
## <a name="remarks"></a>Note  
 La funzione `mbrlen` controlla al massimo `count` byte a partire dal byte a cui punta `str` per determinare il numero di byte necessari per completare il carattere multibyte successivo, comprese tutte le sequenze di spostamento. Equivale a chiamare `mbrtowc(NULL, str, count, &mbstate)` dove `mbstate` è un oggetto `mbstate_t` fornito dall'utente o un oggetto interno statico fornito dalla libreria.  
  
 La funzione `mbrlen` salva e usa lo stato di spostamento di un carattere multibyte incompleto nel parametro `mbstate`. Ciò consente a `mbrlen` di ricominciare nel mezzo di un carattere multibyte se fosse necessario, esaminando al massimo `count` byte. Se `mbstate` è un puntatore Null, `mbrlen` usa un oggetto `mbstate_t` interno statico per archiviare lo stato di spostamento. Poiché l'oggetto `mbstate_t` interno non è thread-safe, è consigliabile allocare e passare sempre un parametro `mbstate` fornito dall'utente.  
  
 La funzione `mbrlen` differisce da [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md) per la possibilità di essere riavviata. Lo stato di spostamento viene archiviato in `mbstate` per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve usare `wcsrlen` anziché `wcslen` se viene usata una chiamata successiva a `wcsrtombs` anziché `wcstombs.`  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|non applicabile|non applicabile|`mbrlen`|non applicabile|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`mbrlen`|\<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Questo esempio mostra come l'interpretazione dei caratteri multibyte dipende dalla tabella codici corrente e illustra la possibilità di ripresa di `mbrlen`.  
  
```C  
// crt_mbrlen.c  
// Compile by using: cl crt_mbrlen.c  
#include <stdlib.h>  
#include <stdio.h>  
#include <string.h>  
#include <locale.h>  
#include <wchar.h>  
  
size_t Example(const char * pStr)  
{  
    size_t      charLen = 0;  
    size_t      charCount = 0;  
    mbstate_t   mbState = {0};  
  
    while ((charLen = mbrlen(pStr++, 1, &mbState)) != 0 &&  
            charLen != (size_t)-1)  
    {  
        if (charLen != (size_t)-2) // if complete mbcs char,  
        {  
            charCount++;  
        }  
    }   
    return (charCount);  
}   
  
int main( void )  
{  
    int         cp;  
    size_t      charCount = 0;  
    const char  *pSample =   
        "\x82\xD0\x82\xE7\x82\xAA\x82\xC8: Shift-jis hiragana.";  
  
    cp = _getmbcp();  
    charCount = Example(pSample);  
    printf("\nCode page: %d\n%s\nCharacter count: %d\n",   
        cp, pSample, charCount);  
  
    setlocale(LC_ALL, "ja-JP"); // Set Japanese locale  
    _setmbcp(932); // and Japanese multibyte code page  
    cp = _getmbcp();  
    charCount = Example(pSample);  
    printf("\nCode page: %d\n%s\nCharacter count: %d\n",   
        cp, pSample, charCount);  
}  
```  
  
```Output  
  
Code page: 0  
é╨éτé¬é╚: Shift-jis hiragana.  
Character count: 29  
  
Code page: 932  
????: Shift-jis hiragana.  
Character count: 25  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)
