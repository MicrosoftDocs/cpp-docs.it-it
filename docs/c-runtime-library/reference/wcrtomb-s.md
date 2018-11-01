---
title: wcrtomb_s
ms.date: 11/04/2016
apiname:
- wcrtomb_s
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
- wcrtomb_s
helpviewer_keywords:
- wide characters, converting
- wcrtomb_s function
- multibyte characters
- characters, converting
ms.assetid: 9a8a1bd0-1d60-463d-a3a2-d83525eaf656
ms.openlocfilehash: 7fe7fba861eecec562928cf381973f62a4db60fb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50522464"
---
# <a name="wcrtombs"></a>wcrtomb_s

Converte un carattere wide nella relativa rappresentazione di caratteri multibyte. Questa è una versione di [wcrtomb](wcrtomb.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
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

### <a name="parameters"></a>Parametri

*pReturnValue*<br/>
Restituisce il numero di byte scritti o -1 se si è verificato un errore.

*mbchar*<br/>
Carattere multibyte convertito risultante.

*sizeOfmbchar*<br/>
Le dimensioni dei *mbchar* variabile in byte.

*wchar*<br/>
Carattere wide da convertire.

*mbstate*<br/>
Un puntatore a un **mbstate_t** oggetto.

## <a name="return-value"></a>Valore restituito

Restituisce zero o un **errno** valore se si verifica un errore.

## <a name="remarks"></a>Note

Il **wcrtomb_s** funzione converte un carattere wide, a partire dallo stato di conversione specificato contenuto in *mbstate*, dal valore contenuto nel *wchar*, nel indirizzo rappresentato da *mbchar*. Il *pReturnValue* valore sarà il numero di byte convertiti, ma non oltre **MB_CUR_MAX** byte o -1 se si è verificato un errore.

Se *mbstate* è null, interna **mbstate_t** viene utilizzato lo stato di conversione. Se il carattere contenuto nel *wchar* non ha un carattere multibyte corrispondente, il valore di *pReturnValue* sarà -1 e la funzione restituirà il **errno** valore del **EILSEQ**.

Il **wcrtomb_s** la funzione differisce da [wctomb_s, wctomb_s_l](wctomb-s-wctomb-s-l.md) dalla relativa possibilità di essere riavviata. Cui è archiviato lo stato di conversione *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione deve usare **wcsrlen** invece **wcslen**, se una chiamata successiva a **wcsrtombs_s** sono state utilizzate al posto di **wcstombs_s**.

In C++ l'uso di questa funzione è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento per le dimensioni) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

Il **wcrtomb_s** funzione è multithread-safe finché nessuna funzione nel thread corrente chiami **setlocale** durante l'esecuzione di questa funzione e il *mbstate* è null.

## <a name="example"></a>Esempio

```C
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
|**wcrtomb_s**|\<wchar.h>|

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbsinit](mbsinit.md)<br/>
