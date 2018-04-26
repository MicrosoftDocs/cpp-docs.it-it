---
title: _ismbblead, _ismbblead_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _ismbblead_l
- _ismbblead
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
- ismbblead_l
- istlead
- _ismbblead
- _ismbblead_l
- ismbblead
- _istlead
dev_langs:
- C++
helpviewer_keywords:
- _ismbblead_l function
- ismbblead function
- _ismbblead function
- istlead function
- ismbblead_l function
- _istlead function
ms.assetid: 2abc6f75-ed5c-472e-bfd0-e905a1835ccf
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7833abbe4a13a2c5f012926ffcca6befdc8b52ff
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="ismbblead-ismbbleadl"></a>_ismbblead, _ismbblead_l

Testa un carattere per determinare se è il byte di apertura di un carattere multibyte.

## <a name="syntax"></a>Sintassi

```C
int _ismbblead(
   unsigned int c
);
int _ismbblead_l(
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

Restituisce un valore diverso da zero se il numero intero *c* è il primo byte di un carattere multibyte.

## <a name="remarks"></a>Note

I caratteri multibyte sono costituiti da un byte di apertura seguito da un byte finale. I byte di apertura si distinguono in quanto sono compresi in un intervallo specifico per un determinato set di caratteri. Ad esempio, in byte di apertura, solo di tabella codici 932 codice compresi tra 0x81-0x9F e 0xE0 - 0xFC.

**ismbblead** utilizza le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. **ismbblead_l** è identica ad eccezione del fatto che usa le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**istlead**|Restituisce sempre false|**_ismbblead**|Restituisce sempre false|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_ismbblead**|\<mbctype.h> o \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|
|**_ismbblead_l**|\<mbctype.h> o \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|

\* Per le costanti manifeste per le condizioni di test.

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
