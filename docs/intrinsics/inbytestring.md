---
title: __inbytestring
ms.date: 09/02/2019
f1_keywords:
- __inbytestring
- __inbytestring_cpp
helpviewer_keywords:
- rep insb instruction
- __inbytestring intrinsic
ms.assetid: fe549556-e7a3-4af3-8ebf-8a7dc3cb233b
ms.openlocfilehash: cb6e811c809c6069c47415e87804641f30a3897b
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217806"
---
# <a name="__inbytestring"></a>__inbytestring

**Sezione specifica Microsoft**

Legge i dati dalla porta specificata utilizzando l' `rep insb` istruzione.

## <a name="syntax"></a>Sintassi

```C
void __inbytestring(
   unsigned short Port,
   unsigned char* Buffer,
   unsigned long Count
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta da cui leggere.

*Buffer*\
out I dati letti dalla porta sono scritti qui.

*Conteggio*\
in Numero di byte di dati da leggere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__inbytestring`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
