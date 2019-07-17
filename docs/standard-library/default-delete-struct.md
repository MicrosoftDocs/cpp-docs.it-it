---
title: default_delete Struct
ms.date: 04/04/2019
f1_keywords:
- memory/std::default_delete
helpviewer_keywords:
- default_delete struct
ms.openlocfilehash: e9e1fcc68539e55486f4ea27e6dd5c49bed11fdf
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68269263"
---
# <a name="defaultdelete-struct"></a>default_delete Struct

Un oggetto funzione predefinito che esegue l'operazione di divisione (`operator/`) sui relativi argomenti.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
    struct default_delete
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<memory>

**Spazio dei nomi:** std

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|||
|-|-|
|[default_delete](#default_delete)|Costruttore per oggetti di tipo `default_delete`.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator()](#op_paren)|Un operatore di riferimento per accedere a `default_delete`.|

## <a name="default_delete"></a> default_delete

Costruttore per oggetti di tipo `default_delete`.

```cpp
constexpr default_delete() noexcept = default;
template <class U>
    default_delete(const default_delete<U>&) noexcept;
```

## <a name="op_paren"></a> operator()

Un operatore di riferimento per accedere a `default_delete`.

```cpp
void operator()(T*) const;
```

## <a name="see-also"></a>Vedere anche

[\<memory>](../standard-library/memory.md)
