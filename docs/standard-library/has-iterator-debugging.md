---
title: _HAS_ITERATOR_DEBUGGING | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- _HAS_ITERATOR_DEBUGGING
dev_langs:
- C++
helpviewer_keywords:
- _HAS_ITERATOR_DEBUGGING
ms.assetid: 90077dbb-8a76-4963-83a6-29f4854007a8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 81f0509c6230020b586c0341e1de608981c05476
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38965979"
---
# <a name="hasiteratordebugging"></a>_HAS_ITERATOR_DEBUGGING

Sostituita da [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), questa macro definisce se la funzionalità di debug degli iteratori è abilitata in una build di debug. Per impostazione predefinita, il debug degli iteratori è abilitato nelle build di debug e disabilitato nelle build per la vendita. Per altre informazioni, vedere [Supporto del debug degli iteratori](../standard-library/debug-iterator-support.md).

> [!IMPORTANT]
> Uso diretto della macro HAS_ITERATOR_DEBUGGING è deprecata. Usare invece ITERATOR_DEBUG_LEVEL per controllare le impostazioni di debug di iteratore. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).

## <a name="remarks"></a>Note

Per abilitare il debug degli iteratori nelle build di debug, impostare ITERATOR_DEBUG_LEVEL su 2. Ciò equivale a un'impostazione HAS_ITERATOR_DEBUGGING pari a 1 o abilitati:

```cpp
#define _ITERATOR_DEBUG_LEVEL 2
```

ITERATOR_DEBUG_LEVEL non può essere impostato su 2 (e HAS_ITERATOR_DEBUGGING precedenti non può essere impostato su 1) compilazioni di vendita al dettaglio.

Per disabilitare gli iteratori di debug nella build di debug, impostare ITERATOR_DEBUG_LEVEL su 0 o 1. Ciò equivale a un'impostazione HAS_ITERATOR_DEBUGGING pari a 0 o disabilitate:

```cpp
#define _ITERATOR_DEBUG_LEVEL 0
```

## <a name="see-also"></a>Vedere anche

[_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)<br/>
[Debug Iterator Support](../standard-library/debug-iterator-support.md)<br/>
[Iteratori verificati](../standard-library/checked-iterators.md)<br/>
[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)<br/>
