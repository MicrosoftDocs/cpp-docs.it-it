---
description: 'Altre informazioni su: ActivatableClass Macros'
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
ms.openlocfilehash: 2b59101373de72ca88338750bb7fe9169376ac65
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287944"
---
# <a name="activatableclass-macros"></a>Macro ActivatableClass

Popola una cache interna che contiene una factory in grado di creare un'istanza della classe specificata.

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
Factory che creerà un'istanza della classe specificata.

*serverName*<br/>
Nome che specifica un subset di Factory nel modulo.

## <a name="remarks"></a>Commenti

Non usare queste macro con COM classico, a meno che non si usi la `#undef` direttiva per assicurarsi che la `__WRL_WINRT_STRICT__` definizione della macro venga rimossa.

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Classe Module](module-class.md)
