---
description: 'Altre informazioni su: &lt; hash_set&gt;'
title: '&lt;hash_set&gt;'
ms.date: 11/04/2016
f1_keywords:
- <hash_set>
- std::<hash_set>
helpviewer_keywords:
- hash_set header
ms.assetid: 6b556967-c808-4869-9b4d-f9e030864435
ms.openlocfilehash: 353ec0a4f57662380e912893ca60c93025e577af
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97231785"
---
# <a name="lthash_setgt"></a>&lt;hash_set&gt;

> [!NOTE]
> Questa intestazione è obsoleta. L'alternativa è [<unordered_set>](../standard-library/unordered-set.md).

Definisce i modelli di classe del contenitore hash_set e hash_multiset e i relativi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <hash_set>
```

## <a name="remarks"></a>Osservazioni

### <a name="operators"></a>Operatori

|Versione di hash_set|Versione di hash_multiset|Description|
|-----------------------|----------------------------|-----------------|
|[operatore! = (hash_set)](../standard-library/hash-set-operators.md#op_neq)|[operator!= (hash_multiset)](../standard-library/hash-set-operators.md#op_neq)|Verifica se l'oggetto hash_set o hash_multiset a sinistra dell'operatore non è uguale all'oggetto hash_set o hash_multiset a destra.|
|[operator== (hash_set)](../standard-library/hash-set-operators.md#op_eq_eq)|[operatore = = (hash_multiset)](../standard-library/hash-set-operators.md#op_eq_eq)|Verifica se l'oggetto hash_set o hash_multiset a sinistra dell'operatore è uguale all'oggetto hash_set o hash_multiset a destra.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|Versione di hash_set|Versione di hash_multiset|Description|
|-----------------------|----------------------------|-----------------|
|[swap (hash_set)](../standard-library/hash-set-functions.md#swap)|[swap (hash_multiset)](../standard-library/hash-set-functions.md#swap_hash_multiset)|Scambia gli elementi di due oggetti hash_set o hash_multiset.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe hash_compare](../standard-library/hash-compare-class.md)|Descrive un oggetto che può essere usato da uno qualsiasi dei contenitori associativi hash, ovvero hash_map, hash_multimap, hash_set o hash_multiset, come `Traits` oggetto parametro predefinito per ordinare ed eseguire l'hashing degli elementi in essi contenuti.|
|[Classe hash_set](../standard-library/hash-set-class.md)|Usata per l'archiviazione e il recupero rapido di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi.|
|[Classe hash_multiset](../standard-library/hash-multiset-class.md)|Usata per l'archiviazione e il recupero rapido di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi.|

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
