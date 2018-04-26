---
title: _SECURE_SCL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- _SECURE_SCL
dev_langs:
- C++
helpviewer_keywords:
- _SECURE_SCL
ms.assetid: 4ffbc788-cc12-4c6a-8cd7-490081675086
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b75342fb28d31c9249657080c0abf10d0e99391b
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="securescl"></a>_SECURE_SCL

Sostituita da [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), questa macro determina se gli [iteratori verificati](../standard-library/checked-iterators.md) sono abilitati. Per impostazione predefinita, gli iteratori verificati sono abilitati nelle build di debug e disabilitati nelle build per la vendita.

> [!IMPORTANT]
> L'uso diretto della macro `_SECURE_SCL` è deprecato. In alternativa, usare `_ITERATOR_DEBUG_LEVEL` per controllare le impostazioni degli iteratori verificati. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).

## <a name="remarks"></a>Note

Quando gli iteratori verificati sono abilitati, l'uso dell'iteratore unsafe ha l'effetto di provocare un errore di runtime e il programma viene terminato. Per abilitare gli iteratori verificati, impostare `_ITERATOR_DEBUG_LEVEL` su 1 o 2. Ciò equivale all'impostazione di `_SECURE_SCL` su 1 ovvero all'abilitazione della macro:

```cpp
#define _ITERATOR_DEBUG_LEVEL 1
```

Per disabilitare gli iteratori verificati, impostare `_ITERATOR_DEBUG_LEVEL` su 0. Ciò equivale all'impostazione di `_SECURE_SCL` su 0 ovvero alla disabilitazione della macro:

```cpp
#define _ITERATOR_DEBUG_LEVEL 0
```

Per informazioni su come disabilitare gli avvisi relativi agli iteratori verificati, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

## <a name="see-also"></a>Vedere anche

[_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)<br/>
[Iteratori verificati](../standard-library/checked-iterators.md)<br/>
[Debug Iterator Support](../standard-library/debug-iterator-support.md)<br/>
[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)<br/>
