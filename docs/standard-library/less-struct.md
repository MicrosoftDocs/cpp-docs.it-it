---
title: less (struct)
ms.date: 11/04/2016
f1_keywords:
- xfunctional/std::less
helpviewer_keywords:
- less struct
- less function
ms.assetid: 39349da3-11cd-4774-b2cc-b46af5aae5d7
ms.openlocfilehash: 60a78859a9d218afa11174ef4117e86cbd2edea3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50475127"
---
# <a name="less-struct"></a>less (struct)

Un predicato binario che esegue il minore di-operazione di confronto (`operator<`) sui relativi argomenti.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type = void>
struct less : public binary_function <Type, Type, bool>
{
    bool operator()(const Type& Left, const Type& Right) const;
};

// specialized transparent functor for operator<
template <>
struct less<void>
{
    template <class T, class U>
    auto operator()(T&& Left, U&& Right) const
        -> decltype(std::forward<T>(Left) <std::forward<U>(Right));
};
```

### <a name="parameters"></a>Parametri

*Tipo di*, *T*, *U* qualsiasi tipo che supporta un `operator<` che accetta gli operandi dei tipi specificati o dedotti.

*A sinistra*<br/>
Operando sinistro dell'operazione di minore di. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo *tipo*. Il modello specializzato esegue un inoltro di lvalue perfetto e gli argomenti di riferimento rvalue del tipo di dedurre *T*.

*A destra*<br/>
Operando destro dell'operazione di minore di. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo *tipo*. Il modello specializzato esegue un inoltro di lvalue perfetto e gli argomenti di riferimento rvalue del tipo di dedurre *U*.

## <a name="return-value"></a>Valore restituito

Risultato di `Left < Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator<`.

## <a name="remarks"></a>Note

Il predicato binario `less` <  `Type`> fornisce un rigido ordinamento debole di un set di valori di elemento di tipo *tipo* in classi di equivalenza esclusivamente se il tipo soddisfa lo standard di matematico requisiti per l'ordinamento. Le specializzazioni per qualsiasi tipo di puntatore producono un ordinamento totale degli elementi, in quanto tutti gli elementi di valori distinti vengono ordinati l'uno rispetto all'altro.

## <a name="example"></a>Esempio

```cpp
// functional_less.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

struct MyStruct {
   MyStruct(int i) : m_i(i){}

   bool operator < (const MyStruct & rhs) const {
      return m_i < rhs.m_i;
   }

   int m_i;
};

int main() {
   using namespace std;
   vector <MyStruct> v1;
   vector <MyStruct>::iterator Iter1;
   vector <MyStruct>::reverse_iterator rIter1;

   int i;
   for ( i = 0 ; i < 7 ; i++ )
       v1.push_back( MyStruct(rand()));

   cout << "Original vector v1 = ( " ;
   for ( Iter1 = v1.begin() ; Iter1 != v1.end() ; Iter1++ )
cout << Iter1->m_i << " ";
   cout << ")" << endl;

   // To sort in ascending order,
   sort( v1.begin( ), v1.end( ), less<MyStruct>());

   cout << "Sorted vector v1 = ( " ;
   for ( Iter1 = v1.begin() ; Iter1 != v1.end() ; Iter1++ )
cout << Iter1->m_i << " ";
   cout << ")" << endl;
}
```

## <a name="output"></a>Output

```Output
Original vector v1 = (41 18467 6334 26500 19169 15724 11478)
Sorted vector v1 = (41 6334 11478 15724 18467 19169 26500)
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
