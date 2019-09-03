---
title: __outdwordstring
ms.date: 09/02/2019
f1_keywords:
- __outdwordstring
helpviewer_keywords:
- outsd instruction
- __outdwordstring intrinsic
- rep outsd instruction
ms.assetid: 55b31a65-aab7-4b5c-b61d-d9e2fb0c497a
ms.openlocfilehash: 50908a65795af617f18a497c073cfefe009dfd80
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217156"
---
# <a name="__outdwordstring"></a>__outdwordstring

**Sezione specifica Microsoft**

Genera l' `rep outsd` istruzione, che invia `Count` parole doppie a partire `Buffer` dalla porta di i/O specificata da `Port`.

## <a name="syntax"></a>Sintassi

```C
void __outdwordstring(
   unsigned short Port,
   unsigned long* Buffer,
   unsigned long Count
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta a cui inviare i dati.

*Buffer*\
in Puntatore ai dati da inviare alla porta specificata.

*Conteggio*\
in Numero di parole doppie da inviare.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__outdwordstring`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
