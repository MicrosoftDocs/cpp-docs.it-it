---
title: wcsrtombs
ms.date: 11/04/2016
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
helpviewer_keywords:
- wcsrtombs function
- string conversion, wide characters
- wide characters, strings
ms.assetid: a8d21fec-0d36-4085-9d81-9b1c61c7259d
ms.openlocfilehash: 46ef195ec4685c327c4b5951ec44e5c363214b59
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50494419"
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

Il **wcsrtombs** funzione converte una stringa di caratteri "wide", lo stato di conversione specificato contenuto in a partire *mbstate*, da quelli indiretti puntati in *wcstr*, nell'indirizzo di *mbstr*. La conversione continuerà per ogni carattere fino a quando: dopo il rilevamento di carattere wide di terminazione null, quando viene rilevato un carattere non corrispondente o quando il carattere successivo determina il superamento del limite contenuto in *conteggio*. Se **wcsrtombs** rileva il carattere null di caratteri "wide" (L '\0') prima o quando *conteggio* si verifica, lo converte in un 0 a 8 bit e si arresta.

Pertanto, la stringa di caratteri multibyte in *mbstr* sono con terminazione null solo se **wcsrtombs** rileva un carattere wide null durante la conversione. Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento delle **wcsrtombs** è definito. **wcsrtombs** dipende dalla categoria LC_TYPE delle impostazioni locali correnti.

Il **wcsrtombs** la funzione differisce da [wcstombs, wcstombs_l](wcstombs-wcstombs-l.md) dalla relativa possibilità di essere riavviata. Cui è archiviato lo stato di conversione *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve usare **wcsrlen** invece **wcsnlen**, se una chiamata successiva a **wcsrtombs** sono state utilizzate al posto di **wcstombs**.

Se il *mbstr* l'argomento è **NULL**, **wcsrtombs** restituisce le dimensioni necessarie in byte della stringa di destinazione. Se *mbstate* è null, interna **mbstate_t** viene utilizzato lo stato di conversione. Se la sequenza di caratteri *wchar* non ha un multibyte corrispondente rappresentazione in caratteri, viene restituito -1 e il **errno** è impostata su **EILSEQ**.

In C++, questa funzione presenta un overload di modello che richiama la relativa controparte sicura più recente. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

Il **wcsrtombs** funzione è multithread-safe finché nessuna funzione nel thread corrente chiami **setlocale** durante l'esecuzione di questa funzione e il *mbstate* non null.

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
