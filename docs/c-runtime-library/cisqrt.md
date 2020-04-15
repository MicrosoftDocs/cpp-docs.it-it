---
title: _CIsqrt
ms.date: 4/2/2020
api_name:
- _CIsqrt
- _o__CIsqrt
api_location:
- msvcr90.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcrt.dll
- msvcr110.dll
- msvcr100.dll
- api-ms-win-crt-math-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _CIsqrt
- CIsqrt
helpviewer_keywords:
- CIsqrt intrinsic
- _CIsqrt intrinsic
ms.assetid: 663548ea-398c-48ee-8397-a787c6ebb937
ms.openlocfilehash: eb67474ce5ecd1e6769f8d5fb676fd1753ef6d72
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81349520"
---
# <a name="_cisqrt"></a>_CIsqrt

Calcola la radice quadrata del primo valore dello stack.

## <a name="syntax"></a>Sintassi

```
void __cdecl _CIsqrt();
```

## <a name="remarks"></a>Osservazioni

Questa versione della funzione `sqrt` usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta l'allocazione dei registri.

Il valore risultante viene inserito all'inizio dello stack.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

**Piattaforma:** x86

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[sqrt, sqrtf, sqrtl](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)
