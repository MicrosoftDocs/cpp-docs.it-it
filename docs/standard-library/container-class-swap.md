---
title: Container Class::swap | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- swap method
ms.assetid: 898c219c-bc8e-4d14-a149-6240426c693f
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3c6691b8ee8471ebf0e8edc8f1513d0229193a4a
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="container-classswap"></a>Container Class::swap

> [!NOTE]
> Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

Scambia le sequenze controllate tra **\*this** e il relativo argomento.

## <a name="syntax"></a>Sintassi

```cpp
void swap(Container& right);
```

## <a name="remarks"></a>Note

Se **\*this.get\_allocator ==** _right_**.get_allocator**, esegue uno scambio in tempo costante. In caso contrario, esegue un numero di assegnazioni di elementi e chiamate al costruttore proporzionale al numero di elementi nelle due sequenze controllate.

## <a name="see-also"></a>Vedere anche

[Classe contenitore di esempio](../standard-library/sample-container-class.md)<br/>
