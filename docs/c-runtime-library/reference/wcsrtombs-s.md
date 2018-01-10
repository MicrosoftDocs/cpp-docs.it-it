---
title: wcsrtombs_s | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: wcsrtombs_s
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
f1_keywords: wcsrtombs_s
dev_langs: C++
helpviewer_keywords:
- string conversion, wide characters
- wcsrtombs_s function
- wide characters, strings
ms.assetid: 9dccb766-113c-44bb-9b04-07a634dddec8
caps.latest.revision: "27"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 025acdf18d0e5322ef43de800e3577233a93cb86
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="wcsrtombss"></a>wcsrtombs_s
Converte una stringa di caratteri wide nella relativa rappresentazione di stringa di caratteri multibyte. Questa è una versione di [wcsrtombs](../../c-runtime-library/reference/wcsrtombs.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t wcsrtombs_s(  
   size_t *pReturnValue,  
   char *mbstr,  
   size_t sizeInBytes,  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
);  
template <size_t size>  
errno_t wcsrtombs_s(  
   size_t *pReturnValue,  
   char (&mbstr)[size],  
   const wchar_t **wcstr,  
   sizeof count,  
   mbstate_t *mbstate  
); // C++ only  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `pReturnValue`  
 Numero di caratteri convertiti.  
  
 [out] `mbstr`  
 Indirizzo di un buffer per la stringa di caratteri multibyte convertita risultante.  
  
 [out] `sizeInBytes`  
 Dimensione del buffer `mbstr`, in byte.  
  
 [in] `wcstr`  
 Punta alla stringa di caratteri wide da convertire.  
  
 [in] `count`  
 Numero massimo di byte da archiviare nel buffer `mbstr` o [_TRUNCATE](../../c-runtime-library/truncate.md).  
  
 [in] `mbstate`  
 Puntatore a un oggetto stato di conversione `mbstate_t`.  
  
## <a name="return-value"></a>Valore restituito  
 Zero in caso di esito positivo, un codice di errore in caso di esito negativo.  
  
|Condizione di errore|Valore restituito e `errno`|  
|---------------------|------------------------------|  
|`mbstr` è `NULL` e `sizeInBytes` > 0|`EINVAL`|  
|`wcstr` è `NULL`|`EINVAL`|  
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che `count` non sia `_TRUNCATE`; vedere la sezione Note di seguito)|`ERANGE`|  
  
 Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice errore e imposta `errno` come indicato nella tabella.  
  
## <a name="remarks"></a>Note  
 La funzione `wcsrtombs_s` converte una stringa di caratteri wide a cui punta `wcstr` in caratteri multibyte archiviati nel buffer a cui punta `mbstr`, usando lo stato di conversione contenuto in `mbstate`. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:  
  
-   Viene rilevato un carattere Null wide  
  
-   Viene rilevato un carattere wide che non può essere convertito  
  
-   Il numero di byte archiviati nel buffer `mbstr` è uguale a `count`.  
  
 La stringa di destinazione termina sempre con Null, anche in caso di errore.  
  
 Se `count` è il valore speciale [_TRUNCATE](../../c-runtime-library/truncate.md), `wcsrtombs_s` converte la parte di stringa più ampia possibile che può rientrare nel buffer di destinazione, lasciando però spazio per un carattere di terminazione Null.  
  
 Se `wcsrtombs_s` converte correttamente la stringa di origine, inserisce la dimensione in byte della stringa convertita, incluso il carattere di terminazione Null, in `*pReturnValue`, a condizione che `pReturnValue` non sia `NULL`. Ciò si verifica anche se l'argomento `mbstr` è `NULL` e consente di determinare le dimensioni del buffer richieste. Si noti che se `mbstr` è `NULL`, `count` viene ignorato.  
  
 Se `wcsrtombs_s` rileva un carattere wide che non può convertire in carattere multibyte, inserisce -1 in `*pReturnValue`, imposta il buffer di destinazione su una stringa vuota, imposta `errno` su `EILSEQ` e restituisce `EILSEQ`.  
  
 Se le sequenze a cui punta `wcstr` e `mbstr` si sovrappongono, il comportamento di `wcsrtombs_s` non è definito. `wcsrtombs_s` viene influenzato dalla categoria LC_TYPE delle impostazioni locali correnti.  
  
> [!IMPORTANT]
>  Verificare che `wcstr` e `mbstr` non si sovrappongano e che `count` rispecchi correttamente il numero di caratteri wide da convertire.  
  
 La funzione `wcsrtombs_s` differisce da [wcstombs_s, _wcstombs_s_l](../../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md) per la possibilità di essere riavviata. Lo stato di conversione viene archiviato in `mbstate` per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione deve usare `wcsrlen` anziché `wcslen` se viene usata una chiamata successiva a `wcsrtombs_s` invece di `wcstombs_s.`.  
  
 In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
## <a name="exceptions"></a>Eccezioni  
 La funzione `wcsrtombs_s` è multithread-safe a condizione che nessuna funzione nel thread corrente chiami `setlocale` mentre questa funzione è in esecuzione e `mbstate` è Null.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_wcsrtombs_s.cpp  
//   
// This code example converts a wide  
// character string into a multibyte  
// character string.  
//  
  
#include <stdio.h>  
#include <memory.h>  
#include <wchar.h>  
#include <errno.h>  
  
#define MB_BUFFER_SIZE 100  
  
void main()  
{  
    const wchar_t   wcString[] =   
                    {L"Every good boy does fine."};  
    const wchar_t   *wcsIndirectString = wcString;  
    char            mbString[MB_BUFFER_SIZE];  
    size_t          countConverted;  
    errno_t         err;  
    mbstate_t       mbstate;  
  
    // Reset to initial shift state  
    ::memset((void*)&mbstate, 0, sizeof(mbstate));  
  
    err = wcsrtombs_s(&countConverted, mbString, MB_BUFFER_SIZE,  
                      &wcsIndirectString, MB_BUFFER_SIZE, &mbstate);  
    if (err == EILSEQ)  
    {  
        printf( "An encoding error was detected in the string.\n" );  
    }  
    else   
    {  
        printf( "The string was successfully converted.\n" );  
    }  
}  
```  
  
```Output  
The string was successfully converted.  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`wcsrtombs_s`|\<wchar.h>|  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [wcrtomb](../../c-runtime-library/reference/wcrtomb.md)   
 [wcrtomb_s](../../c-runtime-library/reference/wcrtomb-s.md)   
 [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)   
 [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [mbsinit](../../c-runtime-library/reference/mbsinit.md)