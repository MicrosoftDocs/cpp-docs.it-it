---
description: 'Altre informazioni su: errore del compilatore di risorse risorse RC2101'
title: Errore del compilatore di risorse RC2101
ms.date: 11/04/2016
f1_keywords:
- RC2101
helpviewer_keywords:
- RC2101
ms.assetid: 580f9d74-162f-41e9-9438-ddbe3457c359
ms.openlocfilehash: bed2490f48f40c94724fa249f7722a290cf8d9b1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164133"
---
# <a name="resource-compiler-error-rc2101"></a>Errore del compilatore di risorse RC2101

Direttiva non valida nel file RC pre-elaborato

Il file del compilatore di risorse contiene una direttiva **#pragma** .

Usare la direttiva per il preprocessore **#ifndef** con la costante RC_INVOKED definita dal compilatore di risorse quando elabora un file di inclusione. Inserire la direttiva **#pragma** all'interno di un blocco di codice che non viene elaborato quando viene definita la costante RC_INVOKED. Il codice nel blocco viene elaborato solo dal compilatore C/C++ e non dal compilatore di risorse. Il codice di esempio seguente illustra questa tecnica:

```
#ifndef RC_INVOKED
#pragma pack(2)  // C/C++ only, ignored by Resource Compiler
#endif
```

La direttiva per il preprocessore **#pragma** non ha significato in un oggetto. File RC. La direttiva per il preprocessore **#include** viene utilizzata di frequente in un oggetto. File RC per includere un file di intestazione (un file di intestazione personalizzato basato su progetto o un file di intestazione standard fornito da Microsoft con uno dei suoi prodotti). Alcuni di questi file di inclusione contengono la direttiva **#pragma** . Poiché un file di intestazione può includere uno o più file di intestazione, il file che contiene la direttiva **#pragma** danneggiata potrebbe non essere immediatamente ovvio.

Il **#ifndef** RC_INVOKED tecnica può controllare l'inclusione di file di intestazione in file di intestazione basati su progetto.
