---
description: 'Altre informazioni su: __inwordstring'
title: __inwordstring
ms.date: 09/02/2019
f1_keywords:
- __inwordstring
- __inwordstring_cpp
helpviewer_keywords:
- __inwordstring intrinsic
- rep insw instruction
ms.assetid: 6de37939-017a-4740-9e3d-7de78a30daba
ms.openlocfilehash: d65aaedd3fc0fd51ab276abb391ed3c58047ccda
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167812"
---
# <a name="__inwordstring"></a>__inwordstring

**Specifico di Microsoft**

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

|Intrinsic|Architettura|
|---------------|------------------|
|`__inwordstring`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Questa routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
