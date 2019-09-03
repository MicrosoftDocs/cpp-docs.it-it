---
title: __indwordstring
ms.date: 09/02/2019
f1_keywords:
- __indwordstring
- __indwordstring_cpp
helpviewer_keywords:
- __indwordstring intrinsic
- rep insd instruction
ms.assetid: 96a1cf33-f691-4916-99e4-fa849b61e3a9
ms.openlocfilehash: b0b160ba00b1c0b7aa6bffc913e4cb56d503c2ff
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217831"
---
# <a name="__indwordstring"></a>__indwordstring

**Sezione specifica Microsoft**

Legge i dati dalla porta specificata utilizzando l' `rep insd` istruzione.

## <a name="syntax"></a>Sintassi

```C
void __indwordstring(
   unsigned short Port,
   unsigned long* Buffer,
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
|`__indwordstring`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
