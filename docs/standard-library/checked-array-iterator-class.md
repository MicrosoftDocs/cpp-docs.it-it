---
title: Classe checked_array_iterator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- iterator/checked_array_iterator
- iterator/stdext::checked_array_iterator::difference_type
- iterator/stdext::checked_array_iterator::pointer
- iterator/stdext::checked_array_iterator::reference
- iterator/stdext::checked_array_iterator::base
dev_langs:
- C++
helpviewer_keywords:
- stdext::checked_array_iterator [C++], difference_type
- stdext::checked_array_iterator [C++], pointer
- stdext::checked_array_iterator [C++], reference
- stdext::checked_array_iterator [C++], base
ms.assetid: 7f07185e-d588-4ae3-9c4f-84ec4aa25a28
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7091ba3c7f4d40a2b16c48afadfd5068bcd794bb
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38961740"
---
# <a name="checkedarrayiterator-class"></a>Classe checked_array_iterator

La classe `checked_array_iterator` consente di trasformare una matrice o un puntatore in un iteratore verificato. Usare questa classe come wrapper (con la funzione [make_checked_array_iterator](../standard-library/iterator-functions.md#make_checked_array_iterator)) per i puntatori o le matrici non elaborati in modo da fornire un controllo e gestire gli avvisi relativi ai puntatori non verificati anziché disattivarli globalmente. Se necessario, è possibile usare la versione non verificata della classe [unchecked_array_iterator](../standard-library/unchecked-array-iterator-class.md).

> [!NOTE]
> Questa classe è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft. Per un esempio su come scrivere codice che non richieda l'utilizzo di tale classe, vedere il secondo esempio riportato di seguito.

## <a name="syntax"></a>Sintassi

```cpp
template <class _Iterator>
class checked_array_iterator;
```

## <a name="remarks"></a>Note

Questa classe è definita nello spazio dei nomi [stdext](../standard-library/stdext-namespace.md).

Per altre informazioni e il codice di esempio per la funzionalità relativa agli iteratori verificati, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come definire e utilizzare un iteratore di matrice verificato.

Se la destinazione non è sufficientemente grande da contenere tutti gli elementi che vengono copiati, come succederebbe se la riga venisse modificata:

```cpp
copy(a, a + 5, checked_array_iterator<int*>(b, 5));
```

a

```cpp
copy(a, a + 5, checked_array_iterator<int*>(b, 4));
```

Si verificherà un errore di runtime.

```cpp
// compile with: /EHsc /W4 /MTd
#include <algorithm>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[]={0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b, 5));

   cout << "(";
   for (int i = 0 ; i < 5 ; i++)
      cout << " " << b[i];
   cout << " )" << endl;

   // constructor example
   checked_array_iterator<int*> checked_out_iter(b, 5);
   copy(a, a + 5, checked_out_iter);

   cout << "(";
   for (int i = 0 ; i < 5 ; i++)
      cout << " " << b[i];
   cout << " )" << endl;
}
\* Output:
( 0 1 2 3 4 )
( 0 1 2 3 4 )
*\
```

## <a name="example"></a>Esempio

Per eliminare la necessità della classe `checked_array_iterator` quando si usano gli algoritmi della libreria standard C++, è possibile usare un `vector` anziché una matrice allocata in modo dinamico. Nell'esempio riportato di seguito viene illustrato come procedere.

```cpp
// compile with: /EHsc /W4 /MTd

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> v(10);
    int *arr = new int[10];
    for (int i = 0; i < 10; ++i)
    {
        v[i] = i;
        arr[i] = i;
    }

    // std::copy(v.begin(), v.end(), arr); will result in
    // warning C4996. To avoid this warning while using int *,
    // use the Microsoft extension checked_array_iterator.
    std::copy(v.begin(), v.end(),
              stdext::checked_array_iterator<int *>(arr, 10));

    // Instead of using stdext::checked_array_iterator and int *,
    // consider using std::vector to encapsulate the array. This will
    // result in no warnings, and the code will be portable.
    std::vector<int> arr2(10);    // Similar to int *arr = new int[10];
    std::copy(v.begin(), v.end(), arr2.begin());

    for (int j = 0; j < arr2.size(); ++j)
    {
        cout << " " << arr2[j];
    }
    cout << endl;

    return 0;
}
\* Output:
 0 1 2 3 4 5 6 7 8 9
*\
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[checked_array_iterator](#checked_array_iterator)|Costruisce un `checked_array_iterator` predefinito o un `checked_array_iterator` da un iteratore sottostante.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[difference_type](#difference_type)|Tipo che fornisce la differenza tra due `checked_array_iterator` che fanno riferimento agli elementi all'interno dello stesso contenitore.|
|[pointer](#pointer)|Tipo che fornisce un puntatore a un elemento a cui punta un `checked_array_iterator`.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento a cui punta un `checked_array_iterator`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[base](#base)|Recupera l'iteratore sottostante dal relativo `checked_array_iterator`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator==](#op_eq_eq)|Verifica l'uguaglianza di due `checked_array_iterator`.|
|[operator!=](#op_neq)|Verifica la disuguaglianza di due `checked_array_iterator`.|
|[operator<](#op_lt)|Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è minore di `checked_array_iterator` sul lato destro.|
|[operator>](#op_gt)|Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è maggiore di `checked_array_iterator` sul lato destro.|
|[operator<=](#op_lt_eq)|Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è minore o uguale di `checked_array_iterator` sul lato destro.|
|[operator>=](#op_gt_eq)|Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è maggiore o uguale a `checked_array_iterator` sul lato destro.|
|[operator*](#op_star)|Restituisce l'elemento a cui punta un `checked_array_iterator`.|
|[operator->](#op_arrow)|Restituisce un puntatore all'elemento a cui punta un `checked_array_iterator`.|
|[operator++](#op_add_add)|Incrementa `checked_array_iterator` all'elemento successivo.|
|[operator--](#operator--)|Decrementa `checked_array_iterator` all'elemento precedente.|
|[operator+=](#op_add_eq)|Aggiunge un offset specificato a un `checked_array_iterator`.|
|[operator+](#op_add)|Aggiunge un offset a un iteratore e restituisce il nuovo `checked_array_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.|
|[operator-=](#operator-_eq)|Decrementa un offset specificato da un `checked_array_iterator`.|
|[operator-](#operator-)|Decrementa un offset da un iteratore e restituisce il nuovo `checked_array_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.|
|[operator&#91;&#93;](#op_at)|Restituisce un riferimento all'offset di un elemento dall'elemento a cui punta un `checked_array_iterator` di un numero specificato di posizioni.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** stdext

## <a name="base"></a>  checked_array_iterator::base

Recupera l'iteratore sottostante dal relativo `checked_array_iterator`.

```cpp
_Iterator base() const;
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_base.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main() {
   using namespace std;

   int V1[10];

   for (int i = 0; i < 10 ; i++)
      V1[i] = i;

   int* bpos;

   stdext::checked_array_iterator<int*> rpos(V1, 10);
   rpos++;

   bpos = rpos.base ( );
   cout << "The iterator underlying rpos is bpos & it points to: "
        << *bpos << "." << endl;
}
\* Output:
The iterator underlying rpos is bpos & it points to: 1.
*\
```

## <a name="checked_array_iterator"></a>  checked_array_iterator::checked_array_iterator

Costruisce un `checked_array_iterator` predefinito o un `checked_array _iterator` da un iteratore sottostante.

```cpp
checked_array_iterator();

checked_array_iterator(
    ITerator ptr,
    size_t size,
    size_t index = 0);
```

### <a name="parameters"></a>Parametri

*PTR* un puntatore alla matrice.

*dimensioni* le dimensioni della matrice.

*indice* (facoltativo) un elemento nella matrice, per inizializzare l'iteratore.  Per impostazione predefinita, l'iteratore viene inizializzato al primo elemento nella matrice.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_ctor.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   for (int i = 0 ; i < 5 ; i++)
      cout << b[i] << " ";
   cout << endl;

   checked_array_iterator<int*> checked_output_iterator(b,5);
   copy (a, a + 5, checked_output_iterator);
   for (int i = 0 ; i < 5 ; i++)
      cout << b[i] << " ";
   cout << endl;

   checked_array_iterator<int*> checked_output_iterator2(b,5,3);
   cout << *checked_output_iterator2 << endl;
}
\* Output:
0 1 2 3 4
0 1 2 3 4
3
*\
```

## <a name="difference_type"></a>  checked_array_iterator::difference_type

Tipo che fornisce la differenza tra due `checked_array_iterator` che fanno riferimento agli elementi all'interno dello stesso contenitore.

```cpp
typedef typename iterator_traits<_Iterator>::difference_type difference_type;
```

### <a name="remarks"></a>Note

Il tipo di differenza `checked_array_iterator` corrisponde al tipo di differenza dell'iteratore.

Per un esempio di codice, vedere [checked_array_iterator::operator[]](#op_at).

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

## <a name="op_eq_eq"></a>  checked_array_iterator::operator==

Verifica l'uguaglianza di due `checked_array_iterator`.

```cpp
bool operator==(const checked_array_iterator<_Iterator>& right) const;
```

### <a name="parameters"></a>Parametri

*a destra* il `checked_array_iterator` in base al quale verificare l'uguaglianza.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_opeq.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);
   checked_array_iterator<int*> checked_output_iterator2(b,5);

   if (checked_output_iterator2 == checked_output_iterator)
      cout << "checked_array_iterators are equal" << endl;
   else
      cout << "checked_array_iterators are not equal" << endl;

   copy (a, a + 5, checked_output_iterator);
   checked_output_iterator++;

   if (checked_output_iterator2 == checked_output_iterator)
      cout << "checked_array_iterators are equal" << endl;
   else
      cout << "checked_array_iterators are not equal" << endl;
}
\* Output:
checked_array_iterators are equal
checked_array_iterators are not equal
*\
```

## <a name="op_neq"></a>  checked_array_iterator::operator!=

Verifica la disuguaglianza di due `checked_array_iterator`.

```cpp
bool operator!=(const checked_array_iterator<_Iterator>& right) const;
```

### <a name="parameters"></a>Parametri

*a destra* il `checked_array_iterator` rispetto alla quale verificare la disuguaglianza.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_opneq.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);
   checked_array_iterator<int*> checked_output_iterator2(b,5);

   if (checked_output_iterator2 != checked_output_iterator)
      cout << "checked_array_iterators are not equal" << endl;
   else
      cout << "checked_array_iterators are equal" << endl;

   copy (a, a + 5, checked_output_iterator);
   checked_output_iterator++;

   if (checked_output_iterator2 != checked_output_iterator)
      cout << "checked_array_iterators are not equal" << endl;
   else
      cout << "checked_array_iterators are equal" << endl;
}
\* Output:
checked_array_iterators are equal
checked_array_iterators are not equal
*\
```

## <a name="op_lt"></a>  checked_array_iterator::operator&lt;

Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è minore di `checked_array_iterator` sul lato destro.

```cpp
bool operator<(const checked_array_iterator<_Iterator>& right) const;
```

### <a name="parameters"></a>Parametri

*a destra* il `checked_array_iterator` rispetto alla quale verificare la disuguaglianza.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_oplt.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);
   checked_array_iterator<int*> checked_output_iterator2(b,5);

   if (checked_output_iterator2 < checked_output_iterator)
      cout << "checked_output_iterator2 is less than checked_output_iterator" << endl;
   else
      cout << "checked_output_iterator2 is not less than checked_output_iterator" << endl;

   copy (a, a + 5, checked_output_iterator);
   checked_output_iterator++;

   if (checked_output_iterator2 < checked_output_iterator)
      cout << "checked_output_iterator2 is less than checked_output_iterator" << endl;
   else
      cout << "checked_output_iterator2 is not less than checked_output_iterator" << endl;
}
\* Output:
checked_output_iterator2 is not less than checked_output_iterator
checked_output_iterator2 is less than checked_output_iterator
*\
```

## <a name="op_gt"></a>  checked_array_iterator::operator&gt;

Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è maggiore di `checked_array_iterator` sul lato destro.

```cpp
bool operator>(const checked_array_iterator<_Iterator>& right) const;
```

### <a name="parameters"></a>Parametri

*a destra* il `checked_array_iterator` da confrontare.

### <a name="remarks"></a>Note

Per un esempio di codice, vedere [checked_array_iterator::operator&lt;](#op_lt).

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

## <a name="lt_eq"></a>  checked_array_iterator::operator&lt;=

Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è minore o uguale di `checked_array_iterator` sul lato destro.

```cpp
bool operator<=(const checked_array_iterator<_Iterator>& right) const;
```

### <a name="parameters"></a>Parametri

*a destra* il `checked_array_iterator` da confrontare.

### <a name="remarks"></a>Note

Per un esempio di codice, vedere [checked_array_iterator::operator&gt;=](#op_gt_eq).

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

## <a name="gt_eq"></a>  checked_array_iterator::operator&gt;=

Verifica se `checked_array_iterator` sul lato sinistro dell'operatore è maggiore o uguale a `checked_array_iterator` sul lato destro.

```cpp
bool operator>=(const checked_array_iterator<_Iterator>& right) const;
```

### <a name="parameters"></a>Parametri

*a destra* il `checked_array_iterator` da confrontare.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_opgteq.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);
   checked_array_iterator<int*> checked_output_iterator2(b,5);

   if (checked_output_iterator2 >= checked_output_iterator)
      cout << "checked_output_iterator2 is greater than or equal to checked_output_iterator" << endl;
   else
      cout << "checked_output_iterator2 is less than checked_output_iterator" << endl;

   copy (a, a + 5, checked_output_iterator);
   checked_output_iterator++;

   if (checked_output_iterator2 >= checked_output_iterator)
      cout << "checked_output_iterator2 is greater than or equal to checked_output_iterator" << endl;
   else
      cout << "checked_output_iterator2 is less than checked_output_iterator" << endl;
}
\* Output:
checked_output_iterator2 is greater than or equal to checked_output_iterator
checked_output_iterator2 is less than checked_output_iterator
*\
```

## <a name="op_star"></a>  checked_array_iterator::operator*

Restituisce l'elemento a cui punta un `checked_array_iterator`.

```cpp
reference operator*() const;
```

### <a name="return-value"></a>Valore restituito

Il valore dell'elemento a cui punta il `checked_array_iterator`.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterator_pointer.cpp
// compile with: /EHsc
#include <iterator>
#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>

using namespace std;
using namespace stdext;

int main() {
   int a[] = {0, 1, 2, 3, 4};
   int b[5];
   pair<int, int> c[1];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   for (int i = 0 ; i < 5 ; i++)
      cout << b[i] << endl;

    c[0].first = 10;
    c[0].second = 20;

   checked_array_iterator<int*> checked_output_iterator(b,5);
   checked_array_iterator<int*>::pointer p = &(*checked_output_iterator);
   checked_array_iterator<pair<int, int>*> chk_c(c, 1);
   checked_array_iterator<pair<int, int>*>::pointer p_c = &(*chk_c);

   cout << "b[0] = " << *p << endl;
   cout << "c[0].first = " << p_c->first << endl;
}
\* Output:
0
1
2
3
4
b[0] = 0
c[0].first = 10
*\
```

## <a name="op_arrow"></a>  checked_array_iterator::operator-&gt;

Restituisce un puntatore all'elemento a cui punta un `checked_array_iterator`.

```cpp
pointer operator->() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'elemento a cui punta l'oggetto `checked_array_iterator`.

### <a name="remarks"></a>Note

Per un esempio di codice, vedere [checked_array_iterator::pointer](#pointer).

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

## <a name="op_add_add"></a>  checked_array_iterator::operator++

Incrementa `checked_array_iterator` all'elemento successivo.

```cpp
checked_array_iterator& operator++();

checked_array_iterator<_Iterator> operator++(int);
```

### <a name="return-value"></a>Valore restituito

Il primo operatore restituisce l'oggetto `checked_array_iterator` pre-incrementato e il secondo, l'operatore di post-incremento, restituisce una copia dell'oggetto `checked_array_iterator` incrementato.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_op_plus_plus.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace stdext;
   using namespace std;
   int a[] = {6, 3, 77, 199, 222};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);

   cout << *checked_output_iterator << endl;
   ++checked_output_iterator;
   cout << *checked_output_iterator << endl;
   checked_output_iterator++;
   cout << *checked_output_iterator << endl;
}
\* Output:
6
3
77
*\
```

## <a name="checked_array_iterator__operator--"></a>  checked_array_iterator::operator--

Decrementa `checked_array_iterator` all'elemento precedente.

```cpp
checked_array_iterator<_Iterator>& operator--();

checked_array_iterator<_Iterator> operator--(int);
```

### <a name="return-value"></a>Valore restituito

Il primo operatore restituisce l'oggetto `checked_array_iterator` pre-decrementato e il secondo, l'operatore di post-decremento, restituisce una copia dell'oggetto `checked_array_iterator` decrementato.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_op_minus_minus.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace stdext;
   using namespace std;
   int a[] = {6, 3, 77, 199, 222};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);

   cout << *checked_output_iterator << endl;
   checked_output_iterator++;
   cout << *checked_output_iterator << endl;
   checked_output_iterator--;
   cout << *checked_output_iterator << endl;
}
\* Output:
6
3
6
*\
```

## <a name="op_add_eq"></a>  checked_array_iterator::operator+=

Aggiunge un offset specificato a un `checked_array_iterator`.

```cpp
checked_array_iterator<_Iterator>& operator+=(difference_type _Off);
```

### <a name="parameters"></a>Parametri

*Off* l'offset di incremento l'iteratore.

### <a name="return-value"></a>Valore restituito

Un riferimento all'elemento a cui punta il `checked_array_iterator`.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_op_plus_eq.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace stdext;
   using namespace std;
   int a[] = {6, 3, 77, 199, 222};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);

   cout << *checked_output_iterator << endl;
   checked_output_iterator += 3;
   cout << *checked_output_iterator << endl;
}
\* Output:
6
199
*\
```

