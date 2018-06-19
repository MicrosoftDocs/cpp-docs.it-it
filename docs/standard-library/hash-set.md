---
title: '&lt;hash_set&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- <hash_set>
- std::<hash_set>
dev_langs:
- C++
helpviewer_keywords:
- hash_set header
ms.assetid: 6b556967-c808-4869-9b4d-f9e030864435
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dccf608b9949ad9e1502b489a237adf60a4d50a6
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33845739"
---
# <a name="lthashsetgt"></a>&lt;hash_set&gt;

> [!NOTE]
> Questa intestazione è obsoleta. L'alternativa è [<unordered_set>](../standard-library/unordered-set.md).

Definisce le classi modello del contenitore hash_set e hash_multiset e i rispettivi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <hash_set>

```

## <a name="remarks"></a>Note

### <a name="operators"></a>Operatori

|Versione di hash_set|Versione di hash_multiset|Descrizione|
|-----------------------|----------------------------|-----------------|
|[operator!= (hash_set)](../standard-library/hash-set-operators.md#op_neq)|[operator!= (hash_multiset)](../standard-library/hash-set-operators.md#op_neq)|Verifica se l'oggetto hash_set o hash_multiset a sinistra dell'operatore non è uguale all'oggetto hash_set o hash_multiset a destra.|
|[operator== (hash_set)](../standard-library/hash-set-operators.md#op_eq_eq)|[operator== (hash_multiset)](../standard-library/hash-set-operators.md#op_eq_eq)|Verifica se l'oggetto hash_set o hash_multiset a sinistra dell'operatore è uguale all'oggetto hash_set o hash_multiset a destra.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|Versione di hash_set|Versione di hash_multiset|Descrizione|
|-----------------------|----------------------------|-----------------|
|[swap (hash_set)](../standard-library/hash-set-functions.md#swap)|[swap (hash_multiset)](../standard-library/hash-set-functions.md#swap_hash_multiset)|Scambia gli elementi di due oggetti hash_set o hash_multiset.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe hash_compare](../standard-library/hash-compare-class.md)|Descrive un oggetto che può essere usato da uno qualsiasi dei contenitori associativi hash, hash_map, hash_multimap, hash_set o hash_multiset, come oggetto del parametro **Traits** predefinito per l'ordinamento e l'hashing degli elementi contenuti.|
|[Classe hash_set](../standard-library/hash-set-class.md)|Usata per l'archiviazione e il recupero rapido di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi.|
|[Classe hash_multiset](../standard-library/hash-multiset-class.md)|Usata per l'archiviazione e il recupero rapido di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
