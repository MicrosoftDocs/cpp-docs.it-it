---
title: operator&lt; (&lt;sample container&gt;) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- std::operator<
- operator<
- std.<
- <
- std.operator<
- std::<
dev_langs:
- C++
helpviewer_keywords:
- < operator, comparing specific objects
- operator<, valarrays
- < operator
- operator <, valarrays
ms.assetid: 31027dd6-53be-428b-b950-1dcb25393597
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5bd7db371764bb69b936ecf54df007582ac9b99a
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="operatorlt-ltsample-containergt"></a>operator&lt; (&lt;sample container&gt;)

> [!NOTE]
> Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [C++ Standard Library Containers](../standard-library/stl-containers.md) (Contenitori della libreria standard C++).

Esegue l'overload di **operator<** per confrontare due oggetti della classe modello [Container](../standard-library/sample-container-class.md).

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

[\<sample container>](../standard-library/sample-container.md)<br/>
[begin](../standard-library/container-class-begin.md)<br/>
[end](../standard-library/container-class-end.md)  