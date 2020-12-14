---
description: 'Altre informazioni su: value_compare Class'
title: Classe value_compare
ms.date: 11/04/2016
f1_keywords:
- hash_map/std::value_compare
helpviewer_keywords:
- value_compare class
ms.assetid: c306c5b9-3505-4357-aa6b-216451b951ed
ms.openlocfilehash: d77412b2d979ef4db84621df1b0c94191f3d2a5f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97211713"
---
# <a name="value_compare-class"></a>Classe value_compare

Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto hash_map comparando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto hash_map.

## <a name="syntax"></a>Sintassi

```cpp
class value_compare
    : std::public binary_function<value_type, value_type, bool>
{
public:
    bool operator()(
        const value_type& left,
        const value_type& right) const
    {
        return (comp(left.first, right.first));
    }

protected:
    value_compare(const key_compare& c) : comp (c) { }
    key_compare comp;
};
```

## <a name="remarks"></a>Osservazioni

I criteri di confronto forniti da value_compare tra `value_types` tutti gli elementi contenuti in un hash_map sono indotti da un confronto tra le chiavi dei rispettivi elementi dalla costruzione della classe ausiliaria. L'operatore della funzione membro usa l'oggetto `comp` di tipo `key_compare` archiviato nell'oggetto funzione fornito da value_compare per confrontare i componenti della chiave di ordinamento di due elementi.

Per hash_set e hash_multiset, che sono semplici contenitori in cui i valori delle chiavi sono identici ai valori degli elementi, value_compare equivale a `key_compare`. Questo non si applica per gli oggetti di tipo hash_map e hash_multimap, poiché il valore degli elementi di tipo `pair` non è identico al valore della chiave dell'elemento.

## <a name="example"></a>Esempio

Vedere l'esempio relativo ad [hash_map::value_comp](../standard-library/hash-map-class.md#value_comp) per indicazioni su come dichiarare e usare la classe value_compare.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<hash_map>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedi anche

[Struct binary_function](../standard-library/binary-function-struct.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
