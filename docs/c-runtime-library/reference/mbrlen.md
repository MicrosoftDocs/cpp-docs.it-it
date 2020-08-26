---
title: mbrlen
ms.date: 4/2/2020
api_name:
- mbrlen
- _o_mbrlen
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
- api-ms-win-crt-string-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- mbrlen
helpviewer_keywords:
- mbrlen function
ms.assetid: dde8dee9-e091-4c4c-81b3-639808885ae1
ms.openlocfilehash: 2e0e0ec9d92744fc904bae5ac7f91db8049de4cd
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88842117"
---
# <a name="mbrlen"></a>mbrlen

Determina il numero di byte necessari per completare un carattere multibyte nelle impostazioni locali correnti, con la possibilità di ricominciare nel mezzo di un carattere multibyte.

## <a name="syntax"></a>Sintassi

```C
size_t mbrlen(
   const char * str,
   size_t count,
   mbstate_t * mbstate
);
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Puntatore al byte successivo da controllare in una stringa di caratteri multibyte.

*count*<br/>
Numero massimo di byte da controllare.

*mbstate*<br/>
Puntatore allo stato di spostamento corrente del byte iniziale di *Str*.

## <a name="return-value"></a>Valore restituito

Uno dei valori seguenti:

| Valore | Descrizione |
|--|--|
| 0 | Il *numero* successivo o un minor numero di byte completa il carattere multibyte che rappresenta il carattere wide null. |
| da 1 a *count*inclusi | Il *conteggio* successivo o un minor numero di byte completa un carattere multibyte valido. Il valore restituito è il numero di byte che completa il carattere multibyte. |
| (size_t)(-2) | Il *numero* di byte successivo contribuisce a un carattere multibyte incompleto ma potenzialmente valido e tutti i byte del *conteggio* sono stati elaborati. |
| (size_t)(-1) | Si è verificato un errore di codifica. Il *numero* di byte successivo o inferiore non contribuisce a un carattere multibyte completo e valido. In questo caso **errno** è impostato su EILSEQ e lo stato di conversione in *mbstate* non è specificato. |

## <a name="remarks"></a>Osservazioni

La funzione **mbrlen** esamina al massimo i byte di *conteggio* a partire dal byte a cui punta *Str* per determinare il numero di byte necessari per completare il carattere multibyte successivo, incluse le sequenze di spostamento. Equivale alla chiamata `mbrtowc(NULL, str, count, &mbstate)` dove *mbstate* è un oggetto **mbstate_t** fornito dall'utente o un oggetto interno statico fornito dalla libreria.

La funzione **mbrlen** Salva e usa lo stato di spostamento di un carattere multibyte incompleto nel parametro *mbstate* . Questo consente a **mbrlen** di ricominciare nel mezzo di un carattere multibyte, se necessario, esaminando al massimo i byte del *conteggio* . Se *mbstate* è un puntatore null, **mbrlen** usa un oggetto **mbstate_t** statico interno per archiviare lo stato di spostamento. Poiché l'oggetto **mbstate_t** interno non è thread-safe, è consigliabile allocare e passare sempre il proprio parametro *mbstate* .

La funzione **mbrlen** è diversa da [_mbclen, mblen _mblen_l](mbclen-mblen-mblen-l.md) dalla relativa riavviabilità. Lo stato di spostamento viene archiviato in *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve usare **wcsrlen** anziché **wcslen** se viene usata una chiamata successiva a **wcsrtombs** anziché **wcstombs**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|non applicabile|non applicabile|**mbrlen**|non applicabile|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**mbrlen**|\<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo esempio Mostra come l'interpretazione dei caratteri multibyte dipende dalla tabella codici corrente e illustra la possibilità di ripresa di **mbrlen**.

```C
// crt_mbrlen.c
// Compile by using: cl crt_mbrlen.c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>

size_t Example(const char * pStr)
{
    size_t      charLen = 0;
    size_t      charCount = 0;
    mbstate_t   mbState = {0};

    while ((charLen = mbrlen(pStr++, 1, &mbState)) != 0 &&
            charLen != (size_t)-1)
    {
        if (charLen != (size_t)-2) // if complete mbcs char,
        {
            charCount++;
        }
    }
    return (charCount);
}

int main( void )
{
    int         cp;
    size_t      charCount = 0;
    const char  *pSample =
        "\x82\xD0\x82\xE7\x82\xAA\x82\xC8: Shift-jis hiragana.";

    cp = _getmbcp();
    charCount = Example(pSample);
    printf("\nCode page: %d\n%s\nCharacter count: %d\n",
        cp, pSample, charCount);

    setlocale(LC_ALL, "ja-JP"); // Set Japanese locale
    _setmbcp(932); // and Japanese multibyte code page
    cp = _getmbcp();
    charCount = Example(pSample);
    printf("\nCode page: %d\n%s\nCharacter count: %d\n",
        cp, pSample, charCount);
}
```

```Output

Code page: 0
é╨éτé¬é╚: Shift-jis hiragana.
Character count: 29

Code page: 932
????: Shift-jis hiragana.
Character count: 25
```

## <a name="see-also"></a>Vedere anche

[Manipolazione di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
