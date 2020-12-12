---
description: 'Altre informazioni su: seed_seq Class'
title: Classe seed_seq
ms.date: 11/04/2016
f1_keywords:
- random/std::seed_seq
- random/std::seed_seq::result_type
- random/std::seed_seq::generate
- random/std::seed_seq::size
- random/std::seed_seq::param
helpviewer_keywords:
- std::seed_seq [C++]
- std::seed_seq [C++], result_type
- std::seed_seq [C++], generate
- std::seed_seq [C++], size
- std::seed_seq [C++], param
ms.assetid: cba114f7-9ac6-4f2f-b773-9c84805401d6
ms.openlocfilehash: c92bda66b37162bcaaf9c614185f2c31f29d22c5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197036"
---
# <a name="seed_seq-class"></a>Classe seed_seq

Archivia un vettore di valori Integer non firmati che può fornire un valore di inizializzazione casuale per un motore di numeri casuali.

## <a name="syntax"></a>Sintassi

```cpp
class seed_seq
   {
public:
   // types
   typedef unsigned int result_type;

   // constructors
   seed_seq();
   template <class T>
      seed_seq(initializer_list<T> initlist);
   template <class InputIterator>
      seed_seq(InputIterator begin, InputIterator end);

   // generating functions
   template <class RandomAccessIterator>
      void generate(RandomAccessIterator begin, RandomAccessIterator end);

   // property functions
   size_t size() const;
   template <class OutputIterator>
      void param(OutputIterator dest) const;

   // no copy functions
   seed_seq(const seed_seq&) = delete;
   void operator=(const seed_seq&) = delete;
   };
```

## <a name="types"></a>Tipi

```cpp
typedef unsigned int result_type;
```

Tipo degli elementi della sequenza di seeding. Tipo Unsigned Integer a 32 bit.

## <a name="constructors"></a>Costruttori

```cpp
seed_seq();
```

Costruttore predefinito, inizializzato in modo da avere una sequenza interna vuota.

```cpp
template<class T>
seed_seq(initializer_list<T> initlist);
```

Usa `initlist` per impostare la sequenza interna.
`T` deve essere un tipo Integer.

```cpp
template<class InputIterator>
seed_seq(InputIterator begin, InputIterator end);
```

Inizializza la sequenza interna usando tutti gli elementi nell'intervallo dell'iteratore di input specificato.
`iterator_traits<InputIterator>::value_type` deve essere un tipo Integer.

## <a name="members"></a>Membri

### <a name="generating-functions"></a>Generazione di funzioni

```cpp
template<class RandomAccessIterator>
void generate(RandomAccessIterator begin,
          RandomAccessIterator end);
```

Popola gli elementi della sequenza specificata usando un algoritmo interno. Questo algoritmo è influenzato dalla sequenza interna con cui è stato inizializzato `seed_seq`.
Non esegue alcuna operazione se `begin == end`.

### <a name="property-functions"></a>Funzioni delle proprietà

```cpp
size_t size() const;
```

Restituisce il numero di elementi nel `seed_seq`.

```cpp
template<class OutputIterator>
void param(OutputIterator dest) const;
```

Copia la sequenza interna nell'iteratore di output `dest`.

## <a name="example"></a>Esempio

L'esempio di codice seguente usa i tre costruttori e genera output dalle istanze di `seed_seq` risultanti in caso di assegnazione a una matrice. Per un esempio che usa `seed_seq` con un generatore di numeri casuali, vedere [\<random>](../standard-library/random.md) .

```cpp
#include <iostream>
#include <random>
#include <string>
#include <array>

using namespace std;

void test(const seed_seq& sseq) {
    cout << endl << "seed_seq::size(): " << sseq.size() << endl;

    cout << "seed_seq::param(): ";
    ostream_iterator<unsigned int> out(cout, " ");
    sseq.param(out);
    cout << endl;

    cout << "Generating a sequence of 5 elements into an array: " << endl;
    array<unsigned int, 5> seq;
    sseq.generate(seq.begin(), seq.end());
    for (unsigned x : seq) { cout << x << endl; }
}

int main()
{
    seed_seq seed1;
    test(seed1);

    seed_seq seed2 = { 1701, 1729, 1791 };
    test(seed2);

    string sstr = "A B C D"; // seed string
    seed_seq seed3(sstr.begin(), sstr.end());
    test(seed3);
}
```

```Output
seed_seq::size(): 0
seed_seq::param():
Generating a sequence of 5 elements into an array:
505382999
163489202
3932644188
763126080
73937346

seed_seq::size(): 3
seed_seq::param(): 1701 1729 1791
Generating a sequence of 5 elements into an array:
1730669648
1954224479
2809786021
1172893117
2393473414

seed_seq::size(): 7
seed_seq::param(): 65 32 66 32 67 32 68
Generating a sequence of 5 elements into an array:
3139879222
3775111734
1084804564
2485037668
1985355432
```

## <a name="remarks"></a>Commenti

Le funzioni membro di questa classe non generano eccezioni.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<random>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)
