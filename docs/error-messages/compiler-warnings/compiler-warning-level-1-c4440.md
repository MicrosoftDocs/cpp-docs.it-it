---
title: Compilatore avviso (livello 1) C4440 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4440
dev_langs:
- C++
helpviewer_keywords:
- C4440
ms.assetid: 78b9642a-a93e-401e-9d92-372f6451bc5d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e91479ee3e6562338a18ca482c319acb0e1647ca
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46088332"
---
# <a name="compiler-warning-level-1-c4440"></a>Avviso del compilatore (livello 1) C4440

la chiamata a ridefinizione della convenzione da 'calling_convention1' a 'calling_convention2' ignorato

Un tentativo di modificare la convenzione di chiamata è stato ignorato.

L'esempio seguente genera l'errore C4440:

```
// C4440.cpp
// compile with: /W1 /LD /clr
typedef void __clrcall F();
typedef F __cdecl *PFV;   // C4440
```