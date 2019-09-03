---
title: __outbytestring
ms.date: 09/02/2019
f1_keywords:
- __outbytestring
helpviewer_keywords:
- rep outsb instruction
- __outbytestring intrinsic
- outsb instruction
ms.assetid: c9150661-9c18-427f-bae8-710bba6ed78c
ms.openlocfilehash: 31caf17db5d56efccd6b30200994b1080356b4c1
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217167"
---
# <a name="__outbytestring"></a>__outbytestring

**Sezione specifica Microsoft**

Genera l' `rep outsb` istruzione, che invia i primi `Count` byte `Buffer` di dati a cui punta nella porta specificata da `Port`.

## <a name="syntax"></a>Sintassi

```C
void __outbytestring(
   unsigned short Port,
   unsigned char* Buffer,
   unsigned long Count
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta a cui inviare i dati.

*Buffer*\
in Dati da inviare alla porta specificata.

*Conteggio*\
in Numero di byte di dati da inviare.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__outbytestring`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
