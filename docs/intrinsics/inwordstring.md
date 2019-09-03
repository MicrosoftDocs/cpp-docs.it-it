---
title: __inwordstring
ms.date: 09/02/2019
f1_keywords:
- __inwordstring
- __inwordstring_cpp
helpviewer_keywords:
- __inwordstring intrinsic
- rep insw instruction
ms.assetid: 6de37939-017a-4740-9e3d-7de78a30daba
ms.openlocfilehash: a6f67e15bc5eef9fbe9cc8d12e95afcdf869e3b1
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221886"
---
# <a name="__inwordstring"></a>__inwordstring

**Sezione specifica Microsoft**

Legge i dati dalla porta specificata utilizzando l' `rep insw` istruzione.

## <a name="syntax"></a>Sintassi

```C
void __inwordstring(
   unsigned short Port,
   unsigned short* Buffer,
   unsigned long Count
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta da cui leggere.

*Buffer*\
out I dati letti dalla porta sono scritti qui.

*Conteggio*\
in Numero di parole dei dati da leggere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__inwordstring`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
