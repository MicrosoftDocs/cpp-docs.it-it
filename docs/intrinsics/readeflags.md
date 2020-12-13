---
description: 'Altre informazioni su: __readeflags'
title: __readeflags
ms.date: 09/02/2019
f1_keywords:
- __readeflags
helpviewer_keywords:
- __readeflags intrinsic
ms.assetid: f9d2f4d8-c428-491f-b8de-04d0566b2b6b
ms.openlocfilehash: e74864f522ba411f44b4a264e9c0e1fd16aa84ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340996"
---
# <a name="__readeflags"></a>__readeflags

**Specifico di Microsoft**

Legge il registro dello stato del programma e del controllo (EFLAGS).

## <a name="syntax"></a>Sintassi

```C
unsigned     int __readeflags(void); /* x86 */
unsigned __int64 __readeflags(void); /* x64 */
```

## <a name="return-value"></a>Valore restituito

Valore del registro EFLAGS. Il valore restituito è di 32 bit su una piattaforma a 32 bit e 64 bit a lungo su una piattaforma a 64 bit.

## <a name="remarks"></a>Commenti

Queste routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__readeflags`|x86, x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__writeeflags](../intrinsics/writeeflags.md)
