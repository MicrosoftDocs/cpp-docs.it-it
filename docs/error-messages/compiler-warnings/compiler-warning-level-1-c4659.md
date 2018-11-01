---
title: Avviso del compilatore (livello 1) C4659
ms.date: 11/04/2016
f1_keywords:
- C4659
helpviewer_keywords:
- C4659
ms.assetid: e29ba8db-7917-43f6-8e34-868b752279ae
ms.openlocfilehash: 2aef25e922d8f38ac7103b1b12ccb31c282f0403
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50443467"
---
# <a name="compiler-warning-level-1-c4659"></a>Avviso del compilatore (livello 1) C4659

\#pragma 'pragma': utilizzo del segmento riservato 'segment' ha un comportamento non definito, è necessario utilizzare #pragma comment (linker,...)

L'opzione drectve è stato usato per passare un'opzione del linker. Usare invece il pragma [commento](../../preprocessor/comment-c-cpp.md) per il passaggio di un'opzione del linker.

```
// C4659.cpp
// compile with: /W1 /LD
#pragma code_seg(".drectve")   // C4659
```