---
title: _SECURE_SCL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- _SECURE_SCL
dev_langs:
- C++
helpviewer_keywords:
- _SECURE_SCL
ms.assetid: 4ffbc788-cc12-4c6a-8cd7-490081675086
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f6a9fa05a4cb8c421a511a30fd62310d69003fde
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38966433"
---
# <a name="securescl"></a>_SECURE_SCL

Sostituita da [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md), questa macro determina se gli [iteratori verificati](../standard-library/checked-iterators.md) sono abilitati. Per impostazione predefinita, gli iteratori verificati sono abilitati nelle build di debug e disabilitati nelle build per la vendita.

> [!IMPORTANT]
> Uso diretto della macro SECURE_SCL è deprecata. Usare invece ITERATOR_DEBUG_LEVEL al controllo di verifica le impostazioni degli iteratori. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).

## <a name="remarks"></a>Note

Quando gli iteratori verificati sono abilitati, l'uso dell'iteratore unsafe ha l'effetto di provocare un errore di runtime e il programma viene terminato. Per abilitare gli iteratori verificati, impostare ITERATOR_DEBUG_LEVEL su 1 o 2. Ciò equivale all'impostazione SECURE_SCL 1, o abilitati:

```cpp
#define _ITERATOR_DEBUG_LEVEL 1
```

Per disabilitare gli iteratori verificati, impostare ITERATOR_DEBUG_LEVEL su 0. Ciò equivale a un'impostazione SECURE_SCL pari a 0 o disabilitate:

```cpp
#define _ITERATOR_DEBUG_LEVEL 0
```

Per informazioni su come disabilitare gli avvisi relativi agli iteratori verificati, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

## <a name="see-also"></a>Vedere anche

[_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)<br/>
[Iteratori verificati](../standard-library/checked-iterators.md)<br/>
[Debug Iterator Support](../standard-library/debug-iterator-support.md)<br/>
[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)<br/>
