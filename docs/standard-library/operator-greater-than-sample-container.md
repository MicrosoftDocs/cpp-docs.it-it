---
description: 'Altre informazioni su: operator &gt; ( &lt; Sample Container &gt; )'
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
ms.openlocfilehash: 4a8282b3cac493bbf0c2bcb24b8db44df45168f6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114962"
---
# <a name="operatorgt-ltsample-containergt"></a>operator&gt; (&lt;sample container&gt;)

> [!NOTE]
> Questo argomento è disponibile nella documentazione di Microsoft C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [C++ Standard Library Containers](../standard-library/stl-containers.md) (Contenitori della libreria standard C++).

Consente di eseguire l'overload dell' **operatore>** per confrontare due oggetti del [contenitore](../standard-library/sample-container-class.md)di modelli di classe.

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
