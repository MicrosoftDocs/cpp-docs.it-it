---
title: mbstowcs_s, _mbstowcs_s_l
ms.date: 4/2/2020
api_name:
- _mbstowcs_s_l
- mbstowcs_s
- _o__mbstowcs_s_l
- _o_mbstowcs_s
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
- api-ms-win-crt-multibyte-l1-1-0.dll
- api-ms-win-crt-convert-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _mbstowcs_s_l
- mbstowcs_s
helpviewer_keywords:
- _mbstowcs_s_l function
- mbstowcs_s function
- mbstowcs_s_l function
ms.assetid: 2fbda953-6918-498f-b440-3e7b21ed65a4
ms.openlocfilehash: 07d694a7430f23e2f9600a5d2b147bcee2ef0e09
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81338814"
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

*pReturnValue (Valore restituito)*<br/>
Numero di caratteri convertiti.

*Wcstr*<br/>
Indirizzo del buffer per la stringa di caratteri wide convertita risultante.

*sizeInWords*<br/>
Dimensione del buffer *wcstr* in parole.

*mbstr (intalltore*<br/>
Indirizzo di una sequenza di caratteri multibyte con terminazione Null.

*count*<br/>
Numero massimo di caratteri di tipo "wide" da archiviare nel buffer *wcstr,* escluso il valore null di terminazione, o [_TRUNCATE](../../c-runtime-library/truncate.md).

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

|Condizione di errore|Valore restituito ed **errno**|
|---------------------|------------------------------|
|*wcstr* è **NULL** e *sizeInWords* > 0|**Einval**|
|*mbstr* è **NULL**|**Einval**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che *count* non sia **_TRUNCATE**; vedere le osservazioni più avanti)|**ERANGE**|
|*wcstr* non è **NULL** e *sizeInWords*|**Einval**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Osservazioni

La funzione **mbstowcs_s** converte una stringa di caratteri multibyte a cui punta *mbstr in* caratteri wide memorizzati nel buffer a cui punta *wcstr*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null multibyte

- Viene rilevato un carattere multibyte non valido

- Il numero di caratteri wide archiviati nel buffer *wcstr* è uguale a *count*.

La stringa di destinazione termina sempre con Null, anche in caso di errore.

Se *count* è il valore speciale [_TRUNCATE](../../c-runtime-library/truncate.md), **la mbstowcs_s** converte la maggior parte della stringa che rientra nel buffer di destinazione, lasciando comunque spazio per un terminatore null.

Se **mbstowcs_s** converte correttamente la stringa di origine, inserisce la dimensione in caratteri di tipo "wide" della stringa convertita, incluso il carattere di terminazione null, in *&#42;pReturnValue* (purché *pReturnValue* non sia **NULL**). Ciò si verifica anche se il *wcstr* argomento è **NULL** e fornisce un modo per determinare la dimensione del buffer richiesto. Si noti che se *wcstr* è **NULL**, *count* viene ignorato e *sizeInWords* deve essere 0.

Se **mbstowcs_s** rileva un carattere multibyte non valido, inserisce 0 in *&#42;pReturnValue*, imposta il buffer di destinazione su una stringa vuota, imposta **errno** su **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui *puntano mbstr* e *wcstr* si sovrappongono, il comportamento di **mbstowcs_s** non è definito.

> [!IMPORTANT]
> Assicurarsi che *wcstr* e *mbstr* non si sovrappongano e che *il conteggio* rifletta correttamente il numero di caratteri multibyte da convertire.

**mbstowcs_s** utilizza le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. **_mbstowcs_s_l** è identica, ad eccezione del fatto che utilizza invece le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**mbstowcs_s**|\<stdlib.h>|
|**_mbstowcs_s_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
