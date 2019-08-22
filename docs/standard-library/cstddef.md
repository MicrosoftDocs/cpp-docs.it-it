---
title: '&lt;cstddef&gt;'
ms.date: 11/04/2016
f1_keywords:
- <cstddef>
helpviewer_keywords:
- cstddef header
ms.assetid: be8d1e39-5974-41ee-b41d-eafa6c82ffce
ms.openlocfilehash: 87d268977ee46112fedce517e66a9e68071863db
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68457567"
---
# <a name="ltcstddefgt"></a>&lt;cstddef&gt;

Include l'intestazione \<della libreria standard C stddef. h > e aggiunge i nomi associati `std` allo spazio dei nomi. L'inclusione di questa intestazione garantisce che i nomi dichiarati utilizzando il collegamento esterno nell'intestazione della libreria `std` standard C vengano dichiarati nello spazio dei nomi.

> [!NOTE]
> \<cstddef > include il tipo **byte** e non include il tipo **wchar_t**.

## <a name="syntax"></a>Sintassi

```cpp
#include <cstddef>
```

## <a name="namespace-and-macros"></a>Spazio dei nomi e macro

```cpp
namespace std {
    using ptrdiff_t = see definition;
    using size_t = see definition;
    using max_align_t = see definition;
    using nullptr_t = decltype(nullptr);
}

#define NULL  // an implementation-defined null pointer constant
#define offsetof(type, member-designator)
```

### <a name="parameters"></a>Parametri

*ptrdiff_t*\
Tipo intero con segno definito dall'implementazione che può mantenere la differenza tra due pedici in un oggetto Array.

*size_t*\
Tipo di Unsigned Integer definito dall'implementazione sufficientemente grande da contenere la dimensione in byte di qualsiasi oggetto.

*max_align_t*\
Tipo POD il cui requisito di allineamento è almeno uguale a quello di ogni tipo scalare e il cui requisito di allineamento è supportato in ogni contesto.

*nullptr_t*\
Sinonimo del tipo di un'espressione **nullptr** . Sebbene non sia possibile adottare un indirizzo **nullptr** , è possibile prendere l'indirizzo di un altro oggetto *nullptr_t* che è un lvalue.

## <a name="byte-class"></a>Classe byte

```cpp
enum class byte : unsigned char {};

template <class IntType>
    constexpr byte& operator<<=(byte& b, IntType shift) noexcept;
    constexpr byte operator<<(byte b, IntType shift) noexcept;
    constexpr byte& operator>>=(byte& b, IntType shift) noexcept;
    constexpr byte operator>>(byte b, IntType shift) noexcept;

constexpr byte& operator|=(byte& left, byte right) noexcept;
constexpr byte operator|(byte left, byte right) noexcept;
constexpr byte& operator&=(byte& left, byte right) noexcept;
constexpr byte operator&(byte left, byte right) noexcept;
constexpr byte& operator^=(byte& left, byte right) noexcept;
constexpr byte operator^(byte left, byte right) noexcept;
constexpr byte operator~(byte b) noexcept;

template <class IntType>
    IntType to_integer(byte b) noexcept;
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
