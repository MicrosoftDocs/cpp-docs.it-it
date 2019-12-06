---
title: __writeeflags
ms.date: 09/02/2019
f1_keywords:
- __writeeflags
helpviewer_keywords:
- __writeeflags intrinsics
ms.assetid: a62a522c-d7fa-4f10-a620-a3b32bdf3f17
ms.openlocfilehash: 6b9b6976369ed810789e5749a2e30029cad4c2d7
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74858048"
---
# <a name="__writeeflags"></a>__writeeflags

**Sezione specifica Microsoft**

Scrive il valore specificato nel registro dello stato del programma e del controllo (EFLAGS).

## <a name="syntax"></a>Sintassi

```C
void __writeeflags(unsigned Value); /* x86 */
void __writeeflags(unsigned __int64 Value); /* x64 */
```

### <a name="parameters"></a>Parametri

*Valore*\
in Valore da scrivere nel registro EFLAGS. Il parametro `Value` è lungo 32 bit per una piattaforma a 32 bit e 64 bit per una piattaforma a 64 bit.

## <a name="remarks"></a>Note

Queste routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti di

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writeeflags`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__readeflags](../intrinsics/readeflags.md)
