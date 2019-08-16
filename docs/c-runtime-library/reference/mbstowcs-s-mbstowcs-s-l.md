---
title: mbstowcs_s, _mbstowcs_s_l
ms.date: 11/04/2016
apiname:
- _mbstowcs_s_l
- mbstowcs_s
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
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _mbstowcs_s_l
- mbstowcs_s
helpviewer_keywords:
- _mbstowcs_s_l function
- mbstowcs_s function
- mbstowcs_s_l function
ms.assetid: 2fbda953-6918-498f-b440-3e7b21ed65a4
ms.openlocfilehash: 7a1c29118c48bbbb5358e7d7ea57296f7ec908a8
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69499763"
---
# <a name="mbstowcs_s-_mbstowcs_s_l"></a>mbstowcs_s, _mbstowcs_s_l

Converte una sequenza di caratteri multibyte in una sequenza di caratteri wide corrispondente. Versioni di [mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t mbstowcs_s(
   size_t *pReturnValue,
   wchar_t *wcstr,
   size_t sizeInWords,
   const char *mbstr,
   size_t count
);
errno_t _mbstowcs_s_l(
   size_t *pReturnValue,
   wchar_t *wcstr,
   size_t sizeInWords,
   const char *mbstr,
   size_t count,
   _locale_t locale
);
template <size_t size>
errno_t mbstowcs_s(
   size_t *pReturnValue,
   wchar_t (&wcstr)[size],
   const char *mbstr,
   size_t count
); // C++ only
template <size_t size>
errno_t _mbstowcs_s_l(
   size_t *pReturnValue,
   wchar_t (&wcstr)[size],
   const char *mbstr,
   size_t count,
   _locale_t locale
); // C++ only
```

### <a name="parameters"></a>Parametri

*pReturnValue*<br/>
Numero di caratteri convertiti.

*wcstr*<br/>
Indirizzo del buffer per la stringa di caratteri wide convertita risultante.

*sizeInWords*<br/>
Dimensioni del buffer *wcstr* in parole.

*mbstr*<br/>
Indirizzo di una sequenza di caratteri multibyte con terminazione Null.

*count*<br/>
Numero massimo di caratteri wide da archiviare nel buffer *wcstr* , escluso il carattere null di terminazione, o [_TRUNCATE](../../c-runtime-library/truncate.md).

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

|Condizione di errore|Valore restituito e **errno**|
|---------------------|------------------------------|
|*wcstr* è **NULL** e *sizeInWords* > 0|**EINVAL**|
|*mbstr* è **null**|**EINVAL**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita, a meno che il *numero* non sia **_TRUNCATE**. vedere la sezione Osservazioni di seguito.|**ERANGE**|
|*wcstr* non è **null** e *sizeInWords* = = 0|**EINVAL**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Note

La funzione **mbstowcs_s** converte una stringa di caratteri multibyte a cui punta *mbstr* in caratteri wide archiviati nel buffer a cui punta *wcstr*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null multibyte

- Viene rilevato un carattere multibyte non valido

- Il numero di caratteri wide archiviati nel buffer *wcstr* è uguale a *count*.

La stringa di destinazione termina sempre con Null, anche in caso di errore.

Se *count* è il valore speciale [_TRUNCATE](../../c-runtime-library/truncate.md), **mbstowcs_s** converte la maggior parte della stringa che rientrerà nel buffer di destinazione, lasciando però spazio per un carattere di terminazione null.

Se **mbstowcs_s** converte correttamente la stringa di origine, inserisce la dimensione in caratteri wide della stringa convertita, incluso il terminatore null, in  *&#42;pReturnValue* ( *pReturnValue* specificato non è **null**). Ciò si verifica anche se l'argomento *wcstr* è **null** e fornisce un modo per determinare le dimensioni del buffer richieste. Si noti che se *wcstr* è **null**, *count* viene ignorato e *sizeInWords* deve essere 0.

Se **mbstowcs_s** rileva un carattere multibyte non valido, inserisce 0 in  *&#42;pReturnValue*, imposta il buffer di destinazione su una stringa vuota, imposta **errno** su **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui puntano *mbstr* e *wcstr* si sovrappongono, il comportamento di **mbstowcs_s** non è definito.

> [!IMPORTANT]
> Verificare che *wcstr* e *mbstr* non si sovrappongano e che il *conteggio* rispecchi correttamente il numero di caratteri multibyte da convertire.

**mbstowcs_s** usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; **_mbstowcs_s_l** è identico, ad eccezione del fatto che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**mbstowcs_s**|\<stdlib.h>|
|**_mbstowcs_s_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
