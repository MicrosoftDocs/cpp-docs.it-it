---
title: '&lt;cstddef&gt;'
ms.date: 11/04/2016
f1_keywords:
- <cstddef>
helpviewer_keywords:
- cstddef header
ms.assetid: be8d1e39-5974-41ee-b41d-eafa6c82ffce
ms.openlocfilehash: 15d13a3af35cb41950df8aeba0c86d779e701ddb
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68244442"
---
# <a name="ltcstddefgt"></a>&lt;cstddef&gt;

Include l'intestazione della libreria standard C \<STDDEF. h > e aggiunge i nomi associati al `std` dello spazio dei nomi. Includendo questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria standard C vengono dichiarati nel `std` dello spazio dei nomi.

> [!NOTE]
> \<cstddef > include il tipo **byte** e non include tipo **wchar_t**.

## <a name="syntax"></a>Sintassi

```cpp
#include <cstddef>
```

## <a name="namespace-and-macros"></a>Macro e Namespace

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
Definito dall'implementazione eseguito l'accesso di tipo integer che può contenere la differenza di due indici in un oggetto matrice.

*size_t*\
Un tipo definito dall'implementazione unsigned integer che è abbastanza grande per contenere le dimensioni in byte di qualsiasi oggetto.

*max_align_t*\
Un tipo POD è grande almeno quanto a quello di tutti i tipi scalari il cui requisito di allineamento e il cui requisito di allineamento è supportata in ogni contesto.

*nullptr_t*\
Un sinonimo per il tipo di un **nullptr** espressione. Anche se un **nullptr** indirizzo non può essere ottenuto, l'indirizzo di un'altra *nullptr_t* oggetto che è un lvalue può essere eseguita.

## <a name="byte-class"></a>byte classe

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

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
