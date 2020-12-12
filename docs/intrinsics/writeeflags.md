---
description: 'Altre informazioni su: __writeeflags'
title: __writeeflags
ms.date: 09/02/2019
f1_keywords:
- __writeeflags
helpviewer_keywords:
- __writeeflags intrinsics
ms.assetid: a62a522c-d7fa-4f10-a620-a3b32bdf3f17
ms.openlocfilehash: 9c439194782f52b474ec6c6365705ebd8756c6b2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331870"
---
# <a name="__writeeflags"></a>__writeeflags

**Specifico di Microsoft**

Scrive il valore specificato nel registro dello stato del programma e del controllo (EFLAGS).

## <a name="syntax"></a>Sintassi

```C
void __writeeflags(unsigned Value); /* x86 */
void __writeeflags(unsigned __int64 Value); /* x64 */
```

### <a name="parameters"></a>Parametri

*Valore*\
in Valore da scrivere nel registro EFLAGS. Il `Value` parametro è lungo 32 bit per una piattaforma a 32 bit e 64 bit per una piattaforma a 64 bit.

## <a name="remarks"></a>Commenti

Queste routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__writeeflags`|x86, x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__readeflags](../intrinsics/readeflags.md)
