---
title: Macro ActivatableClass | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- ActivatableClass
- ActivatableClassWithFactory
- ActivatableClassWithFactoryEx
dev_langs:
- C++
helpviewer_keywords:
- ActivatableClassWithFactory
- ActivatableClass
- ActivatableClassWithFactoryEx
ms.assetid: 9bd64709-ec2c-4678-8c96-ea5982622bdd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 398149d0d65b0dcf4c914d8f35e4c6faf209173f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42606987"
---
# <a name="activatableclass-macros"></a>Macro ActivatableClass

Popola una cache interna che contiene una factory che è possibile creare un'istanza della classe specificata.

## <a name="syntax"></a>Sintassi

```cpp
ActivatableClass(
   className
);

ActivatableClassWithFactory(
   className,
   factory
);

ActivatableClassWithFactoryEx(
   className,
   factory,
   serverName
);
```

### <a name="parameters"></a>Parametri

*className*  
Nome della classe da creare.

*factory*  
Factory che verrà creata un'istanza della classe specificata.

*ServerName*  
Un nome che specifichi un subset di stabilimenti presenti nel modulo.

## <a name="remarks"></a>Note

Non usare queste macro con COM classico se non si usa la `#undef` direttiva per garantire che il `__WRL_WINRT_STRICT__` viene rimossa una definizione di macro.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module](../windows/module-class.md)