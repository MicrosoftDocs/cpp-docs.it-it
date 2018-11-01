---
title: __outbytestring
ms.date: 11/04/2016
f1_keywords:
- __outbytestring
helpviewer_keywords:
- rep outsb instruction
- __outbytestring intrinsic
- outsb instruction
ms.assetid: c9150661-9c18-427f-bae8-710bba6ed78c
ms.openlocfilehash: 89d2964fbc3e0d7858ec662fb55511c090036ad8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50530925"
---
# <a name="outbytestring"></a>__outbytestring

**Sezione specifica Microsoft**

Genera il `rep outsb` istruzione, che invia il primo `Count` byte di dati a cui punta `Buffer` alla porta specificata da `Port`.

## <a name="syntax"></a>Sintassi

```
void __outbytestring( 
   unsigned short Port, 
   unsigned char* Buffer, 
   unsigned long Count 
);
```

#### <a name="parameters"></a>Parametri

*Porta*<br/>
[in] La porta per inviare i dati.

*Buffer*<br/>
[in] I dati da inviare attraverso la porta specificata.

*Conteggio*<br/>
[in] Il numero di byte di dati da inviare.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__outbytestring`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)