---
description: 'Altre informazioni su: __outword'
title: __outword
ms.date: 09/02/2019
f1_keywords:
- __outword
helpviewer_keywords:
- __outword intrinsic
- out instruction
ms.assetid: 995f8834-0f50-4b4f-a7a2-af0e7c371cda
ms.openlocfilehash: 07136a5ae293f7e23a1cf6b0baa2b3a0f0cc54d8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257576"
---
# <a name="__outword"></a>__outword

**Specifico di Microsoft**

Genera l' `out` istruzione, che invia i *dati* di Word alla porta di i/O specificata dalla *porta*.

## <a name="syntax"></a>Sintassi

```C
void __outword(
   unsigned short Port,
   unsigned short Data
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta a cui inviare i dati.

*Dati*\
in Dati da inviare.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__outword`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Questa routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
