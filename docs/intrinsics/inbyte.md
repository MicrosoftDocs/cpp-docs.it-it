---
title: __inbyte
ms.date: 11/04/2016
f1_keywords:
- __inbyte
- __inbyte_cpp
helpviewer_keywords:
- in instruction
- __inbyte intrinsic
ms.assetid: 03b61799-2a08-474d-adc4-2cbf7c81a4d5
ms.openlocfilehash: 63d4e9229eb7c5058587975d0ea04696786a9c73
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50562149"
---
# <a name="inbyte"></a>__inbyte

**Sezione specifica Microsoft**

Genera il `in` un'istruzione di restituzione di un byte letti dalla porta specificata per `Port`.

## <a name="syntax"></a>Sintassi

```
unsigned char __inbyte(
   unsigned short Port
);
```

#### <a name="parameters"></a>Parametri

*Porta*<br/>
[in] La porta da cui leggere.

## <a name="return-value"></a>Valore restituito

Byte letto dalla porta specificata.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__inbyte`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)