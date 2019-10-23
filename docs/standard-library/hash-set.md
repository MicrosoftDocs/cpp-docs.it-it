---
title: '&lt;hash_set&gt;'
ms.date: 11/04/2016
f1_keywords:
- <hash_set>
- std::<hash_set>
helpviewer_keywords:
- hash_set header
ms.assetid: 6b556967-c808-4869-9b4d-f9e030864435
ms.openlocfilehash: 00ca476816213d38b3c50c64e0978e65ac1a5ea1
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72687943"
---
# <a name="lthash_setgt"></a>&lt;hash_set&gt;

> [!NOTE]
> Questa intestazione è obsoleta. L'alternativa è [<unordered_set>](../standard-library/unordered-set.md).

Definisce i modelli della classe contenitore hash_set e hash_multiset e i rispettivi modelli di supporto.

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

|Class|Descrizione|
|-|-|
|[Classe hash_compare](../standard-library/hash-compare-class.md)|Descrive un oggetto che può essere usato da uno qualsiasi dei contenitori associativi hash, hash_map, hash_multimap, hash_set o hash_multiset, come oggetto predefinito `Traits` parametro per ordinare ed eseguire l'hashing degli elementi in essi contenuti.|
|[Classe hash_set](../standard-library/hash-set-class.md)|Usata per l'archiviazione e il recupero rapido di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi.|
|[Classe hash_multiset](../standard-library/hash-multiset-class.md)|Usata per l'archiviazione e il recupero rapido di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md) (Riferimento per la libreria standard C++)
