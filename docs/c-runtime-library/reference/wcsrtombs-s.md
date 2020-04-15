---
title: wcsrtombs_s
ms.date: 4/2/2020
api_name:
- wcsrtombs_s
- _o_wcsrtombs_s
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
- wcsrtombs_s
helpviewer_keywords:
- string conversion, wide characters
- wcsrtombs_s function
- wide characters, strings
ms.assetid: 9dccb766-113c-44bb-9b04-07a634dddec8
ms.openlocfilehash: 71a2206df9d3afb64fcaf62848988cf116d9071f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328112"
---
# <a name="wcsrtombs_s"></a>wcsrtombs_s

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

*pReturnValue (Valore restituito)*<br/>
Dimensione in byte della stringa convertita, incluso il carattere di terminazione null.

*mbstr (intalltore*<br/>
Indirizzo di un buffer per la stringa di caratteri multibyte convertita risultante.

*sizeInBytes*<br/>
Dimensione in byte del buffer *mbstr.*

*Wcstr*<br/>
Punta alla stringa di caratteri wide da convertire.

*count*<br/>
Numero massimo di byte da archiviare nel buffer *mbstr* oppure [_TRUNCATE](../../c-runtime-library/truncate.md).

*mbstate (in stato di stato)*<br/>
Puntatore a un oggetto stato di conversione **mbstate_t.**

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

|Condizione di errore|Valore restituito ed **errno**|
|---------------------|------------------------------|
|*mbstr* è **NULL** e *sizeInBytes* > 0|**Einval**|
|*wcstr* è **NULL**|**Einval**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che *count* non sia **_TRUNCATE**; vedere le osservazioni più avanti)|**ERANGE**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Osservazioni

La funzione **wcsrtombs_s** converte una stringa di caratteri wide a cui punta *wcstr* in caratteri multibyte archiviati nel buffer a cui punta *mbstr*, utilizzando lo stato di conversione contenuto in *mbstate*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null wide

- Viene rilevato un carattere wide che non può essere convertito

- Il numero di byte archiviati nel buffer *mbstr* è uguale a *count*.

La stringa di destinazione termina sempre con Null, anche in caso di errore.

Se *count* è il valore speciale [_TRUNCATE](../../c-runtime-library/truncate.md), **i wcsrtombs_s** converte la maggior parte della stringa che rientra nel buffer di destinazione, lasciando comunque spazio per un terminatore null.

Se **wcsrtombs_s** converte correttamente la stringa di origine, inserisce la dimensione in byte della stringa convertita, incluso il carattere di terminazione null, in *&#42;pReturnValue* (purché *pReturnValue* non sia **NULL**). Ciò si verifica anche se l'argomento *mbstr* è **NULL** e fornisce un modo per determinare la dimensione del buffer richiesta. Si noti che se *mbstr* è **NULL**, *count* viene ignorato.

Se **wcsrtombs_s** rileva un carattere wide che non può convertire in un carattere multibyte, inserisce -1 in * \*pReturnValue*, imposta il buffer di destinazione su una stringa vuota, imposta **errno** su **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento di **wcsrtombs_s** non è definito. **wcsrtombs_s** è influenzata dalla categoria LC_TYPE delle impostazioni locali correnti.

> [!IMPORTANT]
> Assicurarsi che *wcstr* e *mbstr* non si sovrappongano e che *il conteggio* rifletta correttamente il numero di caratteri di tipo "wide" da convertire.

La funzione **wcsrtombs_s** è diversa da [wcstombs_s, _wcstombs_s_l](wcstombs-s-wcstombs-s-l.md) per la sua rimocuizzabilità. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alla stessa o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione utilizzerebbe **wcsrlen** anziché **wcslen**, se al posto di wcsrtombs_s venisse utilizzata una chiamata successiva a **wcsrtombs_s** anziché **wcstombs_s**.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="exceptions"></a>Eccezioni

La funzione **wcsrtombs_s** è multithread-safe finché nessuna funzione nel thread corrente chiama **setlocale** mentre questa funzione è in esecuzione e *mbstate* è null.

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

int main()
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

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[wcrtomb](wcrtomb.md)<br/>
[wcrtomb_s](wcrtomb-s.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[mbsinit](mbsinit.md)<br/>
