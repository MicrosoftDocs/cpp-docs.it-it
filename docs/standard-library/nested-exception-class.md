---
title: Classe nested_exception
ms.date: 11/04/2016
f1_keywords:
- exception/std::nested_exception
helpviewer_keywords:
- nested_exception class
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
ms.openlocfilehash: ed58eb6cc074b54ae6801d2b11089af9a79f8c8f
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79441624"
---
# <a name="nested_exception-class"></a>Classe nested_exception

La classe descrive un'eccezione per l'utilizzo con ereditarietà multipla. Acquisisce l'eccezione attualmente gestita e la archivia per un uso successivo.

## <a name="syntax"></a>Sintassi

```cpp
class nested_exception {
    public:
        nested_exception();
        nested_exception(const nested_exception&) = default;
        virtual ~nested_exception() = default; // access functions
};
```

## <a name="members"></a>Members

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator=](#op_as)||

### <a name="functions"></a>Funzioni

|||
|-|-|
|[rethrow_nested](#rethrow_nested)|Genera l'eccezione archiviata.|
|[nested_ptr](#nested_ptr)|Restituisce l'eccezione archiviata.|

### <a name="op_as"></a>operatore =

```cpp
nested_exception& operator=(const nested_exception&) = default;
```

### <a name="nested_ptr"></a>nested_ptr

```cpp
exception_ptr nested_ptr() const;
```

#### <a name="return-value"></a>Valore restituito

Eccezione archiviata acquisita da questo oggetto `nested_exception`.

### <a name="rethrow_nested"></a>rethrow_nested

```cpp
[[noreturn]] void rethrow_nested() const;
```

#### <a name="remarks"></a>Osservazioni

Se `nested_ptr()` restituisce un puntatore null, la funzione chiama `std::terminate()`. In caso contrario, genera l'eccezione archiviata acquisita da `*this`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<eccezione >

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[classe exception](../standard-library/exception-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Sicurezza dei thread nella libreria standard C++)
