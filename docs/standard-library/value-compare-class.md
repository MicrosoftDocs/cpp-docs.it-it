---
title: Classe value_compare
ms.date: 11/04/2016
f1_keywords:
- value_compare
helpviewer_keywords:
- value_compare class
ms.assetid: c306c5b9-3505-4357-aa6b-216451b951ed
ms.openlocfilehash: 4b7fff1bef091a9d47e6ea4dc0e53e86ce39ad7c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50627435"
---
# <a name="valuecompare-class"></a>Classe value_compare

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

## <a name="remarks"></a>Note

I criteri di confronto forniti dalla classe value_compare tra `value_types` di elementi interi da un oggetto hash_map derivano da un confronto tra le chiavi degli elementi rispettivi mediante la costruzione della classe ausiliaria. L'operatore della funzione membro Usa l'oggetto `comp` di tipo `key_compare` archiviato nell'oggetto funzione fornito da value_compare per confrontare i componenti chiave di ordinamento di due elementi.

Per hash_set e hash_multiset, che sono semplici contenitori in cui i valori delle chiavi sono identici ai valori degli elementi, value_compare equivale a `key_compare`. Questo non si applica per gli oggetti di tipo hash_map e hash_multimap, poiché il valore degli elementi di tipo `pair` non è identico al valore della chiave dell'elemento.

## <a name="example"></a>Esempio

Vedere l'esempio relativo ad [hash_map::value_comp](../standard-library/hash-map-class.md#value_comp) per indicazioni su come dichiarare e usare la classe value_compare.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<hash_map>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[Struct binary_function](../standard-library/binary-function-struct.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
