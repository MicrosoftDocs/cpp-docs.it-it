---
title: __outbyte | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __outbyte
dev_langs:
- C++
helpviewer_keywords:
- out instruction
- __outbyte intrinsic
ms.assetid: c4cd1a34-8a02-4e37-993d-3201bc17901a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 684461d1d758db2a0c5850219c00d158342b8a3d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46398170"
---
# <a name="outbyte"></a>__outbyte

**Sezione specifica Microsoft**

Genera il `out` istruzione, che invia 1 byte specificato da `Data` attraverso la porta dei / o specificata da `Port`.

## <a name="syntax"></a>Sintassi

```
void __outbyte( 
   unsigned short Port, 
   unsigned char Data 
);
```

#### <a name="parameters"></a>Parametri

*Porta*<br/>
[in] La porta per inviare i dati.

*Dati*<br/>
[in] Byte da inviare attraverso la porta specificata.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__outbyte`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)