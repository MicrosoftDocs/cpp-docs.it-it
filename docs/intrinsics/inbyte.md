---
title: __inbyte | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __inbyte
- __inbyte_cpp
dev_langs:
- C++
helpviewer_keywords:
- in instruction
- __inbyte intrinsic
ms.assetid: 03b61799-2a08-474d-adc4-2cbf7c81a4d5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7e9b4950c16cdab8dd282f772e84f7f222246328
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46414459"
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