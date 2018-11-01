---
title: __addgsbyte, __addgsword, __addgsdword, __addgsqword
ms.date: 11/04/2016
f1_keywords:
- __addgsdword
- __addgsqword
- __addgsword_cpp
- __addgsword
- __addgsbyte_cpp
- __addgsqword_cpp
- __addgsbyte
- __addgsdword_cpp
helpviewer_keywords:
- __addgsword intrinsic
- __addgsqword intrinsic
- __addgsdword intrinsic
- __addgsbyte intrinsic
ms.assetid: 4fa03e69-d849-49ed-ba37-1d3aa23c2a21
ms.openlocfilehash: 2439e541332705ec5330a7ee6e703c99712f7e8c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50667607"
---
# <a name="addgsbyte-addgsword-addgsdword-addgsqword"></a>__addgsbyte, __addgsword, __addgsdword, __addgsqword

**Sezione specifica Microsoft**

Aggiungere un valore a una posizione di memoria specificata da un offset rispetto all'inizio del `GS` segmento.

## <a name="syntax"></a>Sintassi

```
void __addgsbyte( 
   unsigned long Offset, 
   unsigned char Data 
);
void __addgsword( 
   unsigned long Offset, 
   unsigned short Data 
);
void __addgsdword( 
   unsigned long Offset, 
   unsigned long Data 
);
void __addgsqword( 
   unsigned long Offset, 
   unsigned __int64 Data 
);
```

#### <a name="parameters"></a>Parametri

*Offset*<br/>
[in] L'offset dall'inizio del `GS`.

*Dati*<br/>
[in] Il valore da aggiungere alla posizione di memoria.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__addgsbyte`|X64|
|`__addgsword`|X64|
|`__addgsdword`|X64|
|`__addgsqword`|X64|

## <a name="remarks"></a>Note

Queste funzioni intrinseche sono disponibili in solo in modalità kernel e tali routine sono disponibili solo come intrinseci.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__incgsbyte, \__incgsword, \__incgsdword, \__incgsqword](../intrinsics/incgsbyte-incgsword-incgsdword-incgsqword.md)<br/>
[__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)<br/>
[__writegsbyte, \__writegsdword, \__writegsqword, \__writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)