---
title: __readgsbyte, __readgsdword, __readgsqword, __readgsword | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __readgsbyte
- __readgsdword
- __readgsqword
- __readgsword
dev_langs:
- C++
helpviewer_keywords:
- __readgsword intrinsic
- __readgsdword intrinsic
- __readgsqword intrinsic
- __readgsbyte intrinsic
ms.assetid: f822632d-854c-4558-a71b-cdfc3eea2236
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8afe4d646e77e87c1c679d8b7e3bd09679c7b16d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46414550"
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

Queste funzioni intrinseche sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)