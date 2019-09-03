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
ms.openlocfilehash: 4398b9d42369e3a914dbec1ed2d14cafecf58483
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222333"
---
# <a name="__readmsr"></a>__readmsr

**Sezione specifica Microsoft**

Genera l' `rdmsr` istruzione, che legge il registro specifico del modello specificato da `register` e ne restituisce il valore.

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

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readmsr`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa funzione è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

Per ulteriori informazioni, vedere la documentazione di AMD.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
