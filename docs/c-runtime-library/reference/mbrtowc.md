---
title: mbrtowc
ms.date: 4/2/2020
api_name:
- mbrtowc
- _o_mbrtowc
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
- mbrtowc
helpviewer_keywords:
- mbrtowc function
ms.assetid: a1e87fcc-6de0-4ca1-bf26-508d28490286
ms.openlocfilehash: be46c3f3c728b70c7cbf060572acc24662637a81
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81340923"
---
# <a name="mbrtowc"></a>mbrtowc

Converte un carattere multibyte delle impostazioni locali correnti nel carattere wide equivalente, con la possibilità di ricominciare nel mezzo di un carattere multibyte.

## <a name="syntax"></a>Sintassi

```C
size_t mbrtowc(
   wchar_t *wchar,
   const char *mbchar,
   size_t count,
   mbstate_t *mbstate
);
```

### <a name="parameters"></a>Parametri

*Wchar*<br/>
Indirizzo di un carattere di tipo "wide" per ricevere la stringa di caratteri wide convertita (tipo **wchar_t**). Questo valore può essere un puntatore Null se non è richiesta la restituzione di caratteri wide.

*mbchar (in questo mbchar)*<br/>
Indirizzo di una sequenza di byte (carattere multibyte).

*count*<br/>
Numero di byte da controllare.

*mbstate (in stato di stato)*<br/>
Puntatore all'oggetto stato di conversione. Se questo valore è un puntatore Null, la funzione userà un oggetto stato di conversione interno statico. Poiché l'oggetto **interno mbstate_t** non è thread-safe, è consigliabile passare sempre il proprio argomento *mbstate.*

## <a name="return-value"></a>Valore restituito

Uno dei valori seguenti:

0 Il *conteggio* successivo o un numero inferiore di byte completa il carattere multibyte che rappresenta il carattere di larghezza null, archiviato in *wchar*, se *wchar* non è un puntatore null.

1 to *count*, incluso *il conteggio* successivo o un numero inferiore di byte completa un carattere multibyte valido. Il valore restituito è il numero di byte che completa il carattere multibyte. L'equivalente carattere wide viene archiviato in *wchar*, se *wchar* non è un puntatore null.

(size_t) (-1) Si è verificato un errore di codifica. Il *conteggio* successivo o un numero inferiore di byte non contribuiscono a un carattere multibyte completo e valido. In questo caso, **errno** è impostato su EILSEQ e lo stato dello spostamento di conversione in *mbstate* non è specificato.

(size_t) (-2) I byte di *conteggio* successivi contribuiscono a un carattere multibyte incompleto ma potenzialmente valido e tutti i byte di *conteggio* sono stati elaborati. Nessun valore viene archiviato in *wchar*, ma *mbstate* viene aggiornato per riavviare la funzione.

## <a name="remarks"></a>Osservazioni

Se mbchar è un puntatore null, la funzione è equivalente alla chiamata:If *mbchar* is a null pointer, the function is equivalent to the call:

`mbrtowc(NULL, "", 1, &mbstate)`

In questo caso, il valore degli argomenti *wchar* e *count* viene ignorato.

Se *mbchar* non è un puntatore null, la funzione esamina i byte *di count* da *mbchar* per determinare il numero richiesto di byte necessari per completare il carattere multibyte successivo. Se il carattere successivo è valido, il carattere multibyte corrispondente viene archiviato in *wchar* se non è un puntatore null. Se il carattere è il carattere wide null corrispondente, lo stato risultante di *mbstate* è lo stato di conversione iniziale.

La funzione **mbrtowc** differisce da [mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md) dalla sua rimocitale. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alla stessa o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve utilizzare **wcsrlen** anziché **wcslen** se viene utilizzata una chiamata successiva a **wcsrtombs** al posto di **wcstombs**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="example"></a>Esempio

Converte un carattere multibyte nel relativo carattere wide equivalente.

```cpp
// crt_mbrtowc.cpp

#include <stdio.h>
#include <mbctype.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>

#define BUF_SIZE 100

int Sample(char* szIn, wchar_t* wcOut, int nMax)
{
    mbstate_t   state = {0}; // Initial state
    size_t      nConvResult,
                nmbLen = 0,
                nwcLen = 0;
    wchar_t*    wcCur = wcOut;
    wchar_t*    wcEnd = wcCur + nMax;
    const char* mbCur = szIn;
    const char* mbEnd = mbCur + strlen(mbCur) + 1;
    char*       szLocal;

    // Sets all locale to French_Canada.1252
    szLocal = setlocale(LC_ALL, "French_Canada.1252");
    if (!szLocal)
    {
        printf("The fuction setlocale(LC_ALL, \"French_Canada.1252\") failed!\n");
        return 1;
    }

    printf("Locale set to: \"%s\"\n", szLocal);

    // Sets the code page associated current locale's code page
    // from a previous call to setlocale.
    if (_setmbcp(_MB_CP_SBCS) == -1)
    {
        printf("The fuction _setmbcp(_MB_CP_SBCS) failed!");
        return 1;
    }

    while ((mbCur < mbEnd) && (wcCur < wcEnd))
    {
        //
        nConvResult = mbrtowc(wcCur, mbCur, 1, &state);
        switch (nConvResult)
        {
            case 0:
            {  // done
                printf("Conversion succeeded!\nMultibyte String: ");
                printf(szIn);
                printf("\nWC String: ");
                wprintf(wcOut);
                printf("\n");
                mbCur = mbEnd;
                break;
            }

            case -1:
            {  // encoding error
                printf("The call to mbrtowc has detected an encoding error.\n");
                mbCur = mbEnd;
                break;
            }

            case -2:
            {  // incomplete character
                if   (!mbsinit(&state))
                {
                    printf("Currently in middle of mb conversion, state = %x\n", state);
                    // state will contain data regarding lead byte of mb character
                }

                ++nmbLen;
                ++mbCur;
                break;
            }

            default:
            {
                if   (nConvResult > 2) // The multibyte should never be larger than 2
                {
                    printf("Error: The size of the converted multibyte is %d.\n", nConvResult);
                }

                ++nmbLen;
                ++nwcLen;
                ++wcCur;
                ++mbCur;
            break;
            }
        }
    }

   return 0;
}

int main(int argc, char* argv[])
{
    char    mbBuf[BUF_SIZE] = "AaBbCc\x9A\x8B\xE0\xEF\xF0xXyYzZ";
    wchar_t wcBuf[BUF_SIZE] = {L''};

    return Sample(mbBuf, wcBuf, BUF_SIZE);
}
```

### <a name="sample-output"></a>Output di esempio

```Output
Locale set to: "French_Canada.1252"
Conversion succeeded!
Multibyte String: AaBbCcÜïα∩≡xXyYzZ
WC String: AaBbCcÜïα∩≡xXyYzZ
```

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**mbrtowc**|\<wchar.h>|

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
