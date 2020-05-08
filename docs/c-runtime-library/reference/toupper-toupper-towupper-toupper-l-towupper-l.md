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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: 943b66bf03420dc707415fd5da0ddf8cc3107d85
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82913873"
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

*c*<br/>
Carattere da convertire.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine converte una copia di *c*, se possibile, e restituisce il risultato.

Se *c* è un carattere wide per il quale **iswlower** è diverso da zero ed è presente un carattere wide corrispondente per il quale [iswupper](isupper-isupper-l-iswupper-iswupper-l.md) è diverso da zero, **towupper** restituisce il carattere wide corrispondente. in caso contrario, **towupper** restituisce il linguaggio *c* invariato.

Non esiste alcuno valore restituito riservato per indicare un errore.

Affinché **ToUpper** fornisca i risultati previsti, è necessario che [__isascii](isascii-isascii-iswascii.md) e il [valore di unlower](islower-iswlower-islower-l-iswlower-l.md) restituiscono entrambi un valore diverso da zero.

## <a name="remarks"></a>Osservazioni

Ognuna di queste routine converte una determinata lettera minuscola in maiuscola, se possibile e appropriato. La conversione del case di **towupper** è specifica delle impostazioni locali. La combinazione di maiuscole/minuscole viene modificata solo per i caratteri rilevanti per le impostazioni locali correnti. Le funzioni senza il suffisso **_L** usano le impostazioni locali attualmente impostate. Le versioni di queste funzioni con il suffisso **_L** accettano le impostazioni locali come parametro e lo usano anziché le impostazioni locali attualmente impostate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Affinché **ToUpper** fornisca i risultati previsti, [__isascii](isascii-isascii-iswascii.md) e l'oggetto è [necessario che entrambi](isupper-isupper-l-iswupper-iswupper-l.md) restituiscono un valore diverso da zero.

[Routine di conversione dei dati](../../c-runtime-library/data-conversion.md)

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_totupper**|**ToUpper**|**_mbctoupper**|**towupper**|
|**_totupper_l**|**_toupper_l**|**_mbctoupper_l**|**_towupper_l**|

> [!NOTE]
> **_toupper_l** e **_towupper_l** non hanno alcuna dipendenza dalle impostazioni locali e non sono destinati a essere chiamati direttamente. Vengono fornite per uso interno da **_totupper_l**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ToUpper**|\<ctype.h>|
|**_toupper**|\<ctype.h>|
|**towupper**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [Funzioni to](../../c-runtime-library/to-functions.md).

## <a name="see-also"></a>Vedere anche

[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[Funzioni to](../../c-runtime-library/to-functions.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
