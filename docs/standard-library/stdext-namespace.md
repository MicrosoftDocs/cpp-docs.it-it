---
title: Spazio dei nomi stdext | Microsoft Docs
ms.custom: ''
ms.date: 09/06/2017
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- stdext
dev_langs:
- C++
helpviewer_keywords:
- _DEFINE_DEPRECATED_HASH_CLASSES symbol
- stdext namespace
ms.assetid: 3e94fc89-0584-424f-bc09-081b73379545
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 302d5b696a3413e36dd76cb931556a3fae7e7615
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33859199"
---
# <a name="stdext-namespace"></a>stdext (spazio dei nomi)

I membri del [ \<hash_map >](../standard-library/hash-map.md) e [ \<hash_set >](../standard-library/hash-set.md) file di intestazione non sono attualmente parte dello standard ISO C++. Di conseguenza, questi tipi e membri sono stati spostati dallo spazio dei nomi `std` a quello `stdext`per restare conformi allo standard C++.

Durante la compilazione con [/Ze](../build/reference/za-ze-disable-language-extensions.md), ovvero l'impostazione predefinita, viene generato un avviso sull'utilizzo di `std` per i membri del \<hash_map > e \<hash_set > file di intestazione. Per disabilitare l'avviso, usare il pragma [warning](../preprocessor/warning.md) .

A che il compilatore generi un errore per l'utilizzo di `std` per i membri del \<hash_map > e \<hash_set > file di intestazione con **/Ze**, aggiungere la seguente direttiva prima `#include` i file di intestazione della libreria Standard C++.

```cpp
#define _DEFINE_DEPRECATED_HASH_CLASSES 0
```

Durante la compilazione con **/Za**, il compilatore genera un errore.

## <a name="see-also"></a>Vedere anche

[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)

