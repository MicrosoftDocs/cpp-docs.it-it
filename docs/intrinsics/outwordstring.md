---
title: __outwordstring
ms.date: 09/02/2019
f1_keywords:
- __outwordstring
helpviewer_keywords:
- rep outsw instruction
- __outwordstring intrinsic
- outsw instruction
ms.assetid: b470c7a0-1de9-4370-886a-b2c3a1f842f4
ms.openlocfilehash: 3cc5b0ae2101c86e3dc899b7924ec2524f0ea6e7
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217114"
---
# <a name="__outwordstring"></a>__outwordstring

**Sezione specifica Microsoft**

Genera l' `rep outsw` istruzione, che invia le parole di *conteggio* a partire dal *buffer* nella porta di i/O specificata dalla *porta*.

## <a name="syntax"></a>Sintassi

```C
void __outwordstring(
   unsigned short Port,
   unsigned short* Buffer,
   unsigned long Count
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta a cui inviare i dati.

*Buffer*\
in Puntatore ai dati da inviare alla porta specificata.

*Conteggio*\
in Numero di parole da inviare.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__outwordstring`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
