---
title: wcsrtombs | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- wcsrtombs
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
- wcsrtombs
dev_langs:
- C++
helpviewer_keywords:
- wcsrtombs function
- string conversion, wide characters
- wide characters, strings
ms.assetid: a8d21fec-0d36-4085-9d81-9b1c61c7259d
caps.latest.revision: 26
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 8dcf86093b363bd890e15ba7eb326a4187e65999
ms.lasthandoff: 02/24/2017

---
# <a name="wcsrtombs"></a>wcsrtombs
Converte una stringa di caratteri wide nella relativa rappresentazione di stringa di caratteri multibyte. È disponibile una versione più sicura di questa funzione. Vedere [wcsrtombs_s](../../c-runtime-library/reference/wcsrtombs-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t wcsrtombs(  
   char *mbstr,  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
);  
template <size_t size>  
size_t wcsrtombs(  
   char (&mbstr)[size],  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `mbstr`  
 Posizione dell'indirizzo della stringa di caratteri multibyte convertita risultante.  
  
 [in] `wcstr`  
 Punta indirettamente alla posizione della stringa di caratteri wide da convertire.  
  
 [in] `count`  
 Numero di caratteri da convertire.  
  
 [in] `mbstate`  
 Puntatore a un oggetto stato di conversione `mbstate_t`.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il numero di byte convertito correttamente, escluso il byte di terminazione Null, se presente. In caso contrario restituisce -1 se si verifica un errore.  
  
## <a name="remarks"></a>Note  
 La funzione `wcsrtombs` converte una stringa di caratteri wide, a partire dallo stato di conversione specificato contenuto in `mbstate`, dai valori a cui punta indirettamente `wcstr`, nell'indirizzo di `mbstr`. La conversione continuerà per ogni carattere fino a quando: viene rilevato un carattere wide di terminazione Null, viene rilevato un carattere non corrispondente o il carattere successivo causerebbe il superamento del limite contenuto in `count`. Se `wcsrtombs` rileva il carattere Null wide (L'\0') in corrispondenza di `count` o prima, lo converte in 0 a 8 bit e si arresta.  
  
 Pertanto, la stringa di caratteri multibyte in `mbstr` termina con Null solo se `wcsrtombs` rileva un carattere wide Null durante la conversione. Se le sequenze a cui punta `wcstr` e `mbstr` si sovrappongono, il comportamento di `wcsrtombs` non è definito. `wcsrtombs` viene influenzato dalla categoria LC_TYPE delle impostazioni locali correnti.  
  
 La funzione `wcsrtombs` differisce da [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md) per la possibilità di essere riavviata. Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve usare `wcsrlen` anziché `wcsnlen` se viene usata una chiamata successiva a `wcsrtombs` invece di `wcstombs`.  
  
 Se l'argomento `mbstr` è `NULL`, `wcsrtombs` restituisce le dimensioni necessarie in byte della stringa di destinazione. Se `mbstate` è Null, viene usato lo stato di conversione interno `mbstate_t`. Se la sequenza di caratteri `wchar` non ha una rappresentazione di caratteri multibyte corrispondente, viene restituito -1 e `errno` viene impostato su `EILSEQ`.  
  
 In C++, questa funzione presenta un overload di modello che richiama la relativa controparte sicura più recente. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="exceptions"></a>Eccezioni  
 La funzione `wcsrtombs` è multithread-safe a condizione che nessuna funzione nel thread corrente chiami `setlocale` mentre questa funzione è in esecuzione e `mbstate` non è Null.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_wcsrtombs.cpp  
// compile with: /W3  
// This code example converts a wide  
// character string into a multibyte  
// character string.  
  
#include <stdio.h>  
#include <memory.h>  
#include <wchar.h>  
#include <errno.h>  
  
#define MB_BUFFER_SIZE 100  
  
int main()  
{  
    const wchar_t   wcString[] =   
                    {L"Every good boy does fine."};  
    const wchar_t   *wcsIndirectString = wcString;  
    char            mbString[MB_BUFFER_SIZE];  
    size_t          countConverted;  
    mbstate_t       mbstate;  
  
    // Reset to initial shift state  
    ::memset((void*)&mbstate, 0, sizeof(mbstate));  
  
    countConverted = wcsrtombs(mbString, &wcsIndirectString,  
                               MB_BUFFER_SIZE, &mbstate); // C4996  
    // Note: wcsrtombs is deprecated; consider using wcsrtombs_s  
    if (errno == EILSEQ)  
    {  
        printf( "An encoding error was detected in the string.\n" );  
    }  
    else   
    {  
        printf( "The string was successfuly converted.\n" );  
    }  
}  
```  
  
```Output  
The string was successfuly converted.  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`wcsrtombs`|\<wchar.h>|  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [wcrtomb](../../c-runtime-library/reference/wcrtomb.md)   
 [wcrtomb_s](../../c-runtime-library/reference/wcrtomb-s.md)   
 [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)   
 [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)
