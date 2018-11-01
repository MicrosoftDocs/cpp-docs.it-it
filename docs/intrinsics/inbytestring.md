---
title: __inbytestring
ms.date: 11/04/2016
f1_keywords:
- __inbytestring
- __inbytestring_cpp
helpviewer_keywords:
- rep insb instruction
- __inbytestring intrinsic
ms.assetid: fe549556-e7a3-4af3-8ebf-8a7dc3cb233b
ms.openlocfilehash: 494c57625bc6f93e09817171476267ff5fb27c3e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50556780"
---
# <a name="inbytestring"></a>__inbytestring

**Sezione specifica Microsoft**

Legge i dati dalla porta specificata usando il `rep insb` (istruzione).

## <a name="syntax"></a>Sintassi

```
void __inbytestring(
   unsigned short Port,
   unsigned char* Buffer,
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
|`__inbytestring`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)