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
ms.openlocfilehash: ab2de61df8c4e22b1955e9fd4798b5128a3e12be
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33845895"
---
# <a name="hasiteratordebugging"></a>_HAS_ITERATOR_DEBUGGING

Sostituita da [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), questa macro definisce se la funzionalità di debug degli iteratori è abilitata in una build di debug. Per impostazione predefinita, il debug degli iteratori è abilitato nelle build di debug e disabilitato nelle build per la vendita. Per altre informazioni, vedere [Supporto del debug degli iteratori](../standard-library/debug-iterator-support.md).

> [!IMPORTANT]
> L'uso diretto della macro `_HAS_ITERATOR_DEBUGGING` è deprecato. Usare invece `_ITERATOR_DEBUG_LEVEL` per controllare le impostazioni di debug degli iteratori. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).

## <a name="remarks"></a>Note

Per abilitare il debug degli iteratori nelle build di debug, impostare `_ITERATOR_DEBUG_LEVEL` su 2. Ciò equivale a impostare `_HAS_ITERATOR_DEBUGGING` su 1 ovvero ad abilitarla:

```cpp
#define _ITERATOR_DEBUG_LEVEL 2
```

Non è possibile impostare `_ITERATOR_DEBUG_LEVEL` su 2 (e `_HAS_ITERATOR_DEBUGGING` su 1) nelle build per la vendita.

Per disabilitare il debug degli iteratori nelle build di debug, impostare `_ITERATOR_DEBUG_LEVEL` su 0 o 1. Ciò equivale all'impostazione di `_HAS_ITERATOR_DEBUGGING` su 0 ovvero alla disabilitazione della macro:

```cpp
#define _ITERATOR_DEBUG_LEVEL 0
```

## <a name="see-also"></a>Vedere anche

[_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)<br/>
[Debug Iterator Support](../standard-library/debug-iterator-support.md)<br/>
[Iteratori verificati](../standard-library/checked-iterators.md)<br/>
[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)<br/>
