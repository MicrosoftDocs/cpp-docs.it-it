---
title: __readmsr
ms.date: 11/04/2016
f1_keywords:
- __readmsr
helpviewer_keywords:
- Read Model Specific Register
- rdmsr instruction
- __readmsr intrinsic
ms.assetid: 7ab1f8e8-72cb-4ce4-817d-3e728a3c9716
ms.openlocfilehash: 45e9c21eb8d9ac213812236a91c050c3c9df8f8d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50641064"
---
# <a name="readmsr"></a>__readmsr

**Sezione specifica Microsoft**

Genera il `rdmsr` istruzione, che legge il Registro di specifica del modello specificato da `register` e restituisce il valore.

## <a name="syntax"></a>Sintassi

```
__int64 __readmsr( 
   int register 
);
```

#### <a name="parameters"></a>Parametri

*register*<br/>
[in] Il registro specifico del modello per la lettura.

## <a name="return-value"></a>Valore restituito

Il valore del registro specificato.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readmsr`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa funzione di disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.

Per altre informazioni, vedere la documentazione AMD.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)