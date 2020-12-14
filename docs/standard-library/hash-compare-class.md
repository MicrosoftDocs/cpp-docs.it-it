---
description: 'Altre informazioni su: hash_compare Class'
title: Classe hash_compare
ms.date: 11/04/2016
f1_keywords:
- hash_set/stdext::hash_compare
helpviewer_keywords:
- hash_compare class
ms.assetid: d502bb59-de57-4585-beb9-00e3a998c0af
ms.openlocfilehash: 510de9901e58e130a53410b688c22324714b9962
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97231940"
---
# <a name="hash_compare-class"></a>Classe hash_compare

Il modello di classe descrive un oggetto che può essere usato da uno qualsiasi dei contenitori associativi hash, ovvero hash_map, hash_multimap, hash_set o hash_multiset, come oggetto parametro di **tratti** predefinito per ordinare ed eseguire l'hashing degli elementi in essi contenuti.

## <a name="syntax"></a>Sintassi

class hash_compare { Traits comp; public: const size_t bucket_size = 4; const size_t min_buckets = 8; hash_compare(); hash_compare(Traits pred); size_t operator()(const Key& key) const; bool operator()( const Key& key1, const Key& key2) const; };

## <a name="remarks"></a>Commenti

Ogni contenitore associativo hash archivia un oggetto di tratti hash di tipo `Traits` (un parametro di modello). È possibile derivare una classe da una specializzazione di hash_compare per eseguire in modo selettivo l'override di determinati oggetti e funzioni oppure è possibile fornire la propria versione di questa classe se vengono soddisfatti determinati requisiti minimi. In particolare, per un oggetto hash_comp di tipo `hash_compare<Key, Traits>` , i contenitori precedenti richiedono il comportamento seguente:

- Per tutti i valori `key` di tipo `Key` , la chiamata **hash_comp**( `key` ) funge da funzione hash, che produce una distribuzione di valori di tipo `size_t` . La funzione fornita da hash_compare restituisce `key`.

- Per qualsiasi valore `key1` di tipo `Key` che precede `key2` nella sequenza e ha lo stesso valore hash (valore restituito dalla funzione hash), **hash_comp**( `key2` , `key1` ) è false. La funzione deve imporre un ordinamento totale sui valori di tipo `Key` . La funzione fornita da hash_compare restituisce *comp*( `key2` , `key1` ) `,` dove *comp* è un oggetto archiviato di tipo `Traits` che è possibile specificare quando si costruisce l'oggetto hash_comp. Per il `Traits` tipo di parametro predefinito, le chiavi di `less<Key>` ordinamento non diminuiscono mai nel valore.

- La costante integer `bucket_size` specifica il numero medio di elementi per "bucket" (voce di tabella hash) che il contenitore non deve superare. Il valore deve essere maggiore di zero. Il valore fornito da hash_compare è 4.

- La costante integer `min_buckets` specifica il numero minimo di bucket da gestire nella tabella hash. Il valore deve essere una potenza di due e maggiore di zero. Il valore fornito da hash_compare è 8.

## <a name="example"></a>Esempio

Vedere gli esempi relativi a [hash_map::hash_map](../standard-library/hash-map-class.md#hash_map), [hash_multimap::hash_multimap](../standard-library/hash-multimap-class.md#hash_multimap), [hash_set::hash_set](../standard-library/hash-set-class.md#hash_set) e [hash_multiset::hash_multiset](../standard-library/hash-multiset-class.md#hash_multiset) per informazioni su come dichiarare e usare hash_compare.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<hash_map>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
