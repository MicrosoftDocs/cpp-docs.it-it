---
title: '&lt;qualsiasi&gt; funzioni'
ms.date: 04/04/2019
f1_keywords:
- any/std::any_cast
- any/std::make_any
- any/std::swap
ms.openlocfilehash: bb5f8b4411477cfcd33613ee0395227dced784f6
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68268743"
---
# <a name="ltanygt-functions"></a>&lt;qualsiasi&gt; funzioni

## <a name="any_cast"></a> any_cast

Rende un oggetto in un qualsiasi.

```cpp
template<class T>
    T any_cast(const any& operand);
template<class T>
    T any_cast(any& operand);
template<class T>
    T any_cast(any&& operand);
template<class T>
    const T* any_cast(const any* operand) noexcept;
template<class T>
    T* any_cast(any* operand) noexcept;
```

## <a name="make_any"></a> make_any

Accetta i valori e crea un oggetto qualsiasi.

```cpp
template <class T, class... Args>
    any make_any(Args&& ...args);
template <class T, class U, class... Args>
    any make_any(initializer_list<U> il, Args&& ...args);
```

## <a name="swap"></a> swap

Scambia gli elementi di due oggetti qualsiasi.

```cpp
void swap(any& left, any& right) noexcept;
```

### <a name="parameters"></a>Parametri

*A sinistra*\
Oggetto di tipo `any`.

*Ok*\
Oggetto di tipo `any`.
