---
description: 'Altre informazioni su: _ismbbkalnum, _ismbbkalnum_l'
title: _ismbbkalnum, _ismbbkalnum_l
ms.date: 4/2/2020
api_name:
- _ismbbkalnum
- _ismbbkalnum_l
- _o__ismbbkalnum
- _o__ismbbkalnum_l
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
- _ismbbkalnum
- ismbbkalnum
- ismbbkalnum_l
- _ismbbkalnum_l
helpviewer_keywords:
- _ismbbkalnum_l function
- ismbbkalnum_l function
- _ismbbkalnum function
- ismbbkalnum function
ms.assetid: e1d70e7b-29d0-469c-9d93-442b99de22ac
ms.openlocfilehash: c9f18a80882b9f0bc703b0fbf5caace9746a486e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306313"
---
# <a name="_ismbbkalnum-_ismbbkalnum_l"></a>_ismbbkalnum, _ismbbkalnum_l

Determina se un carattere multibyte particolare è un simbolo di testo non ASCII.

## <a name="syntax"></a>Sintassi

```C
int _ismbbkalnum(
   unsigned int c
);
int _ismbbkalnum_l(
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

**_ismbbkalnum** restituisce un valore diverso da zero se l'integer *c* è un simbolo di testo non ASCII diverso dalla punteggiatura; in caso contrario, 0. **_ismbbkalnum** usa le impostazioni locali correnti per le informazioni sui caratteri dipendenti dalle impostazioni locali. **_ismbbkalnum_l** è identico a **_ismbbkalnum** con la differenza che accetta le impostazioni locali come parametro. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="remarks"></a>Commenti

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbbkalnum**|\<mbctype.h>|
|**_ismbbkalnum_l**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Classificazione byte](../../c-runtime-library/byte-classification.md)<br/>
[Routine di _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
