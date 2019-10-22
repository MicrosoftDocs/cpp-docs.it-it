---
title: Classe tuple_size
ms.date: 11/04/2016
f1_keywords:
- tuple_size
- std::tuple_size
- utility/std::tuple_size
helpviewer_keywords:
- std::tuple_size
ms.assetid: 73852fc5-eb68-41f1-8379-465cedc2314a
ms.openlocfilehash: 361545bee020d6c3624d1d45743abcb9c2b4ac85
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688859"
---
# <a name="tuple_size-class"></a>Classe tuple_size

Restituisce il numero di elementi contenuti in un `tuple` .

## <a name="syntax"></a>Sintassi

```cpp
// TEMPLATE STRUCT tuple_size
template <class Tuple>
   struct tuple_size;

// number of elements in array
template <class Elem, size_t Size>
   struct tuple_size<array<Elem, Size>>
      : integral_constant<size_t, Size>;

// size of pair
template <class T1, class T2>
   struct tuple_size<pair<T1, T2>>
      : integral_constant<size_t, 2>

// size of tuple
template <class... Types>
   struct tuple_size<tuple<Types...>>
      : integral_constant<size_t, sizeof...(Types)>;

// size of const tuple
template <class Tuple>
   struct tuple_size<const Tuple>;

// size of volatile tuple
template <class Tuple>
   struct tuple_size<volatile Tuple>;

// size of const volatile tuple
template <class Tuple>
   struct tuple_size<const volatile Tuple>;
```

```cpp
template <class T> inline constexpr size_t tuple_size_v = tuple_size<T>::value;
```

### <a name="parameters"></a>Parametri

@No__t_1 *tupla*
Tipo della tupla.

*Elem* \
Tipo degli elementi della matrice.

*Dimensioni* \
Dimensione della matrice.

@No__t_1 *T1*
Tipo del primo membro della coppia.

@No__t_1 *T2*
Tipo del secondo membro della coppia.

*Tipi*\
Tipo degli elementi della tupla.

## <a name="remarks"></a>Note

Il modello di classe dispone di un membro `value` che è un'espressione costante integrale il cui valore è l'extent della *tupla del tipo di*tupla.

La specializzazione del modello per le matrici ha un membro `value` che è un'espressione costante integrale il cui valore è *size*, che corrisponde alla dimensione della matrice.

La specializzazione modello per la coppia include un membro `value` che è un'espressione costante integrale di valore 2.

## <a name="example"></a>Esempio

```cpp
#include <tuple>
#include <iostream>

using namespace std;

typedef tuple<int, double, int, double> MyTuple;
int main()
{
    MyTuple c0(0, 1.5, 2, 3.7);

    // display contents "0 1 2 3"
    cout << get<0>(c0);
    cout << " " << get<1>(c0);
    cout << " " << get<2>(c0);
    cout << " " << get<3>(c0) << endl;

    // display size "4"
    cout << " " << tuple_size<MyTuple>::value << endl;
}
```

```Output
0 1.5 2 3.7
4
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<tuple>

**Intestazione:** \<array> (per la specializzazione di matrice)

**Intestazione:** \<utility> (per la specializzazione di coppia)

**Spazio dei nomi:** std
