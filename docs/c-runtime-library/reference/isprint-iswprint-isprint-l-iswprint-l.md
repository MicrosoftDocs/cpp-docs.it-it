---
description: 'Ulteriori informazioni su: iswprint, _isprint_l _iswprint_l'
title: isprint, iswprint, _isprint_l, _iswprint_l
ms.date: 4/2/2020
api_name:
- iswprint
- isprint
- _isprint_l
- _iswprint_l
- _o_isprint
- _o_iswprint
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
- ntoskrnl.exe
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: e5d0ee00fbdbc6e5dd0778da5008b026a7c0e23f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339605"
---
# <a name="isprint-iswprint-_isprint_l-_iswprint_l"></a>isprint, iswprint, _isprint_l, _iswprint_l

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

Ognuna di queste routine restituisce un valore diverso da zero se *c* è una rappresentazione particolare di un carattere stampabile. Se *c* è un carattere stampabile, **viene restituito un** valore diverso da zero, incluso il carattere di spazio (0x20-0x7E). **iswprint** restituisce un valore diverso da zero se *c* è un carattere Wide stampabile, incluso il carattere wide dello spazio. Ognuna di queste routine restituisce 0 se *c* non soddisfa la condizione di test.

Il risultato della condizione di test per queste funzioni dipende dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Per ulteriori informazioni [, vedere setlocale _wsetlocale](setlocale-wsetlocale.md) . Le versioni di queste funzioni che non hanno il suffisso **_L** usano le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; le versioni che hanno il suffisso **_L** sono identiche, ad eccezione del fatto che usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Il comportamento di **_isprint_l** di **stampa** e non è definito se *c* non è EOF o nell'intervallo compreso tra 0 e 0xFF, inclusi. Quando si usa una libreria CRT di debug e *c* non è uno di questi valori, le funzioni generano un'asserzione.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_unicode definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_** **istprint**|**isprint**|[_ismbcprint](ismbcgraph-functions.md)|**iswprint**|

## <a name="remarks"></a>Commenti

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**isprint**|\<ctype.h>|
|**iswprint**|\<ctype.h> o \<wchar.h>|
|**_isprint_l**|\<ctype.h>|
|**_iswprint_l**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Classificazione caratteri](../../c-runtime-library/character-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[is, ISW routines](../../c-runtime-library/is-isw-routines.md)<br/>
