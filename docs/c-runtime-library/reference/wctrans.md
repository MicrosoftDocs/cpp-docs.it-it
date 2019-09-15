---
title: wctrans
ms.date: 11/04/2016
api_name:
- wctrans
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
- api-ms-win-crt-convert-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wctrans
helpviewer_keywords:
- character codes, wctrans
- characters, codes
- characters, converting
- wctrans function
ms.assetid: 215404bf-6d60-489c-9ae9-880e6b586162
ms.openlocfilehash: a75de3b699d0eb5ec6117d0f627e6a8ba34dbc62
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70944880"
---
# <a name="wctrans"></a>wctrans

Determina un mapping da un set di codici di caratteri a un altro.

## <a name="syntax"></a>Sintassi

```C
wctrans_t wctrans(
   const char *property
);
```

### <a name="parameters"></a>Parametri

*proprietà*<br/>
Una stringa che specifica una delle trasformazioni valide.

## <a name="return-value"></a>Valore restituito

Se la categoria **LC_CTYPE** delle impostazioni locali correnti non definisce un mapping il cui nome corrisponde alla *Proprietà*della stringa di proprietà, la funzione restituisce zero. In caso contrario, restituisce un valore diverso da zero adatto per l'uso come secondo argomento per una chiamata successiva a [towctrans](towctrans.md).

## <a name="remarks"></a>Note

Questa funzione determina un mapping da un set di codici di caratteri a un altro.

Le seguenti coppie di chiamate hanno lo stesso comportamento in tutte le impostazioni locali, ma è possibile definire mapping aggiuntivi anche nelle impostazioni locali "C":

|Funzione|Uguale a|
|--------------|-------------|
|ToLower (c)|towctrans (c, wctrans ("towlower"))|
|towupper (c)|towctrans (c, wctrans ("ToUpper"))|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wctrans**|\<wctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_wctrans.cpp
// compile with: /EHsc
// This example determines a mapping from one set of character
// codes to another.

#include <wchar.h>
#include <wctype.h>
#include <stdio.h>
#include <iostream>

int main()
{
    wint_t c = 'a';
    printf_s("%d\n",c);

    wctrans_t i = wctrans("toupper");
    printf_s("%d\n",i);

    wctrans_t ii = wctrans("towlower");
    printf_s("%d\n",ii);

    wchar_t wc = towctrans(c, i);
    printf_s("%d\n",wc);
}
```

```Output
97
1
0
65
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
