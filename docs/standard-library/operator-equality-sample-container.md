---
description: 'Altre informazioni su: operator = = ( &lt; contenitore di esempio &gt; )'
title: operator== (&lt;sample container&gt;)
ms.date: 11/04/2016
f1_keywords:
- std.==
- std::==
- operator==
- std.operator==
- std::operator==
- ==
helpviewer_keywords:
- operator ==, containers
- operator==, containers
- == operator, with specific standard C++ objects
ms.assetid: d3d8754e-5157-4b8b-bf9c-da41856f5eed
ms.openlocfilehash: b2fb296feb76536c28dd45e631af8071efa16939
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337975"
---
# <a name="operator-ltsample-containergt"></a>operator== (&lt;sample container&gt;)

> [!NOTE]
> Questo argomento è disponibile nella documentazione di Microsoft C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [C++ Standard Library Containers](../standard-library/stl-containers.md) (Contenitori della libreria standard C++).

Overload `operator==` per confrontare due oggetti del [contenitore](../standard-library/sample-container-class.md)di modelli di classe.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
bool operator==(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## <a name="return-value"></a>Valore restituito

Restituisce la `left.` [dimensione](../standard-library/container-class-size.md) `== right.size && equal(left.` [Begin](../standard-library/container-class-begin.md) `, left.` [end](../standard-library/container-class-end.md) `, right.begin)` .

## <a name="see-also"></a>Vedere anche

[\<sample container>](../standard-library/sample-container.md)
