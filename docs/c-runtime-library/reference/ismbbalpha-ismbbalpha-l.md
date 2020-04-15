---
title: _ismbbalpha, _ismbbalpha_l
ms.date: 4/2/2020
api_name:
- _ismbbalpha
- _ismbbalpha_l
- _o__ismbbalpha
- _o__ismbbalpha_l
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ismbbalpha
- ismbbalpha_l
- _ismbbalpha
- _ismbbalpha_l
helpviewer_keywords:
- ismbbalpha function
- ismbbalpha_l function
- _ismbbalpha function
- _ismbbalpha_l function
ms.assetid: 8e54cb92-fc2b-41f5-8ab4-b22ac8aa9ad0
ms.openlocfilehash: e7ff45c9d43a01d89d7ad2e9bac004ca1dcffd9d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81343703"
---
# <a name="_ismbbalpha-_ismbbalpha_l"></a>_ismbbalpha, _ismbbalpha_l

Determina se un carattere multibyte specificato corrisponde ad alfa.

## <a name="syntax"></a>Sintassi

```C
int _ismbbalpha(
   unsigned int c
);
int _ismbbalpha_l(
   unsigned int c
);
```

### <a name="parameters"></a>Parametri

*C*<br/>
Valore Integer da testare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_ismbbalpha** restituisce un valore diverso da zero se l'espressione:

`isalpha(c) || _ismbbkalnum(c)`

è diverso da zero per *c*, o 0 se non lo è. **_ismbbalpha** utilizza le impostazioni locali correnti per tutte le impostazioni dei caratteri dipendenti dalle impostazioni locali. **_ismbbalpha_l** è identica, ad eccezione del fatto che utilizza le impostazioni locali passate.

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbbalpha**|\<mbctype.h>|
|**_ismbbalpha_l**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
