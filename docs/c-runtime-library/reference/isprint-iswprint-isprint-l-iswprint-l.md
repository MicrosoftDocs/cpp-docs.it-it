---
title: isprint, iswprint, _isprint_l, _iswprint_l
ms.date: 11/04/2016
apiname:
- iswprint
- isprint
- _isprint_l
- _iswprint_l
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
- iswprint
- _istprint
- isprint
helpviewer_keywords:
- _istprint function
- iswprint function
- _iswprint_l function
- isprint_l function
- istprint function
- isprint function
- iswprint_l function
- _isprint_l function
ms.assetid: a8bbcdb0-e8d0-4d8c-ae4e-56d3bdee6ca3
ms.openlocfilehash: 826bc825824054a5a6716f8074690f18a2c3f016
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50556403"
---
# <a name="isprint-iswprint-isprintl-iswprintl"></a>isprint, iswprint, _isprint_l, _iswprint_l

Determina se un Integer rappresenta un carattere stampabile.

## <a name="syntax"></a>Sintassi

```C
int isprint(
   int c
);
int iswprint(
   wint_t c
);
int _isprint_l(
   int c,
   _locale_t locale
);
int _iswprint_l(
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

Ognuna di queste routine restituisce diverso da zero se *c* è una rappresentazione particolare di un carattere stampabile. **isprint** restituisce un valore diverso da zero se *c* è un carattere stampabile, inclusi il carattere spazio (0x20 - 0x7E). **iswprint** restituisce un valore diverso da zero se *c* è un carattere wide stampabile, inclusi il carattere wide di spazio. Ognuna di queste routine restituisce 0 se *c* non soddisfa la condizione di test.

Il risultato della condizione di test per queste funzioni dipende il **LC_CTYPE** impostazione di categoria delle impostazioni locali; vedere [setlocale, wsetlocale](setlocale-wsetlocale.md) per altre informazioni. Le versioni di queste funzioni che non hanno le **l** suffisso usano le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; le versioni che hanno il **l** suffisso sono identiche ad eccezione del fatto che usano il impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Il comportamento delle **isprint** e **isprint_l** non è definito se *c* non è EOF o nell'intervallo da 0 a 0xFF, inclusi. Quando si usa una libreria CRT di debug e *c* è non uno di questi valori, le funzioni generano un'asserzione.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_unicode definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_** **istprint**|**isprint**|[_ismbcprint](ismbcgraph-functions.md)|**iswprint**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**isprint**|\<ctype.h>|
|**iswprint**|\<ctype.h> o \<wchar.h>|
|**_isprint_l**|\<ctype.h>|
|**_iswprint_l**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
