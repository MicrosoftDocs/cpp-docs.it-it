---
title: wcstombs_s, _wcstombs_s_l
ms.date: 4/2/2020
api_name:
- _wcstombs_s_l
- wcstombs_s
- _o__wcstombs_s_l
- _o_wcstombs_s
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
- wcstombs_s
- _wcstombs_s_l
helpviewer_keywords:
- wcstombs_s function
- string conversion, wide characters
- wide characters, converting
- _wcstombs_s_l function
- wcstombs_s_l function
- characters, converting
- string conversion, multibyte character strings
ms.assetid: 105f2d33-221a-4f6d-864c-23c1865c42af
ms.openlocfilehash: c20066cddb3f28d31d2964ec720b64ed49836f65
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328040"
---
# <a name="wcstombs_s-_wcstombs_s_l"></a>wcstombs_s, _wcstombs_s_l

Converte una sequenza di caratteri wide in una sequenza di caratteri multibyte corrispondente. Questa è una versione di [wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md) che include miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t wcstombs_s(
   size_t *pReturnValue,
   char *mbstr,
   size_t sizeInBytes,
   const wchar_t *wcstr,
   size_t count
);

errno_t _wcstombs_s_l(
   size_t *pReturnValue,
   char *mbstr,
   size_t sizeInBytes,
   const wchar_t *wcstr,
   size_t count,
   _locale_t locale
);

template <size_t size>
errno_t wcstombs_s(
   size_t *pReturnValue,
   char (&mbstr)[size],
   const wchar_t *wcstr,
   size_t count
); // C++ only

template <size_t size>
errno_t _wcstombs_s_l(
   size_t *pReturnValue,
   char (&mbstr)[size],
   const wchar_t *wcstr,
   size_t count,
   _locale_t locale
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
Numero massimo di byte da archiviare nel buffer *mbstr,* escluso il carattere di terminazione null, o [_TRUNCATE](../../c-runtime-library/truncate.md).

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

|Condizione di errore|Valore restituito ed **errno**|
|---------------------|------------------------------|
|*mbstr* è **NULL** e *sizeInBytes* > 0|**Einval**|
|*wcstr* è **NULL**|**Einval**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che *count* non sia **_TRUNCATE**; vedere le osservazioni più avanti)|**ERANGE**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Osservazioni

La funzione **wcstombs_s** converte una stringa di caratteri wide a cui punta *wcstr* in caratteri multibyte memorizzati nel buffer a cui punta *mbstr*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null wide

- Viene rilevato un carattere wide che non può essere convertito

- Il numero di byte archiviati nel buffer *mbstr* è uguale a *count*.

La stringa di destinazione termina sempre con Null, anche in caso di errore.

Se *count* è il valore speciale [_TRUNCATE](../../c-runtime-library/truncate.md), **wcstombs_s** converte la maggior parte della stringa che si adatterà al buffer di destinazione, lasciando comunque spazio per un terminatore null. Se la stringa viene troncata, il valore restituito è **STRUNCATE**e la conversione viene considerata riuscita.

Se **wcstombs_s** converte correttamente la stringa di origine, inserisce la dimensione in byte della stringa convertita, incluso il carattere di terminazione null, in *&#42;pReturnValue* (purché *pReturnValue* non sia **NULL**). Ciò si verifica anche se l'argomento *mbstr* è **NULL** e fornisce un modo per determinare la dimensione del buffer richiesta. Si noti che se *mbstr* è **NULL**, *count* viene ignorato.

Se **wcstombs_s** rileva un carattere wide che non può convertire in un carattere multibyte, inserisce 0 in *&#42;pReturnValue*, imposta il buffer di destinazione su una stringa vuota, imposta **errno** su **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui punta *wcstr* e *mbstr* si sovrappongono, il comportamento di **wcstombs_s** non è definito.

> [!IMPORTANT]
> Assicurarsi che *wcstr* e *mbstr* non si sovrappongano e che *il conteggio* rifletta correttamente il numero di caratteri di tipo "wide" da convertire.

**wcstombs_s** utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. **_wcstombs_s_l** è identico a **wcstombs,** ad eccezione del fatto che utilizza invece le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wcstombs_s**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma illustra il comportamento della funzione **wcstombs_s.**

```C
// crt_wcstombs_s.c
// This example converts a wide character
// string to a multibyte character string.
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define BUFFER_SIZE 100

int main( void )
{
    size_t   i;
    char      *pMBBuffer = (char *)malloc( BUFFER_SIZE );
    wchar_t*pWCBuffer = L"Hello, world.";

    printf( "Convert wide-character string:\n" );

    // Conversion
    wcstombs_s(&i, pMBBuffer, (size_t)BUFFER_SIZE,
               pWCBuffer, (size_t)BUFFER_SIZE );

    // Output
    printf("   Characters converted: %u\n", i);
    printf("    Multibyte character: %s\n\n",
     pMBBuffer );

    // Free multibyte character buffer
    if (pMBBuffer)
    {
    free(pMBBuffer);
    }
}
```

```Output
Convert wide-character string:
   Characters converted: 14
    Multibyte character: Hello, world.
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wctomb_s, _wctomb_s_l](wctomb-s-wctomb-s-l.md)<br/>
[WideCharToMultiByte](/windows/win32/api/stringapiset/nf-stringapiset-widechartomultibyte)<br/>
