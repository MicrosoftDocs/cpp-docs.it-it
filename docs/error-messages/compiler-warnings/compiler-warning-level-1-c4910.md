---
title: Avviso del compilatore (livello 1) C4910
ms.date: 11/04/2016
helpviewer_keywords:
- C4910
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
ms.openlocfilehash: 49cbbf3369fc4765d93e67e2dca84a4d975560d7
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59027569"
---
# <a name="compiler-warning-level-1-c4910"></a>Avviso del compilatore (livello 1) C4910

'\<identificatore >': 'dllexport' e 'extern' sono incompatibili in una creazione esplicita di istanza

La creazione di istanze di modello esplicita denominata  *\<identificatore >* viene modificata da entrambe le `__declspec(dllexport)` e `extern` parole chiave. Tuttavia, queste parole chiave si escludono reciprocamente. La parola chiave `__declspec(dllexport)` indica la creazione di un'istanza della classe di modello, mentre la parola chiave `extern` indica che l'istanza della classe di modello non viene creata automaticamente.

## <a name="see-also"></a>Vedere anche

[creazione di un'istanza esplicita](../../cpp/explicit-instantiation.md)<br/>
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)<br/>
[Regole e limitazioni generali](../../cpp/general-rules-and-limitations.md)