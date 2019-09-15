---
title: wcstombs_s, _wcstombs_s_l
ms.date: 11/04/2016
api_name:
- _wcstombs_s_l
- wcstombs_s
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
ms.openlocfilehash: 135bcb90e6a82591bf05e56b60575719f4c7d45c
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70945022"
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

*pReturnValue*<br/>
Dimensioni in byte della stringa convertita, incluso il carattere di terminazione null.

*mbstr*<br/>
Indirizzo di un buffer per la stringa di caratteri multibyte convertita risultante.

*sizeInBytes*<br/>
Dimensioni in byte del buffer *mbstr* .

*wcstr*<br/>
Punta alla stringa di caratteri wide da convertire.

*count*<br/>
Il numero massimo di byte da archiviare nel buffer *mbstr* , escluso il carattere null di terminazione, o [_TRUNCATE](../../c-runtime-library/truncate.md).

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

|Condizione di errore|Valore restituito e **errno**|
|---------------------|------------------------------|
|*mbstr* è **NULL** e *sizeInBytes* > 0|**EINVAL**|
|*wcstr* è **null**|**EINVAL**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita, a meno che il *numero* non sia **_TRUNCATE**. vedere la sezione Osservazioni di seguito.|**ERANGE**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Note

La funzione **wcstombs_s** converte una stringa di caratteri wide a cui punta *wcstr* in caratteri multibyte archiviati nel buffer a cui punta *mbstr*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null wide

- Viene rilevato un carattere wide che non può essere convertito

- Il numero di byte archiviati nel buffer *mbstr* è uguale a *count*.

La stringa di destinazione termina sempre con Null, anche in caso di errore.

Se *count* è il valore speciale [_TRUNCATE](../../c-runtime-library/truncate.md), **wcstombs_s** converte la maggior parte della stringa che rientrerà nel buffer di destinazione, lasciando però spazio per un carattere di terminazione null. Se la stringa viene troncata, il valore restituito è **STRUNCATE**e la conversione viene considerata corretta.

Se **wcstombs_s** converte correttamente la stringa di origine, inserisce la dimensione in byte della stringa convertita, incluso il terminatore null, in  *&#42;pReturnValue* ( *pReturnValue* specificato non è **null**). Ciò si verifica anche se l'argomento *mbstr* è **null** e fornisce un modo per determinare le dimensioni del buffer richieste. Si noti che se *mbstr* è **null**, *count* viene ignorato.

Se **wcstombs_s** rileva un carattere wide, non può essere convertito in un carattere multibyte, inserisce 0 in  *&#42;pReturnValue*, imposta il buffer di destinazione su una stringa vuota, imposta **errno** su **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui puntano *wcstr* e *mbstr* si sovrappongono, il comportamento di **wcstombs_s** non è definito.

> [!IMPORTANT]
> Verificare che *wcstr* e *mbstr* non si sovrappongano e che il *conteggio* rispecchi correttamente il numero di caratteri wide da convertire.

**wcstombs_s** usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; **_wcstombs_s_l** è identico a **wcstombs** con la differenza che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wcstombs_s**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Questo programma illustra il comportamento della funzione **wcstombs_s** .

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

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wctomb_s, _wctomb_s_l](wctomb-s-wctomb-s-l.md)<br/>
[WideCharToMultiByte](/windows/win32/api/stringapiset/nf-stringapiset-widechartomultibyte)<br/>
