---
title: Compilatore avviso (livello 1) C4910 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
dev_langs:
- C++
helpviewer_keywords:
- C4910
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5e6db959e467ea449a66feb3ee07c202f4dee002
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46018951"
---
# <a name="compiler-warning-level-1-c4910"></a>Avviso del compilatore (livello 1) C4910

'\<identificatore >': 'dllexport' e 'extern' sono incompatibili in una creazione esplicita di istanza

La creazione di istanze di modello esplicita denominata  *\<identificatore >* viene modificata da entrambe le `__declspec(dllexport)` e `extern` parole chiave. Tuttavia, queste parole chiave si escludono reciprocamente. La parola chiave `__declspec(dllexport)` indica la creazione di un'istanza della classe di modello, mentre la parola chiave `extern` indica che l'istanza della classe di modello non viene creata automaticamente.

## <a name="see-also"></a>Vedere anche

[Creazione di un'istanza esplicita](../../cpp/explicit-instantiation.md)<br/>
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)<br/>
[Regole e limitazioni generali](../../cpp/general-rules-and-limitations.md)