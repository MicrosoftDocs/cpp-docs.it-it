---
description: 'Altre informazioni su: wcrtomb_s'
title: wcrtomb_s
ms.date: 4/2/2020
api_name:
- wcrtomb_s
- _o_wcrtomb_s
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
- wcrtomb_s
helpviewer_keywords:
- wide characters, converting
- wcrtomb_s function
- multibyte characters
- characters, converting
ms.assetid: 9a8a1bd0-1d60-463d-a3a2-d83525eaf656
ms.openlocfilehash: 6f716c6eccf1c8e9fe3afbc9271bc69976d87d73
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342075"
---
# <a name="wcrtomb_s"></a>wcrtomb_s

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
Dimensioni in byte della variabile *mbchar* .

*wchar*<br/>
Carattere wide da convertire.

*mbstate*<br/>
Puntatore a un oggetto **mbstate_t** .

## <a name="return-value"></a>Valore restituito

Restituisce zero o un valore **errno** se si verifica un errore.

## <a name="remarks"></a>Commenti

La funzione **wcrtomb_s** converte un carattere wide, a partire dallo stato di conversione specificato contenuto in *mbstate*, dal valore contenuto in *WCHAR*, nell'indirizzo rappresentato da *mbchar*. Il valore *pReturnValue* sarà il numero di byte convertiti, ma non più di **MB_CUR_MAX** byte, oppure-1 se si è verificato un errore.

Se *mbstate* è null, viene usato lo stato di conversione **mbstate_t** interno. Se il carattere contenuto in *WCHAR* non contiene un carattere multibyte corrispondente, il valore di *pReturnValue* sarà-1 e la funzione restituirà il valore **errno** di **EILSEQ**.

La funzione **wcrtomb_s** differisce da [wctomb_s _wctomb_s_l](wctomb-s-wctomb-s-l.md) dalla relativa riavviabilità. Lo stato di conversione viene archiviato in *mbstate* per le chiamate successive alle stesse o ad altre funzioni riavviabili. I risultati non sono definiti quando si usano insieme funzioni riavviabili e non riavviabili. Ad esempio, un'applicazione utilizzerebbe **wcsrlen** anziché **wcslen** se veniva utilizzata una chiamata successiva a **wcsrtombs_s** anziché **wcstombs_s**.

In C++ l'uso di questa funzione è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento per le dimensioni) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="exceptions"></a>Eccezioni

La funzione **wcrtomb_s** è multithread safe finché nessuna funzione nel thread corrente chiama **setlocale** mentre questa funzione è in esecuzione e *mbstate* è null.

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

## <a name="see-also"></a>Vedi anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione delle sequenze di Multibyte-Character](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbsinit](mbsinit.md)<br/>
