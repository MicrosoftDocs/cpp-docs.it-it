---
title: __readeflags
ms.date: 11/04/2016
f1_keywords:
- __readeflags
helpviewer_keywords:
- __readeflags intrinsic
ms.assetid: f9d2f4d8-c428-491f-b8de-04d0566b2b6b
ms.openlocfilehash: e5294180904d0d7ca3bbd1de75e45e058a33c88f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50594272"
---
# <a name="readeflags"></a>__readeflags

Legge che lo stato di programma e controllo (contenuto) registrare.

## <a name="syntax"></a>Sintassi

```
unsigned     int __readeflags(void);
unsigned __int64 __readeflags(void);
```

## <a name="return-value"></a>Valore restituito

Il valore del Registro di contenuto. Il valore restituito è a 32 bit a lungo in una piattaforma a 32 bit e a 64 bit a lungo in una piattaforma a 64 bit.

## <a name="remarks"></a>Note

Queste routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readeflags`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__writeeflags](../intrinsics/writeeflags.md)