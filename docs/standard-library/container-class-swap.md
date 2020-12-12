---
description: 'Altre informazioni su: container Class:: swap'
title: Container Class::swap
ms.date: 11/04/2016
helpviewer_keywords:
- swap method
ms.assetid: 898c219c-bc8e-4d14-a149-6240426c693f
ms.openlocfilehash: a38dd6d14ada3ad50927060ccec1542ebf2fd4ca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97233357"
---
# <a name="container-classswap"></a>Container Class::swap

> [!NOTE]
> Questo argomento è disponibile nella documentazione di Microsoft C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [C++ Standard Library Containers](../standard-library/stl-containers.md) (Contenitori della libreria standard C++).

Scambia le sequenze controllate tra **\* questo** e il relativo argomento.

## <a name="syntax"></a>Sintassi

```cpp
void swap(Container& right);
```

## <a name="remarks"></a>Osservazioni

Se **\* this. Get \_ allocator = =** _right_**.get_allocator**, esegue uno scambio nell'ora costante. In caso contrario, esegue un numero di assegnazioni di elementi e chiamate al costruttore proporzionale al numero di elementi nelle due sequenze controllate.

## <a name="see-also"></a>Vedi anche

[Classe contenitore di esempio](../standard-library/sample-container-class.md)
