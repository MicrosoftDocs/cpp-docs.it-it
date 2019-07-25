---
title: _SECURE_SCL
ms.date: 11/04/2016
f1_keywords:
- _SECURE_SCL
helpviewer_keywords:
- _SECURE_SCL
ms.assetid: 4ffbc788-cc12-4c6a-8cd7-490081675086
ms.openlocfilehash: 1af084363fc0d6d1723a9af7b633779f92ed2b38
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68450537"
---
# <a name="securescl"></a>_SECURE_SCL

Sostituita da [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), questa macro determina se gli [iteratori verificati](../standard-library/checked-iterators.md) sono abilitati. Per impostazione predefinita, gli iteratori verificati sono abilitati nelle build di debug e disabilitati nelle build per la vendita.

> [!IMPORTANT]
> L'uso diretto della macro _SECURE_SCL è deprecato. Usare invece _ITERATOR_DEBUG_LEVEL per controllare le impostazioni dell'iteratore verificate. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).

## <a name="remarks"></a>Note

Quando gli iteratori verificati sono abilitati, l'uso dell'iteratore unsafe ha l'effetto di provocare un errore di runtime e il programma viene terminato. Per abilitare gli iteratori controllati, impostare _ITERATOR_DEBUG_LEVEL su 1 o 2. Equivale a un'impostazione di _SECURE_SCL di 1 o abilitata:

```cpp
#define _ITERATOR_DEBUG_LEVEL 1
```

Per disabilitare gli iteratori controllati, impostare _ITERATOR_DEBUG_LEVEL su 0. Equivale a un'impostazione _SECURE_SCL 0 o disabilitata:

```cpp
#define _ITERATOR_DEBUG_LEVEL 0
```

Per informazioni su come disabilitare gli avvisi relativi agli iteratori verificati, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

## <a name="see-also"></a>Vedere anche

[_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)\
[Iteratori verificati](../standard-library/checked-iterators.md)\
[Supporto del debug degli iteratori](../standard-library/debug-iterator-support.md)\
[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)
