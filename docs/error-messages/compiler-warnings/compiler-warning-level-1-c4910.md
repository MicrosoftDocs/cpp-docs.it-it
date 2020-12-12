---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4910'
title: Avviso del compilatore (livello 1) C4910
ms.date: 11/04/2016
f1_keywords:
- C4910
helpviewer_keywords:
- C4910
ms.assetid: 67963560-fbca-4ca7-93db-06beaf7055f0
ms.openlocfilehash: 4798ba8ae8005239c9cf83e109bdb0f9e4c01928
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97291454"
---
# <a name="compiler-warning-level-1-c4910"></a>Avviso del compilatore (livello 1) C4910

' \<identifier> ':' __declspec (dllexport)' è extern ' sono incompatibili in una creazione di istanza esplicita

La creazione di un'istanza del modello esplicita denominata *\<identifier>* viene modificata dalle `__declspec(dllexport)` **`extern`** parole chiave e. Tuttavia, queste parole chiave si escludono reciprocamente. La `__declspec(dllexport)` parola chiave significa creare un'istanza della classe modello, mentre la **`extern`** parola chiave significa che la classe modello non viene creata automaticamente.

## <a name="see-also"></a>Vedi anche

[Creazione di un'istanza esplicita](../../cpp/explicit-instantiation.md)<br/>
[dllexport, dllimport](../../cpp/dllexport-dllimport.md)<br/>
[Regole e limitazioni generali](../../cpp/general-rules-and-limitations.md)
