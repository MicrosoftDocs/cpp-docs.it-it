---
title: Macro &lt;allocators&gt;
ms.date: 11/04/2016
f1_keywords:
- allocators/std::ALLOCATOR_DECL
- allocators/std::CACHE_CHUNKLIST
- allocators/std::CACHE_FREELIST
- allocators/std::CACHE_SUBALLOC
- allocators/std::SYNC_DEFAULT
ms.assetid: 9cb5ee07-1ff9-4594-ae32-3c8c6efb511a
helpviewer_keywords:
- std::ALLOCATOR_DECL [C++]
- std::CACHE_CHUNKLIST [C++]
- std::CACHE_FREELIST [C++]
- std::CACHE_SUBALLOC [C++]
- std::SYNC_DEFAULT [C++]
ms.openlocfilehash: c2d9b84a2be42df38df36bb90c0b5aeee076bf6a
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623615"
---
# <a name="ltallocatorsgt-macros"></a>Macro &lt;allocators&gt;

||||
|-|-|-|
|[ALLOCATOR_DECL](#allocator_decl)|[CACHE_CHUNKLIST](#cache_chunklist)|[CACHE_FREELIST](#cache_freelist)|
|[CACHE_SUBALLOC](#cache_suballoc)|[SYNC_DEFAULT](#sync_default)|

## <a name="allocator_decl"></a><a name="allocator_decl"></a>ALLOCATOR_DECL

Restituisce un modello di classe allocator.

```cpp
#define ALLOCATOR_DECL(cache, sync, name) <alloc_template>
```

### <a name="remarks"></a>Osservazioni

La macro restituisce una definizione di modello `template <class Type> class name {.....}` e una specializzazione `template <> class name<void> {.....}` che insieme definiscono un modello di classe allocator che usa il filtro `sync` di sincronizzazione e una cache di tipo `cache` .

Per i compilatori che possono compilare la riassociazione, la definizione di modello risultante è simile alla seguente:

```cpp
struct rebind
   {    /* convert a name<Type> to a name<Other> */
   typedef name<Other> other;
   };
```

Per i compilatori che non possono compilare la riassociazione, la definizione di modello risultante è simile alla seguente:

```cpp
template <class Type<class name
    : public stdext::allocators::allocator_base<Type,
    sync<stdext::allocators::rts_alloc<cache>>>
{
public:
    name() {}
    template <class Other>
    name(const name<Other>&) {}
    template <class Other>
    name& operator= (const name<Other>&)
    {
        return *this;
    }
};
```

## <a name="cache_chunklist"></a><a name="cache_chunklist"></a>CACHE_CHUNKLIST

Restituisce `stdext::allocators::cache_chunklist<sizeof(Type)>`.

```cpp
#define CACHE_CHUNKLIST <cache_class>
```

### <a name="remarks"></a>Osservazioni

## <a name="cache_freelist"></a><a name="cache_freelist"></a>CACHE_FREELIST

Restituisce `stdext::allocators::cache_freelist<sizeof(Type), max>`.

```cpp
#define CACHE_FREELIST(max) <cache_class>
```

### <a name="remarks"></a>Osservazioni

## <a name="cache_suballoc"></a><a name="cache_suballoc"></a>CACHE_SUBALLOC

Restituisce `stdext::allocators::cache_suballoc<sizeof(Type)>`.

```cpp
#define CACHE_SUBALLOC <cache_class>
```

### <a name="remarks"></a>Osservazioni

## <a name="sync_default"></a><a name="sync_default"></a>SYNC_DEFAULT

Restituisce un filtro di sincronizzazione.

```cpp
#define SYNC_DEFAULT <sync_template>
```

### <a name="remarks"></a>Osservazioni

Se un compilatore supporta la compilazione di applicazioni a thread singolo e multithread, per le applicazioni a thread singolo la macro restituisce `stdext::allocators::sync_none`; in tutti gli altri casi, restituisce `stdext::allocators::sync_shared`.

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
