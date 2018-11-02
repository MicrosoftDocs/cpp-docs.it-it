---
title: isalpha, iswalpha, _isalpha_l, _iswalpha_l
ms.date: 11/04/2016
apiname:
- iswalpha
- _iswalpha_l
- isalpha
- _isalpha_l
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
- _istalpha
- _ismbcalpha_l
- isalpha
- _isalpha_l
- iswalpha
- _istalpha_l
- _iswalpha_l
helpviewer_keywords:
- _iswalpha_l function
- _isalpha_l function
- _ismbcalpha_l function
- _istalpha_l function
- _ismbcalpha function
- isalpha function
- iswalpha function
- istalpha function
- _istalpha function
ms.assetid: ed6cc2be-c4b0-4475-87ac-bc06d8c23064
ms.openlocfilehash: 47b7e43172884524e50e332dcb421e84a99b9806
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591750"
---
# <a name="isalpha-iswalpha-isalphal-iswalphal"></a>isalpha, iswalpha, _isalpha_l, _iswalpha_l

Determina se un intero rappresenta un carattere alfanumerico.

## <a name="syntax"></a>Sintassi

```C
int isalpha(
   int c
);
int iswalpha(
   wint_t c
);
int _isalpha_l(
   int c,
   _locale_t locale
);
int _iswalpha_l(
   wint_t c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Valore Integer da testare.

*locale*<br/>
Impostazioni locali da usare al posto delle impostazioni locali correnti.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce diverso da zero se *c* è una rappresentazione particolare di un carattere alfabetico. **isalpha** restituisce un valore diverso da zero se *c* è compreso negli intervalli A - Z o a - z. **iswalpha** restituisce un valore diverso da zero solo per i caratteri wide per il quale [iswupper](isupper-isupper-l-iswupper-iswupper-l.md) oppure **iswlower** è diverso da zero; vale a dire, per qualsiasi carattere wide che è parte di un set definito dall'implementazione per quale nessuna delle **iswcntrl**, **iswdigit**, **iswpunct**, oppure **iswspace** è diverso da zero. Ognuna di queste routine restituisce 0 se *c* non soddisfa la condizione di test.

Le versioni di queste funzioni che hanno le **l** suffisso Usa il parametro delle impostazioni locali passate anziché quelle correnti. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Il comportamento delle **isalpha** e **isalpha_l** non è definito se *c* non è EOF o nell'intervallo da 0 a 0xFF, inclusi. Quando si usa una libreria CRT di debug e *c* è non uno di questi valori, le funzioni generano un'asserzione.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**istalpha**|**isalpha**|**_ismbcalpha**|**iswalpha**|
|**istalpha_l**|**_isalpha_l**|**_ismbcalpha_l**|**_iswalpha_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**isalpha**|\<ctype.h>|
|**iswalpha**|\<ctype.h> o \<wchar.h>|
|**_isalpha_l**|\<ctype.h>|
|**_iswalpha_l**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
