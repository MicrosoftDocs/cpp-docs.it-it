---
title: Operatori &lt;hash_set&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- hash_set/std::operator!=
- hash_set/std::operator==
dev_langs:
- C++
ms.assetid: 403d8e4e-0b3f-43fb-bc5a-8100c4f331c5
caps.latest.revision: 13
manager: ghogen
ms.openlocfilehash: 9db5096e93a5778682eb9e926ac2b44c334b6349
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="lthashsetgt-operators"></a>Operatori &lt;hash_set&gt;

||||
|-|-|-|
|[operator!=](#op_neq)|[operator!= (hash_multiset)](#op_neq_hash_multiset)|[operator==](#op_eq_eq)|
|[operator== (hash_multiset)](#op_eq_eq_hash_multiset)|

## <a name="op_neq"></a>  operator!=

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Verifica se l'oggetto hash_set a sinistra dell'operatore non è uguale all'oggetto hash_set a destra.

```cpp
bool operator!=(const hash_set <Key, Traits, Allocator>& left, const hash_set <Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `hash_set`.

`right` Un oggetto di tipo `hash_set`.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti hash_set non sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Note

Il confronto tra gli oggetti hash_set si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_set sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

I membri del [< hash_map >](../standard-library/hash-map.md) e [< hash_set >](../standard-library/hash-set.md) presenti file di intestazione di [stdext Namespace](../standard-library/stdext-namespace.md).

### <a name="example"></a>Esempio

```cpp
// hash_set_op_ne.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> hs1, hs2, hs3;
   int i;

   for ( i = 0 ; i < 3 ; i++ )
   {
      hs1.insert ( i );
      hs2.insert ( i * i );
      hs3.insert ( i );
   }

   if ( hs1 != hs2 )
      cout << "The hash_sets hs1 and hs2 are not equal." << endl;
   else
      cout << "The hash_sets hs1 and hs2 are equal." << endl;

   if ( hs1 != hs3 )
      cout << "The hash_sets hs1 and hs3 are not equal." << endl;
   else
      cout << "The hash_sets hs1 and hs3 are equal." << endl;
}
```

```Output
The hash_sets hs1 and hs2 are not equal.
The hash_sets hs1 and hs3 are equal.
```

## <a name="op_eq_eq"></a>  operator==

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Verifica se l'oggetto hash_set a sinistra dell'operatore è uguale all'oggetto hash_set a destra.

```cpp
bool operator!==(const hash_set <Key, Traits, Allocator>& left, const hash_set <Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `hash_set`.

`right` Un oggetto di tipo `hash_set`.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto hash_set a sinistra dell'operatore è uguale all'oggetto hash_set a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Il confronto tra gli oggetti hash_set si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_set sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// hash_set_op_eq.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_set <int> s1, s2, s3;
   int i;

   for ( i = 0 ; i < 3 ; i++ )
   {
      s1.insert ( i );
      s2.insert ( i * i );
      s3.insert ( i );
   }

   if ( s1 == s2 )
      cout << "The hash_sets s1 and s2 are equal." << endl;
   else
      cout << "The hash_sets s1 and s2 are not equal." << endl;

   if ( s1 == s3 )
      cout << "The hash_sets s1 and s3 are equal." << endl;
   else
      cout << "The hash_sets s1 and s3 are not equal." << endl;
}
```

```Output
The hash_sets s1 and s2 are not equal.
The hash_sets s1 and s3 are equal.
```

## <a name="neq_hash_multiset"></a>  operator!= (hash_multiset)

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Verifica se l'oggetto hash_multiset a sinistra dell'operatore non è uguale all'oggetto hash_multiset a destra.

```cpp
bool operator!=(const hash_multiset <Key, Traits, Allocator>& left, const hash_multiset <Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `hash_multiset`.

`right` Un oggetto di tipo `hash_multiset`.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti hash_multiset non sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Note

Il confronto tra gli oggetti hash_multiset si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_multiset sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// hashset_op_ne.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> hs1, hs2, hs3;
   int i;

   for ( i = 0 ; i < 3 ; i++ )
   {
      hs1.insert ( i );
      hs2.insert ( i * i );
      hs3.insert ( i );
   }

   if ( hs1 != hs2 )
      cout << "The hash_multisets hs1 and hs2 are not equal." << endl;
   else
      cout << "The hash_multisets hs1 and hs2 are equal." << endl;

   if ( hs1 != hs3 )
      cout << "The hash_multisets hs1 and hs3 are not equal." << endl;
   else
      cout << "The hash_multisets hs1 and hs3 are equal." << endl;
}
```

```Output
The hash_multisets hs1 and hs2 are not equal.
The hash_multisets hs1 and hs3 are equal.
```

## <a name="eq_eq_hash_multiset"></a>  operator== (hash_multiset)

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Verifica se l'oggetto hash_multiset a sinistra dell'operatore è uguale all'oggetto hash_multiset a destra.

```cpp
bool operator!==(const hash_multiset <Key, Traits, Allocator>& left, const hash_multiset <Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`left` Un oggetto di tipo `hash_multiset`.

`right` Un oggetto di tipo `hash_multiset`.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto hash_multiset a sinistra dell'operatore è uguale all'oggetto hash_multiset a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Il confronto tra gli oggetti hash_multiset si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_multiset sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// hash_multiset_op_eq.cpp
// compile with: /EHsc
#include <hash_set>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multiset <int> s1, s2, s3;
   int i;

   for ( i = 0 ; i < 3 ; i++ )
   {
      s1.insert ( i );
      s2.insert ( i * i );
      s3.insert ( i );
   }

   if ( s1 == s2 )
      cout << "The hash_multisets s1 and s2 are equal." << endl;
   else
      cout << "The hash_multisets s1 and s2 are not equal." << endl;

   if ( s1 == s3 )
      cout << "The hash_multisets s1 and s2 are equal." << endl;
   else
      cout << "The hash_multisets s1 and s2 are not equal." << endl;
}
```

```Output
The hash_multisets s1 and s2 are not equal.
The hash_multisets s1 and s2 are equal.
```

## <a name="see-also"></a>Vedere anche

[<hash_set>](../standard-library/hash-set.md)<br/>
