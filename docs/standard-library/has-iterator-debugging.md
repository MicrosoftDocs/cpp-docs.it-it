---
title: _HAS_ITERATOR_DEBUGGING
ms.date: 11/04/2016
f1_keywords:
- _HAS_ITERATOR_DEBUGGING
helpviewer_keywords:
- _HAS_ITERATOR_DEBUGGING
ms.assetid: 90077dbb-8a76-4963-83a6-29f4854007a8
ms.openlocfilehash: a1e3017ed7c6def18ce02d99dc8253b69c11ab58
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68448827"
---
# <a name="hasiteratordebugging"></a>_HAS_ITERATOR_DEBUGGING

Sostituita da [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), questa macro definisce se la funzionalità di debug degli iteratori è abilitata in una build di debug. Per impostazione predefinita, il debug degli iteratori è abilitato nelle build di debug e disabilitato nelle build per la vendita. Per altre informazioni, vedere [Supporto del debug degli iteratori](../standard-library/debug-iterator-support.md).

> [!IMPORTANT]
> L'uso diretto della macro _HAS_ITERATOR_DEBUGGING è deprecato. Usare invece _ITERATOR_DEBUG_LEVEL per controllare le impostazioni di debug degli iteratori. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).

## <a name="remarks"></a>Note

Per abilitare il debug degli iteratori nelle build di debug, impostare _ITERATOR_DEBUG_LEVEL su 2. Equivale a un'impostazione di _HAS_ITERATOR_DEBUGGING di 1 o abilitata:

```cpp
#define _ITERATOR_DEBUG_LEVEL 2
```

_ITERATOR_DEBUG_LEVEL non può essere impostato su 2 (e _HAS_ITERATOR_DEBUGGING non può essere impostato su 1) nelle compilazioni al dettaglio.

Per disabilitare gli iteratori di debug nelle build di debug, impostare _ITERATOR_DEBUG_LEVEL su 0 o 1. Equivale a un'impostazione _HAS_ITERATOR_DEBUGGING 0 o disabilitata:

```cpp
#define _ITERATOR_DEBUG_LEVEL 0
```

## <a name="see-also"></a>Vedere anche

[_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)\
[Supporto del debug degli iteratori](../standard-library/debug-iterator-support.md)\
[Iteratori verificati](../standard-library/checked-iterators.md)\
[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)
