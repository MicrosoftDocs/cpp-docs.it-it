---
description: 'Altre informazioni su: __readgsbyte, __readgsdword, __readgsqword, __readgsword'
title: __readgsbyte, __readgsdword, __readgsqword, __readgsword
ms.date: 09/02/2019
f1_keywords:
- __readgsbyte
- __readgsdword
- __readgsqword
- __readgsword
helpviewer_keywords:
- __readgsword intrinsic
- __readgsdword intrinsic
- __readgsqword intrinsic
- __readgsbyte intrinsic
ms.assetid: f822632d-854c-4558-a71b-cdfc3eea2236
ms.openlocfilehash: fb1faf0e785f0d0983d7d3611e68a7515298e61c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340970"
---
# <a name="__readgsbyte-__readgsdword-__readgsqword-__readgsword"></a>__readgsbyte, __readgsdword, __readgsqword, __readgsword

**Specifico di Microsoft**

Consente di leggere la memoria da una posizione specificata da un offset relativo all'inizio del segmento GS.

## <a name="syntax"></a>Sintassi

```C
unsigned char __readgsbyte(
   unsigned long Offset
);
unsigned short __readgsword(
   unsigned long Offset
);
unsigned long __readgsdword(
   unsigned long Offset
);
unsigned __int64 __readgsqword(
   unsigned long Offset
);
```

### <a name="parameters"></a>Parametri

*Offset*\
in Offset dall'inizio di `GS` da cui leggere.

## <a name="return-value"></a>Valore restituito

Contenuto della memoria di byte, Word, Double Word o quadrupla (come indicato dal nome della funzione chiamata) nella posizione `GS:[Offset]` .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__readgsbyte`|x64|
|`__readgsdword`|x64|
|`__readgsqword`|x64|
|`__readgsword`|x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Queste routine sono disponibili solo come intrinseci.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__writegsbyte, \_ _writegsdword, \_ _writegsqword, \_ _writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
