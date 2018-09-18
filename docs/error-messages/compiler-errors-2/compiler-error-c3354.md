---
title: Errore del compilatore C3354 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3354
dev_langs:
- C++
helpviewer_keywords:
- C3354
ms.assetid: 185de401-231e-4999-a149-172ee4c69d84
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 40f86702be19259bed7899cdbc5106346d6c6594
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46058536"
---
# <a name="compiler-error-c3354"></a>Errore del compilatore C3354

'function': la funzione usata per creare un delegato non può avere un tipo restituito 'type'

I tipi seguenti non sono validi come tipi restituiti per un `delegate`:

- Puntatore a funzione

- Puntatore a membro

- Puntatore a funzione membro

- Riferimento a funzione

- Riferimento a funzione membro

L'esempio seguente genera l'errore C3354:

```
// C3354_2.cpp
// compile with: /clr /c
using namespace System;
typedef void ( *VoidPfn )();

delegate VoidPfn func(); // C3354
// try the following line instead
// delegate  void func();
```