## <a name="op_add"></a>  checked_array_iterator::operator+

Aggiunge un offset a un iteratore e restituisce il nuovo `checked_array_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.

```cpp
checked_array_iterator<_Iterator> operator+(difference_type _Off) const;
```

### <a name="parameters"></a>Parametri

*Off* offset da aggiungere al `checked_array_iterator`.

### <a name="return-value"></a>Valore restituito

Oggetto `checked_array_iterator` che punta all'elemento di offset.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_op_plus.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace stdext;
   using namespace std;
   int a[] = {6, 3, 77, 199, 222};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);

   cout << *checked_output_iterator << endl;
   checked_output_iterator = checked_output_iterator + 3;
   cout << *checked_output_iterator << endl;
}
\* Output:
6
199
*\
```

## <a name="checked_array_iterator__operator-_eq"></a>  checked_array_iterator::operator-=

Decrementa un offset specificato da un `checked_array_iterator`.

```cpp
checked_array_iterator<_Iterator>& operator-=(difference_type _Off);
```

### <a name="parameters"></a>Parametri

*Off* l'offset di incremento l'iteratore.

### <a name="return-value"></a>Valore restituito

Un riferimento all'elemento a cui punta il `checked_array_iterator`.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_op_minus_eq.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace stdext;
   using namespace std;
   int a[] = {6, 3, 77, 199, 222};
   int b[5];
   copy(a, a + 5, checked_array_iterator<int*>(b,5));

   checked_array_iterator<int*> checked_output_iterator(b,5);

   checked_output_iterator += 3;
   cout << *checked_output_iterator << endl;
   checked_output_iterator -= 2;
   cout << *checked_output_iterator << endl;
}
\* Output:
199
3
*\
```

## <a name="checked_array_iterator__operator-"></a>  checked_array_iterator::operator-

Decrementa un offset da un iteratore e restituisce il nuovo `checked_array_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.

