---
title: Avviso del compilatore (livello 1) C4684
ms.date: 11/04/2016
f1_keywords:
- C4684
helpviewer_keywords:
- C4684
ms.assetid: e95f1a83-2784-4b05-ae94-12148e056e26
ms.openlocfilehash: 8ba3d75ecb370ac86c9a6ab47f05dd49fc12ba23
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62374404"
---
# <a name="compiler-warning-level-1-c4684"></a>Avviso del compilatore (livello 1) C4684

'attribute': AVVISO IMPORTANTE! attributo può comportare la generazione di codice non valido: utilizzare con cautela

È stato utilizzato un attributo non comune da usare.

L'esempio seguente genera l'errore C4684:

```
// C4684.cpp
// compile with: /W1 /LD
[module(name="xx")]; // C4684 expected
[no_injected_text];
```