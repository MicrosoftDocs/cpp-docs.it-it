---
title: Classe nested_exception
ms.date: 11/04/2016
f1_keywords:
- exception/std::nested_exception
helpviewer_keywords:
- nested_exception class
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
ms.openlocfilehash: 6ae95880f0bc18928ed9bd4f6b6da14722f6ec60
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212189"
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

## <a name="members"></a>Membri

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore =](#op_as)||

### <a name="functions"></a>Funzioni

|||
|-|-|
|[rethrow_nested](#rethrow_nested)|Genera l'eccezione archiviata.|
|[nested_ptr](#nested_ptr)|Restituisce l'eccezione archiviata.|

### <a name="operator"></a><a name="op_as"></a>operatore =

```cpp
nested_exception& operator=(const nested_exception&) = default;
```

### <a name="nested_ptr"></a><a name="nested_ptr"></a>nested_ptr

```cpp
exception_ptr nested_ptr() const;
```

#### <a name="return-value"></a>Valore restituito

Eccezione archiviata acquisita da questo `nested_exception` oggetto.

### <a name="rethrow_nested"></a><a name="rethrow_nested"></a>rethrow_nested

```cpp
[[noreturn]] void rethrow_nested() const;
```

#### <a name="remarks"></a>Osservazioni

Se `nested_ptr()` restituisce un puntatore null, la funzione chiama `std::terminate()` . In caso contrario, genera l'eccezione archiviata acquisita da **`*this`** .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<exception>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe Exception](../standard-library/exception-class.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
