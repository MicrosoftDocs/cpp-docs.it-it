---
title: Classe is_pod
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::is_pod
helpviewer_keywords:
- is_pod class
- is_pod
ms.assetid: d73ebdee-746b-4082-9fa4-2db71432eb0e
ms.openlocfilehash: 3dff4650cf0337a5ff54065d3b1644e11008ecfe
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62413619"
---
# <a name="ispod-class"></a>Classe is_pod

Verifica se il tipo è POD.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
struct is_pod;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo su cui eseguire una query.

## <a name="remarks"></a>Note

`is_pod<T>::value` viene **true** se il tipo *T* è normale dei dati precedente (POD). In caso contrario è **false**.

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

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)<br/>
