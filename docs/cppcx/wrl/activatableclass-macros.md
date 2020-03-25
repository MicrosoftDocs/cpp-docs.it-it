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
ms.openlocfilehash: 7bc3d789d6c0d304aa170d59dff23a97a67061d7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214273"
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

*fabbrica*<br/>
Factory che creerà un'istanza della classe specificata.

*serverName*<br/>
Nome che specifica un subset di Factory nel modulo.

## <a name="remarks"></a>Osservazioni

Non usare queste macro con COM classico a meno che non si usi la direttiva `#undef` per assicurarsi che la definizione della macro `__WRL_WINRT_STRICT__` venga rimossa.

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module](module-class.md)
