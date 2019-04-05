---
title: __writeeflags
ms.date: 11/04/2016
f1_keywords:
- __writeeflags
helpviewer_keywords:
- __writeeflags intrinsics
ms.assetid: a62a522c-d7fa-4f10-a620-a3b32bdf3f17
ms.openlocfilehash: 6679a3b16def3ed413c5cec2a4bb7d5fe5d732c8
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59030355"
---
# <a name="writeeflags"></a>__writeeflags

Scrive il valore specificato per il programma di registrazione dello stato e controllo (contenuto).

## <a name="syntax"></a>Sintassi

```
void __writeeflags(unsigned Value);
void __writeeflags(unsigned __int64 Value);
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Value*|[in] Valore da scrivere nel Registro di contenuto. Il `Value` parametro è a 32 bit a lungo per una piattaforma a 32 bit e a 64 bit a lungo per una piattaforma a 64 bit.|

## <a name="remarks"></a>Note

Queste routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writeeflags`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__readeflags](../intrinsics/readeflags.md)