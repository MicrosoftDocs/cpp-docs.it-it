---
description: 'Altre informazioni su: &lt; memory_resource&gt;'
title: '&lt;memory_resource&gt;'
ms.date: 04/04/2019
f1_keywords:
- <memory_resource>
helpviewer_keywords:
- memory_resource header
ms.openlocfilehash: d575d94323552fd75fb6217ced7933e5050ee8b7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97183802"
---
# <a name="ltmemory_resourcegt"></a>&lt;memory_resource&gt;

Definisce il modello di classe del contenitore memory_resource e i relativi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <memory_resource>
```

## <a name="members"></a>Members

### <a name="operators"></a>Operatori

|Nome|Description|
|-|-|
|[operatore! =](../standard-library/memory-resource-operators.md#op_neq)|Verifica se l'oggetto memory_resource sul lato sinistro dell'operatore non è uguale all'oggetto memory_resource sul lato destro.|
|[operatore = =](../standard-library/memory-resource-operators.md#op_eq_eq)|Verifica se l'oggetto memory_resource a sinistra dell'operatore è uguale all'oggetto memory_resource sul lato destro.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|Nome|Description|
|-|-|
|[polymorphic_allocator](../standard-library/memory-resource-functions.md#poly_alloc)||

### <a name="functions"></a>Funzioni

|Nome|Description|
|-|-|
|[get_default_resource](../standard-library/memory-resource-functions.md#get_default)||
|[new_delete_resource](../standard-library/memory-resource-functions.md#new_delete)||
|[null_memory_resource](../standard-library/memory-resource-functions.md#null_memory)||
|[set_default_resource](../standard-library/memory-resource-functions.md#set_default)||

### <a name="classes-and-structs"></a>Classi e struct

|Nome|Description|
|-|-|
|[Classe memory_resource](../standard-library/memory-resource-class.md)||
|[Classe monotonic_buffer_resource](../standard-library/monotonic-buffer-resource-class.md)||
|[Struct pool_options](../standard-library/pool-options-structure.md)||
|[Classe synchronized_pool_resource](../standard-library/synchronized-pool-resource-class.md)||
|[Classe unsynchronized_pool_resource](../standard-library/unsynchronized-pool-resource-class.md)||

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
