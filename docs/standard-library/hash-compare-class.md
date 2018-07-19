---
title: Classe hash_compare | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- hash_set/stdext::hash_compare
dev_langs:
- C++
helpviewer_keywords:
- hash_compare class
ms.assetid: d502bb59-de57-4585-beb9-00e3a998c0af
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 92dce97754eccc8cd4f618db3ac3e23574fb54ae
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38956582"
---
# <a name="hashcompare-class"></a>Classe hash_compare

La classe modello descrive un oggetto che può essere usato da uno qualsiasi dei contenitori associativi hash, hash_map, hash_multimap, hash_set o hash_multiset, come oggetto del parametro **Traits** predefinito per l'ordinamento e l'hashing degli elementi contenuti.

## <a name="syntax"></a>Sintassi

class hash_compare { Traits comp; public: const size_t bucket_size = 4; const size_t min_buckets = 8; hash_compare(); hash_compare(Traits pred); size_t operator()(const Key& key) const; bool operator()( const Key& key1, const Key& key2) const; };

## <a name="remarks"></a>Note

Ogni contenitore associativo hash archiviato un oggetto di tratti hash di tipo `Traits` (un parametro di modello). È possibile derivare una classe da una specializzazione di hash_compare per eseguire in modo selettivo l'override di determinati oggetti e funzioni oppure è possibile fornire la propria versione di questa classe se vengono soddisfatti determinati requisiti minimi. In particolare, per un oggetto hash_comp di tipo `hash_compare<Key, Traits>`, contenitori precedenti è necessario il comportamento seguente:

- Per tutti i valori `key` typu `Key`, la chiamata **hash_comp**(`key`) funge da funzione hash, che produce una distribuzione di valori di tipo `size_t`. La funzione fornita da hash_compare restituisce `key`.

- Per qualsiasi valore `key1` typu `Key` che precede `key2` nella sequenza e ha lo stesso valore hash (valore restituito dalla funzione hash), **hash_comp**(`key2`, `key1`) è false. La funzione deve imporre un ordinamento su valori di tipo globale `Key`. La funzione fornita da hash_compare restituisce *comp*(`key2`, `key1`) `,` in cui *comp* è un oggetto archiviato di tipo `Traits` che è possibile specificare quando si Costruisce l'oggetto hash_comp. Per impostazione predefinita `Traits` tipo di parametro `less<Key>`, chiavi di ordinamento non diminuisce mai nel valore.

- La costante integer `bucket_size` specifica il numero medio di elementi per "bucket" (voce di tabella hash) che il contenitore non deve superare. Il valore deve essere maggiore di zero. Il valore fornito da hash_compare è 4.

- La costante integer `min_buckets` specifica il numero minimo di bucket da mantenere nella tabella hash. Il valore deve essere una potenza di due e maggiore di zero. Il valore fornito da hash_compare è 8.

## <a name="example"></a>Esempio

Vedere gli esempi relativi a [hash_map::hash_map](../standard-library/hash-map-class.md#hash_map), [hash_multimap::hash_multimap](../standard-library/hash-multimap-class.md#hash_multimap), [hash_set::hash_set](../standard-library/hash-set-class.md#hash_set) e [hash_multiset::hash_multiset](../standard-library/hash-multiset-class.md#hash_multiset) per informazioni su come dichiarare e usare hash_compare.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<hash_map>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
