---
title: _ismbbkprint, _ismbbkprint_l
ms.date: 11/04/2016
api_name:
- _ismbbkprint
- _ismbbkprint_l
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _ismbbkprint_l
- ismbbkprint
- _ismbbkprint
- ismbbkprint_l
helpviewer_keywords:
- _ismbbkprint function
- ismbbkprint_l function
- ismbbkprint function
- _ismbbkprint_l function
ms.assetid: 8d1d3258-1e34-4365-81ed-97c95de25475
ms.openlocfilehash: e2417718d7cb90e8032cfe9dad903d6610dc6ae7
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70954119"
---
# <a name="_ismbbkprint-_ismbbkprint_l"></a>_ismbbkprint, _ismbbkprint_l

Determina se un carattere multibyte particolare è un simbolo di punteggiatura.

## <a name="syntax"></a>Sintassi

```C
int _ismbbkprint(
   unsigned int c
);
int _ismbbkprint_l(
   unsigned int c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Valore Integer da testare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_ismbbkprint** restituisce un valore diverso da zero se l'integer *c* è un testo non ASCII o un simbolo di punteggiatura non ASCII oppure 0 in caso contrario. Ad esempio, solo nella tabella codici 932, **_ismbbkprint** test per la punteggiatura Katakana o alfanumerica katakana (intervallo: 0xA1 - 0xDF). **_ismbbkprint** utilizza le impostazioni locali correnti per le impostazioni del carattere dipendenti dalle impostazioni locali. **_ismbbkprint_l** è identico, ad eccezione del fatto che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbbkprint**|\<mbctype.h>|
|**_ismbbkprint_l**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
