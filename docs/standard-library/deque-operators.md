---
description: 'Altre informazioni su: &lt; &gt; operatori deque'
title: Operatori &lt;deque&gt;
ms.date: 11/04/2016
f1_keywords:
- deque/std::operator!=
- deque/std::operator&gt;
- deque/std::operator&gt;=
- deque/std::operator&lt;
- deque/std::operator&lt;=
- deque/std::operator==
ms.assetid: 482d7c92-54c7-493b-99e6-2a73617481a5
helpviewer_keywords:
- std::operator!= (deque)
- std::operator&gt; (deque)
- std::operator&gt;= (deque)
- std::operator&lt; (deque)
- std::operator&lt;= (deque)
- std::operator== (deque)
ms.openlocfilehash: f162a234aec66982e274755e7898cbbc1c63ab22
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324561"
---
# <a name="ltdequegt-operators"></a>Operatori &lt;deque&gt;

## <a name="operator"></a><a name="op_neq"></a> operatore! =

Verifica se l'oggetto deque sul lato sinistro dell'operatore non è uguale all'oggetto deque sul lato destro.

```cpp
bool operator!=(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `deque`.

*Ok*\
Oggetto di tipo `deque`.

### <a name="return-value"></a>Valore restituito

**`true`** Se gli oggetti deque non sono uguali; **`false`** se gli oggetti deque sono uguali.

### <a name="remarks"></a>Commenti

Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. Due oggetti deque sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// deque_op_ne.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c2.push_back( 2 );

   if ( c1 != c2 )
      cout << "The deques are not equal." << endl;
   else
      cout << "The deques are equal." << endl;
}
```

```Output
The deques are not equal.
```

## <a name="operatorlt"></a><a name="op_lt"></a> operatore&lt;

Verifica se l'oggetto deque sul lato sinistro dell'operatore è minore dell'oggetto deque sul lato destro.

```cpp
bool operator<(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `deque`.

*Ok*\
Oggetto di tipo `deque`.

### <a name="return-value"></a>Valore restituito

**`true`** Se la deque sul lato sinistro dell'operatore è minore e non uguale alla deque a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. La relazione minore di tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.

### <a name="example"></a>Esempio

```cpp
// deque_op_lt.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c1.push_back( 2 );
   c1.push_back( 4 );

   c2.push_back( 1 );
   c2.push_back( 3 );

   if ( c1 < c2 )
      cout << "Deque c1 is less than deque c2." << endl;
   else
      cout << "Deque c1 is not less than deque c2." << endl;
}
```

```Output
Deque c1 is less than deque c2.
```

## <a name="operatorlt"></a><a name="op_lt_eq"></a> operatore&lt;=

Verifica se l'oggetto deque sul lato sinistro dell'operatore è minore o uguale all'oggetto deque sul lato destro.

```cpp
bool operator<=(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `deque`.

*Ok*\
Oggetto di tipo `deque`.

### <a name="return-value"></a>Valore restituito

**`true`** Se la deque sul lato sinistro dell'operatore è minore o uguale alla deque a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. La relazione minore di o uguale a tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.

### <a name="example"></a>Esempio

```cpp
// deque_op_le.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c1.push_back( 2 );
   c1.push_back( 4 );

   c2.push_back( 1 );
   c2.push_back( 3 );

   if ( c1 <= c2 )
      cout << "Deque c1 is less than or equal to deque c2." << endl;
   else
      cout << "Deque c1 is greater than deque c2." << endl;
}
```

```Output
Deque c1 is less than or equal to deque c2.
```

## <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

Verifica se l'oggetto deque sul lato sinistro dell'operatore è uguale all'oggetto deque sul lato destro.

```cpp
bool operator==(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `deque`.

*Ok*\
Oggetto di tipo `deque`.

### <a name="return-value"></a>Valore restituito

**`true`** Se la deque sul lato sinistro dell'operatore è uguale alla deque a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. Due deque sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// deque_op_eq.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c2.push_back( 1 );

   if ( c1 == c2 )
      cout << "The deques are equal." << endl;
   else
      cout << "The deques are not equal." << endl;

   c1.push_back( 1 );
   if ( c1 == c2 )
      cout << "The deques are equal." << endl;
   else
      cout << "The deques are not equal." << endl;
}
```

```Output
The deques are equal.
The deques are not equal.
```

## <a name="operatorgt"></a><a name="op_gt"></a> operatore&gt;

Verifica se l'oggetto deque sul lato sinistro dell'operatore è maggiore dell'oggetto deque sul lato destro.

```cpp
bool operator>(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `deque`.

*Ok*\
Oggetto di tipo `deque`.

### <a name="return-value"></a>Valore restituito

**`true`** Se la deque sul lato sinistro dell'operatore è maggiore della deque a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. La relazione maggiore di tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.

### <a name="example"></a>Esempio

```cpp
// deque_op_gt.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c1.push_back( 3 );
   c1.push_back( 1 );

   c2.push_back( 1 );
   c2.push_back( 2 );
   c2.push_back( 2 );

   if ( c1 > c2 )
      cout << "Deque c1 is greater than deque c2." << endl;
   else
      cout << "Deque c1 is not greater than deque c2." << endl;
}
```

```Output
Deque c1 is greater than deque c2.
```

## <a name="operatorgt"></a><a name="op_gt_eq"></a> operatore&gt;=

Verifica se l'oggetto deque sul lato sinistro dell'operatore è maggiore o uguale all'oggetto deque sul lato destro.

```cpp
bool operator>=(const deque<Type, Allocator>& left, const deque<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `deque`.

*Ok*\
Oggetto di tipo `deque`.

### <a name="return-value"></a>Valore restituito

**`true`** Se la deque sul lato sinistro dell'operatore è maggiore o uguale alla deque a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il confronto tra gli oggetti deque si basa su un confronto a coppie dei relativi elementi. La relazione maggiore di o uguale a tra due oggetti si basa su un confronto della prima coppia di elementi non uguali.

### <a name="example"></a>Esempio

```cpp
// deque_op_ge.cpp
// compile with: /EHsc
#include <deque>
#include <iostream>

int main( )
{
   using namespace std;
   deque <int> c1, c2;

   c1.push_back( 1 );
   c1.push_back( 3 );
   c1.push_back( 1 );

   c2.push_back( 1 );
   c2.push_back( 2 );
   c2.push_back( 2 );

   if ( c1 >= c2 )
      cout << "Deque c1 is greater than or equal to deque c2." << endl;
   else
      cout << "Deque c1 is less than deque c2." << endl;
}
```

```Output
Deque c1 is greater than or equal to deque c2.
```
