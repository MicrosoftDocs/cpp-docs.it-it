---
title: Classe reference_wrapper | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- functional/std::reference_wrapper
- type_traits/std::reference_wrapper
- xrefwrap/std::reference_wrapper
- type_traits/std::reference_wrapper::get
- type_traits/std::reference_wrapper::operator()
- functional/std::reference_wrapper::result_type
- functional/std::reference_wrapper::type
- functional/std::reference_wrapper::get
- functional/std::reference_wrapper::operator()
dev_langs:
- C++
helpviewer_keywords:
- std::reference_wrapper [C++]
- std::reference_wrapper [C++]
- std::reference_wrapper [C++], result_type
- std::reference_wrapper [C++], type
- std::reference_wrapper [C++], get
ms.assetid: 90b8ed62-e6f1-44ed-acc7-9619bd58865a
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a8ecf0ebb881dcf626151713df57462d5709d6cb
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="referencewrapper-class"></a>Classe reference_wrapper

Esegue il wrapping di un riferimento

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
class reference_wrapper
{
public:
    typedef Ty type;

    reference_wrapper(Ty&) noexcept;
    operator Ty&() const noexcept;
    Ty& get() const noexcept;

    template <class... Types>
    auto operator()(Types&&... args) const ->
        decltype(std::invoke(get(), std::forward<Types>(args)...));

private:
    Ty *ptr; // exposition only
};
```

## <a name="remarks"></a>Note

Un oggetto `reference_wrapper<Ty>` è un wrapper costruibile e assegnabile per la copia per un riferimento a un oggetto o a una funzione di tipo `Ty` e contiene un puntatore che punta a un oggetto di quel tipo. Un oggetto `reference_wrapper` può essere usato per archiviare i riferimenti in contenitori standard e per passare gli oggetti per riferimento a `std::bind`.

Il tipo `Ty` deve essere un tipo di oggetto o un tipo di funzione, altrimenti si verifica un errore di asserzione statica in fase di compilazione.

Le funzioni helper [std::ref](functional-functions.md#ref) e [std::cref](functional-functions.md#cref) possono essere usate per creare oggetti `reference_wrapper`.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[reference_wrapper](#reference_wrapper)|Costruisce un oggetto `reference_wrapper`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[result_type](#result_type)|Tipo di risultato di un riferimento debole di cui è stato eseguito il wrapping.|
|[type](#type)|Tipo di riferimento di cui è stato eseguito il wrapping.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[get](#get)|Ottiene il riferimento di cui è stato eseguito il wrapping.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[reference_wrapper::operator Ty&amp;](#op_ty_amp)|Ottiene un puntatore al riferimento di cui è stato eseguito il wrapping.|
|[reference_wrapper::operator()](#op_call)|Chiama il riferimento di cui è stato eseguito il wrapping.|
## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="get"></a>  reference_wrapper::get

Ottiene il riferimento di cui è stato eseguito il wrapping.

```cpp
Ty& get() const noexcept;
```

### <a name="remarks"></a>Note

La funzione membro restituisce il riferimento al wrapper.

### <a name="example"></a>Esempio

```cpp
// std__functional__reference_wrapper_get.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int main() {
    int i = 1;
    std::reference_wrapper<int> rwi(i);

    std::cout << "i = " << i << std::endl;
    std::cout << "rwi = " << rwi << std::endl;
    rwi.get() = -1;
    std::cout << "i = " << i << std::endl;

    return (0);
}
```

```Output
i = 1
rwi = 1
i = -1
```

## <a name="op_ty_amp"></a>  Ty reference_wrapper::operator&amp;

Ottiene il riferimento di cui è stato eseguito il wrapping.

```cpp
operator Ty&() const noexcept;
```

### <a name="remarks"></a>Note

L'operatore membro restituisce `*ptr`.

### <a name="example"></a>Esempio

```cpp
// std__functional__reference_wrapper_operator_cast.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int main() {
    int i = 1;
    std::reference_wrapper<int> rwi(i);

    std::cout << "i = " << i << std::endl;
    std::cout << "(int)rwi = " << (int)rwi << std::endl;

    return (0);
}
```

```Output
i = 1
(int)rwi = 1
```

## <a name="op_call"></a>  reference_wrapper::operator()

Chiama il riferimento di cui è stato eseguito il wrapping.

```cpp
template <class... Types>
auto operator()(Types&&... args);
```

### <a name="parameters"></a>Parametri

`Types` I tipi di elenco di argomenti.

`args` L'elenco di argomenti.

### <a name="remarks"></a>Note

La funzione modello `operator()` restituisce `std::invoke(get(), std::forward<Types>(args)...)`.

### <a name="example"></a>Esempio

```cpp
// std__functional__reference_wrapper_operator_call.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val) {
    return (-val);
}

int main() {
    std::reference_wrapper<int (int)> rwi(neg);

    std::cout << "rwi(3) = " << rwi(3) << std::endl;

    return (0);
}
```

```Output
rwi(3) = -3
```

## <a name="reference_wrapper"></a>  reference_wrapper::reference_wrapper

Costruisce un oggetto `reference_wrapper`.

```cpp
reference_wrapper(Ty& val) noexcept;
```

### <a name="parameters"></a>Parametri

`Ty` Tipo su cui eseguire il wrapping.

`val` Il valore per eseguire il wrapping.

### <a name="remarks"></a>Note

Il costruttore imposta il valore archiviato `ptr` su `&val`.

### <a name="example"></a>Esempio

```cpp
// std__functional__reference_wrapper_reference_wrapper.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val) {
    return (-val);
}

int main() {
    int i = 1;
    std::reference_wrapper<int> rwi(i);

    std::cout << "i = " << i << std::endl;
    std::cout << "rwi = " << rwi << std::endl;
    rwi.get() = -1;
    std::cout << "i = " << i << std::endl;

    return (0);
}
```

```Output
i = 1
rwi = 1
i = -1
```

## <a name="result_type"></a>  reference_wrapper::result_type

Tipo di risultato di un riferimento debole di cui è stato eseguito il wrapping.

```cpp
typedef R result_type;
```

### <a name="remarks"></a>Note

Typedef `result_type` è un sinonimo del tipo di risultato debole di una funzione di cui è stato eseguito il wrapping. Questo typedef è significativo solo per i tipi di funzione.

### <a name="example"></a>Esempio

```cpp
// std__functional__reference_wrapper_result_type.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val) {
    return (-val);
}

int main() {
    typedef std::reference_wrapper<int (int)> Mywrapper;
    Mywrapper rwi(neg);
    Mywrapper::result_type val = rwi(3);

    std::cout << "val = " << val << std::endl;

    return (0);
}
```

```Output
val = -3
```

## <a name="type"></a>  reference_wrapper::type

Tipo di riferimento di cui è stato eseguito il wrapping.

```cpp
typedef Ty type;
```

### <a name="remarks"></a>Note

Typedef è un sinonimo dell'argomento di modello `Ty`.

### <a name="example"></a>Esempio

```cpp
// std__functional__reference_wrapper_type.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val) {
    return (-val);
}

int main() {
    int i = 1;
    typedef std::reference_wrapper<int> Mywrapper;
    Mywrapper rwi(i);
    Mywrapper::type val = rwi.get();

    std::cout << "i = " << i << std::endl;
    std::cout << "rwi = " << val << std::endl;

    return (0);
}
```

```Output
i = 1
rwi = 1
```

## <a name="see-also"></a>Vedere anche

[cref](../standard-library/functional-functions.md#cref)<br/>
[ref](../standard-library/functional-functions.md#ref)<br/>
