---
description: 'Altre informazioni su: __outdwordstring'
title: __outdwordstring
ms.date: 09/02/2019
f1_keywords:
- __outdwordstring
helpviewer_keywords:
- outsd instruction
- __outdwordstring intrinsic
- rep outsd instruction
ms.assetid: 55b31a65-aab7-4b5c-b61d-d9e2fb0c497a
ms.openlocfilehash: 3fbba7dd128666b591305326695e656befd9cada
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97180394"
---
# <a name="__outdwordstring"></a>__outdwordstring

**Specifico di Microsoft**

Genera l' `rep outsd` istruzione, che invia `Count` parole doppie a partire dalla `Buffer` porta di i/O specificata da `Port` .

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

|Intrinsic|Architettura|
|---------------|------------------|
|`__outdwordstring`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Questa routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
