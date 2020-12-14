---
description: 'Altre informazioni su: wctype'
title: wctype
ms.date: 11/04/2016
api_name:
- wctype
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wctype
helpviewer_keywords:
- wctype function
- wide characters
ms.assetid: 14aded12-4087-4123-bc48-db4e10999223
ms.openlocfilehash: 0791d4f048dfa5d6804db14d577b1370ffbf8754
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254196"
---
# <a name="wctype"></a>wctype

Determina una regola di classificazione per i codici di caratteri wide.

## <a name="syntax"></a>Sintassi

```C
wctype_t wctype(
   const char * property
);
```

### <a name="parameters"></a>Parametri

*property*<br/>
Stringa di proprietà.

## <a name="return-value"></a>Valore restituito

Se la categoria **LC_CTYPE** delle impostazioni locali correnti non definisce una regola di classificazione il cui nome corrisponde alla *Proprietà* della stringa di proprietà, la funzione restituisce zero. In caso contrario, restituisce un valore diverso da zero adatto per l'uso come secondo argomento per una chiamata successiva a [towctrans](towctrans.md).

## <a name="remarks"></a>Commenti

La funzione determina una regola di classificazione per i codici di caratteri wide. Le seguenti coppie di chiamate hanno lo stesso comportamento in tutte le impostazioni locali, ma un'implementazione può definire ulteriori regole di classificazione anche nelle impostazioni locali "C":

|Funzione|Uguale a|
|--------------|-------------|
|iswalnum (c)|iswctype (c, wctype ("alnum"))|
|iswalpha (c)|iswctype (c, wctype ("Alpha"))|
|iswcntrl (c)|iswctype (c, wctype ("tasti CTRL"))|
|iswdigit (c)|iswctype (c, wctype ("digit"))|
|iswgraph (c)|iswctype (c, wctype ("Graph"))|
|iswlower (c)|iswctype (c, wctype ("Lower"))|
|iswprint (c)|iswctype (c, wctype ("Print"))|
|iswpunct (c)|iswctype (c, wctype ("punct"))|
|iswspace (c)|iswctype (c, wctype ("spazio"))|
|iswupper (c)|iswctype (c, wctype ("Upper"))|
|iswxdigit (c)|iswctype (c, wctype ("xdigit"))|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wctype**|\<wctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
