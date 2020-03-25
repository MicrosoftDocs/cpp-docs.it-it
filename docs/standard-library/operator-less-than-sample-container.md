---
title: operator&lt; (&lt;sample container&gt;)
ms.date: 11/04/2016
f1_keywords:
- std::operator<
- operator<
- std.<
- <
- std.operator<
- std::<
helpviewer_keywords:
- < operator, comparing specific objects
- operator<, valarrays
- < operator
- operator <, valarrays
ms.assetid: 31027dd6-53be-428b-b950-1dcb25393597
ms.openlocfilehash: 6ef43fb762c4da71062fc846048f21c0112bfafc
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80215267"
---
# <a name="operatorlt-ltsample-containergt"></a>operator&lt; (&lt;sample container&gt;)

> [!NOTE]
> Questo argomento è disponibile nella documentazione C++ di Microsoft come esempio non funzionale dei contenitori usati nella libreria C++ standard. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

Consente di eseguire l'overload dell' **operatore <** per confrontare due oggetti del [contenitore](../standard-library/sample-container-class.md)di modelli di classe.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
bool operator<(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## <a name="return-value"></a>Valore restituito

Restituisce `lexicographical_compare(left.begin, left.end, right.begin, right.end)`.

## <a name="see-also"></a>Vedere anche

[\<sample container>](../standard-library/sample-container.md)\
[inizia](../standard-library/container-class-begin.md)\
[end](../standard-library/container-class-end.md)
