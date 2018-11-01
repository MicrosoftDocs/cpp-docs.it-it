---
title: Errore del compilatore di risorse RW2001
ms.date: 11/04/2016
f1_keywords:
- RW2001
helpviewer_keywords:
- RW2001
ms.assetid: 963bdc7d-6ebe-4378-8bbc-47dfcf5d330c
ms.openlocfilehash: 4d298cdd9d96c55f283ce7f0e2ba04dd664941f8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50584613"
---
# <a name="resource-compiler-error-rw2001"></a>Errore del compilatore di risorse RW2001

Direttiva non valida nel file RC pre-elaborato

Il file RC contiene un **#pragma** direttiva.

Usare la **#ifndef** direttiva del preprocessore con la **RC_INVOKED** costante che il compilatore di risorse consente di definire quando elabora un file di inclusione. Sul posto di **#pragma** direttiva in un blocco di codice che non è elaborata quando le **RC_INVOKED** costante è definita. Codice del blocco viene elaborato solo dal compilatore C/C++ e non dal compilatore di risorse. Esempio di codice seguente illustra questa tecnica:

```
#ifndef RC_INVOKED
#pragma pack(2)  // C/C++ only, ignored by Resource Compiler
#endif
```

Il **#pragma** direttiva del preprocessore non ha significato una. File RC. Il **#include** direttiva del preprocessore viene usata spesso in una. File RC per includere un file di intestazione (un file di intestazione personalizzato basato sul progetto o un file di intestazione standard fornito da Microsoft con uno dei suoi prodotti). Alcuni di questi file di inclusione contengono le **#pragma** direttiva. Perché un file di intestazione può includere uno o più altri file di intestazione, il file che contiene la funzione **#pragma** direttiva potrebbe non essere immediatamente evidente.

Il **#ifndef RC_INVOKED** consente il controllo dell'inclusione di file di intestazione nel file di intestazione in base al progetto.