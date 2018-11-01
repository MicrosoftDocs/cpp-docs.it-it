---
title: toascii, __toascii
ms.date: 11/04/2016
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
helpviewer_keywords:
- toascii function
- string conversion, to ASCII characters
- __toascii function
- ASCII characters, converting to
ms.assetid: a07c0608-b0e2-4da2-a20c-7b64d6a9b77c
ms.openlocfilehash: 22f76bdbdb21eb5b3cc9a226c111e321ee2fd0ce
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50578971"
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

**ToAscii** converte il valore del *c* per il codice ASCII a 7 bit, intervallo e restituisce il risultato. Non esiste alcuno valore restituito riservato per indicare un errore.

## <a name="remarks"></a>Note

Il **ToAscii** routine converte il carattere specificato in un carattere ASCII troncandolo ai 7 bit meno significativi. Non vengono applicate altre trasformazioni.

Il **ToAscii** routine è definita come macro solo se è stata definita la macro del preprocessore ctype_disable_macros. Per motivi di compatibilità **toascii** viene definita come macro solo quando [ &#95; &#95;STDC&#95; &#95; ](../../preprocessor/predefined-macros.md) non è definito o è definito come 0; in caso contrario, non è definita.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ToAscii**, **ToAscii**|C: \<ctype.h><br /><br /> C++: \<cctype> o \<ctype.h>|

Il **toascii** macro è un'estensione POSIX, e **ToAscii** è un'implementazione specifica di Microsoft dell'estensione POSIX. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
[Funzioni to](../../c-runtime-library/to-functions.md)<br/>
