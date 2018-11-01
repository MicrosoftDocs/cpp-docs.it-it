---
title: isascii, __isascii, iswascii
ms.date: 11/04/2016
apiname:
- iswascii
- __isascii
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
apitype: DLLExport
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
ms.openlocfilehash: d150e7bb335dc77ed86f445128eebf97b8be5ac3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50433657"
---
# <a name="isascii-isascii-iswascii"></a>isascii, __isascii, iswascii

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

Ognuna di queste routine restituisce diverso da zero se **c** è una rappresentazione particolare di un carattere ASCII. **isascii** restituisce un valore diverso da zero se **c** è un carattere ASCII (nell'intervallo tra 0x00 - 0x7F). **iswascii** restituisce un valore diverso da zero se **c** è una rappresentazione a caratteri wide di un carattere ASCII. Ognuna di queste routine restituisce 0 se **c** non soddisfa la condizione di test.

## <a name="remarks"></a>Note

Entrambe **isascii** e **iswascii** vengono implementate come macro solo se è stata definita la macro del preprocessore ctype_disable_macros.

Per motivi di compatibilità **isascii** viene implementato come macro solo se [ &#95; &#95;STDC&#95; &#95; ](../../preprocessor/predefined-macros.md) non è definito o è definito come 0; in caso contrario, non è definita.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**istascii**|**__isascii**|**__isascii**|**iswascii**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**isascii**, **isascii**|C: \<ctype.h><br /><br /> C++: \<cctype> o \<ctype.h>|
|**iswascii**|C: \<wctype.h>, \<ctype.h> o \<wchar.h><br /><br /> C++: \<cwctype>, \<cctype>, \<wctype.h>, \<ctype.h> o \<wchar.h>|

Il **isascii**, **isascii** e **iswascii** funzioni sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
