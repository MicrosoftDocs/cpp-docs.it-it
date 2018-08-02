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
ms.openlocfilehash: e46063bc94fae25d414d25ae67b5418ee5aa8c27
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39465857"
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

Non usare queste macro con COM classico se non si usa la `#undef` direttiva per garantire che il **&#95; &#95;WRL_WINRT_STRICT&#95; &#95;** viene rimossa una definizione di macro.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche
[Classe Module](../windows/module-class.md)