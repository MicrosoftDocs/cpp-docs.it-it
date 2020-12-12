---
description: 'Altre informazioni su: _SECURE_SCL'
title: _SECURE_SCL
ms.date: 11/04/2016
f1_keywords:
- _SECURE_SCL
helpviewer_keywords:
- _SECURE_SCL
ms.assetid: 4ffbc788-cc12-4c6a-8cd7-490081675086
ms.openlocfilehash: 1a0e32ada449709a60eb601138ce0bb8b7ae9123
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197101"
---
# <a name="_secure_scl"></a>_SECURE_SCL

Sostituita da [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), questa macro determina se gli [iteratori verificati](../standard-library/checked-iterators.md) sono abilitati. Per impostazione predefinita, gli iteratori verificati sono abilitati nelle build di debug e disabilitati nelle build per la vendita.

> [!IMPORTANT]
> L'uso diretto della macro _SECURE_SCL è deprecato. Usare invece _ITERATOR_DEBUG_LEVEL per controllare le impostazioni dell'iteratore verificate. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).

## <a name="remarks"></a>Commenti

Quando gli iteratori verificati sono abilitati, l'uso dell'iteratore unsafe ha l'effetto di provocare un errore di runtime e il programma viene terminato. Per abilitare gli iteratori controllati, impostare _ITERATOR_DEBUG_LEVEL su 1 o 2. Equivale a un'impostazione di _SECURE_SCL 1 o abilitata:

```cpp
#define _ITERATOR_DEBUG_LEVEL 1
```

Per disabilitare gli iteratori controllati, impostare _ITERATOR_DEBUG_LEVEL su 0. Equivale a un'impostazione di _SECURE_SCL 0 o disabilitata:

```cpp
#define _ITERATOR_DEBUG_LEVEL 0
```

Per informazioni su come disabilitare gli avvisi relativi agli iteratori verificati, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

## <a name="see-also"></a>Vedi anche

[_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)\
[Iteratori verificati](../standard-library/checked-iterators.md)\
[Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md)\
[Librerie sicure: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)
