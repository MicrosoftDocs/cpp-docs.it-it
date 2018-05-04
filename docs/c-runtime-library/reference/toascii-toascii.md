---
title: toascii, __toascii | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- __toascii
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- __toascii
- toascii
- ctype/toascii
- ctype/__toascii
dev_langs:
- C++
helpviewer_keywords:
- toascii function
- string conversion, to ASCII characters
- __toascii function
- ASCII characters, converting to
ms.assetid: a07c0608-b0e2-4da2-a20c-7b64d6a9b77c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cead516a7e298e56d13d8f1a09a054057796ca64
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="toascii-toascii"></a>toascii, __toascii

Converte caratteri nel formato ASCII a 7 bit con troncamento.

## <a name="syntax"></a>Sintassi

```C
int __toascii(
   int c
);
#define toascii __toascii
```

### <a name="parameters"></a>Parametri

*c*<br/>
Carattere da convertire.

## <a name="return-value"></a>Valore restituito

**ToAscii** converte il valore del *c* per il functoid da ASCII a 7 bit intervallo e restituisce il risultato. Non esiste alcuno valore restituito riservato per indicare un errore.

## <a name="remarks"></a>Note

Il **ToAscii** routine converte il carattere specificato in un carattere ASCII, troncando a 7 bit di ordine inferiore. Non vengono applicate altre trasformazioni.

Il **ToAscii** routine è definita come macro, a meno che non è definito il _CTYPE_DISABLE_MACROS macro del preprocessore. Per motivi di compatibilità **toascii** è definito come macro solo quando [ &#95; &#95;STDC&#95; &#95; ](../../preprocessor/predefined-macros.md) non è definito o è definito come 0; in caso contrario, viene definito.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ToAscii**, **ToAscii**|C: \<ctype.h><br /><br /> C++: \<cctype> o \<ctype.h>|

Il **toascii** macro è un'estensione POSIX, e **ToAscii** è un'implementazione specifica di Microsoft dell'estensione POSIX. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
[Funzioni to](../../c-runtime-library/to-functions.md)<br/>
