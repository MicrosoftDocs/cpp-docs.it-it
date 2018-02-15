---
title: wcrtomb | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- wcrtomb
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
- wcrtomb
dev_langs:
- C++
helpviewer_keywords:
- wide characters, converting
- wcrtomb function
- multibyte characters
- characters, converting
ms.assetid: 717f1b21-2705-4b7f-b6d0-82adc5224340
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 203b3ec1d72b7691aa8e46d60784100c0bf89a5e
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="wcrtomb"></a>wcrtomb
Converte un carattere wide nella relativa rappresentazione di caratteri multibyte. È disponibile una versione più sicura di questa funzione. Vedere [wcrtomb_s](../../c-runtime-library/reference/wcrtomb-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t wcrtomb(  
   char *mbchar,  
   wchar_t wchar,  
   mbstate_t *mbstate  
);  
template <size_t size>  
size_t wcrtomb(  
   char (&mbchar)[size],  
   wchar_t wchar,  
   mbstate_t *mbstate  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `mbchar`  
 Carattere multibyte convertito risultante.  
  
 [in] `wchar`  
 Carattere wide da convertire.  
  
 [in] `mbstate`  
 Puntatore a un oggetto `mbstate_t` .  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il numero di byte necessari per rappresentare il carattere multibyte convertito. In caso contrario restituisce -1 se si verifica un errore.  
  
## <a name="remarks"></a>Note  
 La funzione `wcrtomb` converte un carattere wide, a partire dallo stato di conversione specificato contenuto in `mbstate`, dal valore contenuto in `wchar`, nell'indirizzo rappresentato da `mbchar`. Il valore restituito è il numero di byte necessari per rappresentare il carattere multibyte corrispondente, ma non verranno restituiti più di `MB_CUR_MAX` byte.  
  
 Se `mbstate` è Null, viene usato l'oggetto `mbstate_t` interno contenente lo stato di conversione di `mbchar`. Se la sequenza di caratteri `wchar` non ha una rappresentazione di caratteri multibyte corrispondente, viene restituito -1 e `errno` viene impostato su `EILSEQ`.  
  
 La funzione `wcrtomb` differisce da [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md) per la possibilità di essere riavviata. Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione deve usare `wcsrlen` anziché `wcsnlen` se viene usata una chiamata successiva a `wcsrtombs` invece di `wcstombs`.  
  
 In C++, per questa funzione è disponibile un overload del modello che richiama le relative controparti sicure più recenti. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="exceptions"></a>Eccezioni  
 La funzione `wcrtomb` è multithread-safe a condizione che nessuna funzione nel thread corrente chiami `setlocale` mentre questa funzione è in esecuzione e mentre `mbstate` è Null.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_wcrtomb.c  
// compile with: /W3  
// This program converts a wide character  
// to its corresponding multibyte character.  
  
#include <string.h>  
#include <stdio.h>  
#include <wchar.h>  
  
int main( void )  
{  
    size_t      sizeOfCovertion = 0;  
    mbstate_t   mbstate;  
    char        mbStr = 0;  
    wchar_t*    wcStr = L"Q";  
  
    // Reset to initial conversion state  
    memset(&mbstate, 0, sizeof(mbstate));  
  
    sizeOfCovertion = wcrtomb(&mbStr, *wcStr, &mbstate); // C4996  
    // Note: wcrtomb is deprecated; consider using wcrtomb_s instead  
    if (sizeOfCovertion > 0)  
    {  
        printf("The corresponding wide character \"");  
        wprintf(L"%s\"", wcStr);  
        printf(" was converted to the \"%c\" ", mbStr);  
        printf("multibyte character.\n");  
    }  
    else  
    {  
        printf("No corresponding multibyte character "  
               "was found.\n");  
    }  
}  
```  
  
```Output  
The corresponding wide character "Q" was converted to the "Q" multibyte character.  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`wcrtomb`|\<wchar.h>|  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)