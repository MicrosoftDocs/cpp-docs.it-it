---
title: wcrtomb
ms.date: 4/2/2020
api_name:
- wcrtomb
- _o_wcrtomb
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
- wcrtomb
helpviewer_keywords:
- wide characters, converting
- wcrtomb function
- multibyte characters
- characters, converting
ms.assetid: 717f1b21-2705-4b7f-b6d0-82adc5224340
ms.openlocfilehash: eda857b80404aebe46b090741e0b56d4fe692f34
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328103"
---
# <a name="wcrtomb"></a>wcrtomb

Converte un carattere wide nella relativa rappresentazione di caratteri multibyte. È disponibile una versione più sicura di questa funzione. Vedere [wcrtomb_s](wcrtomb-s.md).

## <a name="syntax"></a>Sintassi

```C
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

### <a name="parameters"></a>Parametri

*mbchar (in questo mbchar)*<br/>
Carattere multibyte convertito risultante.

*Wchar*<br/>
Carattere wide da convertire.

*mbstate (in stato di stato)*<br/>
Puntatore a un **oggetto mbstate_t.**

## <a name="return-value"></a>Valore restituito

Restituisce il numero di byte necessari per rappresentare il carattere multibyte convertito. In caso contrario restituisce -1 se si verifica un errore.

## <a name="remarks"></a>Osservazioni

La funzione **wcrtomb** converte un carattere wide, a partire dallo stato di conversione specificato contenuto in *mbstate*, dal valore contenuto in *wchar*, nell'indirizzo rappresentato da *mbchar*. Il valore restituito è il numero di byte necessari per rappresentare il carattere multibyte corrispondente, ma non restituirà più di **MB_CUR_MAX** byte.

Se *mbstate* è null, viene utilizzato l'oggetto **interno mbstate_t** contenente lo stato di conversione di *mbchar.* Se la sequenza di caratteri *wchar* non dispone di una rappresentazione di caratteri multibyte corrispondente, viene restituito un -1 e **errno** viene impostato su **EILSEQ**.

La funzione **wcrtomb** è diversa da [wctomb, _wctomb_l](wctomb-wctomb-l.md) per la sua rimocitale. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alla stessa o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione utilizzerebbe **wcsrlen** anziché **wcsnlen**, se al posto di **wcsrtombs** venisse utilizzata una chiamata successiva a wcsrtombs al posto di **wcstombs**.

In C++, per questa funzione è disponibile un overload del modello che richiama le relative controparti sicure più recenti. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="exceptions"></a>Eccezioni

La funzione **wcrtomb** è multithread-safe finché nessuna funzione nel thread corrente chiama **setlocale** mentre questa funzione è in esecuzione e mentre *mbstate* è null.

## <a name="example"></a>Esempio

```C
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
|**wcrtomb**|\<wchar.h>|

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbsinit](mbsinit.md)<br/>
