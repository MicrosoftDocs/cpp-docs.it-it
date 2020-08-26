---
title: Struct default_delete
ms.date: 04/04/2019
f1_keywords:
- memory/std::default_delete
helpviewer_keywords:
- default_delete struct
ms.openlocfilehash: 8baa9f5d294cf083fd55414cd529e438f328d1a1
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845081"
---
# <a name="default_delete-struct"></a>Struct default_delete

Oggetto funzione predefinito che esegue l'operazione di divisione ( `operator/` ) sui relativi argomenti.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
    struct default_delete
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<memory>

**Spazio dei nomi:** std

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Descrizione|
|-|-|
|[default_delete](#default_delete)|Costruttore per oggetti di tipo `default_delete`.|

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore ()](#op_paren)|Operatore di riferimento a cui accedere `default_delete` .|

## <a name="default_delete"></a><a name="default_delete"></a> default_delete

Costruttore per oggetti di tipo `default_delete`.

```cpp
constexpr default_delete() noexcept = default;
template <class U>
    default_delete(const default_delete<U>&) noexcept;
```

## <a name="operator"></a><a name="op_paren"></a> operatore ()

Operatore di riferimento a cui accedere `default_delete` .

```cpp
void operator()(T*) const;
```

## <a name="see-also"></a>Vedere anche

[\<memory>](../standard-library/memory.md)
