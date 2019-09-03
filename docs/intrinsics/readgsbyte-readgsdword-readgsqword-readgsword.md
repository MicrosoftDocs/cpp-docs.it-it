---
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
ms.openlocfilehash: 278f1de33a7e01c5893217ddd8aaa22e68cf0c94
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222358"
---
# <a name="__readgsbyte-__readgsdword-__readgsqword-__readgsword"></a>__readgsbyte, __readgsdword, __readgsqword, __readgsword

**Sezione specifica Microsoft**

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

Contenuto della memoria di byte, Word, Double Word o quadrupla (come indicato dal nome della funzione chiamata) nella posizione `GS:[Offset]`.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readgsbyte`|X64|
|`__readgsdword`|X64|
|`__readgsqword`|X64|
|`__readgsword`|X64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Queste routine sono disponibili solo come intrinseci.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
