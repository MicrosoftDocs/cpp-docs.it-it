---
title: _ismbbtrail, _ismbbtrail_l
ms.date: 4/2/2020
api_name:
- _ismbbtrail
- _ismbbtrail_l
- _o__ismbbtrail
- _o__ismbbtrail_l
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
- _ismbbtrail
- ismbbtrail
- _ismbbtrail_l
- ismbbtrail_l
helpviewer_keywords:
- ismbbtrail_l function
- _ismbbtrail function
- _ismbbtrail_l function
- ismbbtrail function
ms.assetid: dfdd0292-960b-4c1d-bf11-146e0fc80247
ms.openlocfilehash: 08229b4a35634193810f7c24a3f8749fba034872
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82918683"
---
# <a name="_ismbbtrail-_ismbbtrail_l"></a>_ismbbtrail, _ismbbtrail_l

Determina se un byte è un byte finale di un carattere multibyte.

## <a name="syntax"></a>Sintassi

```C
int _ismbbtrail(
   unsigned int c
);
int _ismbbtrail_l(
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

**_ismbbtrail** restituisce un valore diverso da zero se l'integer *c* è il secondo byte di un carattere multibyte. Ad esempio, solo nella tabella codici 932, gli intervalli validi sono da 0x40 a 0x7E e da 0x80 a 0xFC.

## <a name="remarks"></a>Osservazioni

**_ismbbtrail** usa le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. **_ismbbtrail_l** è identico, ad eccezione del fatto che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_ismbbtrail**|\<mbctype.h> o \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|
|**_ismbbtrail_l**|\<mbctype.h> o \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|

\* Per le costanti manifeste per le condizioni di test.

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
[Routine di _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