```cpp
checked_array_iterator<_Iterator> operator-(difference_type _Off) const;

difference_type operator-(const checked_array_iterator& right) const;
```

### <a name="parameters"></a>Parametri

*Off* l'offset deve essere diminuito dal `checked_array_iterator`.

### <a name="return-value"></a>Valore restituito

Oggetto `checked_array_iterator` che punta all'elemento di offset.

### <a name="remarks"></a>Note

Per un esempio di codice, vedere [checked_array_iterator::operator-](#operator-).

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

## <a name="op_at"></a>  checked_array_iterator::operator[]

Restituisce un riferimento all'offset di un elemento dall'elemento a cui punta un `checked_array_iterator` di un numero specificato di posizioni.

```cpp
reference operator[](difference_type _Off) const;
```

### <a name="parameters"></a>Parametri

*Off* l'offset dal `checked_array_iterator` indirizzo.

### <a name="return-value"></a>Valore restituito

Riferimento all'offset dell'elemento.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// checked_array_iterators_op_diff.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main() {
   using namespace std;
   int V1[10];

   for (int i = 0; i < 10 ; i++)
      V1[i] = i;

   // Declare a difference type for a parameter
   stdext::checked_array_iterator<int*>::difference_type diff = 2;

   stdext::checked_array_iterator<int*> VChkIter(V1, 10);

   stdext::checked_array_iterator<int*>::reference refrpos = VChkIter [diff];

   cout << refrpos + 1 << endl;
}
\* Output:
3
*\
```

## <a name="pointer"></a>  checked_array_iterator::pointer

Tipo che fornisce un puntatore a un elemento a cui punta un `checked_array_iterator`.

```cpp
typedef typename iterator_traits<_Iterator>::pointer pointer;
```

### <a name="remarks"></a>Note

Per un esempio di codice, vedere [checked_array_iterator::operator*](#op_star).

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

## <a name="reference"></a>  checked_array_iterator::reference

Tipo che fornisce un riferimento a un elemento a cui punta un `checked_array_iterator`.

```cpp
typedef typename iterator_traits<_Iterator>::reference reference;
```

### <a name="remarks"></a>Note

Per un esempio di codice, vedere [checked_array_iterator::operator[]](#op_at).

Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
