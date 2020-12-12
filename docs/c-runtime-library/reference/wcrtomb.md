---
description: 'Altre informazioni su: wcrtomb'
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: effa442cee4aa0924fa976ee9138f40b22217375
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331052"
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

*mbchar*<br/>
Carattere multibyte convertito risultante.

*wchar*<br/>
Carattere wide da convertire.

*mbstate*<br/>
Puntatore a un oggetto **mbstate_t** .

## <a name="return-value"></a>Valore restituito

Restituisce il numero di byte necessari per rappresentare il carattere multibyte convertito. In caso contrario restituisce -1 se si verifica un errore.

## <a name="remarks"></a>Commenti

La funzione **wcrtomb** converte un carattere wide, a partire dallo stato di conversione specificato contenuto in *mbstate*, dal valore contenuto in *WCHAR*, nell'indirizzo rappresentato da *mbchar*. Il valore restituito è il numero di byte necessari per rappresentare il carattere multibyte corrispondente, ma non restituisce più di **MB_CUR_MAX** byte.

Se *mbstate* è null, viene utilizzato l'oggetto **mbstate_t** interno contenente lo stato di conversione di *mbchar* . Se la sequenza di caratteri *WCHAR* non presenta una rappresentazione di caratteri multibyte corrispondente, viene restituito-1 e **errno** viene impostato su **EILSEQ**.

La funzione **wcrtomb** differisce da [wctomb _wctomb_l](wctomb-wctomb-l.md) dalla relativa riavviabilità. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione utilizzerebbe **wcsrlen** anziché **wcsnlen** se veniva utilizzata una chiamata successiva a **wcsrtombs** anziché **wcstombs**.

In C++, per questa funzione è disponibile un overload del modello che richiama le relative controparti sicure più recenti. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="exceptions"></a>Eccezioni

La funzione **wcrtomb** è multithread safe a condizione che nessuna funzione nel thread corrente chiami **setlocale** mentre questa funzione è in esecuzione e mentre *mbstate* è null.

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

## <a name="see-also"></a>Vedi anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione delle sequenze di Multibyte-Character](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbsinit](mbsinit.md)<br/>
