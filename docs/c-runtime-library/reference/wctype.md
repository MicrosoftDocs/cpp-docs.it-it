---
title: wctype
ms.date: 11/04/2016
apiname:
- wctype
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
apitype: DLLExport
f1_keywords:
- wctype
helpviewer_keywords:
- wctype function
- wide characters
ms.assetid: 14aded12-4087-4123-bc48-db4e10999223
ms.openlocfilehash: 81caf8e1ab04635d205d7b01af2d4c2896eec01c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62155316"
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

*proprietà*<br/>
Stringa di proprietà.

## <a name="return-value"></a>Valore restituito

Se il **LC_CTYPE** categoria delle impostazioni locali correnti non definisce una regola di classificazione il cui nome corrisponde alla stringa di proprietà *proprietà*, la funzione restituisce zero. In caso contrario, restituisce un valore diverso da zero adatto per l'uso come secondo argomento per una chiamata successiva a [towctrans](towctrans.md).

## <a name="remarks"></a>Note

La funzione determina una regola di classificazione per i codici di caratteri wide. Le seguenti coppie di chiamate hanno lo stesso comportamento in tutte le impostazioni locali, ma un'implementazione può definire ulteriori regole di classificazione anche nelle impostazioni locali "C":

|Funzione|Uguale a|
|--------------|-------------|
|iswalnum(c)|iswctype(c, wctype( "alnum" ) )|
|iswalpha(c)|iswctype(c, wctype( "alpha" ) )|
|iswcntrl(c)|iswctype(c, wctype( "cntrl" ) )|
|iswdigit(c)|iswctype(c, wctype( "digit" ) )|
|iswgraph(c)|iswctype(c, wctype( "graph" ) )|
|iswlower(c)|iswctype(c, wctype( "lower" ) )|
|iswprint(c)|iswctype(c, wctype( "print" ) )|
|iswpunct(c)|iswctype(c, wctype( "punct" ) )|
|iswspace(c)|iswctype(c, wctype( "space" ) )|
|iswupper(c)|iswctype(c, wctype( "upper" ) )|
|iswxdigit(c)|iswctype(c, wctype( "xdigit" ) )|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wctype**|\<wctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
