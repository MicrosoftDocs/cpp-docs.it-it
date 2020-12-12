---
description: 'Altre informazioni su: toascii, __toascii'
title: toascii, __toascii
ms.date: 11/04/2016
api_name:
- __toascii
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
- api-ms-win-crt-convert-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 9f1718da5e7d701bb6cc6ea68c1e21b6fe4283f2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318351"
---
# <a name="toascii-__toascii"></a>toascii, __toascii

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

**__toascii** converte il valore di *c* nell'intervallo ASCII a 7 bit e restituisce il risultato. Non esiste alcuno valore restituito riservato per indicare un errore.

## <a name="remarks"></a>Commenti

La routine **__toascii** converte il carattere specificato in un carattere ASCII troncando il carattere in base ai 7 bit di ordine inferiore. Non vengono applicate altre trasformazioni.

La routine **__toascii** viene definita come macro, a meno che non sia definita la macro del preprocessore _CTYPE_DISABLE_MACROS. Per compatibilità con le versioni precedenti, **toascii** viene definito come una macro solo quando [&#95;&#95;STDC&#95;&#95;](../../preprocessor/predefined-macros.md) non è definito o è definito come 0; in caso contrario, non è definito.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**toascii**, **__toascii**|C \<ctype.h><br /><br /> C++: \<cctype> o \<ctype.h>|

La macro **toascii** è un'estensione posix e **__toascii** è un'implementazione specifica di Microsoft dell'estensione POSIX. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[is, ISW routines](../../c-runtime-library/is-isw-routines.md)<br/>
[Funzioni to](../../c-runtime-library/to-functions.md)<br/>
