---
description: 'Altre informazioni su: __outwordstring'
title: __outwordstring
ms.date: 09/02/2019
f1_keywords:
- __outwordstring
helpviewer_keywords:
- rep outsw instruction
- __outwordstring intrinsic
- outsw instruction
ms.assetid: b470c7a0-1de9-4370-886a-b2c3a1f842f4
ms.openlocfilehash: c0dba174776c7606a0f9ed11ac172331a6a8f350
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257537"
---
# <a name="__outwordstring"></a>__outwordstring

**Specifico di Microsoft**

Genera l' `rep outsw` istruzione, che invia le parole di *conteggio* a partire dal *buffer* nella porta di i/O specificata dalla *porta*.

## <a name="syntax"></a>Sintassi

```C
void __outwordstring(
   unsigned short Port,
   unsigned short* Buffer,
   unsigned long Count
);
```

### <a name="parameters"></a>Parametri

*Porta*\
in Porta a cui inviare i dati.

*Buffer*\
in Puntatore ai dati da inviare alla porta specificata.

*Conteggio*\
in Numero di parole da inviare.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__outwordstring`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Questa routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
