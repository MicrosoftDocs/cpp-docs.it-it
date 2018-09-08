---
title: Funzioni &lt;array&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- array/std::array::get
- array/std::get
- array/std::swap
dev_langs:
- C++
ms.assetid: e0700a33-a833-4655-8735-16e71175efc8
author: corob-msft
ms.author: corob
helpviewer_keywords:
- std::array [C++], get
- std::get [C++]
- std::swap [C++]
ms.workload:
- cplusplus
ms.openlocfilehash: a67a22b8236646b549032e236006cd4855c3a43c
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44108726"
---
# <a name="ltarraygt-functions"></a>Funzioni &lt;array&gt;

Il \<array > intestazione include due funzioni non membro, `get` e `swap`, che operano sul **matrice** oggetti.

|||
|-|-|
|[get](#get)|[swap](#swap)|

## <a name="get"></a>  get

Restituisce un riferimento all'elemento specificato della matrice.

```cpp
template <int Index, class T, size_t N>
constexpr T& get(array<T, N>& arr) noexcept;

template <int Index, class T, size_t N>
constexpr const T& get(const array<T, N>& arr) noexcept;

template <int Index, class T, size_t N>
constexpr T&& get(array<T, N>&& arr) noexcept;
```

### <a name="parameters"></a>Parametri

*Index*<br/>
Offset di un elemento.

*T*<br/>
Tipo di un elemento.

*N*<br/>
Numero di elementi nella matrice.

*arr*<br/>
Matrice da selezionare.

### <a name="example"></a>Esempio

```cpp
#include <array>
#include <iostream>

using namespace std;

typedef array<int, 4> MyArray;

int main()
{
    MyArray c0 { 0, 1, 2, 3 };

    // display contents " 0 1 2 3"
    for (const auto& e : c0)
    {
        cout << " " << e;
    }
    cout << endl;

    // display odd elements " 1 3"
    cout << " " << get<1>(c0);
    cout << " " << get<3>(c0) << endl;
}
```

```Output
0 1 2 3
1 3
```

## <a name="swap"></a>  swap

Una specializzazione di modello non membro di `std::swap` che scambia due **matrice** oggetti.

```cpp
template <class Ty, std::size_t N>
void swap(array<Ty, N>& left, array<Ty, N>& right);
```

### <a name="parameters"></a>Parametri

*Ty*<br/>
Tipo di un elemento.

*N*<br/>
Dimensione della matrice.

*left*<br/>
La prima matrice da scambiare.

*right*<br/>
La seconda matrice da scambiare.

### <a name="remarks"></a>Note

La funzione modello esegue `left.swap(right)`.

### <a name="example"></a>Esempio

```cpp
// std__array__swap.cpp
// compile with: /EHsc
#include <array>
#include <iostream>

typedef std::array<int, 4> Myarray;
int main()
{
    Myarray c0 = { 0, 1, 2, 3 };

    // display contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    Myarray c1 = { 4, 5, 6, 7 };
    c0.swap(c1);

    // display swapped contents " 4 5 6 7"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    swap(c0, c1);

    // display swapped contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    return (0);
}
```

```Output
0 1 2 3
4 5 6 7
0 1 2 3
```

## <a name="see-also"></a>Vedere anche

[\<array>](../standard-library/array.md)<br/>
