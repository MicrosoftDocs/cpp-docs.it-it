---
title: Container Class::reference
ms.date: 11/04/2016
helpviewer_keywords:
- reference method
ms.assetid: ab85a9fb-c628-4761-9a5f-a0231fad7690
ms.openlocfilehash: a9a28b37f8fa175d5768b215f5eca5183d31708b
ms.sourcegitcommit: 8414cd91297dea88c480e208c7b5301db9972f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2020
ms.locfileid: "77257871"
---
# <a name="container-classreference"></a>Container Class::reference

> [!NOTE]
> Questo argomento è disponibile nella documentazione C++ di Microsoft come esempio non funzionale dei contenitori usati nella libreria C++ standard. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

Descrive un oggetto che può essere usato come riferimento a un elemento della sequenza controllata.

## <a name="syntax"></a>Sintassi

```cpp
typedef T2 reference;
```

## <a name="remarks"></a>Osservazioni

Viene descritta come un sinonimo del tipo non specificato `T2` (in genere `Alloc::reference`). È possibile eseguire il cast di un oggetto di tipo `reference` a un oggetto di tipo [const_reference](../standard-library/container-class-const-reference.md).

## <a name="see-also"></a>Vedere anche

[Classe contenitore di esempio](../standard-library/sample-container-class.md)
