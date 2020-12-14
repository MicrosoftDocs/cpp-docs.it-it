---
description: 'Altre informazioni su: __addgsbyte, __addgsword, __addgsdword, __addgsqword'
title: __addgsbyte, __addgsword, __addgsdword, __addgsqword
ms.date: 09/02/2019
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
ms.openlocfilehash: e139eb573dc8a4e21bdddff3ba8c756d572c5218
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222502"
---
# <a name="__addgsbyte-__addgsword-__addgsdword-__addgsqword"></a>__addgsbyte, __addgsword, __addgsdword, __addgsqword

**Specifico di Microsoft**

Aggiungere un valore a una posizione di memoria specificata da un offset relativo all'inizio del `GS` segmento.

## <a name="syntax"></a>Sintassi

```C
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

### <a name="parameters"></a>Parametri

*Offset*\
in Offset dall'inizio di `GS` .

*Dati*\
in Valore da aggiungere alla posizione di memoria.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__addgsbyte`|x64|
|`__addgsword`|x64|
|`__addgsdword`|x64|
|`__addgsqword`|x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Queste routine sono disponibili solo come intrinseci.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__incgsbyte, \_ _incgsword, \_ _incgsdword, \_ _incgsqword](../intrinsics/incgsbyte-incgsword-incgsdword-incgsqword.md)\
[__readgsbyte, \_ _readgsdword, \_ _readgsqword, \_ _readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)\
[__writegsbyte, \_ _writegsdword, \_ _writegsqword, \_ _writegsword](../intrinsics/writegsbyte-writegsdword-writegsqword-writegsword.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
