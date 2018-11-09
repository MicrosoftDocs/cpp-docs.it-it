---
title: __pctype_func
ms.date: 11/04/2016
apiname:
- __pctype_func
apilocation:
- msvcrt.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr120.dll
- msvcr90.dll
- msvcr100.dll
- msvcr80.dll
apitype: DLLExport
f1_keywords:
- __pctype_func
helpviewer_keywords:
- __pctype_func
ms.assetid: d52b8add-d07d-4516-a22f-e836cde0c57f
ms.openlocfilehash: fc0f4b0be80534744beda1fe7595293ceb002924
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50444226"
---
# <a name="pctypefunc"></a>__pctype_func

Recupera un puntatore a una matrice di informazioni sulla classificazione dei caratteri.

## <a name="syntax"></a>Sintassi

```cpp
const unsigned short *__pctype_func(
   )
```

## <a name="return-value"></a>Valore restituito

Un puntatore a una matrice di informazioni sulla classificazione dei caratteri.

## <a name="remarks"></a>Note

Le informazioni nella tabella di classificazione dei caratteri sono solo per uso interno e sono utilizzate da diverse funzioni che classificano i caratteri di tipo `char`. Per alte informazioni, vedere la sezione `Remarks` in [_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__pctype_func|ctype.h|

## <a name="see-also"></a>Vedere anche

[_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md)