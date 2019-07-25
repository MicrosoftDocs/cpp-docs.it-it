---
title: operator&gt;=
ms.date: 11/04/2016
f1_keywords:
- operator>=
- std::>=
- std.operator>=
- '>='
- std.>=
- std::operator>=
helpviewer_keywords:
- '>= operator, comparing specific objects'
- operator >=
- operator>=
ms.assetid: 14fbebf5-8b75-4afa-a51b-3112d31c07cf
ms.openlocfilehash: 6eb8db25f5f30a978de197d699acf28bf8bea116
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68447969"
---
# <a name="operatorgt"></a>operator&gt;=

> [!NOTE]
> Questo argomento è disponibile nella documentazione C++ di Microsoft come esempio non funzionale dei contenitori usati nella libreria C++ standard. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

Esegue l'overload di **operator>=** per confrontare due oggetti della classe modello [Container](../standard-library/sample-container-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
bool operator>=(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## <a name="return-value"></a>Valore restituito

Restituisce `!(left < right)`.

## <a name="see-also"></a>Vedere anche

[\<sample container>](../standard-library/sample-container.md)
