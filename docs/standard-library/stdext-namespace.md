---
description: 'Altre informazioni su: spazio dei nomi stdext'
title: Spazio dei nomi stdext
ms.date: 09/06/2017
f1_keywords:
- stdext
helpviewer_keywords:
- _DEFINE_DEPRECATED_HASH_CLASSES symbol
- stdext namespace
ms.assetid: 3e94fc89-0584-424f-bc09-081b73379545
ms.openlocfilehash: bb81dde22014ec91f7212ce4313c21a8410f30a9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97153785"
---
# <a name="stdext-namespace"></a>Spazio dei nomi stdext

I membri dei [\<hash_map>](../standard-library/hash-map.md) [\<hash_set>](../standard-library/hash-set.md) file di intestazione e non fanno attualmente parte dello standard ISO C++. Di conseguenza, questi tipi e membri sono stati spostati dallo spazio dei nomi `std` a quello `stdext`per restare conformi allo standard C++.

Quando si esegue la compilazione con [/ze](../build/reference/za-ze-disable-language-extensions.md), che è l'impostazione predefinita, il compilatore genera un avviso sull'uso di `std` per i membri dei \<hash_map> file di intestazione e \<hash_set> . Per disabilitare l'avviso, usare il pragma [warning](../preprocessor/warning.md).

Per fare in modo che il compilatore generi un errore per l'uso di `std` per i membri dei \<hash_map> file di \<hash_set> intestazione e con **/ze**, aggiungere la direttiva seguente prima di `#include` tutti i file di intestazione della libreria standard C++.

```cpp
#define _DEFINE_DEPRECATED_HASH_CLASSES 0
```

Quando si esegue la compilazione con **/za**, il compilatore genera un errore.

## <a name="see-also"></a>Vedi anche

[Panoramica della libreria standard C++](../standard-library/cpp-standard-library-overview.md)
