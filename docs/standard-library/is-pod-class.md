---
description: 'Altre informazioni su: is_pod Class'
title: Classe is_pod
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_pod
helpviewer_keywords:
- is_pod class
- is_pod
ms.assetid: d73ebdee-746b-4082-9fa4-2db71432eb0e
ms.openlocfilehash: b5fd263a0f17831daf7a187c4f0f32a5a635a9d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97323551"
---
# <a name="is_pod-class"></a>Classe is_pod

Verifica se il tipo è POD.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_pod;
```

### <a name="parameters"></a>Parametri

*T*\
Tipo su cui eseguire una query.

## <a name="remarks"></a>Commenti

`is_pod<T>::value` è **`true`** se il tipo *T* è Plain Old data (POD). In caso contrario, è **`false`** .

I tipi aritmetici, i tipi di enumerazione, i tipi di puntatori e i tipi di puntatore a membro sono POD.

Una versione cv-qualified di un tipo POD è a sua volta un tipo POD.

Una matrice di POD è a sua volta POD.

Uno struct o un'unione, in cui tutti i membri dati non statici sono POD, è a sua volta POD se:

- Non ha costruttori dichiarati dall'utente.

- Non ha membri dati non statici privati o protetti.

- Non ha classi di base.

- Non ha funzioni virtuali.

- Non ha membri dati non statici di tipo di riferimento.

- Non ha un operatore di assegnazione di copia definito dall'utente.

- Non ha un distruttore definito dall'utente.

Pertanto, è possibile creare in modo ricorsivo matrici e struct POD che contengono matrici e struct POD.

## <a name="example"></a>Esempio

```cpp
// std__type_traits__is_pod.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial {
    int val;
};

struct throws {
    throws() {}  // User-declared ctor, so not POD

    int val;
};

int main() {
    std::cout << "is_pod<trivial> == " << std::boolalpha
        << std::is_pod<trivial>::value << std::endl;
    std::cout << "is_pod<int> == " << std::boolalpha
        << std::is_pod<int>::value << std::endl;
    std::cout << "is_pod<throws> == " << std::boolalpha
        << std::is_pod<throws>::value << std::endl;

    return (0);
}
```

```Output
is_pod<trivial> == true
is_pod<int> == true
is_pod<throws> == false
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
