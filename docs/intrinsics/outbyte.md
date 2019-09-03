---
title: __outbyte
ms.date: 09/02/2019
f1_keywords:
- __outbyte
helpviewer_keywords:
- out instruction
- __outbyte intrinsic
ms.assetid: c4cd1a34-8a02-4e37-993d-3201bc17901a
ms.openlocfilehash: 18792010c45ffb648e9555ccb73f8614c3e3e6ea
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217204"
---
# <a name="__outbyte"></a>__outbyte

**Sezione specifica Microsoft**

Genera l' `out` istruzione, che invia 1 byte specificato dalla `Data` porta di i/O specificata da `Port`.

## <a name="syntax"></a>Sintassi

```C
void __outbyte(
   unsigned short Port,
   unsigned char Data
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta a cui inviare i dati.

*Dati*\
in Byte da inviare alla porta specificata.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__outbyte`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
