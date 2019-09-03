---
title: __readeflags
ms.date: 09/02/2019
f1_keywords:
- __readeflags
helpviewer_keywords:
- __readeflags intrinsic
ms.assetid: f9d2f4d8-c428-491f-b8de-04d0566b2b6b
ms.openlocfilehash: fe2365c2837b6c583810bb9fc908fe98486a2d38
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221223"
---
# <a name="__readeflags"></a>__readeflags

Legge il registro dello stato del programma e del controllo (EFLAGS).

## <a name="syntax"></a>Sintassi

```C
unsigned     int __readeflags(void); /* x86 */
unsigned __int64 __readeflags(void); /* x64 */
```

## <a name="return-value"></a>Valore restituito

Valore del registro EFLAGS. Il valore restituito è di 32 bit su una piattaforma a 32 bit e 64 bit a lungo su una piattaforma a 64 bit.

## <a name="remarks"></a>Note

Queste routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readeflags`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__writeeflags](../intrinsics/writeeflags.md)
