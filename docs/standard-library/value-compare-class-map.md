---
title: Classe value_compare (&lt;map&gt;)
ms.date: 11/04/2016
f1_keywords:
- std::value_compare
- std.value_compare
- map/std::value_compare
- value_compare
helpviewer_keywords:
- std::value_compare
ms.assetid: ea97c1d0-04b2-4d42-8d96-23522c04cc41
ms.openlocfilehash: 69b484944c9ce30dc28fceacfb082051da31c053
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50472137"
---
# <a name="valuecompare-class-ltmapgt"></a>Classe value_compare (&lt;map&gt;)

Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto map confrontando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto map.

## <a name="syntax"></a>Sintassi

```cpp
class value_compare : public binary_function<value_type, value_type, bool>
{
public:
    bool operator()(const value_type& left, const value_type& right) const;
    value_compare(key_compare pred) : comp(pred);
protected:
    key_compare comp;
};
```

## <a name="remarks"></a>Note

Il criterio di confronto fornito da `value_compare` tra `value_types` di elementi interi in una mappa viene provocato da un confronto tra le chiavi degli elementi rispettivi mediante la costruzione della classe ausiliaria. L'operatore della funzione membro Usa l'oggetto `comp` typu `key_compare` archiviati nell'oggetto funzione fornito da `value_compare` per confrontare i componenti chiave di ordinamento di due elementi.

Per set e multiset, che sono semplici contenitori in cui i valori delle chiavi sono identici ai valori degli elementi, `value_compare` equivale a `key_compare`. Questo non si applica per gli oggetti di tipo map e multimap, poiché il valore degli elementi di tipo `pair` non è identico al valore della chiave dell'elemento.

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [value_comp](../standard-library/map-class.md#value_comp) per indicazioni su come dichiarare e usare `value_compare`.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<map>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Struct binary_function](../standard-library/binary-function-struct.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
