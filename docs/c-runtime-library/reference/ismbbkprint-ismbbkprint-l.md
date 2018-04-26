---
title: _ismbbkprint, _ismbbkprint_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _ismbbkprint
- _ismbbkprint_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _ismbbkprint_l
- ismbbkprint
- _ismbbkprint
- ismbbkprint_l
dev_langs:
- C++
helpviewer_keywords:
- _ismbbkprint function
- ismbbkprint_l function
- ismbbkprint function
- _ismbbkprint_l function
ms.assetid: 8d1d3258-1e34-4365-81ed-97c95de25475
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a1309b86415d58d4f6c0bc94ae2ec03ab515341c
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="ismbbkprint-ismbbkprintl"></a>_ismbbkprint, _ismbbkprint_l

Determina se un carattere multibyte particolare è un simbolo di punteggiatura.

## <a name="syntax"></a>Sintassi

```C
int _ismbbkprint(
   unsigned int c
);
int _ismbbkprint_l(
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

**ismbbkprint** restituisce un valore diverso da zero se il numero intero *c* è un testo non ASCII o simbolo di punteggiatura non ASCII oppure 0 in caso contrario. Ad esempio, nella tabella codici 932, solo **ismbbkprint** verifica la punteggiatura katakana o alfanumerica katakana (intervallo: 0xA1 - 0xDF). **ismbbkprint** utilizza le impostazioni locali correnti per le impostazioni di caratteri dipendenti dalle impostazioni locali. **ismbbkprint_l** è identica ad eccezione del fatto che usa le impostazioni locali passata. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbbkprint**|\<mbctype.h>|
|**_ismbbkprint_l**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
