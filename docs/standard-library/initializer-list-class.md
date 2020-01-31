---
title: Classe initializer_list
description: Riferimento per la classe initializer_list nella libreria C++ standard, come implementato da Microsoft in Visual Studio.
ms.date: 01/28/2020
f1_keywords:
- initializer_list/std::initializer_list::initializer_list
- initializer_list/std::initializer_list::begin
- initializer_list/std::initializer_list::end
- initializer_list/std::initializer_list::size
ms.assetid: 1f2c0ff4-5636-4f79-b008-e75426e3d2ab
helpviewer_keywords:
- std::initializer_list::initializer_list
- std::initializer_list::begin
- std::initializer_list::end
- std::initializer_list::size
ms.openlocfilehash: 6be51835958a07162ce22ff9d619fb793102669f
ms.sourcegitcommit: 684181561490e0d1955cf601d222f67f09af6d00
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/31/2020
ms.locfileid: "76894333"
---
# <a name="initializer_list-class"></a>Classe initializer_list

Fornisce l'accesso a una matrice di elementi in cui ogni membro è del tipo specificato.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class initializer_list
```

### <a name="parameters"></a>Parametri

*Digitare*\
Tipo di dati degli elementi da archiviare in `initializer_list`.

## <a name="remarks"></a>Note

Un oggetto `initializer_list` può essere costruito utilizzando un elenco di inizializzatori tra parentesi:

```cpp
initializer_list<int> i1{ 1, 2, 3, 4 };
```

Il compilatore trasforma gli elenchi di inizializzatori tra parentesi graffe con elementi omogenei in un oggetto `initializer_list` ogni volta che la firma della funzione richiede un oggetto `initializer_list`. Per ulteriori informazioni sull'utilizzo di `initializer_list`, vedere [inizializzazione uniforme e costruttori deleganti](../cpp/uniform-initialization-and-delegating-constructors.md)

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[initializer_list](#initializer_list)|Costruisce un oggetto di tipo `initializer_list`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|`value_type`|Tipo degli elementi contenuti nell'oggetto `initializer_list`.|
|`reference`|Tipo che fornisce un riferimento a un elemento archiviato in `initializer_list`.|
|`const_reference`|Tipo che fornisce un riferimento costante a un elemento in `initializer_list`.|
|`size_type`|Tipo che rappresenta il numero di elementi in `initializer_list`.|
|`iterator`|Tipo che fornisce un iteratore per `initializer_list`.|
|`const_iterator`|Tipo che fornisce un iteratore costante per `initializer_list`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[begin](#begin)|Restituisce un puntatore al primo elemento in `initializer_list`.|
|[end](#end)|Restituisce un puntatore nella posizione successiva dopo l'ultimo elemento in `initializer_list`.|
|[size](#size)|Restituisce il numero di elementi nel `initializer_list`.|

## <a name="requirements"></a>Requisiti di

**Intestazione:** \<initializer_list >

**Spazio dei nomi:** std

## <a name="begin"></a>  initializer_list::begin

Restituisce un puntatore al primo elemento in `initializer_list`.

```cpp
constexpr const InputIterator* begin() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Puntatore al primo elemento di `initializer_list`. Se l'elenco è vuoto, il puntatore sarà lo stesso per l'inizio e la fine dell'elenco.

## <a name="end"></a>  initializer_list::end

Restituisce un puntatore nella posizione successiva dopo l'ultimo elemento in `initializer list`.

```cpp
constexpr const InputIterator* end() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Puntatore nella posizione successiva dopo l'ultimo elemento nell'elenco. Se l'elenco è vuoto, corrisponde al puntatore al primo elemento nell'elenco.

## <a name="initializer_list"></a>  initializer_list::initializer_list

Costruisce un oggetto di tipo `initializer_list`.

```cpp
constexpr initializer_list() noexcept;
initializer_list(const InputIterator First, const InputIterator Last);
```

### <a name="parameters"></a>Parametri

*Primo*\
Posizione del primo elemento nell'intervallo di elementi da copiare.

*Ultimo*\
Posizione del primo elemento oltre l'intervallo di elementi da copiare.

### <a name="remarks"></a>Note

Un oggetto `initializer_list` è basato su una matrice di oggetti del tipo specificato. La copia di un `initializer_list` crea una seconda istanza di un elenco che punta agli stessi oggetti; gli oggetti sottostanti non vengono copiati.

### <a name="example"></a>Esempio

```cpp
// initializer_list_class.cpp
// compile with: /EHsc
#include <initializer_list>
#include <iostream>

int main()
{
    using namespace std;
    // Create an empty initializer_list c0
    initializer_list <int> c0;

    // Create an initializer_list c1 with 1 element
    initializer_list <int> c1{ 3 };

    // Create an initializer_list c2 with 5 elements
    initializer_list <int> c2{ 5, 4, 3, 2, 1 };

    // Create a copy, initializer_list c3, of initializer_list c2
    initializer_list <int> c3(c2);

    // Create a initializer_list c4 by copying the range c3[ first,  last)
    const int* c3_ptr = c3.begin();
    c3_ptr++;
    c3_ptr++;
    initializer_list <int> c4(c3.begin(), c3_ptr);

    // Move initializer_list c4 to initializer_list c5
    initializer_list <int> c5(move(c4));

    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    cout << "c2 =";
    for (auto c : c2)
        cout << " " << c;
    cout << endl;

    cout << "c3 =";
    for (auto c : c3)
        cout << " " << c;
    cout << endl;

    cout << "c5 =";
    for (auto c : c5)
        cout << " " << c;
    cout << endl;
}
```

```Output
c1 = 3
c2 = 5 4 3 2 1
c3 = 5 4 3 2 1
c5 = 5 4
```

## <a name="size"></a>  initializer_list::size

Restituisce il numero di elementi nell'elenco.

```cpp
constexpr size_t size() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi contenuti nell'elenco.

## <a name="see-also"></a>Vedere anche

[<forward_list>](../standard-library/forward-list.md)
