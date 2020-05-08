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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- mbrtowc
helpviewer_keywords:
- mbrtowc function
ms.assetid: a1e87fcc-6de0-4ca1-bf26-508d28490286
ms.openlocfilehash: a77049edba9a98d9e3e4df93ee2ba007a3eb7381
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82919183"
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

*WCHAR*<br/>
Indirizzo di un carattere wide per ricevere la stringa di caratteri wide convertita (tipo **wchar_t**). Questo valore può essere un puntatore Null se non è richiesta la restituzione di caratteri wide.

*mbchar*<br/>
Indirizzo di una sequenza di byte (carattere multibyte).

*count*<br/>
Numero di byte da controllare.

*mbstate*<br/>
Puntatore all'oggetto stato di conversione. Se questo valore è un puntatore Null, la funzione userà un oggetto stato di conversione interno statico. Poiché l'oggetto **mbstate_t** interno non è thread-safe, è consigliabile passare sempre un argomento *mbstate* personalizzato.

## <a name="return-value"></a>Valore restituito

Uno dei valori seguenti:

0 il *numero* successivo o un minor numero di byte completa il carattere multibyte che rappresenta il carattere wide null archiviato in *WCHAR*, se *WCHAR* non è un puntatore null.

1 per il *conteggio*, incluso il *conteggio* successivo o un minor numero di byte completa un carattere multibyte valido. Il valore restituito è il numero di byte che completa il carattere multibyte. Il carattere wide equivalente viene archiviato in *WCHAR*, se *WCHAR* non è un puntatore null.

(size_t) (-1) Si è verificato un errore di codifica. Il *numero* di byte successivo o inferiore non contribuisce a un carattere multibyte completo e valido. In questo caso, **errno** viene impostato su EILSEQ e lo stato di spostamento della conversione in *mbstate* non è specificato.

(size_t) (-2) Il *numero* di byte successivo contribuisce a un carattere multibyte incompleto ma potenzialmente valido e tutti i byte del *conteggio* sono stati elaborati. Nessun valore viene archiviato in *WCHAR*, ma *mbstate* viene aggiornato per riavviare la funzione.

## <a name="remarks"></a>Osservazioni

Se *mbchar* è un puntatore null, la funzione è equivalente alla chiamata:

`mbrtowc(NULL, "", 1, &mbstate)`

In questo caso, il valore degli argomenti *WCHAR* e *count* viene ignorato.

Se *mbchar* non è un puntatore null, la funzione esamina il *numero di byte da* *mbchar* per determinare il numero di byte necessario per completare il carattere multibyte successivo. Se il carattere successivo è valido, il carattere multibyte corrispondente viene archiviato in *WCHAR* se non è un puntatore null. Se il carattere è il carattere wide null corrispondente, lo stato risultante di *mbstate* è lo stato di conversione iniziale.

La funzione **mbrtowc** differisce da [mbtowc _mbtowc_l](mbtowc-mbtowc-l.md) dalla relativa riavviabilità. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve usare **wcsrlen** anziché **wcslen** se viene usata una chiamata successiva a **wcsrtombs** anziché **wcstombs**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

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
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
