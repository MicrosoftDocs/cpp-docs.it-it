---
description: 'Altre informazioni su: __readmsr'
title: __readmsr
ms.date: 09/02/2019
f1_keywords:
- __readmsr
helpviewer_keywords:
- Read Model Specific Register
- rdmsr instruction
- __readmsr intrinsic
ms.assetid: 7ab1f8e8-72cb-4ce4-817d-3e728a3c9716
ms.openlocfilehash: 1a8acae272a450cb4470744e434277576cc8b9c4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97271915"
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

|Intrinsic|Architettura|
|---------------|------------------|
|`__readmsr`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Questa funzione è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

Per ulteriori informazioni, vedere la documentazione di AMD.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
