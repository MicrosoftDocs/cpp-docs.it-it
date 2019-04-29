---
title: mbrtowc
ms.date: 11/04/2016
apiname:
- mbrtowc
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
- mbrtowc
helpviewer_keywords:
- mbrtowc function
ms.assetid: a1e87fcc-6de0-4ca1-bf26-508d28490286
ms.openlocfilehash: bd719e7b336333f6e06a1db9b1e34784575a1602
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62331532"
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

*wchar*<br/>
Indirizzo di un carattere wide per ricevere la stringa di caratteri wide convertita (tipo **wchar_t**). Questo valore può essere un puntatore Null se non è richiesta la restituzione di caratteri wide.

*mbchar*<br/>
Indirizzo di una sequenza di byte (carattere multibyte).

*count*<br/>
Numero di byte da controllare.

*mbstate*<br/>
Puntatore all'oggetto stato di conversione. Se questo valore è un puntatore Null, la funzione userà un oggetto stato di conversione interno statico. Perché l'interno **mbstate_t** oggetto non è thread-safe, è consigliabile passare sempre il proprio *mbstate* argomento.

## <a name="return-value"></a>Valore restituito

Uno dei valori seguenti:

0 successivo *conteggio* o byte di un numero inferiore completano il carattere multibyte che rappresenta il carattere wide null, che viene archiviato in *wchar*, se *wchar* non è un puntatore null.

1 per *conteggio*, inclusi la successiva *conteggio* o meno byte completano un carattere multibyte valido. Il valore restituito è il numero di byte che completa il carattere multibyte. Il carattere wide equivalente è archiviato *wchar*, se *wchar* non è un puntatore null.

(size_t) (-1) Si è verificato un errore di codifica. La prossima *conteggio* o un numero di byte non contribuisce a un carattere multibyte valido e completo. In questo caso **errno** è impostato su EILSEQ e lo stato di spostamento conversione in *mbstate* non è specificato.

(size_t) -(2) La prossima *conteggio* byte contribuiscono a un carattere multibyte incompleto ma potenzialmente valido e tutti *conteggio* byte sono stati elaborati. Nessun valore viene archiviato *wchar*, ma *mbstate* viene aggiornato per riavviare la funzione.

## <a name="remarks"></a>Note

Se *mbchar* è un puntatore null, la funzione è equivalente alla chiamata:

`mbrtowc(NULL, "", 1, &mbstate)`

In questo caso, il valore degli argomenti *wchar* e *conteggio* vengono ignorati.

Se *mbchar* non è un puntatore null, la funzione esamina *conteggio* byte dal *mbchar* per determinare il numero di byte necessari per completare la successiva carattere multibyte. Se il carattere successivo è valido, il carattere multibyte corrispondente viene archiviato *wchar* se non è un puntatore null. Se il carattere wide null corrispondente carattere, lo stato risultante del *mbstate* è lo stato di conversione iniziale.

Il **mbrtowc** la funzione differisce da [mbtowc, mbtowc_l](mbtowc-mbtowc-l.md) dalla relativa possibilità di essere riavviata. Cui è archiviato lo stato di conversione *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili.  Ad esempio, un'applicazione deve utilizzare **wcsrlen** invece di **wcslen** se una chiamata successiva a **wcsrtombs** viene usato al posto di **wcstombs**.

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

### <a name="sample-output"></a>Esempio di output

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

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
