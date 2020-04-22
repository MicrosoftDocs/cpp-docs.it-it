---
title: _CIexp
ms.date: 4/2/2020
api_name:
- _CIexp
- _o__CIexp
api_location:
- msvcr120.dll
- msvcr80.dll
- msvcr110.dll
- msvcr100.dll
- msvcrt.dll
- msvcr110_clr0400.dll
- msvcr90.dll
- api-ms-win-crt-math-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- CIexp
- _CIexp
helpviewer_keywords:
- CIexp intrinsic
- _CIexp intrinsic
ms.assetid: f8a3e3b7-fa57-41a3-9983-6c81914cbb55
ms.openlocfilehash: a85a9a90ee922c6100649f2aebb9eb4c68696a0d
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81745777"
---
# <a name="_ciexp"></a>_CIexp

Calcola l'esponenziale del primo valore dello stack.

## <a name="syntax"></a>Sintassi

```cpp
void __cdecl _CIexp();
```

## <a name="remarks"></a>Osservazioni

Questa versione della funzione `exp` usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta l'allocazione dei registri.

Il valore risultante viene inserito all'inizio dello stack.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

**Piattaforma:** x86

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[exp, expf, expl](../c-runtime-library/reference/exp-expf.md)
