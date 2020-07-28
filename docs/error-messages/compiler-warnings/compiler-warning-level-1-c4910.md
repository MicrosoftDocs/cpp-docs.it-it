---
title: Avviso del compilatore (livello 1) C4910
ms.date: 11/04/2016
f1_keywords:
- C4910
helpviewer_keywords:
- C4910
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
ms.openlocfilehash: b17df9d7a9997e5d8ef37a4721de8693968cbbdf
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87214451"
---
# <a name="compiler-warning-level-1-c4910"></a>Avviso del compilatore (livello 1) C4910

' \<identifier> ':' __declspec (dllexport)' è extern ' sono incompatibili in una creazione di istanza esplicita

La creazione di un'istanza del modello esplicita denominata *\<identifier>* viene modificata dalle `__declspec(dllexport)` **`extern`** parole chiave e. Tuttavia, queste parole chiave si escludono reciprocamente. La `__declspec(dllexport)` parola chiave significa creare un'istanza della classe modello, mentre la **`extern`** parola chiave significa che la classe modello non viene creata automaticamente.

## <a name="see-also"></a>Vedere anche

[Creazione di un'istanza esplicita](../../cpp/explicit-instantiation.md)<br/>
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)<br/>
[Regole e limitazioni generali](../../cpp/general-rules-and-limitations.md)
