---
title: isxdigit, iswxdigit, _isxdigit_l, _iswxdigit_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _iswxdigit_l
- iswxdigit
- isxdigit
- _isxdigit_l
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
- iswxdigit
- isxdigit
- _istxdigit
dev_langs:
- C++
helpviewer_keywords:
- isxdigit function
- istxdigit function
- _iswxdigit_l function
- _istxdigit function
- _isxdigit_l function
- iswxdigit_l function
- isxdigit_l function
- hexadecimal characters
- iswxdigit function
ms.assetid: c8bc5146-0b58-4e3f-bee3-f2318dd0f829
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7ee95f058056464ec0b9ea4b7b35154a15a7439e
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="isxdigit-iswxdigit-isxdigitl-iswxdigitl"></a>isxdigit, iswxdigit, _isxdigit_l, _iswxdigit_l

Determina se un intero rappresenta un carattere corrispondente a una cifra esadecimale.

## <a name="syntax"></a>Sintassi

```C
int isxdigit(
   int c
);
int iswxdigit(
   wint_t c
);
int _isxdigit_l(
   int c,
   _locale_t locale
);
int _iswxdigit_l(
   wint_t c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Valore Integer da testare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce diverso da zero se *c* è una rappresentazione particolare di una cifra esadecimale. **isxdigit** restituisce un valore diverso da zero se *c* è una cifra esadecimale (A - F, a - f o 0 - 9). **iswxdigit** restituisce un valore diverso da zero se *c* è un carattere "wide" che corrisponde a un carattere di cifra esadecimale. Ognuna di queste routine restituisce 0 se *c* non soddisfa la condizione di test.

Per le impostazioni locali "C", il **iswxdigit** funzione non supporta i caratteri Unicode a larghezza intera esadecimali.

Le versioni di queste funzioni con il **l** suffisso usano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Il comportamento delle **isxdigit** e **isxdigit_l** è definito se *c* non è EOF o compreso nell'intervallo tra 0 e 0xFF, inclusivo. Quando si utilizza una libreria di debug CRT e *c* non fa parte di questi valori, la generazione di funzioni è un'asserzione.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**istxdigit**|**isxdigit**|**isxdigit**|**iswxdigit**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**isxdigit**|\<ctype.h>|
|**iswxdigit**|\<ctype.h> o \<wchar.h>|
|**_isxdigit_l**|\<ctype.h>|
|**_iswxdigit_l**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
