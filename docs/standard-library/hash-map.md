---
description: 'Altre informazioni su: &lt; hash_map&gt;'
title: '&lt;hash_map&gt;'
ms.date: 01/18/2018
f1_keywords:
- <hash_map>
helpviewer_keywords:
- hash_map header
ms.openlocfilehash: 9d8274958a0f6b89892ec2c1c70080cd090d1c03
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98125974"
---
# <a name="lthash_mapgt"></a>&lt;hash_map&gt;

> [!NOTE]
> Questa intestazione è obsoleta. L'alternativa è [\<unordered_map>](unordered-map.md) .

Definisce i modelli di classe del contenitore hash_map e hash_multimap e i relativi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <hash_map>
```

### <a name="operators"></a>Operatori

|Versione hash_map|Versione hash_multimap|Descrizione|
|-----------------------|----------------------------|-----------------|
|[operator!= (hash_map)](hash-map-operators.md#op_neq)|[operatore! = (hash_multimap)](hash-map-operators.md#op_neq_mm)|Verifica se l'oggetto hash_map o hash_multimap a sinistra dell'operatore non è uguale all'oggetto hash_map o hash_multimap a destra.|
|[operatore = = (hash_map)](hash-map-operators.md#op_eq_eq)|[operator== (hash_multimap)](hash-map-operators.md#op_eq_eq_mm)|Verifica se l'oggetto hash_map o hash_multimap a sinistra dell'operatore è uguale all'oggetto hash_map o hash_multimap a destra.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|Versione hash_map|Versione hash_multimap|Descrizione|
|-----------------------|----------------------------|-----------------|
|[swap (hash_map)](hash-map-class.md#swap)|[swap (hash_multimap)](hash-multimap-class.md#swap)|Scambia gli elementi di due oggetti hash_map o hash_multimap.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe hash_compare](hash-compare-class.md)|Descrive un oggetto che può essere usato da uno qualsiasi dei contenitori associativi hash, ovvero hash_map, hash_multimap, hash_set o hash_multiset, come `Traits` oggetto parametro predefinito per ordinare ed eseguire l'hashing degli elementi in essi contenuti.|
|[Classe value_compare](value-compare-class.md)|Fornisce un oggetto funzione in grado di confrontare gli elementi di un oggetto hash_map comparando i valori delle chiavi per determinarne l'ordine relativo nell'oggetto hash_map.|
|[Classe hash_map](hash-map-class.md)|Usata per archiviare e recuperare rapidamente i dati da una raccolta in cui ogni elemento è una coppia che ha una chiave di ordinamento con valore univoco e un valore di dati associato.|
|[Classe hash_multimap](hash-multimap-class.md)|Usata per archiviare e recuperare rapidamente i dati da una raccolta in cui ogni elemento è una coppia con una chiave di ordinamento il cui valore non deve essere univoco e un valore di dati associato.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<hash_map>

**Spazio dei nomi:** stdext

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](cpp-standard-library-reference.md)
