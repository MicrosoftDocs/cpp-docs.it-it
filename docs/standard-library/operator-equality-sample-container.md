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
ms.openlocfilehash: 3f84e8e5f7d0c09a865fe47d7493daecf68cf60c
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72689197"
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

Restituisce `left.`[dimensioni](../standard-library/container-class-size.md) ` == right.size && equal(left.`[inizio](../standard-library/container-class-begin.md) `, left.`[fine](../standard-library/container-class-end.md) `, right.begin)`.

## <a name="see-also"></a>Vedere anche

[\<sample container>](../standard-library/sample-container.md)
