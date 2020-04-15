---
title: Operatori &lt;hash_set&gt;
ms.date: 03/27/2019
f1_keywords:
- hash_set/std::operator!=
- hash_set/std::operator==
ms.assetid: 403d8e4e-0b3f-43fb-bc5a-8100c4f331c5
ms.openlocfilehash: 5830c9e459c0d778e85c5ab5900d39c3190df178
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368580"
---
# <a name="lthash_setgt-operators"></a>Operatori &lt;hash_set&gt;

||||
|-|-|-|
|[operatore!](#op_neq)|[operator!= (hash_multiset)](#op_neq_hash_multiset)|[operatore di comando](#op_eq_eq)|
|[operatore (hash_multiset)](#op_eq_eq_hash_multiset)|

## <a name="operator"></a><a name="op_neq"></a>operatore!

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Verifica se l'oggetto hash_set a sinistra dell'operatore non è uguale all'oggetto hash_set a destra.

```cpp
bool operator!=(const hash_set <Key, Traits, Allocator>& left, const hash_set <Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `hash_set`.

*va bene*\
Oggetto di tipo `hash_set`.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti hash_set non sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Il confronto tra gli oggetti hash_set si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_set sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

I membri dei file di intestazione>[<hash_map>](../standard-library/hash-map.md) e<hash_set [si](../standard-library/hash-set.md) trovano nello spazio dei [nomi stdext](../standard-library/stdext-namespace.md).

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

## <a name="operator"></a><a name="op_eq_eq"></a>operatore di comando

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Verifica se l'oggetto hash_set a sinistra dell'operatore è uguale all'oggetto hash_set a destra.

```cpp
bool operator!==(const hash_set <Key, Traits, Allocator>& left, const hash_set <Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `hash_set`.

*va bene*\
Oggetto di tipo `hash_set`.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto hash_set a sinistra dell'operatore è uguale all'oggetto hash_set a destra; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

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

## <a name="operator-hash_multiset"></a><a name="op_neq_hash_multiset"></a>operatore hash_multiset!

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Verifica se l'oggetto hash_multiset a sinistra dell'operatore non è uguale all'oggetto hash_multiset a destra.

```cpp
bool operator!=(const hash_multiset <Key, Traits, Allocator>& left, const hash_multiset <Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `hash_multiset`.

*va bene*\
Oggetto di tipo `hash_multiset`.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti hash_multiset non sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

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

## <a name="operator-hash_multiset"></a><a name="op_eq_eq_hash_multiset"></a>operatore (hash_multiset)

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Verifica se l'oggetto hash_multiset a sinistra dell'operatore è uguale all'oggetto hash_multiset a destra.

```cpp
bool operator!==(const hash_multiset <Key, Traits, Allocator>& left, const hash_multiset <Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `hash_multiset`.

*va bene*\
Oggetto di tipo `hash_multiset`.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto hash_multiset a sinistra dell'operatore è uguale all'oggetto hash_multiset a destra; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

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

[>hash_set<](../standard-library/hash-set.md)
