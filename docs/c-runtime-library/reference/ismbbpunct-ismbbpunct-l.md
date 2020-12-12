---
description: 'Altre informazioni su: _ismbbpunct, _ismbbpunct_l'
title: _ismbbpunct, _ismbbpunct_l
ms.date: 4/2/2020
api_name:
- _ismbbpunct
- _ismbbpunct_l
- _o__ismbbpunct
- _o__ismbbpunct_l
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
- ismbbpunct
- ismbbpunct_l
- _ismbbpunct_l
- _ismbbpunct
helpviewer_keywords:
- ismbbpunct function
- _ismbbpunct function
- ismbbpunct_l function
- _ismbbpunct_l function
ms.assetid: 1976c9d3-7d1a-415f-ac52-2715c7bb56eb
ms.openlocfilehash: a476bae27cf97a43b0a78146c81cb59293f406a8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229691"
---
# <a name="_ismbbpunct-_ismbbpunct_l"></a>_ismbbpunct, _ismbbpunct_l

Determina se un particolare carattere è un carattere di punteggiatura.

## <a name="syntax"></a>Sintassi

```C
int _ismbbpunct(
   unsigned int c
);
int _ismbbpunct_l(
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

**_ismbbpunct** restituisce un valore diverso da zero se l'integer *c* è un simbolo di punteggiatura non ASCII. **_ismbbpunct** usa le impostazioni locali correnti per qualsiasi impostazione del carattere dipendente dalle impostazioni locali. **_ismbbpunct_l** è identico, ad eccezione del fatto che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="remarks"></a>Commenti

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbbpunct**|\<mbctype.h>|
|**_ismbbpunct_l**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Classificazione byte](../../c-runtime-library/byte-classification.md)<br/>
[Routine di _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
