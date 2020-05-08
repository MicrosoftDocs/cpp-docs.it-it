---
title: _ismbblead, _ismbblead_l
description: Descrive le funzioni della libreria di runtime Microsoft C (CRT) _ismbblead e _ismbblead_l.
ms.date: 4/2/2020
api_name:
- _ismbblead_l
- _ismbblead
- _o__ismbblead
- _o__ismbblead_l
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ismbblead_l
- istlead
- _ismbblead
- _ismbblead_l
- ismbblead
- _istlead
helpviewer_keywords:
- _ismbblead_l function
- ismbblead function
- _ismbblead function
- istlead function
- ismbblead_l function
- _istlead function
ms.assetid: 2abc6f75-ed5c-472e-bfd0-e905a1835ccf
ms.openlocfilehash: 7680793b71c4535ed75433ac98167e52a39896ba
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82918674"
---
# <a name="_ismbblead-_ismbblead_l"></a>_ismbblead, _ismbblead_l

Testa un carattere per determinare se si tratta di un byte iniziale di un carattere multibyte.

## <a name="syntax"></a>Sintassi

```C
int _ismbblead(
   unsigned int c
);
int _ismbblead_l(
   unsigned int c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*\
Valore Integer da testare.

*locale*\
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce un valore diverso da zero se l'integer *c* è il primo byte di un carattere multibyte.

## <a name="remarks"></a>Osservazioni

I caratteri multibyte sono costituiti da un byte di apertura seguito da un byte finale. I byte di apertura si distinguono in quanto sono compresi in un intervallo specifico per un determinato set di caratteri. Ad esempio, solo nella tabella codici 932, i byte di apertura sono compresi tra 0x81-0x9F e 0xE0-0xFC.

**_ismbblead** usa le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. **_ismbblead_l** è identico, ad eccezione del fatto che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Quando le impostazioni locali sono UTF-8, **_ismbblead** e **_ismbblead_l** restituiscono sempre 0 (false), indipendentemente dal fatto che *c* sia un byte iniziale o meno.

**_ismbblead** e **_ismbblead_l** sono specifici di Microsoft e non fanno parte della libreria C standard. Non è consigliabile usarli in cui si vuole usare il codice portatile. Per la compatibilità con il linguaggio C standard, usare invece **mbrlen** .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_istlead**|Restituisce sempre false|**_ismbblead**|Restituisce sempre false|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_ismbblead**|\<mbctype.h> o \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|
|**_ismbblead_l**|\<mbctype.h> o \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|

\* Per le costanti manifeste per le condizioni di test.

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione byte](../../c-runtime-library/byte-classification.md)\
[routine di _ismbb](../../c-runtime-library/ismbb-routines.md)\
[mbrlen](mbrlen.md)
