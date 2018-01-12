---
title: toascii, __toascii | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: __toascii
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
dev_langs: C++
helpviewer_keywords:
- toascii function
- string conversion, to ASCII characters
- __toascii function
- ASCII characters, converting to
ms.assetid: a07c0608-b0e2-4da2-a20c-7b64d6a9b77c
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 25e11878772b4c8f7afb07f7297ca80a2a5a0130
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

*c*  
Carattere da convertire.

## <a name="return-value"></a>Valore restituito

`__toascii`Converte il valore di *c* per il functoid da ASCII a 7 bit intervallo e restituisce il risultato. Non esiste alcuno valore restituito riservato per indicare un errore.

## <a name="remarks"></a>Note

La routine `__toascii` converte il carattere specificato in un carattere ASCII troncandolo ai 7 bit di ordine inferiore. Non vengono applicate altre trasformazioni.

La routine `__toascii` è definita come macro, a meno che non sia definita la macro del preprocessore _CTYPE_DISABLE_MACROS. Per garantire la compatibilità con le versioni precedenti, `toascii` è definito come macro solo quando [&#95; &#95; STDC &#95; &#95; ](../../preprocessor/predefined-macros.md) non è definito o è definito come 0; in caso contrario non è definita.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`toascii`, `__toascii`|C: \<ctype.h><br /><br /> C++: \<cctype> o \<ctype.h>|

La macro `toascii` è un'estensione POSIX, e `__toascii` è un'implementazione specifica di Microsoft dell'estensione POSIX. Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.

## <a name="see-also"></a>Vedere anche

[Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)   
[Funzioni to](../../c-runtime-library/to-functions.md)