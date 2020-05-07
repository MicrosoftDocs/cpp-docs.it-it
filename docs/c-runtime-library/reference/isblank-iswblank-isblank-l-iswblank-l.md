---
title: isblank, iswblank, _isblank_l, _iswblank_l
ms.date: 4/2/2020
api_name:
- isblank
- _isblank_l
- iswblank
- _iswblank_l
- _o_isblank
- _o_iswblank
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _iswblank_l
- isblank
- _istblank_l
- _istblank
- _isblank_l
- iswblank
ms.assetid: 33ce96c0-f387-411a-8283-c3d2a69e56bd
ms.openlocfilehash: 1c45319d7da48fad21af5375b0c310330d0f575a
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82918475"
---
# <a name="isblank-iswblank-_isblank_l-_iswblank_l"></a>isblank, iswblank, _isblank_l, _iswblank_l

Determina se un intero rappresenta un carattere vuoto.

## <a name="syntax"></a>Sintassi

```C
int isblank(
   int c
);
int iswblank(
   wint_t c
);
int _isblank_l(
   int c,
   _locale_t locale
);
int _iswblank_l(
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

Ognuna di queste routine restituisce un valore diverso da zero se *c* è una rappresentazione particolare di uno spazio o un carattere di tabulazione orizzontale oppure è uno dei set di caratteri specifici delle impostazioni locali utilizzati per separare le parole all'interno di una riga di testo. **blank** restituisce un valore diverso da zero se *c* è un carattere di spazio (0x20) o un carattere di tabulazione orizzontale (0x09). Il risultato della condizione di test per le funzioni **blank** dipende dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Per ulteriori informazioni, vedere [setlocale, _wsetlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni che non hanno il suffisso **_L** usano le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali; le versioni che hanno il suffisso **_L** sono identiche, ad eccezione del fatto che usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

**iswblank** restituisce un valore diverso da zero se *c* è un carattere wide che corrisponde a uno spazio standard o a un carattere di tabulazione orizzontale.

Il comportamento di **blank** e **_isblank_l** non è definito se *c* non è EOF o nell'intervallo compreso tra 0 e 0xFF, inclusi. Quando si usa una libreria CRT di debug e *c* non è uno di questi valori, le funzioni generano un'asserzione.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_istblank**|**ISBLANK**|[_ismbcblank](ismbcgraph-functions.md)|**iswblank**|
|**_istblank_l**|**_isblank_l**|[_ismbcblank_l](ismbcgraph-functions.md)|**_iswblank_l**|

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**ISBLANK**|\<ctype.h>|
|**iswblank**|\<ctype.h> o \<wchar.h>|
|**_isblank_l**|\<ctype.h>|
|**_iswblank_l**|\<ctype.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
