---
title: isalnum, iswalnum, _isalnum_l, _iswalnum_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _iswalnum_l
- _isalnum_l
- iswalnum
- isalnum
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
- _istalnum_l
- _iswalnum_l
- iswalnum
- _isalnum_l
- isalnum
- _istalnum
dev_langs:
- C++
helpviewer_keywords:
- _istalnum function
- _ismbcalnum_l function
- iswalnum function
- isalnum function
- istalnum function
- _isalnum_l function
- _istalnum_l function
- _iswalnum_l function
ms.assetid: 0dc51306-ade8-4944-af27-e4176fc89093
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f78a3d946ad5c19107ba22278209e08cef82b212
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="isalnum-iswalnum-isalnuml-iswalnuml"></a>isalnum, iswalnum, _isalnum_l, _iswalnum_l

Determina se un Integer rappresenta un carattere alfanumerico.

## <a name="syntax"></a>Sintassi

```C
int isalnum( int c );
int iswalnum( wint_t c );
int _isalnum_l( int c,  _locale_t locale );
int _iswalnum_l( wint_t c, _locale_t locale );
```

### <a name="parameters"></a>Parametri

*c*<br/>
Valore Integer da testare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce diverso da zero se *c* è una rappresentazione particolare di un carattere alfanumerico. **isalnum** restituisce un valore diverso da zero se il valore **isalpha** o **isdigit** è diverso da zero per *c*, vale a dire, se *c* si trova all'interno di gli intervalli A - Z, a - z oppure 0 - 9. **iswalnum** restituisce un valore diverso da zero se il valore **iswalpha** o **iswdigit** è diverso da zero per *c*. Ognuna di queste routine restituisce 0 se *c* non soddisfa la condizione di test.

Le versioni di queste funzioni con il **l** suffisso Usa il parametro delle impostazioni locali passate anziché le impostazioni locali correnti. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Il comportamento delle **isalnum** e **isalnum_l** è definito se *c* non è EOF o compreso nell'intervallo tra 0 e 0xFF, inclusivo. Quando si utilizza una libreria di debug CRT e *c* non fa parte di questi valori, la generazione di funzioni è un'asserzione.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**istalnum**|**isalnum**|[_ismbcalnum](ismbcalnum-functions.md)|**iswalnum**|
|**istalnum_l**|**_isalnum_l**|**_ismbcalnum_l**|**_iswalnum_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**isalnum**|\<ctype.h>|
|**iswalnum**|\<ctype.h> o \<wchar.h>|
|**_isalnum_l**|\<ctype.h>|
|**_iswalnum_l**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
