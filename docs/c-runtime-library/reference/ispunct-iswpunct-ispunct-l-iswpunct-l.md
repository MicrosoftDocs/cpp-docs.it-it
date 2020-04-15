---
title: ispunct, iswpunct, _ispunct_l, _iswpunct_l
ms.date: 4/2/2020
api_name:
- ispunct
- _iswpunct_l
- iswpunct
- _ispunct_l
- _o_ispunct
- _o_iswpunct
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
- api-ms-win-crt-string-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- iswpunct
- _istpunct
- ispunct
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
ms.openlocfilehash: 3072f147d2adff2c50304d2d2052947ca32cb060
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81342816"
---
# <a name="ispunct-iswpunct-_ispunct_l-_iswpunct_l"></a>ispunct, iswpunct, _ispunct_l, _iswpunct_l

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

*C*<br/>
Valore Integer da testare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce diverso da zero se *c* è una rappresentazione particolare di un carattere di punteggiatura. **ispunct** restituisce un valore diverso da zero per qualsiasi carattere stampabile che non sia un carattere di spazio o un carattere per il quale **isalnum** è diverso da zero. **iswpunct** restituisce un valore diverso da zero per qualsiasi carattere wide stampabile che non è né il carattere spazio wide né un carattere wide per il quale **iswalnum** è diverso da zero. Ognuna di queste routine restituisce 0 se *c* non soddisfa la condizione di test.

Il risultato della condizione di test per la funzione **ispunct** dipende dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Per ulteriori informazioni, vedere [setlocale, _wsetlocale.](setlocale-wsetlocale.md) Le versioni di queste funzioni che non hanno il suffisso **_l** utilizzano le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. le versioni che hanno il suffisso **_l** sono identiche, ad eccezione del fatto che utilizzano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Il comportamento di **ispunct** e **_ispunct_l** non è definito se *c* non è EOF o compreso nell'intervallo da 0 a 0xFF, inclusivo. Quando viene utilizzata una libreria CRT di debug e *c* non è uno di questi valori, le funzioni generano un'asserzione.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_** **istpunct (istpunct)**|**ispunct**|[_ismbcpunct](ismbcgraph-functions.md)|**iswpunct**|

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
