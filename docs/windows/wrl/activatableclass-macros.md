---
title: Macro ActivatableClass
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- ActivatableClass
- ActivatableClassWithFactory
- ActivatableClassWithFactoryEx
helpviewer_keywords:
- ActivatableClassWithFactory
- ActivatableClass
- ActivatableClassWithFactoryEx
ms.assetid: 9bd64709-ec2c-4678-8c96-ea5982622bdd
ms.openlocfilehash: eee8267e2e76eead267eb2486836dbcc38a90231
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336604"
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

*className*<br/>
Nome della classe da creare.

*factory*<br/>
Factory che verrà creata un'istanza della classe specificata.

*serverName*<br/>
Un nome che specifichi un subset di stabilimenti presenti nel modulo.

## <a name="remarks"></a>Note

Non usare queste macro con COM classico se non si usa la `#undef` direttiva per garantire che il `__WRL_WINRT_STRICT__` viene rimossa una definizione di macro.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module](module-class.md)