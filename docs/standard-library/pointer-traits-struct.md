---
title: Struct pointer_traits
ms.date: 11/04/2016
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
ms.assetid: 545aecf1-3561-4859-8b34-603c079fe1b3
ms.openlocfilehash: 6d89348867982bfb86c0bf2404a017f6a448d1a1
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72687144"
---
# <a name="pointer_traits-struct"></a>Struct pointer_traits

Fornisce le informazioni necessarie per un oggetto di tipo `allocator_traits` per descrivere un allocatore con tipo di puntatore `Ptr`.

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
   static pointer pointer_to(element_type& obj); // optional
};
```

## <a name="members"></a>Members

### <a name="typedefs"></a>Definizioni typedef

|||
|-|-|
|`typedef T2 difference_type`|Il tipo `T2` è `Ptr::difference_type` se quel tipo esiste; in caso contrario `ptrdiff_t`. Se `Ptr` è un puntatore non elaborato, il tipo è `ptrdiff_t`.|
|`typedef T1 element_type`|Il tipo `T1` è `Ptr::element_type` se quel tipo esiste; in caso contrario `Ty`. Se `Ptr` è un puntatore non elaborato, il tipo è `Ty`.|
|`typedef Ptr pointer`|Il tipo è `Ptr`.|

### <a name="structs"></a>Strutture

|||
|-|-|
|`rebind`|Tenta di convertire il tipo di puntatore sottostante in un tipo specificato.|

### <a name="methods"></a>Metodi

|Name|Descrizione|
|----------|-----------------|
|[pointer_to](#pointer_to)|Converte un riferimento arbitrario a un oggetto della classe `Ptr`.|

### <a name="pointer_to"></a>pointer_to

Metodo statico che restituisce `Ptr::pointer_to(obj)`, se tale funzione esiste. In caso contrario, non è possibile convertire un riferimento arbitrario a un oggetto della classe `Ptr`. Se `Ptr` è un puntatore non elaborato, il metodo restituisce `addressof(obj)`.

```cpp
static pointer pointer_to(element_type& obj);
```
