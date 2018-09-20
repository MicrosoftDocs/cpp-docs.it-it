---
title: __addfsbyte, __addfsword, __addfsdword | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __addfsbyte_cpp
- __addfsdword
- __addfsword_cpp
- __addfsbyte
- __addfsword
- __addfsdword_cpp
dev_langs:
- C++
helpviewer_keywords:
- __addfsdword intrinsic
- __addfsword intrinsic
- __addfsbyte intrinsic
ms.assetid: 706c70df-6b52-4401-9268-2977ed8ad715
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5831d109301fe400cf75110221c3c37204bf5b26
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46414966"
---
# <a name="addfsbyte-addfsword-addfsdword"></a>__addfsbyte, __addfsword, __addfsdword

**Sezione specifica Microsoft**

Aggiungere un valore a una posizione di memoria specificata da un offset rispetto all'inizio del `FS` segmento.

## <a name="syntax"></a>Sintassi

```
void __addfsbyte( 
   unsigned long Offset, 
   unsigned char Data 
);
void __addfsword( 
   unsigned long Offset, 
   unsigned short Data 
);
void __addfsdword( 
   unsigned long Offset, 
   unsigned long Data 
);
```

#### <a name="parameters"></a>Parametri

*Offset*<br/>
[in] L'offset dall'inizio del `FS`.

*Dati*<br/>
[in] Il valore da aggiungere alla posizione di memoria.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__addfsbyte`|x86|
|`__addfsword`|x86|
|`__addfsdword`|x86|

## <a name="remarks"></a>Note

Queste routine sono disponibili solo come intrinseci.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__incfsbyte, \__incfsword, \__incfsdword](../intrinsics/incfsbyte-incfsword-incfsdword.md)<br/>
[__readfsbyte, \__readfsdword, \__readfsqword, \__readfsword](../intrinsics/readfsbyte-readfsdword-readfsqword-readfsword.md)<br/>
[__writefsbyte, \__writefsdword, \__writefsqword, \__writefsword](../intrinsics/writefsbyte-writefsdword-writefsqword-writefsword.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)