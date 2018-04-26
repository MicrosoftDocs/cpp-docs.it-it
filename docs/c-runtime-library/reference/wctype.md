---
title: wctype | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- wctype function
- wide characters
ms.assetid: 14aded12-4087-4123-bc48-db4e10999223
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bbad04d3c56015ddea10a058ae8b262d7f94d40f
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

Se il **LC_CTYPE** categoria di impostazioni locali correnti non definisce una regola di classificazione il cui nome corrisponde alla stringa di proprietà *proprietà*, la funzione restituisce zero. In caso contrario, restituisce un valore diverso da zero adatto per l'uso come secondo argomento per una chiamata successiva a [towctrans](towctrans.md).

## <a name="remarks"></a>Note

La funzione determina una regola di classificazione per i codici di caratteri wide. Le seguenti coppie di chiamate hanno lo stesso comportamento in tutte le impostazioni locali, ma un'implementazione può definire ulteriori regole di classificazione anche nelle impostazioni locali "C":

|Funzione|Uguale a|
|--------------|-------------|
|iswalnum(c)|iswctype (c, wctype ("alnum"))|
|iswalpha(c)|iswctype (c, wctype ("alfa"))|
|iswcntrl(c)|iswctype (c, wctype ("CTRL"))|
|iswdigit(c)|iswctype (c, wctype ("cifre"))|
|iswgraph(c)|iswctype (c, wctype ("grafico"))|
|iswlower(c)|iswctype (c, wctype ("inferiore"))|
|iswprint(c)|iswctype (c, wctype ("print"))|
|iswpunct(c)|iswctype (c, wctype ("punct"))|
|iswspace(c)|iswctype (c, wctype ("spazio"))|
|iswupper(c)|iswctype (c, wctype ("alto"))|
|iswxdigit(c)|iswctype (c, wctype ("xdigit"))|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**wctype**|\<wctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
