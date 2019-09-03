---
title: __inbyte
ms.date: 09/02/2019
f1_keywords:
- __inbyte
- __inbyte_cpp
helpviewer_keywords:
- in instruction
- __inbyte intrinsic
ms.assetid: 03b61799-2a08-474d-adc4-2cbf7c81a4d5
ms.openlocfilehash: f0036763ed7315a54fbfe6dcc873b46b52f0730c
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222136"
---
# <a name="__inbyte"></a>__inbyte

**Sezione specifica Microsoft**

Genera l' `in` istruzione, restituendo un solo byte letto dalla porta specificata da `Port`.

## <a name="syntax"></a>Sintassi

```C
unsigned char __inbyte(
   unsigned short Port
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta da cui leggere.

## <a name="return-value"></a>Valore restituito

Byte letto dalla porta specificata.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__inbyte`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
