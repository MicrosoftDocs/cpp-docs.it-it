---
title: '&lt;memory_resource&gt;'
ms.date: 04/04/2019
f1_keywords:
- <memory_resource>
helpviewer_keywords:
- memory_resource header
ms.openlocfilehash: d4b25c6ee575191f1e17b0202d33298e2e9e67f0
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68451895"
---
# <a name="ltmemoryresourcegt"></a>&lt;memory_resource&gt;

Definisce la classe modello del contenitore memory_resource e i relativi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <memory_resource>
```

## <a name="members"></a>Members

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator!=](../standard-library/memory-resource-operators.md#op_neq)|Verifica se l'oggetto memory_resource sul lato sinistro dell'operatore non è uguale all'oggetto memory_resource a destra.|
|[operator==](../standard-library/memory-resource-operators.md#op_eq_eq)|Verifica se l'oggetto memory_resource a sinistra dell'operatore è uguale all'oggetto memory_resource sul lato destro.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|||
|-|-|
|[polymorphic_allocator](../standard-library/memory-resource-functions.md#poly_alloc)||

### <a name="functions"></a>Funzioni

|||
|-|-|
|[get_default_resource](../standard-library/memory-resource-functions.md#get_default)||
|[new_delete_resource](../standard-library/memory-resource-functions.md#new_delete)||
|[null_memory_resource](../standard-library/memory-resource-functions.md#null_memory)||
|[set_default_resource](../standard-library/memory-resource-functions.md#set_default)||

### <a name="classes-and-structs"></a>Classi e struct

|||
|-|-|
|[Classe memory_resource](../standard-library/memory-resource-class.md)||
|[Classe monotonic_buffer_resource](../standard-library/monotonic-buffer-resource-class.md)||
|[Struct pool_options](../standard-library/pool-options-structure.md)||
|[Classe synchronized_pool_resource](../standard-library/synchronized-pool-resource-class.md)||
|[Classe unsynchronized_pool_resource](../standard-library/unsynchronized-pool-resource-class.md)||

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
