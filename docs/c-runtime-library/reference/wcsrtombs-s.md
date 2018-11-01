---
title: wcsrtombs_s
ms.date: 11/04/2016
apiname:
- wcsrtombs_s
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
- wcsrtombs_s
helpviewer_keywords:
- string conversion, wide characters
- wcsrtombs_s function
- wide characters, strings
ms.assetid: 9dccb766-113c-44bb-9b04-07a634dddec8
ms.openlocfilehash: 9ece21737b1e0b4d157b241286638ac376843fc6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50459059"
---
# <a name="wcsrtombss"></a>wcsrtombs_s

Converte una stringa di caratteri wide nella relativa rappresentazione di stringa di caratteri multibyte. Questa è una versione di [wcsrtombs](wcsrtombs.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t wcsrtombs_s(
   size_t *pReturnValue,
   char *mbstr,
   size_t sizeInBytes,
   const wchar_t **wcstr,
   sizeof count,
   mbstate_t *mbstate
);
template <size_t size>
errno_t wcsrtombs_s(
   size_t *pReturnValue,
   char (&mbstr)[size],
   const wchar_t **wcstr,
   sizeof count,
   mbstate_t *mbstate
); // C++ only
```

### <a name="parameters"></a>Parametri

*pReturnValue*<br/>
Numero di caratteri convertiti.

*mbstr*<br/>
Indirizzo di un buffer per la stringa di caratteri multibyte convertita risultante.

*sizeInBytes*<br/>
La dimensione in byte del *mbstr* buffer.

*wcstr*<br/>
Punta alla stringa di caratteri wide da convertire.

*count*<br/>
Il numero massimo di byte da archiviare nella *mbstr* buffer, o [truncate](../../c-runtime-library/truncate.md).

*mbstate*<br/>
Un puntatore a un **mbstate_t** oggetto stato di conversione.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

|Condizione di errore|Valore restituito e **errno**|
|---------------------|------------------------------|
|*mbstr* viene **NULL** e *sizeInBytes* > 0|**EINVAL**|
|*wcstr* è **NULL**|**EINVAL**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che *conteggio* viene **truncate**; vedere la sezione Osservazioni riportata di seguito)|**ERANGE**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Note

Il **wcsrtombs_s** funzione converte una stringa di caratteri wide a cui punta *wcstr* in caratteri multibyte archiviati nel buffer a cui fa riferimento *mbstr*, usando il stato di conversione contenuto *mbstate*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null wide

- Viene rilevato un carattere wide che non può essere convertito

- Il numero di byte archiviato nel *mbstr* uguale a un buffer *conteggio*.

La stringa di destinazione termina sempre con Null, anche in caso di errore.

Se *conteggio* è il valore speciale [truncate](../../c-runtime-library/truncate.md), quindi **wcsrtombs_s** Converte la porzione di stringa rientrano nel buffer di destinazione, lasciando però spazio per un valore null carattere di terminazione.

Se **wcsrtombs_s** converte correttamente la stringa di origine, inserisce la dimensione in byte della stringa convertita, incluso il carattere di terminazione null, nel  *&#42;pReturnValue* (fornito  *pReturnValue* non è **NULL**). Questo errore si verifica anche se il *mbstr* l'argomento è **NULL** e fornisce un modo per determinare le dimensioni del buffer richieste. Si noti che se *mbstr* viene **NULL**, *conteggio* viene ignorato.

Se **wcsrtombs_s** rileva un carattere wide che non è possibile convertire in carattere multibyte, inserisce -1  *\*pReturnValue*, imposta il buffer di destinazione in una stringa vuota, imposta **errno** alla **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento delle **wcsrtombs_s** è definito. **wcsrtombs_s** dipende dalla categoria LC_TYPE delle impostazioni locali correnti.

> [!IMPORTANT]
> Assicurarsi che *wcstr* e *mbstr* non si sovrappongano e che *conteggio* rispecchi correttamente il numero di caratteri wide da convertire.

Il **wcsrtombs_s** la funzione differisce da [wcstombs_s, wcstombs_s_l](wcstombs-s-wcstombs-s-l.md) dalla relativa possibilità di essere riavviata. Cui è archiviato lo stato di conversione *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione deve usare **wcsrlen** invece **wcslen**, se una chiamata successiva a **wcsrtombs_s** sono state utilizzate al posto di **wcstombs_s**.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="exceptions"></a>Eccezioni

Il **wcsrtombs_s** funzione è multithread-safe finché nessuna funzione nel thread corrente chiami **setlocale** durante l'esecuzione di questa funzione e il *mbstate* è null.

## <a name="example"></a>Esempio

```cpp
// crt_wcsrtombs_s.cpp
//
// This code example converts a wide
// character string into a multibyte
// character string.
//

#include <stdio.h>
#include <memory.h>
#include <wchar.h>
#include <errno.h>

#define MB_BUFFER_SIZE 100

void main()
{
    const wchar_t   wcString[] =
                    {L"Every good boy does fine."};
    const wchar_t   *wcsIndirectString = wcString;
    char            mbString[MB_BUFFER_SIZE];
    size_t          countConverted;
    errno_t         err;
    mbstate_t       mbstate;

    // Reset to initial shift state
    ::memset((void*)&mbstate, 0, sizeof(mbstate));

    err = wcsrtombs_s(&countConverted, mbString, MB_BUFFER_SIZE,
                      &wcsIndirectString, MB_BUFFER_SIZE, &mbstate);
    if (err == EILSEQ)
    {
        printf( "An encoding error was detected in the string.\n" );
    }
    else
    {
        printf( "The string was successfully converted.\n" );
    }
}
```

```Output
The string was successfully converted.
```

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wcsrtombs_s**|\<wchar.h>|

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[wcrtomb](wcrtomb.md)<br/>
[wcrtomb_s](wcrtomb-s.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[mbsinit](mbsinit.md)<br/>
