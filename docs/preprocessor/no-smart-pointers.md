---
title: no_smart_pointers | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- no_search_pointers
dev_langs:
- C++
helpviewer_keywords:
- no_smart_pointers attribute
ms.assetid: d69dd71e-08a8-4446-a3d0-a062dc29cb17
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 233e302d4035801e7d8871754d8ecfcfee54cf1a
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50060911"
---
# <a name="nosmartpointers"></a>no_smart_pointers
**Sezione specifica C++**

Elimina la creazione dei puntatori intelligenti per tutte le interfacce nella libreria dei tipi.

## <a name="syntax"></a>Sintassi

```
no_smart_pointers
```

## <a name="remarks"></a>Note

Per impostazione predefinita, quando si utilizza `#import`, si ottiene una dichiarazione del puntatore intelligente per tutte le interfacce nella libreria dei tipi. Questi puntatori intelligenti sono di tipo [com_ptr_t Class](../cpp/com-ptr-t-class.md).

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)