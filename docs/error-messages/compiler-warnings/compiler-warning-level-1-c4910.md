---
title: Avviso del compilatore (livello 1) C4910
ms.date: 11/04/2016
helpviewer_keywords:
- C4910
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
ms.openlocfilehash: f0d1df0a383b6646d52fc2babc53ca656d49ace6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428197"
---
# <a name="compiler-warning-level-1-c4910"></a>Avviso del compilatore (livello 1) C4910

'\<identificatore >': 'dllexport' e 'extern' sono incompatibili in una creazione esplicita di istanza

La creazione di istanze di modello esplicita denominata  *\<identificatore >* viene modificata da entrambe le `__declspec(dllexport)` e `extern` parole chiave. Tuttavia, queste parole chiave si escludono reciprocamente. La parola chiave `__declspec(dllexport)` indica la creazione di un'istanza della classe di modello, mentre la parola chiave `extern` indica che l'istanza della classe di modello non viene creata automaticamente.

## <a name="see-also"></a>Vedere anche

[Creazione di un'istanza esplicita](../../cpp/explicit-instantiation.md)<br/>
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)<br/>
[Regole e limitazioni generali](../../cpp/general-rules-and-limitations.md)