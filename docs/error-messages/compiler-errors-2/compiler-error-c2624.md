---
title: Errore del compilatore C2624 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2624
dev_langs:
- C++
helpviewer_keywords:
- C2624
ms.assetid: 32f2ec15-a7cd-4049-a64b-131746d3152b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4db17508d9335439e861cf5489bddfab366dec1a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46109119"
---
# <a name="compiler-error-c2624"></a>Errore del compilatore C2624

le classi locali non possono essere usate per dichiarare le variabili 'extern'

Una classe locale o una struttura non può essere usato per dichiarare `extern` variabili.

L'esempio seguente genera l'errore C2624:

```
// C2624.cpp
int main() {
   struct C {};
   extern C ac;   // C2624
}
```