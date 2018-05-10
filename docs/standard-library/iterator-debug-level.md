---
title: _ITERATOR_DEBUG_LEVEL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- _ITERATOR_DEBUG_LEVEL
dev_langs:
- C++
helpviewer_keywords:
- _ITERATOR_DEBUG_LEVEL
ms.assetid: 718549cd-a9a9-4ab3-867b-aac00b321e67
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7219ed039e77d0857151c54e73a03a0d1f6a3f5e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="iteratordebuglevel"></a>_ITERATOR_DEBUG_LEVEL

La macro `_ITERATOR_DEBUG_LEVEL` controlla se gli [iteratori verificati](../standard-library/checked-iterators.md) e il [supporto del debug degli iteratori](../standard-library/debug-iterator-support.md) sono abilitati. Questa macro sostituisce e combina la funzionalità delle macro `_SECURE_SCL` e `_HAS_ITERATOR_DEBUGGING` precedenti.

## <a name="macro-values"></a>Valori della macro

La tabella seguente contiene un riepilogo dei possibili valori della macro `_ITERATOR_DEBUG_LEVEL`.

|Modalità di compilazione|Valore della macro|Descrizione|
|----------------------|----------------|-----------------|
|**Debug**|||
||0|Disabilita gli iteratori verificati e il debug degli iteratori.|
||1|Abilita gli iteratori verificati e il debug degli iteratori.|
||2 (predefinito)|Abilita il debug degli iteratori. Gli iteratori verificati non sono pertinenti.|
|**Rilascio**|||
||0 (predefinito)|Disabilita gli iteratori verificati.|
||1|Abilita gli iteratori verificati. Il debug degli iteratori non è pertinente.|

In modalità di rilascio il compilatore genera un errore se si specifica `_ITERATOR_DEBUG_LEVEL` come 2.

## <a name="remarks"></a>Note

La macro `_ITERATOR_DEBUG_LEVEL` controlla se gli [iteratori verificati](../standard-library/checked-iterators.md) sono abilitati e, in modalità di debug, se il [supporto del debug degli iteratori](../standard-library/debug-iterator-support.md) è abilitato. Se `_ITERATOR_DEBUG_LEVEL` è definito come 1 o 2, gli iteratori verificati assicurano che i limiti dei contenitori non vengano sovrascritti. Se `_ITERATOR_DEBUG_LEVEL` è 0, gli iteratori non vengono verificati. Quando `_ITERATOR_DEBUG_LEVEL` è definito come 1, l'uso di un iteratore non sicuro causa un errore di runtime e il programma viene terminato. Quando `_ITERATOR_DEBUG_LEVEL` è definito come 2, l'uso di un iteratore non sicuro determina la visualizzazione di un'asserzione e di una finestra di dialogo di errore di runtime che consente di accedere al debugger.

Poiché la macro `_ITERATOR_DEBUG_LEVEL` supporta una funzionalità simile a quella delle macro `_SECURE_SCL` e `_HAS_ITERATOR_DEBUGGING`, può non essere facile identificare con certezza la macro e il relativo valore da usare in una determinata situazione. Per evitare confusione, è consigliabile usare solo la macro `_ITERATOR_DEBUG_LEVEL`. Questa tabella descrive il valore equivalente della macro `_ITERATOR_DEBUG_LEVEL` da usare per diversi valori di `_SECURE_SCL` e `_HAS_ITERATOR_DEBUGGING` nel codice esistente.

|**_ITERATOR_DEBUG_LEVEL** |**_SECURE_SCL** |**_HAS_ITERATOR_DEBUGGING**|
|---|---|---|
|0 (impostazione predefinita in modalità di rilascio)|0 (disabilitata)|0 (disabilitata)|
|1|1 (abilitata)|0 (disabilitata)|
|2 (impostazione predefinita in modalità di debug)|(non pertinente)|1 (abilitata in modalità di debug)|

Per informazioni su come disabilitare gli avvisi relativi agli iteratori verificati, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

### <a name="example"></a>Esempio

Per specificare un valore per la macro `_ITERATOR_DEBUG_LEVEL`, usare un'opzione [/D](../build/reference/d-preprocessor-definitions.md) del compilatore in modo da definire tale valore nella riga di comando oppure usare `#define` prima che le intestazioni della libreria standard C++ siano incluse nei file di origine. Ad esempio, nella riga di comando, per compilare *sample.cpp* in modalità di debug e usare il supporto del debug degli iteratori, è possibile specificare la definizione di macro `_ITERATOR_DEBUG_LEVEL`:

`cl /EHsc /Zi /MDd /D_ITERATOR_DEBUG_LEVEL=1 sample.cpp`

In un file di origine specificare la macro prima delle intestazioni della libreria standard che definiscono gli iteratori.

```cpp
// sample.cpp

#define _ITERATOR_DEBUG_LEVEL 1

#include <vector>

// ...
```

## <a name="see-also"></a>Vedere anche

[Iteratori verificati](../standard-library/checked-iterators.md)<br/>
[Debug Iterator Support](../standard-library/debug-iterator-support.md)<br/>
[Librerie protette: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)<br/>
