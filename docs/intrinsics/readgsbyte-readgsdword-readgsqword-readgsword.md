---
title: __readgsbyte, __readgsdword, __readgsqword, __readgsword
ms.date: 11/04/2016
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
ms.openlocfilehash: a677b96975e0d2adcc7e548992a12bd597bea6a3
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59031495"
---
# <a name="readgsbyte-readgsdword-readgsqword-readgsword"></a>__readgsbyte, __readgsdword, __readgsqword, __readgsword

**Sezione specifica Microsoft**

Leggere la memoria da una posizione specificata da un offset rispetto all'inizio del segmento GS.

## <a name="syntax"></a>Sintassi

```
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

#### <a name="parameters"></a>Parametri

*Offset*<br/>
[in] L'offset dall'inizio del `GS` da cui leggere.

## <a name="return-value"></a>Valore restituito

Il contenuto della memoria del byte, word, parola doppia oppure parola quadrupla (come indicato dal nome della funzione chiamata) in corrispondenza della posizione `GS:[Offset]`.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readgsbyte`|X64|
|`__readgsdword`|X64|
|`__readgsqword`|X64|
|`__readgsword`|X64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Queste routine sono disponibili solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
