---
description: 'Altre informazioni su: __inbyte'
title: __inbyte
ms.date: 09/02/2019
f1_keywords:
- __inbyte
- __inbyte_cpp
helpviewer_keywords:
- in instruction
- __inbyte intrinsic
ms.assetid: 03b61799-2a08-474d-adc4-2cbf7c81a4d5
ms.openlocfilehash: 77cc1cfb792ffa2f6aef9879820e644372895193
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337014"
---
# <a name="__inbyte"></a>__inbyte

**Specifico di Microsoft**

Genera l' `in` istruzione, restituendo un solo byte letto dalla porta specificata da `Port` .

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

|Intrinsic|Architettura|
|---------------|------------------|
|`__inbyte`|x86, x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="remarks"></a>Commenti

Questa routine è disponibile solo come funzione intrinseca.

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
