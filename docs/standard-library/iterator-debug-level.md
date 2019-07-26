---
title: _ITERATOR_DEBUG_LEVEL
ms.date: 11/04/2016
f1_keywords:
- _ITERATOR_DEBUG_LEVEL
helpviewer_keywords:
- _ITERATOR_DEBUG_LEVEL
ms.assetid: 718549cd-a9a9-4ab3-867b-aac00b321e67
ms.openlocfilehash: 7b573127518969accdfdcc4a25a50269dd6aa002
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456394"
---
# <a name="iteratordebuglevel"></a>_ITERATOR_DEBUG_LEVEL

La macro _ITERATOR_DEBUG_LEVEL controlla se [](../standard-library/checked-iterators.md) sono abilitati gli iteratori verificati e il supporto degli iteratori di [debug](../standard-library/debug-iterator-support.md) . Questa macro sostituisce e combina la funzionalità delle macro _SECURE_SCL e _HAS_ITERATOR_DEBUGGING meno recenti.

## <a name="macro-values"></a>Valori della macro

Nella tabella seguente sono riepilogati i valori possibili per la macro _ITERATOR_DEBUG_LEVEL.

|Modalità di compilazione|Valore della macro|Descrizione|
|----------------------|----------------|-----------------|
|**Debug**|||
||0|Disabilita gli iteratori verificati e il debug degli iteratori.|
||1|Abilita gli iteratori verificati e il debug degli iteratori.|
||2 (predefinito)|Abilita il debug degli iteratori. Gli iteratori verificati non sono pertinenti.|
|**Rilascio**|||
||0 (predefinito)|Disabilita gli iteratori verificati.|
||1|Abilita gli iteratori verificati. Il debug degli iteratori non è pertinente.|

In modalità di rilascio, il compilatore genera un errore se si specifica _ITERATOR_DEBUG_LEVEL come 2.

## <a name="remarks"></a>Note

La macro _ITERATOR_DEBUG_LEVEL controlla se [](../standard-library/checked-iterators.md) gli iteratori verificati sono abilitati e in modalità debug, se è abilitato il supporto per gli iteratori di [debug](../standard-library/debug-iterator-support.md) . Se _ITERATOR_DEBUG_LEVEL è definito come 1 o 2, gli iteratori controllati assicurano che i limiti dei contenitori non vengano sovrascritti. Se _ITERATOR_DEBUG_LEVEL è 0, gli iteratori non vengono controllati. Quando _ITERATOR_DEBUG_LEVEL è definito come 1, qualsiasi utilizzo dell'iteratore non sicuro causa un errore di runtime e il programma viene terminato. Quando _ITERATOR_DEBUG_LEVEL è definito come 2, l'utilizzo di un iteratore non sicuro causa un'asserzione e una finestra di dialogo di errore di runtime che consente di interrompere l'esecuzione nel debugger.

Poiché la macro _ITERATOR_DEBUG_LEVEL supporta funzionalità simili alle macro _SECURE_SCL e _HAS_ITERATOR_DEBUGGING, è possibile che si sia certi di quale macro e valore macro utilizzare in una determinata situazione. Per evitare confusione, è consigliabile usare solo la macro _ITERATOR_DEBUG_LEVEL. Questa tabella descrive il valore della macro _ITERATOR_DEBUG_LEVEL equivalente da usare per i diversi valori di _SECURE_SCL e _HAS_ITERATOR_DEBUGGING nel codice esistente.

|**_ITERATOR_DEBUG_LEVEL** |**_SECURE_SCL** |**_HAS_ITERATOR_DEBUGGING**|
|---|---|---|
|0 (impostazione predefinita in modalità di rilascio)|0 (disabilitata)|0 (disabilitata)|
|1|1 (abilitata)|0 (disabilitata)|
|2 (impostazione predefinita in modalità di debug)|(non pertinente)|1 (abilitata in modalità di debug)|

Per informazioni su come disabilitare gli avvisi relativi agli iteratori verificati, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

### <a name="example"></a>Esempio

Per specificare un valore per la macro _ITERATOR_DEBUG_LEVEL, utilizzare un'opzione del compilatore [/d](../build/reference/d-preprocessor-definitions.md) per definirla nella riga di comando oppure `#define` utilizzare prima C++ che le intestazioni della libreria standard siano incluse nei file di origine. Nella riga di comando, ad esempio, per compilare *Sample. cpp* in modalità di debug e usare il supporto degli iteratori di debug, è possibile specificare la definizione della macro _ITERATOR_DEBUG_LEVEL:

`cl /EHsc /Zi /MDd /D_ITERATOR_DEBUG_LEVEL=1 sample.cpp`

In un file di origine specificare la macro prima delle intestazioni della libreria standard che definiscono gli iteratori.

```cpp
// sample.cpp

#define _ITERATOR_DEBUG_LEVEL 1

#include <vector>

// ...
```

## <a name="see-also"></a>Vedere anche

[Iteratori verificati](../standard-library/checked-iterators.md)\
[Supporto del debug degli iteratori](../standard-library/debug-iterator-support.md)\
[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)
