---
title: '&lt;set&gt;'
ms.date: 11/04/2016
f1_keywords:
- <set>
helpviewer_keywords:
- set header
ms.assetid: 43cb1ab2-6383-48cf-8bdc-2b96d7203596
ms.openlocfilehash: f5f33cbb179e3d0304f8128066dc04d6c3927d8d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50565373"
---
# <a name="ltsetgt"></a>&lt;set&gt;

Definisce le classi modello del contenitore set e multiset e i rispettivi modelli di supporto.

## <a name="syntax"></a>Sintassi

```cpp
#include <set>

```

## <a name="members"></a>Membri

### <a name="operators"></a>Operatori

|Versione set|Versione multiset|Descrizione|
|-----------------|----------------------|-----------------|
|[operator!= (set)](../standard-library/set-operators.md#op_neq)|[operator!= (multiset)](../standard-library/set-operators.md#op_neq)|Verifica se l'oggetto set o multiset a sinistra dell'operatore non è uguale all'oggetto set o multiset a destra.|
|[operator< (set)](../standard-library/set-operators.md#op_lt)|[operator< (multiset)](../standard-library/set-operators.md#op_lt_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è minore dell'oggetto set o multiset a destra.|
|[operator<= (set)](../standard-library/set-operators.md#op_lt_eq)|[operator\<= (multiset)](../standard-library/set-operators.md#op_lt_eq_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è minore o uguale all'oggetto set o multiset a destra.|
|[operator== (set)](../standard-library/set-operators.md#op_eq_eq)|[operator== (multiset)](../standard-library/set-operators.md#op_eq_eq_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è uguale all'oggetto set o multiset a destra.|
|[operator> (set)](../standard-library/set-operators.md#op_gt)|[operator> (multiset)](../standard-library/set-operators.md#op_gt_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è maggiore dell'oggetto set o multiset a destra.|
|[operator>= (set)](../standard-library/set-operators.md#op_gt_eq)|[operator>= (multiset)](../standard-library/set-operators.md#op_gt_eq_multiset)|Verifica se l'oggetto set o multiset a sinistra dell'operatore è maggiore o uguale all'oggetto set o multiset a destra.|

### <a name="specialized-template-functions"></a>Funzioni di modello specializzate

|Versione set|Versione multiset|Descrizione|
|-----------------|----------------------|-----------------|
|[swap](../standard-library/set-functions.md#swap)|[swap (multiset)](../standard-library/set-functions.md#swap_multiset)|Scambia gli elementi di due set o multiset.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe set](../standard-library/set-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui i valori degli elementi contenuti sono univoci e vengono usati come valori delle chiavi in base ai quali i dati vengono automaticamente ordinati.|
|[Classe multiset](../standard-library/multiset-class.md)|Usata per l'archiviazione e il recupero di dati da una raccolta in cui i valori degli elementi contenuti devono essere univoci e vengono usati come valori delle chiavi in base ai quali i dati vengono automaticamente ordinati.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
