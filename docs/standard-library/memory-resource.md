---
title: '&lt;memory_resource &gt;'
ms.date: 04/04/2019
f1_keywords:
- <memory_resource>
helpviewer_keywords:
- memory_resource header
ms.openlocfilehash: 752396bb06b292ce29b7c6cd292287955b6066a7
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72687716"
---
# <a name="ltmemory_resourcegt"></a>&lt;memory_resource &gt;

Definisce il modello di classe del contenitore memory_resource e i relativi modelli di supporto.

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
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md) (Riferimento per la libreria standard C++)
