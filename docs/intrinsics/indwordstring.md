---
title: __indwordstring
ms.date: 11/04/2016
f1_keywords:
- __indwordstring
- __indwordstring_cpp
helpviewer_keywords:
- __indwordstring intrinsic
- rep insd instruction
ms.assetid: 96a1cf33-f691-4916-99e4-fa849b61e3a9
ms.openlocfilehash: 6f50aed8e6efe3b0b0a6e7eaebef5719475463ea
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59027870"
---
# <a name="indwordstring"></a>__indwordstring

**Sezione specifica Microsoft**

Legge i dati dalla porta specificata usando il `rep insd` (istruzione).

## <a name="syntax"></a>Sintassi

```
void __indwordstring(
   unsigned short Port,
   unsigned long* Buffer,
   unsigned long Count
);
```

#### <a name="parameters"></a>Parametri

*Porta*<br/>
[in] La porta da cui leggere.

*Buffer*<br/>
[out] I dati letti dalla porta viene scritto qui.

*Conteggio*<br/>
[in] Il numero di byte di dati da leggere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__indwordstring`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)