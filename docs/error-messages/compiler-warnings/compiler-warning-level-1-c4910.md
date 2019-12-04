---
title: Avviso del compilatore (livello 1) C4910
ms.date: 11/04/2016
f1_keywords:
- C4910
helpviewer_keywords:
- C4910
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
ms.openlocfilehash: a3f29cb895da8c06ed43dd5c9956426f3f6014f1
ms.sourcegitcommit: 8762a3f9b5476b4dee03f0ee8064ea606550986e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/04/2019
ms.locfileid: "74810722"
---
# <a name="compiler-warning-level-1-c4910"></a>Avviso del compilatore (livello 1) C4910

'\<Identifier >':' __declspec (dllexport)' è extern ' sono incompatibili in una creazione di istanza esplicita

La creazione di un'istanza del modello esplicita denominata *\<identificatore >* viene modificata sia dalle parole chiave `__declspec(dllexport)` che `extern`. Tuttavia, queste parole chiave si escludono reciprocamente. La parola chiave `__declspec(dllexport)` indica la creazione di un'istanza della classe di modello, mentre la parola chiave `extern` indica che l'istanza della classe di modello non viene creata automaticamente.

## <a name="see-also"></a>Vedere anche

[Creazione di un'istanza esplicita](../../cpp/explicit-instantiation.md)<br/>
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)<br/>
[Regole e limitazioni generali](../../cpp/general-rules-and-limitations.md)