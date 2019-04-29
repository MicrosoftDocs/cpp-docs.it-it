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
ms.openlocfilehash: 18af20b5722364ea306daebdcb77f5771d8ea2b5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62331157"
---
# <a name="mbstowcss-mbstowcssl"></a>mbstowcs_s, _mbstowcs_s_l

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
Le dimensioni dei *wcstr* buffer in parole.

*mbstr*<br/>
Indirizzo di una sequenza di caratteri multibyte con terminazione Null.

*count*<br/>
Il numero massimo di caratteri wide da archiviare nel *wcstr* buffer, escluso il carattere null oppure [truncate](../../c-runtime-library/truncate.md).

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Zero in caso di esito positivo, un codice di errore in caso di esito negativo.

|Condizione di errore|Valore restituito e **errno**|
|---------------------|------------------------------|
|*wcstr* viene **NULL** e *sizeInWords* > 0|**EINVAL**|
|*mbstr* è **NULL**|**EINVAL**|
|Il buffer di destinazione è troppo piccolo per contenere la stringa convertita (a meno che *conteggio* viene **truncate**; vedere la sezione Osservazioni riportata di seguito)|**ERANGE**|
|*wcstr* non è **NULL** e *sizeInWords* = = 0|**EINVAL**|

Se si verifica una di queste condizioni, viene richiamata l'eccezione di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce un codice di errore e imposta **errno** come indicato nella tabella.

## <a name="remarks"></a>Note

Il **mbstowcs_s** funzione converte una stringa di caratteri multibyte a cui punta *mbstr* in caratteri wide archiviati nel buffer a cui fa riferimento *wcstr*. La conversione continuerà per ogni carattere fino a quando non viene soddisfatta una delle seguenti condizioni:

- Viene rilevato un carattere Null multibyte

- Viene rilevato un carattere multibyte non valido

- Il numero di caratteri "wide" archiviati nel *wcstr* uguale a un buffer *conteggio*.

La stringa di destinazione termina sempre con Null, anche in caso di errore.

Se *conteggio* è il valore speciale [truncate](../../c-runtime-library/truncate.md), quindi **mbstowcs_s** Converte la porzione di stringa rientrano nel buffer di destinazione, lasciando però spazio per un valore null carattere di terminazione.

Se **mbstowcs_s** converte correttamente la stringa di origine, inserisce la dimensione in caratteri wide della stringa convertita, incluso il carattere di terminazione null, nel  *&#42;pReturnValue* (fornito *pReturnValue* non è **NULL**). Questo errore si verifica anche se il *wcstr* l'argomento è **NULL** e fornisce un modo per determinare le dimensioni del buffer richieste. Si noti che se *wcstr* viene **NULL**, *count* viene ignorato, e *sizeInWords* deve essere 0.

Se **mbstowcs_s** rileva un carattere multibyte non valido, inserisce 0 in  *&#42;pReturnValue*, imposta il buffer di destinazione in una stringa vuota, imposta **errno** a  **EILSEQ**e restituisce **EILSEQ**.

Se le sequenze a cui punta *mbstr* e *wcstr* si sovrappongono, il comportamento delle **mbstowcs_s** è definito.

> [!IMPORTANT]
> Assicurarsi che *wcstr* e *mbstr* non si sovrappongano e che *conteggio* rispecchi correttamente il numero di caratteri multibyte da convertire.

**mbstowcs_s** Usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. **mbstowcs_s_l** è identica, ma usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

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
[MultiByteToWideChar](/windows/desktop/api/stringapiset/nf-stringapiset-multibytetowidechar)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
