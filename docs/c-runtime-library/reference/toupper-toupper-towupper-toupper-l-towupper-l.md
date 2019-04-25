---
title: toupper, _toupper, towupper, _toupper_l, _towupper_l
ms.date: 11/04/2016
apiname:
- _toupper_l
- towupper
- toupper
- _towupper_l
- _toupper
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
- api-ms-win-crt-string-l1-1-0.dll
- ntoskrnl.exe
apitype: DLLExport
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
ms.openlocfilehash: 6dd564a27ee7f3c2bb095564e5c9423249d6babc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62155498"
---
# <a name="toupper-toupper-towupper-toupperl-towupperl"></a>toupper, _toupper, towupper, _toupper_l, _towupper_l

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

Ognuna di queste routine converte una copia di *c*, se possibile e restituisce il risultato.

Se *c* è un carattere wide per il quale **iswlower** è diverso da zero e vi è un carattere wide corrispondente per il quale [iswupper](isupper-isupper-l-iswupper-iswupper-l.md) è diverso da zero, **towupper** restituisce il carattere wide corrispondente; in caso contrario, **towupper** restituisce *c* invariato.

Non esiste alcuno valore restituito riservato per indicare un errore.

Affinché **toupper** possa fornire i risultati previsti [isascii](isascii-isascii-iswascii.md) e [islower](islower-iswlower-islower-l-iswlower-l.md) devono entrambe restituire diverso da zero.

## <a name="remarks"></a>Note

Ognuna di queste routine converte una determinata lettera minuscola in maiuscola, se possibile e appropriato. La conversione di maiuscole e minuscole **towupper** dipende dalle impostazioni locali. La combinazione di maiuscole/minuscole viene modificata solo per i caratteri rilevanti per le impostazioni locali correnti. Le funzioni senza il **l** suffisso usare correnti delle impostazioni locali. Le versioni di queste funzioni con il **l** suffisso accettano le impostazioni locali come parametro e usano tali anziché correnti delle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Affinché **toupper** possa fornire i risultati previsti [isascii](isascii-isascii-iswascii.md) e [isupper](isupper-isupper-l-iswupper-iswupper-l.md) devono entrambe restituire diverso da zero.

[Routine di conversione dei dati](../../c-runtime-library/data-conversion.md)

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_totupper**|**toupper**|**_mbctoupper**|**towupper**|
|**_totupper_l**|**_toupper_l**|**_mbctoupper_l**|**_towupper_l**|

> [!NOTE]
> **toupper_l** e **towupper_l** non dipendono dalle impostazioni locali e non sono progettate per essere chiamate direttamente. Vengono forniti per uso interno da parte **_totupper_l**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**toupper**|\<ctype.h>|
|**_toupper**|\<ctype.h>|
|**towupper**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [Funzioni to](../../c-runtime-library/to-functions.md).

## <a name="see-also"></a>Vedere anche

[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
[Funzioni to](../../c-runtime-library/to-functions.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
