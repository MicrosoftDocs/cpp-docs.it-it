---
description: 'Scopri di più su: ASCII, __isascii, iswascii'
title: isascii, __isascii, iswascii
ms.date: 4/2/2020
api_name:
- iswascii
- __isascii
- _o_iswascii
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- iswascii
- istascii
- __isascii
- _istascii
- isascii
- ctype/isascii
- ctype/__isascii
- corecrt_wctype/iswascii
helpviewer_keywords:
- __isascii function
- _isascii function
- isascii function
- _istascii function
- istascii function
- iswascii function
ms.assetid: ba4325ad-7cb3-4fb9-b096-58906d67971a
ms.openlocfilehash: 0d0a7964ba5b9a3133f100ea94fd4bac95407627
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332736"
---
# <a name="isascii-__isascii-iswascii"></a>isascii, __isascii, iswascii

Determina se un particolare carattere è un carattere ASCII.

## <a name="syntax"></a>Sintassi

```C
int __isascii(
   int c
);
int iswascii(
   wint_t c
);

#define isascii __isascii
```

### <a name="parameters"></a>Parametri

*c*<br/>
Valore Integer da testare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce un valore diverso da zero se **c** è una rappresentazione particolare di un carattere ASCII. **__isascii** restituisce un valore diverso da zero se **c** è un carattere ASCII (nell'intervallo tra 0x00 e 0x7F). **iswascii** restituisce un valore diverso da zero se **c** è una rappresentazione a caratteri wide di un carattere ASCII. Ognuna di queste routine restituisce 0 se **c** non soddisfa la condizione di test.

## <a name="remarks"></a>Commenti

Sia **__isascii** che **iswascii** vengono implementati come macro a meno che non sia definita la macro del preprocessore _CTYPE_DISABLE_MACROS.

Per compatibilità con le versioni precedenti, il valore di **ASCII** viene implementato come macro solo se [&#95;&#95;STDC&#95;&#95;](../../preprocessor/predefined-macros.md) non è definito o è definito come 0. in caso contrario, non è definito.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_istascii**|**__isascii**|**__isascii**|**iswascii**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**caratteri** di **__isascii**|C \<ctype.h><br /><br /> C++: \<cctype> o \<ctype.h>|
|**iswascii**|C: \<wctype.h> , \<ctype.h> o \<wchar.h><br /><br /> C++: \<cwctype> , \<cctype> , \<wctype.h> , \<ctype.h> o \<wchar.h>|

Le funzioni **ASCII**, **__isascii** e **iswascii** sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Classificazione caratteri](../../c-runtime-library/character-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[is, ISW routines](../../c-runtime-library/is-isw-routines.md)<br/>
