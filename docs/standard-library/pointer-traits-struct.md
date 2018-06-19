---
title: Struct pointer_traits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- memory/std::pointer_traits::element_type
- memory/std::pointer_traits::pointer
- memory/std::pointer_traits
- memory/std::pointer_traits::difference_type
- memory/std::pointer_traits::rebind
- xmemory0/std::pointer_traits::element_type
- xmemory0/std::pointer_traits::pointer
- xmemory0/std::pointer_traits
- xmemory0/std::pointer_traits::difference_type
- xmemory0/std::pointer_traits::rebind
- memory/std::pointer_traits::pointer_to
dev_langs:
- C++
ms.assetid: 545aecf1-3561-4859-8b34-603c079fe1b3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d1485441dbea92f534314dafd9d86ab0ef8a4e69
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33856449"
---
# <a name="pointertraits-struct"></a>Struct pointer_traits

Fornisce le informazioni necessarie per un oggetto della classe modello `allocator_traits` per descrivere un allocatore con il tipo di puntatore `Ptr`.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ptr>
struct pointer_traits;
```

## <a name="remarks"></a>Note

Ptr può essere un puntatore non elaborato di tipo `Ty *` o una classe con le proprietà seguenti.

```cpp
struct Ptr
   { // describes a pointer type usable by allocators
   typedef Ptr pointer;
   typedef T1 element_type; // optional
   typedef T2 difference_type; // optional
   template <class Other>
   using rebind = typename Ptr<Other, Rest...>; // optional
   static pointer pointer_to(element_type& obj);
   // optional
   };
```

### <a name="typedefs"></a>Definizioni typedef

|Nome|Descrizione|
|----------|-----------------|
|`typedef T2 difference_type`|Il tipo `T2` è `Ptr::difference_type` se quel tipo esiste; in caso contrario `ptrdiff_t`. Se `Ptr` è un puntatore non elaborato, il tipo è `ptrdiff_t`.|
|`typedef T1 element_type`|Il tipo `T1` è `Ptr::element_type` se quel tipo esiste; in caso contrario `Ty`. Se `Ptr` è un puntatore non elaborato, il tipo è `Ty`.|
|`typedef Ptr pointer`|Il tipo è `Ptr`.|

### <a name="structs"></a>Struct

|nome|Descrizione|
|----------|-----------------|
|`pointer_traits::rebind`|Tenta di convertire il tipo di puntatore sottostante in un tipo specificato.|

### <a name="methods"></a>Metodi

|Nome|Descrizione|
|----------|-----------------|
|[pointer_to](#pointer_to)|Converte un riferimento arbitrario a un oggetto della classe `Ptr`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<memory>

**Spazio dei nomi:** std

## <a name="pointer_to"></a>  pointer_to

Metodo statico che restituisce `Ptr::pointer_to(obj)`, se tale funzione esiste. In caso contrario, non è possibile convertire un riferimento arbitrario a un oggetto della classe `Ptr`. Se `Ptr` è un puntatore non elaborato, il metodo restituisce `addressof(obj)`.

```cpp
static pointer pointer_to(element_type& obj);
```

## <a name="see-also"></a>Vedere anche

[\<memory>](../standard-library/memory.md)<br/>
[Classe allocator_traits](../standard-library/allocator-traits-class.md)<br/>
