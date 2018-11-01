---
title: _ITERATOR_DEBUG_LEVEL
ms.date: 11/04/2016
f1_keywords:
- _ITERATOR_DEBUG_LEVEL
helpviewer_keywords:
- _ITERATOR_DEBUG_LEVEL
ms.assetid: 718549cd-a9a9-4ab3-867b-aac00b321e67
ms.openlocfilehash: a584fe5a97e251205e750507b27e53e6e7b9a20e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50502817"
---
# <a name="iteratordebuglevel"></a>_ITERATOR_DEBUG_LEVEL

I controlli di macro ITERATOR_DEBUG_LEVEL se [gli iteratori verificati](../standard-library/checked-iterators.md) e [supporto degli iteratori di debug](../standard-library/debug-iterator-support.md) sono abilitati. Questa macro sostituisce e combina la funzionalità delle macro SECURE_SCL e HAS_ITERATOR_DEBUGGING precedenti.

## <a name="macro-values"></a>Valori della macro

Nella tabella seguente sono riepilogati i valori possibili per la macro ITERATOR_DEBUG_LEVEL.

|Modalità di compilazione|Valore della macro|Descrizione|
|----------------------|----------------|-----------------|
|**Debug**|||
||0|Disabilita gli iteratori verificati e il debug degli iteratori.|
||1|Abilita gli iteratori verificati e il debug degli iteratori.|
||2 (predefinito)|Abilita il debug degli iteratori. Gli iteratori verificati non sono pertinenti.|
|**Rilascio**|||
||0 (predefinito)|Disabilita gli iteratori verificati.|
||1|Abilita gli iteratori verificati. Il debug degli iteratori non è pertinente.|

In modalità di rilascio, il compilatore genera un errore se si specifica ITERATOR_DEBUG_LEVEL come 2.

## <a name="remarks"></a>Note

I controlli di macro ITERATOR_DEBUG_LEVEL se [gli iteratori verificati](../standard-library/checked-iterators.md) sono abilitati e, in modalità di Debug, se [supporto degli iteratori di debug](../standard-library/debug-iterator-support.md) è abilitata. Se ITERATOR_DEBUG_LEVEL è definito come 1 o 2, iteratori verificati garantiscono che i limiti dei contenitori non vengano sovrascritte. Se ITERATOR_DEBUG_LEVEL è 0, gli iteratori non vengono controllati. Quando ITERATOR_DEBUG_LEVEL viene definito come 1, qualsiasi uso di iteratore non sicuro causa un errore di runtime e il programma viene terminato. Quando ITERATOR_DEBUG_LEVEL viene definito come 2, iteratore non sicuro usare cause un'asserzione e una finestra di dialogo Errore di runtime che consente di interrompere il debugger.

Poiché la macro ITERATOR_DEBUG_LEVEL supporta una funzionalità simile alle macro SECURE_SCL e HAS_ITERATOR_DEBUGGING precedenti, potrebbe essere incerto la macro e valore da usare in una determinata situazione. Per evitare confusione, è consigliabile usare solo la macro ITERATOR_DEBUG_LEVEL. La tabella seguente descrive il valore della macro ITERATOR_DEBUG_LEVEL equivalente da usare per diversi valori di SECURE_SCL e HAS_ITERATOR_DEBUGGING precedenti nel codice esistente.

|**_ITERATOR_DEBUG_LEVEL** |**_SECURE_SCL** |**_HAS_ITERATOR_DEBUGGING**|
|---|---|---|
|0 (impostazione predefinita in modalità di rilascio)|0 (disabilitata)|0 (disabilitata)|
|1|1 (abilitata)|0 (disabilitata)|
|2 (impostazione predefinita in modalità di debug)|(non pertinente)|1 (abilitata in modalità di debug)|

Per informazioni su come disabilitare gli avvisi relativi agli iteratori verificati, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

### <a name="example"></a>Esempio

Per specificare un valore per la macro ITERATOR_DEBUG_LEVEL, usare una [/D](../build/reference/d-preprocessor-definitions.md) opzione del compilatore per definirla nella riga di comando oppure usare `#define` prima la libreria Standard C++ intestazioni sono incluse nei file di origine. Ad esempio, nella riga di comando, compilare *cpp* in modalità di debug e usare supporto degli iteratori di debug, è possibile specificare la definizione di macro ITERATOR_DEBUG_LEVEL:

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
