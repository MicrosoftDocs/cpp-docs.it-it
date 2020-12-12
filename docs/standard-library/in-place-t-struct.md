---
description: 'Altre informazioni su: in_place_t struct'
title: Struct in_place_t
ms.date: 11/04/2016
f1_keywords:
- utility<in_place_t>
- utility/std::in_place_t
helpviewer_keywords:
- utility<in_place_t> struct
ms.openlocfilehash: 72fbcb3c85c91237b3fed0d48925954a13ba8de6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324028"
---
# <a name="in_place_t-struct"></a>Struct in_place_t

## <a name="syntax"></a>Sintassi

```cpp
struct in_place_t {
    explicit in_place_t() = default;
};

inline constexpr in_place_t in_place{};

template <class T>
    struct in_place_type_t {
        explicit in_place_type_t() = default;
    };

template <class T> inline constexpr in_place_type_t<T> in_place_type{};

template <size_t I>
    struct in_place_index_t {
        explicit in_place_index_t() = default;
    };

template <size_t I> inline constexpr in_place_index_t<I> in_place_index{};
```
