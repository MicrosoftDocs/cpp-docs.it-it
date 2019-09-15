---
title: wcsrtombs
ms.date: 11/04/2016
api_name:
- wcsrtombs
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wcsrtombs
helpviewer_keywords:
- wcsrtombs function
- string conversion, wide characters
- wide characters, strings
ms.assetid: a8d21fec-0d36-4085-9d81-9b1c61c7259d
ms.openlocfilehash: e6640a027b03b7aa0dceaf8e61af6cb43a44d6e0
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70945058"
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
Puntatore a un oggetto stato di conversione **mbstate_t** .

## <a name="return-value"></a>Valore restituito

Restituisce il numero di byte convertito correttamente, escluso il byte di terminazione Null, se presente. In caso contrario restituisce -1 se si verifica un errore.

## <a name="remarks"></a>Note

La funzione **wcsrtombs** converte una stringa di caratteri wide, a partire dallo stato di conversione specificato contenuto in *mbstate*, dai valori a cui punta indiretto in *wcstr*nell'indirizzo di *mbstr*. La conversione continuerà per ogni carattere fino a quando non viene rilevato un carattere wide di terminazione null, quando viene rilevato un carattere non corrispondente o quando il carattere successivo supera il limite contenuto nel *conteggio*. Se **wcsrtombs** rileva il carattere null Wide (L'\ 0') prima o quando si verifica il *conteggio* , lo converte in uno 0 a 8 bit e si arresta.

Quindi, la stringa di caratteri multibyte in *mbstr* è con terminazione null solo se **wcsrtombs** rileva un carattere null a caratteri wide durante la conversione. Se le sequenze a cui puntano *wcstr* e *mbstr* si sovrappongono, il comportamento di **wcsrtombs** non è definito. **wcsrtombs** è influenzato dalla categoria LC_TYPE delle impostazioni locali correnti.

La funzione **wcsrtombs** differisce da [wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md) per la relativa riavviabilità. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione utilizzerebbe **wcsrlen** anziché **wcsnlen**se veniva utilizzata una chiamata successiva a **wcsrtombs** anziché **wcstombs**.

Se l'argomento *mbstr* è **null**, **wcsrtombs** restituisce la dimensione richiesta in byte della stringa di destinazione. Se *mbstate* è null, viene usato lo stato di conversione **mbstate_t** interno. Se la sequenza di caratteri *WCHAR* non presenta una rappresentazione di caratteri multibyte corrispondente, viene restituito-1 e **errno** viene impostato su **EILSEQ**.

In C++, questa funzione presenta un overload di modello che richiama la relativa controparte sicura più recente. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

La funzione **wcsrtombs** è multithread safe a condizione che nessuna funzione nel thread corrente chiami **setlocale** mentre questa funzione è in esecuzione e *mbstate* non è null.

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
