---
title: isascii, __isascii, iswascii | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- __isascii function
- _isascii function
- isascii function
- _istascii function
- istascii function
- iswascii function
ms.assetid: ba4325ad-7cb3-4fb9-b096-58906d67971a
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e76d91aef22c3a01d4ee9321baf1165f3ae97412
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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

*c*  
Valore Integer da testare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce un valore diverso da zero se `c` è una rappresentazione particolare di un carattere ASCII. `__isascii` Restituisce un valore diverso da zero se `c` è un carattere ASCII (nell'intervallo compreso tra 0x00 - 0x7F). `iswascii` restituisce un valore diverso da zero se `c` è una rappresentazione a caratteri wide di un carattere ASCII. Ognuna di queste routine restituisce 0 se `c` non soddisfa la condizione di test.

## <a name="remarks"></a>Note

Sia `__isascii` che `iswascii` vengono implementate come macro, a meno che non sia definita la macro del preprocessore _CTYPE_DISABLE_MACROS.

Per garantire la compatibilità con le versioni precedenti, `isascii` viene implementato come un solo se macro [&#95; &#95; STDC &#95; &#95; ](../../preprocessor/predefined-macros.md) non è definito o è definito come 0; in caso contrario non è definita.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_istascii`|`__isascii`|`__isascii`|`iswascii`|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`isascii`, `__isascii`|C: \<ctype.h><br /><br /> C++: \<cctype> o \<ctype.h>|
|`iswascii`|C: \<wctype.h>, \<ctype.h> o \<wchar.h><br /><br /> C++: \<cwctype>, \<cctype>, \<wctype.h>, \<ctype.h> o \<wchar.h>|

Le funzioni `isascii`, `__isascii` e `iswascii` sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
[Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)