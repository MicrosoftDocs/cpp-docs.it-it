---
title: mbrlen | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- mbrlen
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
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- mbrlen
dev_langs:
- C++
helpviewer_keywords:
- mbrlen function
ms.assetid: dde8dee9-e091-4c4c-81b3-639808885ae1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 77e5cb106a971bcaf02662bfd8459267a134173a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32404441"
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

*str*<br/>
Puntatore al byte successivo da controllare in una stringa di caratteri multibyte.

*count*<br/>
Numero massimo di byte da controllare.

*mbstate*<br/>
Puntatore allo stato di spostamento corrente del byte iniziale di *str*.

## <a name="return-value"></a>Valore restituito

Uno dei valori seguenti:

|||
|-|-|
0|Alla successiva *conteggio* o byte di un numero inferiore completano il carattere multibyte che rappresenta il carattere wide null.
1 per *conteggio*, inclusi,|Alla successiva *conteggio* o byte di un numero inferiore completano un carattere multibyte valido. Il valore restituito è il numero di byte che completa il carattere multibyte.
(size_t)(-2)|Alla successiva *conteggio* byte contribuiscono a un carattere multibyte incompleto ma potenzialmente valido e tutti i *conteggio* byte sono stati elaborati.
(size_t)(-1)|Si è verificato un errore di codifica. Alla successiva *conteggio* o numero di byte inferiore non contribuisce a un carattere multibyte valido e completo. In questo caso **errno** è impostato su EILSEQ e lo stato di conversione *mbstate* non è specificato.

## <a name="remarks"></a>Note

Il **mbrlen** funzione controlla al massimo *conteggio* byte a partire dal byte a cui punta *str* per determinare il numero di byte necessari per completare quella successiva carattere multibyte, comprese tutte le sequenze di spostamento. È equivalente alla chiamata `mbrtowc(NULL, str, count, &mbstate)` in cui *mbstate* entrambi un utente fornito dal **mbstate_t** oggetto o un oggetto interno statico fornito dalla libreria.

Il **mbrlen** funzione Salva e Usa lo stato di spostamento di un carattere multibyte incompleto nel *mbstate* parametro. In questo modo **mbrlen** la possibilità di ricominciare nel mezzo di un carattere multibyte se necessario, esaminando al massimo *conteggio* byte. Se *mbstate* è un puntatore null **mbrlen** utilizza un interno statico **mbstate_t** oggetto usato per archiviare lo stato di spostamento. Perché l'interno **mbstate_t** oggetto non è thread-safe, è consigliabile allocare sempre e passare la propria *mbstate* parametro.

Il **mbrlen** rispetto alla funzione [mbclen, mblen, mblen_l](mbclen-mblen-mblen-l.md) dal relativo riavviabilità. Lo stato di spostamento viene archiviato *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve usare **wcsrlen** anziché **wcslen** se una chiamata successiva a **wcsrtombs** utilizzato al posto del **wcstombs**.

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

In questo esempio mostra come l'interpretazione dei caratteri multibyte dipende dalla tabella codici corrente e illustra le funzionalità di ripresa **mbrlen**.

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

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
