---
description: 'Altre informazioni su: &lt; macro allocatori &gt;'
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
ms.openlocfilehash: c4866495787cbf502997ca08a06e57ed667f4e9a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163522"
---
# <a name="ltallocatorsgt-macros"></a>Macro &lt;allocators&gt;

:::row:::
   :::column span="":::
      [`ALLOCATOR_DECL`](#allocator_decl)\
      [`CACHE_CHUNKLIST`](#cache_chunklist)
   :::column-end:::
   :::column span="":::
      [`CACHE_FREELIST`](#cache_freelist)
   :::column-end:::
   :::column span="":::
      [`CACHE_SUBALLOC`](#cache_suballoc)
   :::column-end:::
   :::column span="":::
      [`SYNC_DEFAULT`](#sync_default)
   :::column-end:::
:::row-end:::

## <a name="allocator_decl"></a><a name="allocator_decl"></a> ALLOCATOR_DECL

Restituisce un modello di classe allocator.

```cpp
#define ALLOCATOR_DECL(cache, sync, name) <alloc_template>
```

### <a name="remarks"></a>Commenti

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

## <a name="cache_chunklist"></a><a name="cache_chunklist"></a> CACHE_CHUNKLIST

Restituisce `stdext::allocators::cache_chunklist<sizeof(Type)>`.

```cpp
#define CACHE_CHUNKLIST <cache_class>
```

### <a name="remarks"></a>Commenti

## <a name="cache_freelist"></a><a name="cache_freelist"></a> CACHE_FREELIST

Restituisce `stdext::allocators::cache_freelist<sizeof(Type), max>`.

```cpp
#define CACHE_FREELIST(max) <cache_class>
```

### <a name="remarks"></a>Commenti

## <a name="cache_suballoc"></a><a name="cache_suballoc"></a> CACHE_SUBALLOC

Restituisce `stdext::allocators::cache_suballoc<sizeof(Type)>`.

```cpp
#define CACHE_SUBALLOC <cache_class>
```

### <a name="remarks"></a>Commenti

## <a name="sync_default"></a><a name="sync_default"></a> SYNC_DEFAULT

Restituisce un filtro di sincronizzazione.

```cpp
#define SYNC_DEFAULT <sync_template>
```

### <a name="remarks"></a>Commenti

Se un compilatore supporta la compilazione di applicazioni a thread singolo e multithread, per le applicazioni a thread singolo la macro restituisce `stdext::allocators::sync_none`; in tutti gli altri casi, restituisce `stdext::allocators::sync_shared`.

## <a name="see-also"></a>Vedere anche

[\<allocators>](allocators-header.md)
