---
title: toupper, _toupper, towupper, _toupper_l, _towupper_l
ms.date: 4/2/2020
api_name:
- _toupper_l
- towupper
- toupper
- _towupper_l
- _toupper
- _o__toupper
- _o__toupper_l
- _o__towupper_l
- _o_toupper
- _o_towupper
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
- api-ms-win-crt-string-l1-1-0.dll
- ntoskrnl.exe
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- towupper
- _toupper
- _totupper
- toupper
helpviewer_keywords:
- _toupper function
- towupper function
- uppercase, converting strings to
- totupper function
- string conversion, to different characters
- towupper_l function
- toupper_l function
- string conversion, case
- _toupper_l function
- _towupper_l function
- _totupper function
- case, converting
- characters, converting
- toupper function
ms.assetid: cdef1b0f-b19c-4d11-b7d2-cf6334c9b6cc
ms.openlocfilehash: 85c218fdb3f5153e572e434bffbdb64510554d07
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81362315"
---
# <a name="toupper-_toupper-towupper-_toupper_l-_towupper_l"></a>toupper, _toupper, towupper, _toupper_l, _towupper_l

Converte un carattere in maiuscolo.

## <a name="syntax"></a>Sintassi

```C
int toupper(
   int c
);
int _toupper(
   int c
);
int towupper(
   wint_t c
);
int _toupper_l(
   int c ,
   _locale_t locale
);
int _towupper_l(
   wint_t c ,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*C*<br/>
Carattere da convertire.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine converte una copia di *c*, se possibile, e restituisce il risultato.

Se *c* è un carattere wide per il quale **iswlower** è diverso da zero ed è presente un carattere wide corrispondente per il quale [iswupper](isupper-isupper-l-iswupper-iswupper-l.md) è diverso da zero, **towupper** restituisce il carattere wide corrispondente; in caso contrario, **towupper** restituisce *c* invariato.

Non esiste alcuno valore restituito riservato per indicare un errore.

Affinché **toupper** per dare i risultati previsti, [__isascii](isascii-isascii-iswascii.md) e [più basso](islower-iswlower-islower-l-iswlower-l.md) deve restituire entrambi diverso da zero.

## <a name="remarks"></a>Osservazioni

Ognuna di queste routine converte una determinata lettera minuscola in maiuscola, se possibile e appropriato. La conversione caso di **towupper** è specifica delle impostazioni locali. La combinazione di maiuscole/minuscole viene modificata solo per i caratteri rilevanti per le impostazioni locali correnti. Le funzioni senza il suffisso **_l** utilizzano le impostazioni locali attualmente impostate. Le versioni di queste funzioni con il **suffisso _l** accettano le impostazioni locali come parametro e lo utilizzano al posto delle impostazioni locali attualmente impostate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Affinché **toupper** per dare i risultati attesi, [__isascii](isascii-isascii-iswascii.md) e [isupper](isupper-isupper-l-iswupper-iswupper-l.md) deve restituire entrambi diverso da zero.

[Routine di conversione dei dati](../../c-runtime-library/data-conversion.md)

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_totupper**|**Toupper**|**_mbctoupper**|**towupper**|
|**_totupper_l**|**_toupper_l**|**_mbctoupper_l**|**_towupper_l**|

> [!NOTE]
> **_toupper_l** e **_towupper_l** non hanno alcuna dipendenza delle impostazioni locali e non devono essere chiamati direttamente. Essi sono forniti per uso interno da **_totupper_l**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**Toupper**|\<ctype.h>|
|**_toupper**|\<ctype.h>|
|**towupper**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [Funzioni to](../../c-runtime-library/to-functions.md).

## <a name="see-also"></a>Vedere anche

[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[Funzioni to](../../c-runtime-library/to-functions.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
