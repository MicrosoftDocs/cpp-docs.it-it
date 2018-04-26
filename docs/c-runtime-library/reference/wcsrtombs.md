---
title: wcsrtombs | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
ms.workload:
- cplusplus
ms.openlocfilehash: ea3544c9d6d84ab4671e505f7389f72dbb25095a
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="wcsrtombs"></a>wcsrtombs

Converte una stringa di caratteri wide nella relativa rappresentazione di stringa di caratteri multibyte. È disponibile una versione più sicura di questa funzione. Vedere [wcsrtombs_s](wcsrtombs-s.md).

## <a name="syntax"></a>Sintassi

```C
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

### <a name="parameters"></a>Parametri

*mbstr*<br/>
Posizione dell'indirizzo della stringa di caratteri multibyte convertita risultante.

*wcstr*<br/>
Punta indirettamente alla posizione della stringa di caratteri wide da convertire.

*count*<br/>
Numero di caratteri da convertire.

*mbstate*<br/>
Un puntatore a un **mbstate_t** oggetto stato di conversione.

## <a name="return-value"></a>Valore restituito

Restituisce il numero di byte convertito correttamente, escluso il byte di terminazione Null, se presente. In caso contrario restituisce -1 se si verifica un errore.

## <a name="remarks"></a>Note

Il **wcsrtombs** funzione converte una stringa di caratteri "wide", a partire dallo stato di conversione specificato contenuto nel *mbstate*, uno dei valori indiretti puntati nello *wcstr*, nell'indirizzo di *mbstr*. La conversione continuerà per ogni carattere fino a: quando viene rilevato un valore null di terminazione caratteri "wide", quando viene rilevato un carattere non corrispondente o quando il carattere successivo superano il limite di contenuti in *conteggio*. Se **wcsrtombs** rileva il carattere null di caratteri wide (L '\0') prima o quando *conteggio* si verifica, lo converte in un 0 a 8 bit, quindi si arresta.

Di conseguenza, la stringa di caratteri multibyte in *mbstr* è con terminazione null solo se **wcsrtombs** rileva un carattere null di caratteri "wide" durante la conversione. Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento di **wcsrtombs** è definito. **wcsrtombs** è interessato dalla categoria LC_TYPE delle impostazioni locali correnti.

Il **wcsrtombs** rispetto alla funzione [wcstombs, wcstombs_l](wcstombs-wcstombs-l.md) dal relativo riavviabilità. Lo stato di conversione viene archiviato *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione utilizzerebbe **wcsrlen** anziché **wcsnlen**, se una chiamata successiva a **wcsrtombs** utilizzati anziché **wcstombs**.

Se il *mbstr* argomento **NULL**, **wcsrtombs** restituisce le dimensioni necessarie in byte della stringa di destinazione. Se *mbstate* è null, interna **mbstate_t** viene utilizzato lo stato di conversione. Se la sequenza di caratteri *wchar* non dispone di un multibyte corrispondente rappresentazione dei caratteri, viene restituito -1 e il **errno** è impostato su **EILSEQ**.

In C++, questa funzione presenta un overload di modello che richiama la relativa controparte sicura più recente. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

Il **wcsrtombs** funzione è multithread-safe finché nessuna funzione nel thread corrente chiama **setlocale** durante l'esecuzione di questa funzione e il *mbstate* non è null.

## <a name="example"></a>Esempio

```cpp
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

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wcsrtombs**|\<wchar.h>|

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[wcrtomb](wcrtomb.md)<br/>
[wcrtomb_s](wcrtomb-s.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[mbsinit](mbsinit.md)<br/>
