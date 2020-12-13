---
description: 'Altre informazioni su: __readfsbyte, __readfsdword, __readfsqword, __readfsword'
title: __readfsbyte, __readfsdword, __readfsqword, __readfsword
ms.date: 09/02/2019
f1_keywords:
- __readfsword
- __readfsdword
- __readfsbyte
- __readfsqword
helpviewer_keywords:
- __readfsword intrinsic
- readfsword intrinsic
- __readfsdword intrinsic
- readfsbyte intrinsic
- __readfsbyte intrinsic
- readfsdword intrinsic
- readfsqword intrinsic
- __readfsqword intrinsic
ms.assetid: f6ee7203-4179-402c-a464-0746c84ce6ac
ms.openlocfilehash: 2b733ced12045253c78e823379c10a5e70f65143
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340983"
---
# <a name="__readfsbyte-__readfsdword-__readfsqword-__readfsword"></a>__readfsbyte, __readfsdword, __readfsqword, __readfsword

**Specifico di Microsoft**

Consente di leggere la memoria da una posizione specificata da un offset relativo all'inizio del segmento FS.

## <a name="syntax"></a>Sintassi

```C
unsigned char __readfsbyte(
   unsigned long Offset
);
unsigned short __readfsword(
   unsigned long Offset
);
unsigned long __readfsdword(
   unsigned long Offset
);
unsigned __int64 __readfsqword(
   unsigned long Offset
);
```

### <a name="parameters"></a>Parametri

*Offset*\
in Offset dall'inizio di `FS` da cui leggere.

## <a name="return-value"></a>Valore restituito

Contenuto della memoria di byte, Word, parola doppia o quadrupla (come indicato dal nome della funzione chiamata) nella posizione `FS:[Offset]` .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__readfsbyte`|x86|
|`__readfsdword`|x86|
|`__readfsqword`|x86|
|`__readfsword`|x86|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Queste routine sono disponibili solo come intrinseci.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__writefsbyte, \_ _writefsdword, \_ _writefsqword, \_ _writefsword](../intrinsics/writefsbyte-writefsdword-writefsqword-writefsword.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
