---
title: no_smart_pointers
ms.date: 11/04/2016
f1_keywords:
- no_search_pointers
helpviewer_keywords:
- no_smart_pointers attribute
ms.assetid: d69dd71e-08a8-4446-a3d0-a062dc29cb17
ms.openlocfilehash: ed4950b9e90ef968fcf0c42e4f0a9775c58ea7ec
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59030167"
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

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)