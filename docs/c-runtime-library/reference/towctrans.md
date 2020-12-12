---
description: 'Altre informazioni su: towctrans'
title: towctrans
ms.date: 11/04/2016
api_name:
- towctrans
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- towctrans
helpviewer_keywords:
- towctrans function
ms.assetid: 1ed1e70d-7b31-490f-a7d9-42564b5924ca
ms.openlocfilehash: 7b8ecdd38ca45eb658d5e9f61bf05549878228bd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318299"
---
# <a name="towctrans"></a>towctrans

Trasforma un carattere.

## <a name="syntax"></a>Sintassi

```C
wint_t towctrans(
   wint_t c,
   wctrans_t category
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Il carattere che si desidera trasformare.

*category*<br/>
Identificatore che contiene il valore restituito di [wctrans](wctrans.md).

## <a name="return-value"></a>Valore restituito

Il carattere *c*, dopo **towctrans** ha utilizzato la regola di trasformazione nella *categoria*.

## <a name="remarks"></a>Commenti

Il valore della *categoria* deve essere stato restituito da una chiamata precedente riuscita a [wctrans](wctrans.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**towctrans**|\<wctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere **wctrans** per un esempio che usa **towctrans**.

## <a name="see-also"></a>Vedi anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
