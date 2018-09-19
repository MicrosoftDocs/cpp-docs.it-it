---
title: Errore del compilatore C2537 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2537
dev_langs:
- C++
helpviewer_keywords:
- C2537
ms.assetid: aee81d8e-300e-4a8b-b6c4-b3828398b34e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 65db4fa66d147cc46c1a6013d07048892dfa0800
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46136023"
---
# <a name="compiler-error-c2537"></a>Errore del compilatore C2537

'identificatore': le specifiche di collegamento non valido

Possibili cause:

1. L'identificatore di collegamento non è supportato. È supportata solo l'identificatore di collegamento "C".

1. Collegamento "C" è specificato più di una funzione in un set di funzioni in overload. ma questa operazione non è consentita.

L'esempio seguente genera l'errore C2537:

```
// C2537.cpp
// compile with: /c
extern "c" void func();   // C2537
extern "C" void func2();   // OK
```