---
title: '&lt;memory_resource&gt;'
ms.date: 04/04/2019
f1_keywords:
- <memory_resource>
helpviewer_keywords:
- memory_resource header
ms.openlocfilehash: b5957412d2beff0dc709dc71a77834f13eeacb41
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68269343"
---
# <a name="ltmemoryresourcegt"></a>&lt;memory_resource&gt;

Definisce il memory_resource classe modello contenitore e i relativi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <memory_resource>
```

## <a name="members"></a>Members

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator!=](../standard-library/memory-resource-operators.md#op_neq)|Verifica se l'oggetto memory_resource sul lato sinistro dell'operatore non è uguale all'oggetto memory_resource sul lato destro.|
|[operator==](../standard-library/memory-resource-operators.md#op_eq_eq)|Verifica se l'oggetto memory_resource sul lato sinistro dell'operatore è uguale all'oggetto memory_resource sul lato destro.|

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
|[pool_options Struct](../standard-library/pool-options-structure.md)||
|[Classe synchronized_pool_resource](../standard-library/synchronized-pool-resource-class.md)||
|[Classe unsynchronized_pool_resource](../standard-library/unsynchronized-pool-resource-class.md)||

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
