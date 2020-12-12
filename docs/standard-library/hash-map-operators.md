---
description: 'Altre informazioni su: &lt; &gt; operatori hash_map'
title: Operatori &lt;hash_map&gt;
ms.date: 11/04/2016
f1_keywords:
- hash_map/std::operator!=
- hash_map/std::operator==
ms.assetid: 24b9bb9e-e983-4060-bce5-2c7c8161ee61
ms.openlocfilehash: f3374ee86a989a90add86e85d6a9bf15959e26b4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324122"
---
# <a name="lthash_mapgt-operators"></a>Operatori &lt;hash_map&gt;

[operatore! =](#op_neq)\
[operatore! = (multimap)](#op_neq_mm)\
[operatore = =](#op_eq_eq)\
[operatore = = (multimap)](#op_eq_eq_mm)

## <a name="operator"></a><a name="op_neq"></a> operatore! =

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](unordered-map-class.md).

Verifica se l'oggetto hash_map a sinistra dell'operatore non è uguale all'oggetto hash_map a destra.

```cpp
bool operator!=(const hash_map <Key, Type, Traits, Allocator>& left, const hash_map <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `hash_map`.

*Ok*\
Oggetto di tipo `hash_map`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il hash_maps non è uguale. **`false`** se hash_maps sono uguali.

### <a name="remarks"></a>Commenti

Il confronto tra gli oggetti hash_map si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_map sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

I membri della [<hash_map>](hash-map.md) e [<hash_set ](hash-set.md) i file di intestazione>nello [spazio dei nomi stdext](stdext-namespace.md).

### <a name="example"></a>Esempio

```cpp
// hash_map_op_ne.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1, hm2, hm3;
   int i;
   typedef pair <int, int> Int_Pair;

   for ( i = 0 ; i < 3 ; i++ )
   {
      hm1.insert ( Int_Pair ( i, i ) );
      hm2.insert ( Int_Pair ( i, i * i ) );
      hm3.insert ( Int_Pair ( i, i ) );
   }

   if ( hm1 != hm2 )
      cout << "The hash_maps hm1 and hm2 are not equal." << endl;
   else
      cout << "The hash_maps hm1 and hm2 are equal." << endl;

   if ( hm1 != hm3 )
      cout << "The hash_maps hm1 and hm3 are not equal." << endl;
   else
      cout << "The hash_maps hm1 and hm3 are equal." << endl;
}
```

```Output
The hash_maps hm1 and hm2 are not equal.
The hash_maps hm1 and hm3 are equal.
```

## <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](unordered-map-class.md).

Verifica se l'oggetto hash_map a sinistra dell'operatore è uguale all'oggetto hash_map a destra.

```cpp
bool operator==(const hash_map <Key, Type, Traits, Allocator>& left, const hash_map <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `hash_map`.

*Ok*\
Oggetto di tipo `hash_map`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il hash_map sul lato sinistro dell'operatore è uguale all'hash_map a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il confronto tra gli oggetti hash_map si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_map sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// hash_map_op_eq.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_map <int, int> hm1, hm2, hm3;
   int i;
   typedef pair <int, int> Int_Pair;

   for ( i = 0 ; i < 3 ; i++ )
   {
      hm1.insert ( Int_Pair ( i, i ) );
      hm2.insert ( Int_Pair ( i, i * i ) );
      hm3.insert ( Int_Pair ( i, i ) );
   }

   if ( hm1 == hm2 )
      cout << "The hash_maps hm1 and hm2 are equal." << endl;
   else
      cout << "The hash_maps hm1 and hm2 are not equal." << endl;

   if ( hm1 == hm3 )
      cout << "The hash_maps hm1 and hm3 are equal." << endl;
   else
      cout << "The hash_maps hm1 and hm3 are not equal." << endl;
}
```

```Output
The hash_maps hm1 and hm2 are not equal.
The hash_maps hm1 and hm3 are equal.
```

## <a name="operator-hash_multimap"></a><a name="op_neq_mm"></a> operatore! = (hash_multimap)

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](unordered-multimap-class.md).

Verifica se l'oggetto hash_multimap a sinistra dell'operatore non è uguale all'oggetto hash_multimap a destra.

```cpp
bool operator!=(const hash_multimap <Key, Type, Traits, Allocator>& left, const hash_multimap <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `hash_multimap`.

*Ok*\
Oggetto di tipo `hash_multimap`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il hash_multimaps non è uguale. **`false`** se hash_multimaps sono uguali.

### <a name="remarks"></a>Commenti

Il confronto tra gli oggetti hash_multimap si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_multimap sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_op_ne.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap <int, int> hm1, hm2, hm3;
   int i;
   typedef pair <int, int> Int_Pair;

   for ( i = 0 ; i < 3 ; i++ )
   {
      hm1.insert ( Int_Pair ( i, i ) );
      hm2.insert ( Int_Pair ( i, i * i ) );
      hm3.insert ( Int_Pair ( i, i ) );
   }

   if ( hm1 != hm2 )
      cout << "The hash_multimaps hm1 and hm2 are not equal." << endl;
   else
      cout << "The hash_multimaps hm1 and hm2 are equal." << endl;

   if ( hm1 != hm3 )
      cout << "The hash_multimaps hm1 and hm3 are not equal." << endl;
   else
      cout << "The hash_multimaps hm1 and hm3 are equal." << endl;
}
```

```Output
The hash_multimaps hm1 and hm2 are not equal.
The hash_multimaps hm1 and hm3 are equal.
```

## <a name="operator--hash_multimap"></a><a name="op_eq_eq_mm"></a> operatore = = (hash_multimap)

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](unordered-multimap-class.md).

Verifica se l'oggetto hash_multimap a sinistra dell'operatore è uguale all'oggetto hash_multimap a destra.

```cpp
bool operator==(const hash_multimap <Key, Type, Traits, Allocator>& left, const hash_multimap <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Oggetto di tipo `hash_multimap`.

*Ok*\
Oggetto di tipo `hash_multimap`.

### <a name="return-value"></a>Valore restituito

**`true`** Se il hash_multimap sul lato sinistro dell'operatore è uguale all'hash_multimap a destra dell'operatore; in caso contrario **`false`** ,.

### <a name="remarks"></a>Commenti

Il confronto tra gli oggetti hash_multimap si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_multimap sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// hash_multimap_op_eq.cpp
// compile with: /EHsc
#include <hash_map>
#include <iostream>

int main( )
{
   using namespace std;
   using namespace stdext;
   hash_multimap<int, int> hm1, hm2, hm3;
   int i;
   typedef pair<int, int> Int_Pair;

   for (i = 0; i < 3; i++)
   {
      hm1.insert(Int_Pair(i, i));
      hm2.insert(Int_Pair(i, i*i));
      hm3.insert(Int_Pair(i, i));
   }

   if ( hm1 == hm2 )
      cout << "The hash_multimaps hm1 and hm2 are equal." << endl;
   else
      cout << "The hash_multimaps hm1 and hm2 are not equal." << endl;

   if ( hm1 == hm3 )
      cout << "The hash_multimaps hm1 and hm3 are equal." << endl;
   else
      cout << "The hash_multimaps hm1 and hm3 are not equal." << endl;
}
```

```Output
The hash_multimaps hm1 and hm2 are not equal.
The hash_multimaps hm1 and hm3 are equal.
```

## <a name="see-also"></a>Vedere anche

[<hash_map>](hash-map.md)
