---
title: _CIatan2
ms.date: 11/04/2016
apiname:
- _CIatan2
apilocation:
- msvcr80.dll
- msvcrt.dll
- msvcr120.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr100.dll
- msvcr90.dll
- api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- CIatan2
- _CIatan2
helpviewer_keywords:
- _CIatan2 intrinsic
- CIatan2 intrinsic
ms.assetid: 31f8cc78-b79f-4576-b73b-8add18e08680
ms.openlocfilehash: a09bc8af5ab6ef6d99efea8448098d1a2f03d580
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55703259"
---
# <a name="ciatan2"></a>_CIatan2

Calcola l'arcotangente di *x* / *y* dove *x* e *y* sono valori all'inizio dello stack.

## <a name="syntax"></a>Sintassi

```
void __cdecl _CIatan2();
```

## <a name="remarks"></a>Note

Questa versione della funzione `atan2` usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta l'allocazione dei registri.

Il valore risultante viene inserito all'inizio dello stack.

## <a name="requirements"></a>Requisiti

**Piattaforma:** x86

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[atan, atanf, atanl, atan2, atan2f, atan2l](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)