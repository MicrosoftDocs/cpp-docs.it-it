---
title: ispunct, iswpunct, _ispunct_l, _iswpunct_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- ispunct
- _iswpunct_l
- iswpunct
- _ispunct_l
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
- iswpunct
- _istpunct
- ispunct
dev_langs:
- C++
helpviewer_keywords:
- _istpunct function
- _ispunct_l function
- iswpunct function
- ispunct function
- istpunct function
- ispunct_l function
- _iswpunct_l function
- iswpunct_l function
ms.assetid: 94403240-85c8-40a4-9c2b-e3e95c729c76
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9509270906de3f0a9c7a20fd5f126ecffcafcff0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32402670"
---
# <a name="ispunct-iswpunct-ispunctl-iswpunctl"></a>ispunct, iswpunct, _ispunct_l, _iswpunct_l

Determina se un Integer rappresenta un carattere di punteggiatura.

## <a name="syntax"></a>Sintassi

```C
int ispunct(
   int c
);
int iswpunct(
   wint_t c
);
int _ispunct_l(
   int c,
   _locale_t locale
);
int _iswpunct_l(
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

Ognuna di queste routine restituisce diverso da zero se *c* è una rappresentazione particolare di un carattere di punteggiatura. **ispunct** restituisce un valore diverso da zero per qualsiasi carattere stampabile che non è un carattere di spazio o un carattere per il quale **isalnum** è diverso da zero. **iswpunct** restituisce un valore diverso da zero per qualsiasi carattere wide stampabile che non è il carattere "wide" spazio né un carattere "wide" per il quale **iswalnum** è diverso da zero. Ognuna di queste routine restituisce 0 se *c* non soddisfa la condizione di test.

Il risultato della condizione di test per il **ispunct** dipende dalla funzione di **LC_CTYPE** categoria delle impostazioni locali, vedere [setlocale, wsetlocale](setlocale-wsetlocale.md) per altre informazioni. Le versioni di queste funzioni che non contengono il **l** suffisso utilizzare le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; le versioni che hanno il **l** suffisso sono identiche ad eccezione del fatto che usano il impostazioni locali che vengono passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Il comportamento delle **ispunct** e **ispunct_l** è definito se *c* non è EOF o compreso nell'intervallo tra 0 e 0xFF, inclusivo. Quando si utilizza una libreria di debug CRT e *c* non fa parte di questi valori, la generazione di funzioni è un'asserzione.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_** **istpunct**|**ispunct**|[_ismbcpunct](ismbcgraph-functions.md)|**iswpunct**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ispunct**|\<ctype.h>|
|**iswpunct**|\<ctype.h> o \<wchar.h>|
|**_ispunct_l**|\<ctype.h>|
|**_iswpunct_l**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
