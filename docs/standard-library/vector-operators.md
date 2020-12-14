---
description: 'Altre informazioni su: &lt; vector &gt; Operators'
title: operatori &lt;vector&gt;
ms.date: 11/04/2016
f1_keywords:
- vector/std::operator!=
- vector/std::operator&gt;
- vector/std::operator&gt;=
- vector/std::operator&lt;
- vector/std::operator&lt;=
- vector/std::operator==
ms.assetid: 1d14f312-6f59-4ec7-88ae-95f89a558823
helpviewer_keywords:
- std::operator!= (vector)
- std::operator&gt; (vector)
- std::operator&gt;= (vector)
- std::operator&lt; (vector)
- std::operator&lt;= (vector)
- std::operator== (vector)
ms.openlocfilehash: a7a03d3ef843c995970552201e63d2df3cb3161d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187897"
---
# <a name="ltvectorgt-operators"></a>operatori &lt;vector&gt;

## <a name="operator"></a><a name="op_neq"></a> operatore! =

Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.

```cpp
bool operator!=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `vector`.

*Ok*\
Oggetto di tipo `vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se i vettori non sono uguali; **`false`** se i vettori sono uguali.

### <a name="remarks"></a>Commenti

Due vettori sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// vector_op_ne.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
     v2.push_back( 2 );

   if ( v1 != v2 )
      cout << "Vectors not equal." << endl;
   else
      cout << "Vectors equal." << endl;
}
```

```Output
Vectors not equal.
```

## <a name="operatorlt"></a><a name="op_lt"></a> operatore&lt;

Verifica se l'oggetto a sinistra dell'operatore è minore dell'oggetto a destra.

```cpp
bool operator<(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `vector`.

*Ok*\
Oggetto di tipo `vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore a sinistra dell'operatore è minore del vettore sul lato destro dell'operatore; in caso contrario **`false`** ,.

### <a name="example"></a>Esempio

```cpp
// vector_op_lt.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
   v1.push_back( 2 );
   v1.push_back( 4 );

   v2.push_back( 1 );
   v2.push_back( 3 );

   if ( v1 < v2 )
      cout << "Vector v1 is less than vector v2." << endl;
   else
      cout << "Vector v1 is not less than vector v2." << endl;
}
```

```Output
Vector v1 is less than vector v2.
```

## <a name="operatorlt"></a><a name="op_lt_eq"></a> operatore&lt;=

Verifica se l'oggetto a sinistra dell'operatore è minore o uguale all'oggetto a destra.

```cpp
bool operator<=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `vector`.

*Ok*\
Oggetto di tipo `vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore a sinistra dell'operatore è minore o uguale al vettore sul lato destro dell'operatore; in caso contrario **`false`** ,.

### <a name="example"></a>Esempio

```cpp
// vector_op_le.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
   v1.push_back( 2 );
   v1.push_back( 4 );

   v2.push_back( 1 );
   v2.push_back( 3 );

   if ( v1 <= v2 )
      cout << "Vector v1 is less than or equal to vector v2." << endl;
   else
      cout << "Vector v1 is greater than vector v2." << endl;
}
```

```Output
Vector v1 is less than or equal to vector v2.
```

## <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.

```cpp
bool operator==(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `vector`.

*Ok*\
Oggetto di tipo `vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore a sinistra dell'operatore è uguale al vettore a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Due vettori sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// vector_op_eq.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
   v2.push_back( 1 );

   if ( v1 == v2 )
      cout << "Vectors equal." << endl;
   else
      cout << "Vectors not equal." << endl;
}
```

```Output
Vectors equal.
```

## <a name="operatorgt"></a><a name="op_gt"></a> operatore&gt;

Verifica se l'oggetto a sinistra dell'operatore è maggiore dell'oggetto a destra.

```cpp
bool operator>(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `vector`.

*Ok*\
Oggetto di tipo `vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore a sinistra dell'operatore è maggiore del vettore a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="example"></a>Esempio

```cpp
// vector_op_gt.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
   v1.push_back( 3 );
   v1.push_back( 1 );

   v2.push_back( 1 );
   v2.push_back( 2 );
   v2.push_back( 2 );

   if ( v1 > v2 )
      cout << "Vector v1 is greater than vector v2." << endl;
   else
      cout << "Vector v1 is not greater than vector v2." << endl;
}
```

```Output
Vector v1 is greater than vector v2.
```

## <a name="operatorgt"></a><a name="op_gt_eq"></a> operatore&gt;=

Verifica se l'oggetto a sinistra dell'operatore è maggiore o uguale all'oggetto a destra.

```cpp
bool operator>=(const vector<Type, Allocator>& left, const vector<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `vector`.

*Ok*\
Oggetto di tipo `vector`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il vettore a sinistra dell'operatore è maggiore o uguale al vettore sul lato destro del vettore; in caso contrario **`false`** ,.

### <a name="example"></a>Esempio

```cpp
// vector_op_ge.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   vector <int> v1, v2;
   v1.push_back( 1 );
   v1.push_back( 3 );
   v1.push_back( 1 );

     v2.push_back( 1 );
   v2.push_back( 2 );
   v2.push_back( 2 );

   if ( v1 >= v2 )
      cout << "Vector v1 is greater than or equal to vector v2." << endl;
   else
      cout << "Vector v1 is less than vector v2." << endl;
}
```

```Output
Vector v1 is greater than or equal to vector v2.
```
