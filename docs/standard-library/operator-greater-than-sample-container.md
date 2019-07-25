---
title: operator&gt; (&lt;sample container&gt;)
ms.date: 11/04/2016
f1_keywords:
- std::operator>
- operator>
- std::>
- '>'
helpviewer_keywords:
- '> operator, comparing specific objects'
- operator >
ms.assetid: 49bd417a-3305-4ffa-9884-39d3904ed87d
ms.openlocfilehash: e7da0250dc647d2d519b9c3d105fb942717c7a4c
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68449737"
---
# <a name="operatorgt-ltsample-containergt"></a>operator&gt; (&lt;sample container&gt;)

> [!NOTE]
> Questo argomento è disponibile nella documentazione C++ di Microsoft come esempio non funzionale dei contenitori usati nella libreria C++ standard. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

Esegue l'overload di **operator>** per confrontare due oggetti della classe modello [Container](../standard-library/sample-container-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
bool operator*gt;(
    const Container <Ty>& left,
    const Container <Ty>& right);
```

## <a name="return-value"></a>Valore restituito

Restituisce `right < left`.

## <a name="see-also"></a>Vedere anche

[\<sample container>](../standard-library/sample-container.md)
