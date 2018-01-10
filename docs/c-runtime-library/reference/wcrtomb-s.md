---
title: wcrtomb_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: wcrtomb_s
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
f1_keywords: wcrtomb_s
dev_langs: C++
helpviewer_keywords:
- wide characters, converting
- wcrtomb_s function
- multibyte characters
- characters, converting
ms.assetid: 9a8a1bd0-1d60-463d-a3a2-d83525eaf656
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 13134a3e6b34be13d6d878cf94f204bb6c87a458
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="wcrtombs"></a>wcrtomb_s
Converte un carattere wide nella relativa rappresentazione di caratteri multibyte. Questa è una versione di [wcrtomb](../../c-runtime-library/reference/wcrtomb.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t wcrtomb_s(  
   size_t *pReturnValue,  
   char *mbchar,  
   size_t sizeOfmbchar,  
   wchar_t *wchar,  
   mbstate_t *mbstate  
);  
template <size_t size>  
errno_t wcrtomb_s(  
   size_t *pReturnValue,  
   char (&mbchar)[size],  
   wchar_t *wchar,  
   mbstate_t *mbstate  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `pReturnValue`  
 Restituisce il numero di byte scritti o -1 se si è verificato un errore.  
  
 [out] `mbchar`  
 Carattere multibyte convertito risultante.  
  
 [in] `sizeOfmbchar`  
 Dimensioni della variabile `mbchar` in byte.  
  
 [in] `wchar`  
 Carattere wide da convertire.  
  
 [in] `mbstate`  
 Puntatore a un oggetto `mbstate_t` .  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce zero o un valore `errno` se si verifica un errore.  
  
## <a name="remarks"></a>Note  
 La funzione `wcrtomb_s` converte un carattere wide, a partire dallo stato di conversione specificato contenuto in `mbstate`, dal valore contenuto in `wchar`, nell'indirizzo rappresentato da `mbchar`. Il valore `pReturnValue` sarà il numero di byte convertiti, ma non più di `MB_CUR_MAX` byte o -1 se si è verificato un errore.  
  
 Se `mbstate` è Null, viene usato lo stato di conversione interno `mbstate_t`. Se il carattere contenuto in `wchar` non ha un carattere multibyte corrispondente, il valore di `pReturnValue` sarà -1 e la funzione restituirà il valore `errno` di `EILSEQ`.  
  
 La funzione `wcrtomb_s` differisce da [wctomb_s, _wctomb_s_l](../../c-runtime-library/reference/wctomb-s-wctomb-s-l.md) per la possibilità di essere riavviata. Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione deve usare `wcsrlen` anziché `wcslen` se viene usata una chiamata successiva a `wcsrtombs_s` invece di `wcstombs_s.`.  
  
 In C++ l'uso di questa funzione è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento per le dimensioni) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="exceptions"></a>Eccezioni  
 La funzione `wcrtomb_s` è multithread-safe a condizione che nessuna funzione nel thread corrente chiami `setlocale` mentre questa funzione è in esecuzione e `mbstate` è Null.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_wcrtomb_s.c  
// This program converts a wide character  
// to its corresponding multibyte character.  
//  
  
#include <string.h>  
#include <stdio.h>  
#include <wchar.h>  
  
int main( void )  
{  
    errno_t     returnValue;  
    size_t      pReturnValue;  
    mbstate_t   mbstate;  
    size_t      sizeOfmbStr = 1;  
    char        mbchar = 0;  
    wchar_t*    wchar = L"Q\0";  
  
    // Reset to initial conversion state  
    memset(&mbstate, 0, sizeof(mbstate));  
  
    returnValue = wcrtomb_s(&pReturnValue, &mbchar, sizeof(char),  
                            *wchar, &mbstate);  
    if (returnValue == 0) {  
        printf("The corresponding wide character \"");  
        wprintf(L"%s\"", wchar);  
        printf(" was converted to a the \"%c\" ", mbchar);  
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
The corresponding wide character "Q" was converted to a the "Q" multibyte character.  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`wcrtomb_s`|\<wchar.h>|  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)