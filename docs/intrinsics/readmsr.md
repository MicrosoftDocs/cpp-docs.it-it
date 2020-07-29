---
title: __readmsr
ms.date: 09/02/2019
f1_keywords:
- __readmsr
helpviewer_keywords:
- Read Model Specific Register
- rdmsr instruction
- __readmsr intrinsic
ms.assetid: 7ab1f8e8-72cb-4ce4-817d-3e728a3c9716
ms.openlocfilehash: 029119bc47d0172c7e9cc5fbf8cd20c4ee23e0f0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219651"
---
# <a name="__readmsr"></a>__readmsr

**Specifico di Microsoft**

Genera l' `rdmsr` istruzione, che legge il registro specifico del modello specificato da **`register`** e ne restituisce il valore.

## <a name="syntax"></a>Sintassi

```C
__int64 __readmsr(
   int register
);
```

### <a name="parameters"></a>Parametri

*Registro*\
in Registro specifico del modello da leggere.

## <a name="return-value"></a>Valore restituito

Valore nel registro specificato.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architecture|
|---------------|------------------|
|`__readmsr`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Osservazioni

Questa funzione è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

Per ulteriori informazioni, vedere la documentazione di AMD.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
