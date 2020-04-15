---
title: wcsrtombs
ms.date: 4/2/2020
api_name:
- wcsrtombs
- _o_wcsrtombs
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: af22a7d55c5f4958db6962e98f212fb5bb89e61e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328063"
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

*mbstr (intalltore*<br/>
Posizione dell'indirizzo della stringa di caratteri multibyte convertita risultante.

*Wcstr*<br/>
Punta indirettamente alla posizione della stringa di caratteri wide da convertire.

*count*<br/>
Numero di caratteri da convertire.

*mbstate (in stato di stato)*<br/>
Puntatore a un oggetto stato di conversione **mbstate_t.**

## <a name="return-value"></a>Valore restituito

Restituisce il numero di byte convertito correttamente, escluso il byte di terminazione Null, se presente. In caso contrario restituisce -1 se si verifica un errore.

## <a name="remarks"></a>Osservazioni

La funzione **wcsrtombs** converte una stringa di caratteri wide, a partire dallo stato di conversione specificato contenuto in *mbstate*, dai valori indiretti a cui punta in *wcstr*, nell'indirizzo di *mbstr*. La conversione continuerà per ogni carattere fino a quando, dopo che viene rilevato un carattere wide di terminazione null, quando viene rilevato un carattere non corrispondente o quando il carattere successivo supererebbe il limite contenuto in *count*. Se **wcsrtombs** rileva il carattere null carattere wide (L'0') prima o quando si verifica *count,* lo converte in uno 0 a 8 bit e si arresta.

Pertanto, la stringa di caratteri multibyte in *mbstr* è con terminazione null solo se **wcsrtombs** rileva un carattere null carattere wide durante la conversione. Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento di **wcsrtombs** non è definito. **wcsrtombs** è interessato dalla categoria LC_TYPE delle impostazioni locali correnti.

La funzione **wcsrtombs** differisce da [wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md) dalla sua rimocitale. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alla stessa o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione utilizzerebbe **wcsrlen** anziché **wcsnlen**, se al posto di **wcsrtombs** venisse utilizzata una chiamata successiva a wcsrtombs al posto di **wcstombs**.

Se l'argomento *mbstr* è **NULL**, **wcsrtombs** restituisce la dimensione richiesta in byte della stringa di destinazione. Se *mbstate* è null, viene utilizzato lo stato di conversione **dell'mbstate_t** interno. Se la sequenza di caratteri *wchar* non dispone di una rappresentazione di caratteri multibyte corrispondente, viene restituito un -1 e **errno** viene impostato su **EILSEQ**.

In C++, questa funzione presenta un overload di modello che richiama la relativa controparte sicura più recente. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="exceptions"></a>Eccezioni

La funzione **wcsrtombs** è multithread-safe finché nessuna funzione nel thread corrente chiama **setlocale** mentre questa funzione è in esecuzione e *mbstate* non è null.

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

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[wcrtomb](wcrtomb.md)<br/>
[wcrtomb_s](wcrtomb-s.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[mbsinit](mbsinit.md)<br/>
