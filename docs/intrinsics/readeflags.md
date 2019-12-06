---
title: __readeflags
ms.date: 09/02/2019
f1_keywords:
- __readeflags
helpviewer_keywords:
- __readeflags intrinsic
ms.assetid: f9d2f4d8-c428-491f-b8de-04d0566b2b6b
ms.openlocfilehash: 6afdc0f20a3ae72865a80ba2eb7f896f79f63171
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857905"
---
# <a name="__readeflags"></a>__readeflags

**Sezione specifica Microsoft**

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

## <a name="requirements"></a>Requisiti di

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readeflags`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__writeeflags](../intrinsics/writeeflags.md)
