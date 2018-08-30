---
title: Macro InspectableClass | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::InspectableClass
dev_langs:
- C++
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9b85a10c68b7379f0e59bf859b3d8badf7413195
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43208341"
---
# <a name="inspectableclass-macro"></a>Macro InspectableClass

Imposta il nome e la relazione di trust a livello di classe runtime.

## <a name="syntax"></a>Sintassi

```cpp
InspectableClass(
   runtimeClassName,
   trustLevel)  
```

### <a name="parameters"></a>Parametri

*runtimeClassName*  
Il nome testuale completo della classe di runtime.

*trustLevel*  
Uno dei [TrustLevel](https://msdn.microsoft.com/library/br224625.aspx) valori enumerati.

## <a name="remarks"></a>Note

Il **InspectableClass** macro può essere usata solo con tipi Windows Runtime.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](../windows/runtimeclass-class.md)