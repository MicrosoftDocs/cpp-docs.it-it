---
title: Operatori &lt;hash_map&gt;
ms.date: 11/04/2016
f1_keywords:
- hash_map/std::operator!=
- hash_map/std::operator==
ms.assetid: 24b9bb9e-e983-4060-bce5-2c7c8161ee61
ms.openlocfilehash: ed143349f3afc7a27ad565c1cc929c6ecb5f6ad8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375457"
---
# <a name="lthash_mapgt-operators"></a>Operatori &lt;hash_map&gt;

|||
|-|-|
|[operatore!](#op_neq)|[operatore (multimap)](#op_neq_mm)|
|[operatore di comando](#op_eq_eq)|[operatore (multimap)](#op_eq_eq_mm)|

## <a name="operator"></a><a name="op_neq"></a>operatore!

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](unordered-map-class.md).

Verifica se l'oggetto hash_map a sinistra dell'operatore non è uguale all'oggetto hash_map a destra.

```cpp
bool operator!=(const hash_map <Key, Type, Traits, Allocator>& left, const hash_map <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `hash_map`.

*va bene*\
Oggetto di tipo `hash_map`.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti hash_map non sono uguali; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Il confronto tra gli oggetti hash_map si basa su un confronto a coppie dei rispettivi elementi. Due oggetti hash_map sono uguali se hanno lo stesso numero di elementi e se i rispettivi elementi hanno gli stessi valori. In caso contrario, non sono uguali.

I membri dei<[hash_map>](hash-map.md) e<[hash_set>](hash-set.md) file di intestazione nello spazio dei [nomi stdext](stdext-namespace.md).

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

## <a name="operator"></a><a name="op_eq_eq"></a>operatore di comando

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](unordered-map-class.md).

Verifica se l'oggetto hash_map a sinistra dell'operatore è uguale all'oggetto hash_map a destra.

```cpp
bool operator==(const hash_map <Key, Type, Traits, Allocator>& left, const hash_map <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `hash_map`.

*va bene*\
Oggetto di tipo `hash_map`.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto hash_map a sinistra dell'operatore è uguale all'oggetto hash_map a destra; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

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

## <a name="operator-hash_multimap"></a><a name="op_neq_mm"></a>operator! (hash_multimap)

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](unordered-multimap-class.md).

Verifica se l'oggetto hash_multimap a sinistra dell'operatore non è uguale all'oggetto hash_multimap a destra.

```cpp
bool operator!=(const hash_multimap <Key, Type, Traits, Allocator>& left, const hash_multimap <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `hash_multimap`.

*va bene*\
Oggetto di tipo `hash_multimap`.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti hash_multimap non sono uguali; **false** in caso contrario.

### <a name="remarks"></a>Osservazioni

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

## <a name="operator--hash_multimap"></a><a name="op_eq_eq_mm"></a>operatore (hash_multimap)

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](unordered-multimap-class.md).

Verifica se l'oggetto hash_multimap a sinistra dell'operatore è uguale all'oggetto hash_multimap a destra.

```cpp
bool operator==(const hash_multimap <Key, Type, Traits, Allocator>& left, const hash_multimap <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Oggetto di tipo `hash_multimap`.

*va bene*\
Oggetto di tipo `hash_multimap`.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto hash_multimap a sinistra dell'operatore è uguale all'oggetto hash_multimap a destra; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

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

[>hash_map><](hash-map.md)
