---
title: Classe nested_exception
ms.date: 11/04/2016
f1_keywords:
- exception/std::bad_exception
helpviewer_keywords:
- bad_exception class
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
ms.openlocfilehash: a568a8d9a3817883656406d63c3dd948539bb385
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68268523"
---
# <a name="nestedexception-class"></a>Classe nested_exception

La classe descrive un'eccezione per l'uso con ereditarietà multipla. Acquisisce l'eccezione attualmente gestita e archiviarlo per usarlo.

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
|[rethrow_nested](#rethrow_nested)|Genera l'eccezione stored.|
|[nested_ptr](#nested_ptr)|Restituisce l'eccezione stored.|

### <a name="op_as"></a> operator=

```cpp
nested_exception& operator=(const nested_exception&) = default;
```

### <a name="nested_ptr"></a> nested_ptr

```cpp
exception_ptr nested_ptr() const;
```

#### <a name="return-value"></a>Valore restituito

L'eccezione stored acquisito da questo `nested_exception` oggetto.

### <a name="rethrow_nested"></a> rethrow_nested

```cpp
[[noreturn]] void rethrow_nested() const;
```

#### <a name="remarks"></a>Note

Se `nested_ptr()` restituisce un puntatore null, la funzione chiama `std::terminate()`. In caso contrario, verrà generata l'eccezione stored acquisito da `*this`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<exception>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe exception](../standard-library/exception-class.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
