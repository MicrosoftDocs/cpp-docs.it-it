---
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
ms.openlocfilehash: 08adfcc770551d3050daa46c870b950e468c95b3
ms.sourcegitcommit: eff68e4e82be292a5664616b16a526df3e9d1cda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80150642"
---
# <a name="operator-ltsample-containergt"></a>operator== (&lt;sample container&gt;)

> [!NOTE]
> Questo argomento è disponibile nella documentazione C++ di Microsoft come esempio non funzionale dei contenitori usati nella libreria C++ standard. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

Overload `operator==` per confrontare due oggetti del [contenitore](../standard-library/sample-container-class.md)di modelli di classe.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
bool operator==(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## <a name="return-value"></a>Valore restituito

Restituisce `left.`[dimensioni](../standard-library/container-class-size.md) `== right.size && equal(left.`[inizio](../standard-library/container-class-begin.md)`, left.`[fine](../standard-library/container-class-end.md)`, right.begin)`.

## <a name="see-also"></a>Vedere anche

[\<sample container>](../standard-library/sample-container.md)
