---
description: 'Altre informazioni su: _ITERATOR_DEBUG_LEVEL'
title: _ITERATOR_DEBUG_LEVEL
ms.date: 11/04/2016
f1_keywords:
- _ITERATOR_DEBUG_LEVEL
helpviewer_keywords:
- _ITERATOR_DEBUG_LEVEL
ms.assetid: 718549cd-a9a9-4ab3-867b-aac00b321e67
ms.openlocfilehash: 769b7f3a8eecd3c994ee82b67385f080f0945f33
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306638"
---
# <a name="_iterator_debug_level"></a>_ITERATOR_DEBUG_LEVEL

La _ITERATOR_DEBUG_LEVEL macro controlla se gli [iteratori verificati](../standard-library/checked-iterators.md) e il [supporto degli iteratori di debug](../standard-library/debug-iterator-support.md) sono abilitati. Questa macro sostituisce e combina la funzionalità delle macro _SECURE_SCL e _HAS_ITERATOR_DEBUGGING precedenti.

## <a name="macro-values"></a>Valori della macro

Nella tabella seguente vengono riepilogati i valori possibili per la macro _ITERATOR_DEBUG_LEVEL.

|Modalità di compilazione|Valore della macro|Description|
|----------------------|----------------|-----------------|
|**Eseguire il debug**|||
||0|Disabilita gli iteratori verificati e il debug degli iteratori.|
||1|Abilita gli iteratori verificati e il debug degli iteratori.|
||2 (predefinito)|Abilita il debug degli iteratori. Gli iteratori verificati non sono pertinenti.|
|**Versione**|||
||0 (predefinito)|Disabilita gli iteratori verificati.|
||1|Abilita gli iteratori verificati. Il debug degli iteratori non è pertinente.|

In modalità di rilascio, il compilatore genera un errore se si specifica _ITERATOR_DEBUG_LEVEL come 2.

## <a name="remarks"></a>Commenti

La macro _ITERATOR_DEBUG_LEVEL controlla se gli [iteratori verificati](../standard-library/checked-iterators.md) sono abilitati e in modalità debug, se è abilitato il supporto per gli [iteratori di debug](../standard-library/debug-iterator-support.md) . Se _ITERATOR_DEBUG_LEVEL è definito come 1 o 2, gli iteratori controllati assicurano che i limiti dei contenitori non vengano sovrascritti. Se _ITERATOR_DEBUG_LEVEL è 0, gli iteratori non vengono controllati. Quando _ITERATOR_DEBUG_LEVEL viene definito come 1, qualsiasi utilizzo dell'iteratore non sicuro causa un errore di runtime e il programma viene terminato. Quando _ITERATOR_DEBUG_LEVEL viene definito come 2, l'utilizzo di un iteratore non sicuro causa un'asserzione e una finestra di dialogo di errore di runtime che consente di interrompere l'esecuzione nel debugger.

Poiché la macro _ITERATOR_DEBUG_LEVEL supporta funzionalità simili alle macro _SECURE_SCL e _HAS_ITERATOR_DEBUGGING, è possibile che si sia certi di quale macro e valore macro utilizzare in una determinata situazione. Per evitare confusione, è consigliabile usare solo la macro _ITERATOR_DEBUG_LEVEL. In questa tabella viene descritto il valore della macro _ITERATOR_DEBUG_LEVEL equivalente da utilizzare per i diversi valori di _SECURE_SCL e _HAS_ITERATOR_DEBUGGING nel codice esistente.

|**_ITERATOR_DEBUG_LEVEL** |**_SECURE_SCL** |**_HAS_ITERATOR_DEBUGGING**|
|---|---|---|
|0 (impostazione predefinita in modalità di rilascio)|0 (disabilitata)|0 (disabilitata)|
|1|1 (abilitata)|0 (disabilitata)|
|2 (impostazione predefinita in modalità di debug)|(non pertinente)|1 (abilitata in modalità di debug)|

Per informazioni su come disabilitare gli avvisi relativi agli iteratori verificati, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

### <a name="example"></a>Esempio

Per specificare un valore per la macro _ITERATOR_DEBUG_LEVEL, usare un'opzione del compilatore [/d](../build/reference/d-preprocessor-definitions.md) per definirla nella riga di comando oppure usare `#define` prima che le intestazioni della libreria standard C++ siano incluse nei file di origine. Nella riga di comando, ad esempio, per compilare *Sample. cpp* in modalità di debug e usare il supporto degli iteratori di debug, è possibile specificare la definizione della macro _ITERATOR_DEBUG_LEVEL:

`cl /EHsc /Zi /MDd /D_ITERATOR_DEBUG_LEVEL=1 sample.cpp`

In un file di origine specificare la macro prima delle intestazioni della libreria standard che definiscono gli iteratori.

```cpp
// sample.cpp

#define _ITERATOR_DEBUG_LEVEL 1

#include <vector>

// ...
```

## <a name="see-also"></a>Vedi anche

[Iteratori verificati](../standard-library/checked-iterators.md)\
[Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md)\
[Librerie sicure: libreria standard C++](../standard-library/safe-libraries-cpp-standard-library.md)
