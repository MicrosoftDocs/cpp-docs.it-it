---
title: Classe nested_exception
ms.date: 11/04/2016
f1_keywords:
- exception/std::bad_exception
helpviewer_keywords:
- bad_exception class
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
ms.openlocfilehash: 5741b3aa255f915500f5fe79ab5374c8c86f8814
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68460182"
---
# <a name="nestedexception-class"></a>Classe nested_exception

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

### <a name="op_as"></a> operator=

```cpp
nested_exception& operator=(const nested_exception&) = default;
```

### <a name="nested_ptr"></a>nested_ptr

```cpp
exception_ptr nested_ptr() const;
```

#### <a name="return-value"></a>Valore restituito

Eccezione archiviata acquisita da `nested_exception` questo oggetto.

### <a name="rethrow_nested"></a>rethrow_nested

```cpp
[[noreturn]] void rethrow_nested() const;
```

#### <a name="remarks"></a>Note

Se `nested_ptr()` restituisce un puntatore null, la funzione chiama `std::terminate()`. In caso contrario, genera l'eccezione archiviata `*this`acquisita da.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<exception>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe Exception](../standard-library/exception-class.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
