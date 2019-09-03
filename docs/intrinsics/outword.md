---
title: __outword
ms.date: 09/02/2019
f1_keywords:
- __outword
helpviewer_keywords:
- __outword intrinsic
- out instruction
ms.assetid: 995f8834-0f50-4b4f-a7a2-af0e7c371cda
ms.openlocfilehash: 766f6adff5ea0212f48ff8727024ac7a5729c944
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221395"
---
# <a name="__outword"></a>__outword

**Sezione specifica Microsoft**

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

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__outword`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
