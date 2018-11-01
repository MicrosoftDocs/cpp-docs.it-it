---
title: stdext (spazio dei nomi)
ms.date: 09/06/2017
f1_keywords:
- stdext
helpviewer_keywords:
- _DEFINE_DEPRECATED_HASH_CLASSES symbol
- stdext namespace
ms.assetid: 3e94fc89-0584-424f-bc09-081b73379545
ms.openlocfilehash: aeba486393e6b45481108f967f3de8eb73a0adea
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50468484"
---
# <a name="stdext-namespace"></a>stdext (spazio dei nomi)

I membri del [ \<hash_map >](../standard-library/hash-map.md) e [ \<hash_set >](../standard-library/hash-set.md) i file di intestazione non fanno attualmente parte dello standard ISO C++. Di conseguenza, questi tipi e membri sono stati spostati dallo spazio dei nomi `std` a quello `stdext`per restare conformi allo standard C++.

Durante la compilazione con [/Ze](../build/reference/za-ze-disable-language-extensions.md), ovvero l'impostazione predefinita, il compilatore genera un avviso sull'uso delle `std` per i membri del \<hash_map > e \<hash_set > file di intestazione. Per disabilitare l'avviso, usare il pragma [warning](../preprocessor/warning.md) .

Affinché il compilatore generi un errore per l'uso di `std` per i membri del \<hash_map > e \<hash_set > file di intestazione con **/Ze**, aggiungere la direttiva seguente prima di `#include` qualsiasi file di intestazione libreria Standard C++.

```cpp
#define _DEFINE_DEPRECATED_HASH_CLASSES 0
```

Durante la compilazione con **/Za**, il compilatore genera un errore.

## <a name="see-also"></a>Vedere anche

[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)

